/* Sort.c generated by valac 0.40.11, the Vala compiler
 * generated from Sort.vala, do not modify */

/*
* Copyright © 2019 Alain M. (https://github.com/alainm23/planner)
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*
* Authored by: Alain M. <alain23@protonmail.com>
*/


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <granite.h>
#include <glib/gi18n-lib.h>


#define WIDGETS_POPOVERS_TYPE_SORT (widgets_popovers_sort_get_type ())
#define WIDGETS_POPOVERS_SORT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WIDGETS_POPOVERS_TYPE_SORT, WidgetsPopoversSort))
#define WIDGETS_POPOVERS_SORT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WIDGETS_POPOVERS_TYPE_SORT, WidgetsPopoversSortClass))
#define WIDGETS_POPOVERS_IS_SORT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WIDGETS_POPOVERS_TYPE_SORT))
#define WIDGETS_POPOVERS_IS_SORT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WIDGETS_POPOVERS_TYPE_SORT))
#define WIDGETS_POPOVERS_SORT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WIDGETS_POPOVERS_TYPE_SORT, WidgetsPopoversSortClass))

typedef struct _WidgetsPopoversSort WidgetsPopoversSort;
typedef struct _WidgetsPopoversSortClass WidgetsPopoversSortClass;
typedef struct _WidgetsPopoversSortPrivate WidgetsPopoversSortPrivate;
enum  {
	WIDGETS_POPOVERS_SORT_0_PROPERTY,
	WIDGETS_POPOVERS_SORT_SELECTED_PROPERTY,
	WIDGETS_POPOVERS_SORT_REVERSE_PROPERTY,
	WIDGETS_POPOVERS_SORT_RADIO_01_LABEL_PROPERTY,
	WIDGETS_POPOVERS_SORT_RADIO_02_LABEL_PROPERTY,
	WIDGETS_POPOVERS_SORT_RADIO_03_LABEL_PROPERTY,
	WIDGETS_POPOVERS_SORT_RADIO_04_LABEL_PROPERTY,
	WIDGETS_POPOVERS_SORT_RADIO_05_LABEL_PROPERTY,
	WIDGETS_POPOVERS_SORT_RADIO_01_VISIBLE_PROPERTY,
	WIDGETS_POPOVERS_SORT_RADIO_02_VISIBLE_PROPERTY,
	WIDGETS_POPOVERS_SORT_RADIO_03_VISIBLE_PROPERTY,
	WIDGETS_POPOVERS_SORT_RADIO_04_VISIBLE_PROPERTY,
	WIDGETS_POPOVERS_SORT_RADIO_05_VISIBLE_PROPERTY,
	WIDGETS_POPOVERS_SORT_NUM_PROPERTIES
};
static GParamSpec* widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
enum  {
	WIDGETS_POPOVERS_SORT_MODE_CHANGED_SIGNAL,
	WIDGETS_POPOVERS_SORT_ORDER_REVERSE_SIGNAL,
	WIDGETS_POPOVERS_SORT_NUM_SIGNALS
};
static guint widgets_popovers_sort_signals[WIDGETS_POPOVERS_SORT_NUM_SIGNALS] = {0};

struct _WidgetsPopoversSort {
	GtkPopover parent_instance;
	WidgetsPopoversSortPrivate * priv;
};

struct _WidgetsPopoversSortClass {
	GtkPopoverClass parent_class;
};

struct _WidgetsPopoversSortPrivate {
	GtkRadioButton* radio_01;
	GtkRadioButton* radio_02;
	GtkRadioButton* radio_03;
	GtkRadioButton* radio_04;
	GtkRadioButton* radio_05;
	GtkCheckButton* order_reverse_button;
};


static gpointer widgets_popovers_sort_parent_class = NULL;

GType widgets_popovers_sort_get_type (void) G_GNUC_CONST;
#define WIDGETS_POPOVERS_SORT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), WIDGETS_POPOVERS_TYPE_SORT, WidgetsPopoversSortPrivate))
WidgetsPopoversSort* widgets_popovers_sort_new (GtkWidget* relative);
WidgetsPopoversSort* widgets_popovers_sort_construct (GType object_type,
                                                      GtkWidget* relative);
void widgets_popovers_sort_set_selected (WidgetsPopoversSort* self,
                                         gint value);
void widgets_popovers_sort_set_reverse (WidgetsPopoversSort* self,
                                        gboolean value);
void widgets_popovers_sort_set_radio_01_label (WidgetsPopoversSort* self,
                                               const gchar* value);
void widgets_popovers_sort_set_radio_02_label (WidgetsPopoversSort* self,
                                               const gchar* value);
void widgets_popovers_sort_set_radio_03_label (WidgetsPopoversSort* self,
                                               const gchar* value);
