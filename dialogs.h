/*
Wfx plugin for working with Linux environment variables

Copyright (C) 2019 Ivanenko Danil (ivanenko.danil@gmail.com)

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
        License as published by the Free Software Foundation; either
        version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
        but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
        Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
        Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
*/

#ifndef ENV_VARS_COMMANDER_DIALOGS_LFM_H
#define ENV_VARS_COMMANDER_DIALOGS_LFM_H

void show_edit_dialog(std::string varName, tExtensionStartupInfo *pExtension);
int show_new_dialog(tExtensionStartupInfo *pExtension);
int show_test_dialog(tExtensionStartupInfo *pExtension);

#endif //ENV_VARS_COMMANDER_DIALOGS_LFM_H
