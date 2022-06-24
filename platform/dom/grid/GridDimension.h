/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef mozilla_dom_GridDimension_h
#define mozilla_dom_GridDimension_h

#include "mozilla/dom/GridBinding.h"
#include "nsWrapperCache.h"

namespace mozilla {

struct ComputedGridTrackInfo;
struct ComputedGridLineInfo;

namespace dom {

class Grid;
class GridLines;
class GridTracks;

class GridDimension : public nsISupports
                    , public nsWrapperCache
{
public:
  explicit GridDimension(Grid* aParent);

protected:
  virtual ~GridDimension();

public:
  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS(GridDimension)

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override;
  Grid* GetParentObject()
  {
    return mParent;
  }

  GridLines* Lines() const;
  GridTracks* Tracks() const;

  void SetTrackInfo(const ComputedGridTrackInfo* aTrackInfo);
  void SetLineInfo(const ComputedGridTrackInfo* aTrackInfo,
                   const ComputedGridLineInfo* aLineInfo,
                   const nsTArray<RefPtr<GridArea>>& aAreas,
                   bool aIsRow);

protected:
  RefPtr<Grid> mParent;
  RefPtr<GridLines> mLines;
  RefPtr<GridTracks> mTracks;
};

} // namespace dom
} // namespace mozilla

#endif /* mozilla_dom_GridDimension_h */
