/********************************************************************** 
 Freeciv - Copyright (C) 1996 - A Kjeldberg, L Gregersen, P Unold
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
***********************************************************************/
#ifndef FC__REPODLGS_H
#define FC__REPODLGS_H

#include <X11/Intrinsic.h>

#include "repodlgs_g.h"

void popdown_science_dialog(void);
void popdown_economy_report_dialog(void);
void popdown_activeunits_report_dialog(void);
void popdown_settable_options_dialog(void);

void activeunits_msg_close(Widget w);
void sciencereport_msg_close(Widget w);
void economyreport_msg_close(Widget w);
void settable_options_msg_close(Widget w);
const char *get_centered_report_title(const char *report_name);

#endif  /* FC__REPODLGS_H */