void widgets_popovers_sort_set_radio_04_label (WidgetsPopoversSort* self,
                                               const gchar* value);
void widgets_popovers_sort_set_radio_05_label (WidgetsPopoversSort* self,
                                               const gchar* value);
void widgets_popovers_sort_set_radio_01_visible (WidgetsPopoversSort* self,
                                                 gboolean value);
void widgets_popovers_sort_set_radio_02_visible (WidgetsPopoversSort* self,
                                                 gboolean value);
void widgets_popovers_sort_set_radio_03_visible (WidgetsPopoversSort* self,
                                                 gboolean value);
void widgets_popovers_sort_set_radio_04_visible (WidgetsPopoversSort* self,
                                                 gboolean value);
void widgets_popovers_sort_set_radio_05_visible (WidgetsPopoversSort* self,
                                                 gboolean value);
static GObject * widgets_popovers_sort_constructor (GType type,
                                             guint n_construct_properties,
                                             GObjectConstructParam * construct_properties);
static void _widgets_popovers_sort___lambda115_ (WidgetsPopoversSort* self);
static void __widgets_popovers_sort___lambda115__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                                     gpointer self);
static void _widgets_popovers_sort___lambda116_ (WidgetsPopoversSort* self);
static void __widgets_popovers_sort___lambda116__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                                     gpointer self);
static void _widgets_popovers_sort___lambda117_ (WidgetsPopoversSort* self);
static void __widgets_popovers_sort___lambda117__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                                     gpointer self);
static void _widgets_popovers_sort___lambda118_ (WidgetsPopoversSort* self);
static void __widgets_popovers_sort___lambda118__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                                     gpointer self);
static void _widgets_popovers_sort___lambda119_ (WidgetsPopoversSort* self);
static void __widgets_popovers_sort___lambda119__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                                     gpointer self);
static void _widgets_popovers_sort___lambda120_ (WidgetsPopoversSort* self);
static void __widgets_popovers_sort___lambda120__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                                     gpointer self);
static void widgets_popovers_sort_finalize (GObject * obj);
static void _vala_widgets_popovers_sort_set_property (GObject * object,
                                               guint property_id,
                                               const GValue * value,
                                               GParamSpec * pspec);


WidgetsPopoversSort*
widgets_popovers_sort_construct (GType object_type,
                                 GtkWidget* relative)
{
	WidgetsPopoversSort * self = NULL;
	g_return_val_if_fail (relative != NULL, NULL);
	self = (WidgetsPopoversSort*) g_object_new (object_type, "relative-to", relative, "modal", TRUE, "position", GTK_POS_BOTTOM, NULL);
	return self;
}


WidgetsPopoversSort*
widgets_popovers_sort_new (GtkWidget* relative)
{
	return widgets_popovers_sort_construct (WIDGETS_POPOVERS_TYPE_SORT, relative);
}


void
widgets_popovers_sort_set_selected (WidgetsPopoversSort* self,
                                    gint value)
{
	g_return_if_fail (self != NULL);
	if (value == 0) {
		GtkRadioButton* _tmp0_;
		_tmp0_ = self->priv->radio_01;
		gtk_toggle_button_set_active ((GtkToggleButton*) _tmp0_, TRUE);
	} else {
		if (value == 1) {
			GtkRadioButton* _tmp1_;
			_tmp1_ = self->priv->radio_02;
			gtk_toggle_button_set_active ((GtkToggleButton*) _tmp1_, TRUE);
		} else {
			if (value == 2) {
				GtkRadioButton* _tmp2_;
				_tmp2_ = self->priv->radio_03;
				gtk_toggle_button_set_active ((GtkToggleButton*) _tmp2_, TRUE);
			} else {
				if (value == 3) {
					GtkRadioButton* _tmp3_;
					_tmp3_ = self->priv->radio_04;
					gtk_toggle_button_set_active ((GtkToggleButton*) _tmp3_, TRUE);
				} else {
					GtkRadioButton* _tmp4_;
					_tmp4_ = self->priv->radio_05;
					gtk_toggle_button_set_active ((GtkToggleButton*) _tmp4_, TRUE);
				}
			}
		}
	}
	g_object_notify_by_pspec ((GObject *) self, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_SELECTED_PROPERTY]);
}


void
widgets_popovers_sort_set_reverse (WidgetsPopoversSort* self,
                                   gboolean value)
{
	GtkCheckButton* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->order_reverse_button;
	gtk_toggle_button_set_active ((GtkToggleButton*) _tmp0_, value);
	g_object_notify_by_pspec ((GObject *) self, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_REVERSE_PROPERTY]);
}


