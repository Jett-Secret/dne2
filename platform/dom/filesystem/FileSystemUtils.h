/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef mozilla_dom_FileSystemUtils_h
#define mozilla_dom_FileSystemUtils_h

#include "nsString.h"

class nsIFile;

namespace mozilla {
namespace dom {

#define FILESYSTEM_DOM_PATH_SEPARATOR_LITERAL "/"
#define FILESYSTEM_DOM_PATH_SEPARATOR_CHAR '/'

/*
 * This class is for error handling.
 * All methods in this class are static.
 */
class FileSystemUtils
{
public:
  /*
   * Return true if aDescendantPath is a descendant of aPath.
   */
  static bool
  IsDescendantPath(const nsAString& aPath,
                   const nsAString& aDescendantPath);

  /**
   * Return true if this is valid DOMPath. It also splits the path in
   * subdirectories and stores them in aParts.
   */
  static bool
  IsValidRelativeDOMPath(const nsAString& aPath,
                         nsTArray<nsString>& aParts);
};

} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_FileSystemUtils_h
