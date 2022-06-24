/* Any copyright is dedicated to the Public Domain.
   http://creativecommons.org/publicdomain/zero/1.0/ */

// Test that we recompute census diffs at the appropriate times.

const {
  diffingState,
  snapshotState,
  censusDisplays,
  viewState,
} = require("devtools/client/memory/constants");
const {
  setCensusDisplayAndRefresh,
} = require("devtools/client/memory/actions/census-display");
const {
  toggleDiffing,
  selectSnapshotForDiffingAndRefresh,
} = require("devtools/client/memory/actions/diffing");
const {
  setFilterStringAndRefresh,
} = require("devtools/client/memory/actions/filter");
const {
  takeSnapshot,
  readSnapshot,
} = require("devtools/client/memory/actions/snapshot");
const { changeView } = require("devtools/client/memory/actions/view");

function run_test() {
  run_next_test();
}

add_task(function* () {
  let front = new StubbedMemoryFront();
  let heapWorker = new HeapAnalysesClient();
  yield front.attach();
  let store = Store();
  const { getState, dispatch } = store;
  dispatch(changeView(viewState.CENSUS));

  yield dispatch(setCensusDisplayAndRefresh(heapWorker,
                                        censusDisplays.allocationStack));
  equal(getState().censusDisplay.inverted, false,
        "not inverted at start");

  equal(getState().diffing, null, "not diffing by default");

  const s1 = yield dispatch(takeSnapshot(front, heapWorker));
  const s2 = yield dispatch(takeSnapshot(front, heapWorker));
  const s3 = yield dispatch(takeSnapshot(front, heapWorker));
  dispatch(readSnapshot(heapWorker, s1));
  dispatch(readSnapshot(heapWorker, s2));
  dispatch(readSnapshot(heapWorker, s3));
  yield waitUntilSnapshotState(store, [snapshotState.READ,
                                       snapshotState.READ,
                                       snapshotState.READ]);

  yield dispatch(toggleDiffing());
  dispatch(selectSnapshotForDiffingAndRefresh(heapWorker,
                                              getState().snapshots[0]));
  dispatch(selectSnapshotForDiffingAndRefresh(heapWorker,
                                              getState().snapshots[1]));
  yield waitUntilState(store,
                       state => state.diffing.state === diffingState.TOOK_DIFF);

  const shouldTriggerRecompute = [
    {
      name: "toggling inversion",
      func: () => dispatch(setCensusDisplayAndRefresh(
        heapWorker,
        censusDisplays.invertedAllocationStack))
    },
    {
      name: "filtering",
      func: () => dispatch(setFilterStringAndRefresh("scr", heapWorker))
    },
    {
      name: "changing displays",
      func: () =>
        dispatch(setCensusDisplayAndRefresh(heapWorker,
                                            censusDisplays.coarseType))
    }
  ];

  for (let { name, func } of shouldTriggerRecompute) {
    dumpn(`Testing that "${name}" triggers a diff recompute`);
    func();

    yield waitUntilState(store,
                         state =>
                           state.diffing.state === diffingState.TAKING_DIFF);
    ok(true, "triggered diff recompute.");

    yield waitUntilState(store,
                         state =>
                           state.diffing.state === diffingState.TOOK_DIFF);
    ok(true, "And then the diff should complete.");
    ok(getState().diffing.census, "And we should have a census.");
    ok(getState().diffing.census.report,
       "And that census should have a report.");
    equal(getState().diffing.census.display,
          getState().censusDisplay,
          "And that census should have the correct display");
    equal(getState().diffing.census.filter, getState().filter,
          "And that census should have the correct filter");
    equal(getState().diffing.census.display.inverted,
          getState().censusDisplay.inverted,
          "And that census should have the correct inversion");
  }

  heapWorker.destroy();
  yield front.detach();
});