void
widgets_popovers_sort_set_radio_01_label (WidgetsPopoversSort* self,
                                          const gchar* value)
{
	GtkRadioButton* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->radio_01;
	gtk_button_set_label ((GtkButton*) _tmp0_, value);
	g_object_notify_by_pspec ((GObject *) self, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_01_LABEL_PROPERTY]);
}


void
widgets_popovers_sort_set_radio_02_label (WidgetsPopoversSort* self,
                                          const gchar* value)
{
	GtkRadioButton* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->radio_02;
	gtk_button_set_label ((GtkButton*) _tmp0_, value);
	g_object_notify_by_pspec ((GObject *) self, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_02_LABEL_PROPERTY]);
}


void
widgets_popovers_sort_set_radio_03_label (WidgetsPopoversSort* self,
                                          const gchar* value)
{
	GtkRadioButton* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->radio_03;
	gtk_button_set_label ((GtkButton*) _tmp0_, value);
	g_object_notify_by_pspec ((GObject *) self, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_03_LABEL_PROPERTY]);
}


void
widgets_popovers_sort_set_radio_04_label (WidgetsPopoversSort* self,
                                          const gchar* value)
{
	GtkRadioButton* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->radio_04;
	gtk_button_set_label ((GtkButton*) _tmp0_, value);
	g_object_notify_by_pspec ((GObject *) self, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_04_LABEL_PROPERTY]);
}


void
widgets_popovers_sort_set_radio_05_label (WidgetsPopoversSort* self,
                                          const gchar* value)
{
	GtkRadioButton* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->radio_05;
	gtk_button_set_label ((GtkButton*) _tmp0_, value);
	g_object_notify_by_pspec ((GObject *) self, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_05_LABEL_PROPERTY]);
}


void
widgets_popovers_sort_set_radio_01_visible (WidgetsPopoversSort* self,
                                            gboolean value)
{
	GtkRadioButton* _tmp0_;
	GtkRadioButton* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->radio_01;
	gtk_widget_set_visible ((GtkWidget*) _tmp0_, value);
	_tmp1_ = self->priv->radio_01;
	gtk_widget_set_no_show_all ((GtkWidget*) _tmp1_, !value);
	g_object_notify_by_pspec ((GObject *) self, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_01_VISIBLE_PROPERTY]);
}


void
widgets_popovers_sort_set_radio_02_visible (WidgetsPopoversSort* self,
                                            gboolean value)
{
	GtkRadioButton* _tmp0_;
	GtkRadioButton* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->radio_02;
	gtk_widget_set_visible ((GtkWidget*) _tmp0_, value);
	_tmp1_ = self->priv->radio_02;
	gtk_widget_set_no_show_all ((GtkWidget*) _tmp1_, !value);
	g_object_notify_by_pspec ((GObject *) self, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_02_VISIBLE_PROPERTY]);
}


void
widgets_popovers_sort_set_radio_03_visible (WidgetsPopoversSort* self,
                                            gboolean value)
{
	GtkRadioButton* _tmp0_;
	GtkRadioButton* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->radio_03;
	gtk_widget_set_visible ((GtkWidget*) _tmp0_, value);
	_tmp1_ = self->priv->radio_03;
	gtk_widget_set_no_show_all ((GtkWidget*) _tmp1_, !value);
	g_object_notify_by_pspec ((GObject *) self, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_03_VISIBLE_PROPERTY]);
}


void
widgets_popovers_sort_set_radio_04_visible (WidgetsPopoversSort* self,
                                            gboolean value)
{
	GtkRadioButton* _tmp0_;
	GtkRadioButton* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->radio_04;
	gtk_widget_set_visible ((GtkWidget*) _tmp0_, value);
	_tmp1_ = self->priv->radio_04;
	gtk_widget_set_no_show_all ((GtkWidget*) _tmp1_, !value);
	g_object_notify_by_pspec ((GObject *) self, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_04_VISIBLE_PROPERTY]);
}


void
widgets_popovers_sort_set_radio_05_visible (WidgetsPopoversSort* self,
                                            gboolean value)
{
	GtkRadioButton* _tmp0_;
	GtkRadioButton* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->radio_05;
	gtk_widget_set_visible ((GtkWidget*) _tmp0_, value);
	_tmp1_ = self->priv->radio_05;
	gtk_widget_set_no_show_all ((GtkWidget*) _tmp1_, !value);
	g_object_notify_by_pspec ((GObject *) self, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_05_VISIBLE_PROPERTY]);
}


static void
_widgets_popovers_sort___lambda115_ (WidgetsPopoversSort* self)
{
	g_signal_emit (self, widgets_popovers_sort_signals[WIDGETS_POPOVERS_SORT_MODE_CHANGED_SIGNAL], 0, 0);
}


