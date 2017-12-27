/*************************************************************************
  Copyright 2017 Antoine FLORENTIN

  This file is part of Snell-Descartes.

  Snell-Descartes is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Snell-Descartes is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Snell-Descartes.  If not, see <http://www.gnu.org/licenses/>.

*************************************************************************/

#ifndef __CALLBACKS_H__
#define __CALLBACKS_H__

#include <gtk/gtk.h>

#define STR_SIZE	16
#define VITESSE_MIN		10
#define VITESSE_MAX		300000000

void check_arcs_clicked(GtkEditable *editable, gpointer user_data);
void check_reflechi_clicked(GtkEditable *editable, gpointer user_data);
void check_refracte_clicked(GtkEditable *editable, gpointer user_data);

gboolean barre_incident_change_value(GtkRange *range, GtkScrollType scroll, gdouble value, gpointer user_data);
void entree_incident_changed(GtkEditable *editable, gpointer user_data);

gboolean barre_V1_change_value(GtkRange *range, GtkScrollType scroll, gdouble value, gpointer user_data);
void entree_V1_changed(GtkEditable *editable, gpointer user_data);

gboolean barre_V2_change_value(GtkRange *range, GtkScrollType scroll, gdouble value, gpointer user_data);
void entree_V2_changed(GtkEditable *editable, gpointer user_data);


void ErreurNumerique( gpointer user_data );
void ErreurValeur( gpointer user_data );

#endif