/* -*- Mode: Javascript; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/**
 * This file contains helper functions for showing user prompts.
 * See https://developer.mozilla.org/en-US/docs/Mozilla/Tech/XPCOM/Reference/Interface/nsIPromptService
 */

const { Cu, Cc, Ci } = require("chrome");
const { getLocalizedString } = require("devtools/client/projecteditor/lib/helpers/l10n");
const prompts = Cc["@mozilla.org/embedcomp/prompt-service;1"]
                        .getService(Ci.nsIPromptService);

/**
 * Show a prompt.
 *
 * @param string title
 *               The title to the dialog
 * @param string message
 *               The message to display
 *
 * @return bool
 *         Whether the user has confirmed the action
 */
function confirm(title, message) {
  var result = prompts.confirm(null, title || "Title of this Dialog", message || "Are you sure?");
  return result;
}
exports.confirm = confirm;