static void
__widgets_popovers_sort___lambda115__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                                gpointer self)
{
	_widgets_popovers_sort___lambda115_ ((WidgetsPopoversSort*) self);
}


static void
_widgets_popovers_sort___lambda116_ (WidgetsPopoversSort* self)
{
	g_signal_emit (self, widgets_popovers_sort_signals[WIDGETS_POPOVERS_SORT_MODE_CHANGED_SIGNAL], 0, 1);
}


static void
__widgets_popovers_sort___lambda116__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                                gpointer self)
{
	_widgets_popovers_sort___lambda116_ ((WidgetsPopoversSort*) self);
}


static void
_widgets_popovers_sort___lambda117_ (WidgetsPopoversSort* self)
{
	g_signal_emit (self, widgets_popovers_sort_signals[WIDGETS_POPOVERS_SORT_MODE_CHANGED_SIGNAL], 0, 2);
}


static void
__widgets_popovers_sort___lambda117__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                                gpointer self)
{
	_widgets_popovers_sort___lambda117_ ((WidgetsPopoversSort*) self);
}


static void
_widgets_popovers_sort___lambda118_ (WidgetsPopoversSort* self)
{
	g_signal_emit (self, widgets_popovers_sort_signals[WIDGETS_POPOVERS_SORT_MODE_CHANGED_SIGNAL], 0, 3);
}


static void
__widgets_popovers_sort___lambda118__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                                gpointer self)
{
	_widgets_popovers_sort___lambda118_ ((WidgetsPopoversSort*) self);
}


static void
_widgets_popovers_sort___lambda119_ (WidgetsPopoversSort* self)
{
	g_signal_emit (self, widgets_popovers_sort_signals[WIDGETS_POPOVERS_SORT_MODE_CHANGED_SIGNAL], 0, 4);
}


static void
__widgets_popovers_sort___lambda119__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                                gpointer self)
{
	_widgets_popovers_sort___lambda119_ ((WidgetsPopoversSort*) self);
}


static void
_widgets_popovers_sort___lambda120_ (WidgetsPopoversSort* self)
{
	GtkCheckButton* _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
	_tmp0_ = self->priv->order_reverse_button;
	_tmp1_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp0_);
	_tmp2_ = _tmp1_;
	g_signal_emit (self, widgets_popovers_sort_signals[WIDGETS_POPOVERS_SORT_ORDER_REVERSE_SIGNAL], 0, _tmp2_);
}


static void
__widgets_popovers_sort___lambda120__gtk_toggle_button_toggled (GtkToggleButton* _sender,
                                                                gpointer self)
{
	_widgets_popovers_sort___lambda120_ ((WidgetsPopoversSort*) self);
}


