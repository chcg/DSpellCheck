/*
This file is part of DSpellCheck Plug-in for Notepad++
Copyright (C)2013 Sergey Semushin <Predelnik@gmail.com>

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#pragma once

#include "StaticDialog/StaticDialog.h"

class SpellChecker;

class RemoveDics : public StaticDialog
{
public:
  void init (HINSTANCE hInst, HWND Parent) override;
  void DoDialog ();
  void RemoveSelected (SpellChecker *SpellCheckerInstance);
  HWND GetListBox ();
  void UpdateOptions (SpellChecker *SpellCheckerInstance);
  void SetCheckBoxes (BOOL RemoveUserDics, BOOL RemoveSystem);
protected:
  INT_PTR run_dlgProc(UINT message, WPARAM wParam, LPARAM lParam) override;
protected:
  HWND HLangList = nullptr;
  HWND HRemoveUserDics = nullptr;
  HWND HRemoveSystem = nullptr;
};