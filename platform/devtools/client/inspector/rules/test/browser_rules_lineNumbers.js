/* Any copyright is dedicated to the Public Domain.
 http://creativecommons.org/publicdomain/zero/1.0/ */

"use strict";

// Test that editing a rule will update the line numbers of subsequent
// rules in the rule view.

const TESTCASE_URI = URL_ROOT + "doc_ruleLineNumbers.html";

add_task(function* () {
  yield addTab(TESTCASE_URI);
  let { inspector, view } = yield openRuleView();
  yield selectNode("#testid", inspector);

  let bodyRuleEditor = getRuleViewRuleEditor(view, 3);
  let value = getRuleViewLinkTextByIndex(view, 2);
  // Note that this is relative to the <style>.
  is(value.slice(-2), ":6", "initial rule line number is 6");

  let onLocationChanged = once(bodyRuleEditor.rule.domRule, "location-changed");
  yield addProperty(view, 1, "font-size", "23px");
  yield onLocationChanged;

  let newBodyTitle = getRuleViewLinkTextByIndex(view, 2);
  // Note that this is relative to the <style>.
  is(newBodyTitle.slice(-2), ":7", "updated rule line number is 7");
});