static GObject *
widgets_popovers_sort_constructor (GType type,
                                   guint n_construct_properties,
                                   GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	WidgetsPopoversSort * self;
	GtkStyleContext* _tmp0_;
	GraniteHeaderLabel* sort_label = NULL;
	GraniteHeaderLabel* _tmp1_;
	GraniteHeaderLabel* _tmp2_;
	GraniteHeaderLabel* _tmp3_;
	GtkRadioButton* _tmp4_;
	GtkRadioButton* _tmp5_;
	GtkStyleContext* _tmp6_;
	GtkRadioButton* _tmp7_;
	GtkRadioButton* _tmp8_;
	GtkRadioButton* _tmp9_;
	GtkRadioButton* _tmp10_;
	GtkRadioButton* _tmp11_;
	GtkStyleContext* _tmp12_;
	GtkRadioButton* _tmp13_;
	GtkRadioButton* _tmp14_;
	GtkRadioButton* _tmp15_;
	GtkRadioButton* _tmp16_;
	GtkRadioButton* _tmp17_;
	GtkStyleContext* _tmp18_;
	GtkRadioButton* _tmp19_;
	GtkRadioButton* _tmp20_;
	GtkRadioButton* _tmp21_;
	GtkRadioButton* _tmp22_;
	GtkRadioButton* _tmp23_;
	GtkStyleContext* _tmp24_;
	GtkRadioButton* _tmp25_;
	GtkRadioButton* _tmp26_;
	GtkRadioButton* _tmp27_;
	GtkRadioButton* _tmp28_;
	GtkRadioButton* _tmp29_;
	GtkStyleContext* _tmp30_;
	GtkRadioButton* _tmp31_;
	GtkRadioButton* _tmp32_;
	GtkCheckButton* _tmp33_;
	GtkCheckButton* _tmp34_;
	GtkStyleContext* _tmp35_;
	GtkCheckButton* _tmp36_;
	GtkCheckButton* _tmp37_;
	GtkCheckButton* _tmp38_;
	GtkCheckButton* _tmp39_;
	GtkSeparator* separator = NULL;
	GtkSeparator* _tmp40_;
	GtkSeparator* _tmp41_;
	GtkBox* main_box = NULL;
	GtkBox* _tmp42_;
	GtkBox* _tmp43_;
	GraniteHeaderLabel* _tmp44_;
	GtkBox* _tmp45_;
	GtkRadioButton* _tmp46_;
	GtkBox* _tmp47_;
	GtkRadioButton* _tmp48_;
	GtkBox* _tmp49_;
	GtkRadioButton* _tmp50_;
	GtkBox* _tmp51_;
	GtkRadioButton* _tmp52_;
	GtkBox* _tmp53_;
	GtkRadioButton* _tmp54_;
	GtkBox* _tmp55_;
	GtkSeparator* _tmp56_;
	GtkBox* _tmp57_;
	GtkCheckButton* _tmp58_;
	GtkBox* _tmp59_;
	GtkRadioButton* _tmp60_;
	GtkRadioButton* _tmp61_;
	GtkRadioButton* _tmp62_;
	GtkRadioButton* _tmp63_;
	GtkRadioButton* _tmp64_;
	GtkCheckButton* _tmp65_;
	parent_class = G_OBJECT_CLASS (widgets_popovers_sort_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WIDGETS_POPOVERS_TYPE_SORT, WidgetsPopoversSort);
	_tmp0_ = gtk_widget_get_style_context ((GtkWidget*) self);
	gtk_style_context_add_class (_tmp0_, GTK_STYLE_CLASS_VIEW);
	_tmp1_ = granite_header_label_new (_ ("Sort by"));
	g_object_ref_sink (_tmp1_);
	sort_label = _tmp1_;
	_tmp2_ = sort_label;
	gtk_widget_set_margin_start ((GtkWidget*) _tmp2_, 12);
	_tmp3_ = sort_label;
	gtk_widget_set_margin_top ((GtkWidget*) _tmp3_, 6);
	_tmp4_ = (GtkRadioButton*) gtk_radio_button_new_with_label_from_widget (NULL, "");
	g_object_ref_sink (_tmp4_);
	_g_object_unref0 (self->priv->radio_01);
	self->priv->radio_01 = _tmp4_;
	_tmp5_ = self->priv->radio_01;
	_tmp6_ = gtk_widget_get_style_context ((GtkWidget*) _tmp5_);
	gtk_style_context_add_class (_tmp6_, "h3");
	_tmp7_ = self->priv->radio_01;
	gtk_widget_set_margin_start ((GtkWidget*) _tmp7_, 12);
	_tmp8_ = self->priv->radio_01;
	gtk_widget_set_margin_end ((GtkWidget*) _tmp8_, 12);
	_tmp9_ = self->priv->radio_01;
	_tmp10_ = (GtkRadioButton*) gtk_radio_button_new_with_label_from_widget (_tmp9_, "");
	g_object_ref_sink (_tmp10_);
	_g_object_unref0 (self->priv->radio_02);
	self->priv->radio_02 = _tmp10_;
	_tmp11_ = self->priv->radio_02;
	_tmp12_ = gtk_widget_get_style_context ((GtkWidget*) _tmp11_);
	gtk_style_context_add_class (_tmp12_, "h3");
	_tmp13_ = self->priv->radio_02;
	gtk_widget_set_margin_start ((GtkWidget*) _tmp13_, 12);
	_tmp14_ = self->priv->radio_02;
	gtk_widget_set_margin_end ((GtkWidget*) _tmp14_, 12);
	_tmp15_ = self->priv->radio_01;
	_tmp16_ = (GtkRadioButton*) gtk_radio_button_new_with_label_from_widget (_tmp15_, "");
	g_object_ref_sink (_tmp16_);
	_g_object_unref0 (self->priv->radio_03);
	self->priv->radio_03 = _tmp16_;
	_tmp17_ = self->priv->radio_03;
	_tmp18_ = gtk_widget_get_style_context ((GtkWidget*) _tmp17_);
	gtk_style_context_add_class (_tmp18_, "h3");
	_tmp19_ = self->priv->radio_03;
	gtk_widget_set_margin_start ((GtkWidget*) _tmp19_, 12);
	_tmp20_ = self->priv->radio_03;
	gtk_widget_set_margin_end ((GtkWidget*) _tmp20_, 12);
	_tmp21_ = self->priv->radio_01;
	_tmp22_ = (GtkRadioButton*) gtk_radio_button_new_with_label_from_widget (_tmp21_, "");
	g_object_ref_sink (_tmp22_);
	_g_object_unref0 (self->priv->radio_04);
	self->priv->radio_04 = _tmp22_;
	_tmp23_ = self->priv->radio_04;
	_tmp24_ = gtk_widget_get_style_context ((GtkWidget*) _tmp23_);
	gtk_style_context_add_class (_tmp24_, "h3");
	_tmp25_ = self->priv->radio_04;
	gtk_widget_set_margin_start ((GtkWidget*) _tmp25_, 12);
	_tmp26_ = self->priv->radio_04;
	gtk_widget_set_margin_end ((GtkWidget*) _tmp26_, 12);
	_tmp27_ = self->priv->radio_01;
	_tmp28_ = (GtkRadioButton*) gtk_radio_button_new_with_label_from_widget (_tmp27_, "");
	g_object_ref_sink (_tmp28_);
	_g_object_unref0 (self->priv->radio_05);
	self->priv->radio_05 = _tmp28_;
	_tmp29_ = self->priv->radio_05;
	_tmp30_ = gtk_widget_get_style_context ((GtkWidget*) _tmp29_);
	gtk_style_context_add_class (_tmp30_, "h3");
	_tmp31_ = self->priv->radio_05;
	gtk_widget_set_margin_start ((GtkWidget*) _tmp31_, 12);
	_tmp32_ = self->priv->radio_05;
	gtk_widget_set_margin_end ((GtkWidget*) _tmp32_, 12);
	_tmp33_ = (GtkCheckButton*) gtk_check_button_new_with_label (_ ("Reversed order"));
	g_object_ref_sink (_tmp33_);
	_g_object_unref0 (self->priv->order_reverse_button);
	self->priv->order_reverse_button = _tmp33_;
	_tmp34_ = self->priv->order_reverse_button;
	_tmp35_ = gtk_widget_get_style_context ((GtkWidget*) _tmp34_);
	gtk_style_context_add_class (_tmp35_, "h3");
	_tmp36_ = self->priv->order_reverse_button;
	gtk_widget_set_margin_start ((GtkWidget*) _tmp36_, 12);
	_tmp37_ = self->priv->order_reverse_button;
	gtk_widget_set_margin_top ((GtkWidget*) _tmp37_, 3);
	_tmp38_ = self->priv->order_reverse_button;
	gtk_widget_set_margin_bottom ((GtkWidget*) _tmp38_, 6);
	_tmp39_ = self->priv->order_reverse_button;
	gtk_widget_set_margin_end ((GtkWidget*) _tmp39_, 12);
	_tmp40_ = (GtkSeparator*) gtk_separator_new (GTK_ORIENTATION_HORIZONTAL);
	g_object_ref_sink (_tmp40_);
	separator = _tmp40_;
	_tmp41_ = separator;
	gtk_widget_set_margin_top ((GtkWidget*) _tmp41_, 3);
	_tmp42_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 3);
	g_object_ref_sink (_tmp42_);
	main_box = _tmp42_;
	_tmp43_ = main_box;
	_tmp44_ = sort_label;
	gtk_box_pack_start (_tmp43_, (GtkWidget*) _tmp44_, FALSE, FALSE, (guint) 0);
	_tmp45_ = main_box;
	_tmp46_ = self->priv->radio_01;
	gtk_box_pack_start (_tmp45_, (GtkWidget*) _tmp46_, FALSE, FALSE, (guint) 0);
	_tmp47_ = main_box;
	_tmp48_ = self->priv->radio_02;
	gtk_box_pack_start (_tmp47_, (GtkWidget*) _tmp48_, FALSE, FALSE, (guint) 0);
	_tmp49_ = main_box;
	_tmp50_ = self->priv->radio_03;
	gtk_box_pack_start (_tmp49_, (GtkWidget*) _tmp50_, FALSE, FALSE, (guint) 0);
	_tmp51_ = main_box;
	_tmp52_ = self->priv->radio_04;
	gtk_box_pack_start (_tmp51_, (GtkWidget*) _tmp52_, FALSE, FALSE, (guint) 0);
	_tmp53_ = main_box;
	_tmp54_ = self->priv->radio_05;
	gtk_box_pack_start (_tmp53_, (GtkWidget*) _tmp54_, FALSE, FALSE, (guint) 0);
	_tmp55_ = main_box;
	_tmp56_ = separator;
	gtk_box_pack_start (_tmp55_, (GtkWidget*) _tmp56_, FALSE, FALSE, (guint) 0);
	_tmp57_ = main_box;
	_tmp58_ = self->priv->order_reverse_button;
	gtk_box_pack_start (_tmp57_, (GtkWidget*) _tmp58_, FALSE, FALSE, (guint) 0);
	_tmp59_ = main_box;
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp59_);
	_tmp60_ = self->priv->radio_01;
	g_signal_connect_object ((GtkToggleButton*) _tmp60_, "toggled", (GCallback) __widgets_popovers_sort___lambda115__gtk_toggle_button_toggled, self, 0);
	_tmp61_ = self->priv->radio_02;
	g_signal_connect_object ((GtkToggleButton*) _tmp61_, "toggled", (GCallback) __widgets_popovers_sort___lambda116__gtk_toggle_button_toggled, self, 0);
	_tmp62_ = self->priv->radio_03;
	g_signal_connect_object ((GtkToggleButton*) _tmp62_, "toggled", (GCallback) __widgets_popovers_sort___lambda117__gtk_toggle_button_toggled, self, 0);
	_tmp63_ = self->priv->radio_04;
	g_signal_connect_object ((GtkToggleButton*) _tmp63_, "toggled", (GCallback) __widgets_popovers_sort___lambda118__gtk_toggle_button_toggled, self, 0);
	_tmp64_ = self->priv->radio_05;
	g_signal_connect_object ((GtkToggleButton*) _tmp64_, "toggled", (GCallback) __widgets_popovers_sort___lambda119__gtk_toggle_button_toggled, self, 0);
	_tmp65_ = self->priv->order_reverse_button;
	g_signal_connect_object ((GtkToggleButton*) _tmp65_, "toggled", (GCallback) __widgets_popovers_sort___lambda120__gtk_toggle_button_toggled, self, 0);
	_g_object_unref0 (main_box);
	_g_object_unref0 (separator);
	_g_object_unref0 (sort_label);
	return obj;
}


