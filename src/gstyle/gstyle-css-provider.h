/* gstyle-css-provider.h
 *
 * Copyright 2016 sebastien lafargue <slafargue@gnome.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include <glib-object.h>
#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GSTYLE_TYPE_CSS_PROVIDER (gstyle_css_provider_get_type())

G_DECLARE_FINAL_TYPE (GstyleCssProvider, gstyle_css_provider, GSTYLE, CSS_PROVIDER, GtkCssProvider)

GstyleCssProvider      *gstyle_css_provider_init_default       (GdkScreen *screen);
GstyleCssProvider      *gstyle_css_provider_new                (void);

G_END_DECLS