static void
widgets_popovers_sort_class_init (WidgetsPopoversSortClass * klass)
{
	widgets_popovers_sort_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (WidgetsPopoversSortPrivate));
	G_OBJECT_CLASS (klass)->set_property = _vala_widgets_popovers_sort_set_property;
	G_OBJECT_CLASS (klass)->constructor = widgets_popovers_sort_constructor;
	G_OBJECT_CLASS (klass)->finalize = widgets_popovers_sort_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_POPOVERS_SORT_SELECTED_PROPERTY, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_SELECTED_PROPERTY] = g_param_spec_int ("selected", "selected", "selected", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_POPOVERS_SORT_REVERSE_PROPERTY, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_REVERSE_PROPERTY] = g_param_spec_boolean ("reverse", "reverse", "reverse", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_POPOVERS_SORT_RADIO_01_LABEL_PROPERTY, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_01_LABEL_PROPERTY] = g_param_spec_string ("radio-01-label", "radio-01-label", "radio-01-label", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_POPOVERS_SORT_RADIO_02_LABEL_PROPERTY, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_02_LABEL_PROPERTY] = g_param_spec_string ("radio-02-label", "radio-02-label", "radio-02-label", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_POPOVERS_SORT_RADIO_03_LABEL_PROPERTY, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_03_LABEL_PROPERTY] = g_param_spec_string ("radio-03-label", "radio-03-label", "radio-03-label", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_POPOVERS_SORT_RADIO_04_LABEL_PROPERTY, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_04_LABEL_PROPERTY] = g_param_spec_string ("radio-04-label", "radio-04-label", "radio-04-label", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_POPOVERS_SORT_RADIO_05_LABEL_PROPERTY, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_05_LABEL_PROPERTY] = g_param_spec_string ("radio-05-label", "radio-05-label", "radio-05-label", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_POPOVERS_SORT_RADIO_01_VISIBLE_PROPERTY, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_01_VISIBLE_PROPERTY] = g_param_spec_boolean ("radio-01-visible", "radio-01-visible", "radio-01-visible", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_POPOVERS_SORT_RADIO_02_VISIBLE_PROPERTY, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_02_VISIBLE_PROPERTY] = g_param_spec_boolean ("radio-02-visible", "radio-02-visible", "radio-02-visible", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_POPOVERS_SORT_RADIO_03_VISIBLE_PROPERTY, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_03_VISIBLE_PROPERTY] = g_param_spec_boolean ("radio-03-visible", "radio-03-visible", "radio-03-visible", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_POPOVERS_SORT_RADIO_04_VISIBLE_PROPERTY, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_04_VISIBLE_PROPERTY] = g_param_spec_boolean ("radio-04-visible", "radio-04-visible", "radio-04-visible", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_POPOVERS_SORT_RADIO_05_VISIBLE_PROPERTY, widgets_popovers_sort_properties[WIDGETS_POPOVERS_SORT_RADIO_05_VISIBLE_PROPERTY] = g_param_spec_boolean ("radio-05-visible", "radio-05-visible", "radio-05-visible", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
	widgets_popovers_sort_signals[WIDGETS_POPOVERS_SORT_MODE_CHANGED_SIGNAL] = g_signal_new ("mode-changed", WIDGETS_POPOVERS_TYPE_SORT, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__INT, G_TYPE_NONE, 1, G_TYPE_INT);
	widgets_popovers_sort_signals[WIDGETS_POPOVERS_SORT_ORDER_REVERSE_SIGNAL] = g_signal_new ("order-reverse", WIDGETS_POPOVERS_TYPE_SORT, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__BOOLEAN, G_TYPE_NONE, 1, G_TYPE_BOOLEAN);
}


static void
widgets_popovers_sort_instance_init (WidgetsPopoversSort * self)
{
	self->priv = WIDGETS_POPOVERS_SORT_GET_PRIVATE (self);
}


static void
widgets_popovers_sort_finalize (GObject * obj)
{
	WidgetsPopoversSort * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WIDGETS_POPOVERS_TYPE_SORT, WidgetsPopoversSort);
	_g_object_unref0 (self->priv->radio_01);
	_g_object_unref0 (self->priv->radio_02);
	_g_object_unref0 (self->priv->radio_03);
	_g_object_unref0 (self->priv->radio_04);
	_g_object_unref0 (self->priv->radio_05);
	_g_object_unref0 (self->priv->order_reverse_button);
	G_OBJECT_CLASS (widgets_popovers_sort_parent_class)->finalize (obj);
}


GType
widgets_popovers_sort_get_type (void)
{
	static volatile gsize widgets_popovers_sort_type_id__volatile = 0;
	if (g_once_init_enter (&widgets_popovers_sort_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (WidgetsPopoversSortClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) widgets_popovers_sort_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (WidgetsPopoversSort), 0, (GInstanceInitFunc) widgets_popovers_sort_instance_init, NULL };
		GType widgets_popovers_sort_type_id;
		widgets_popovers_sort_type_id = g_type_register_static (gtk_popover_get_type (), "WidgetsPopoversSort", &g_define_type_info, 0);
		g_once_init_leave (&widgets_popovers_sort_type_id__volatile, widgets_popovers_sort_type_id);
	}
	return widgets_popovers_sort_type_id__volatile;
}


static void
_vala_widgets_popovers_sort_set_property (GObject * object,
                                          guint property_id,
                                          const GValue * value,
                                          GParamSpec * pspec)
{
	WidgetsPopoversSort * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, WIDGETS_POPOVERS_TYPE_SORT, WidgetsPopoversSort);
	switch (property_id) {
		case WIDGETS_POPOVERS_SORT_SELECTED_PROPERTY:
		widgets_popovers_sort_set_selected (self, g_value_get_int (value));
		break;
		case WIDGETS_POPOVERS_SORT_REVERSE_PROPERTY:
		widgets_popovers_sort_set_reverse (self, g_value_get_boolean (value));
		break;
		case WIDGETS_POPOVERS_SORT_RADIO_01_LABEL_PROPERTY:
		widgets_popovers_sort_set_radio_01_label (self, g_value_get_string (value));
		break;
		case WIDGETS_POPOVERS_SORT_RADIO_02_LABEL_PROPERTY:
		widgets_popovers_sort_set_radio_02_label (self, g_value_get_string (value));
		break;
		case WIDGETS_POPOVERS_SORT_RADIO_03_LABEL_PROPERTY:
		widgets_popovers_sort_set_radio_03_label (self, g_value_get_string (value));
		break;
		case WIDGETS_POPOVERS_SORT_RADIO_04_LABEL_PROPERTY:
		widgets_popovers_sort_set_radio_04_label (self, g_value_get_string (value));
		break;
		case WIDGETS_POPOVERS_SORT_RADIO_05_LABEL_PROPERTY:
		widgets_popovers_sort_set_radio_05_label (self, g_value_get_string (value));
		break;
		case WIDGETS_POPOVERS_SORT_RADIO_01_VISIBLE_PROPERTY:
		widgets_popovers_sort_set_radio_01_visible (self, g_value_get_boolean (value));
		break;
		case WIDGETS_POPOVERS_SORT_RADIO_02_VISIBLE_PROPERTY:
		widgets_popovers_sort_set_radio_02_visible (self, g_value_get_boolean (value));
		break;
		case WIDGETS_POPOVERS_SORT_RADIO_03_VISIBLE_PROPERTY:
		widgets_popovers_sort_set_radio_03_visible (self, g_value_get_boolean (value));
		break;
		case WIDGETS_POPOVERS_SORT_RADIO_04_VISIBLE_PROPERTY:
		widgets_popovers_sort_set_radio_04_visible (self, g_value_get_boolean (value));
		break;
		case WIDGETS_POPOVERS_SORT_RADIO_05_VISIBLE_PROPERTY:
		widgets_popovers_sort_set_radio_05_visible (self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


