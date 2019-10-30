/* RadioSearchRow.c generated by valac 0.40.11, the Vala compiler
 * generated from RadioSearchRow.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <pango/pango.h>
#include <gio/gio.h>
#include <gdk/gdk.h>


#define WIDGETS_TYPE_RADIO_SEARCH_ROW (widgets_radio_search_row_get_type ())
#define WIDGETS_RADIO_SEARCH_ROW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WIDGETS_TYPE_RADIO_SEARCH_ROW, WidgetsRadioSearchRow))
#define WIDGETS_RADIO_SEARCH_ROW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WIDGETS_TYPE_RADIO_SEARCH_ROW, WidgetsRadioSearchRowClass))
#define WIDGETS_IS_RADIO_SEARCH_ROW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WIDGETS_TYPE_RADIO_SEARCH_ROW))
#define WIDGETS_IS_RADIO_SEARCH_ROW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WIDGETS_TYPE_RADIO_SEARCH_ROW))
#define WIDGETS_RADIO_SEARCH_ROW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WIDGETS_TYPE_RADIO_SEARCH_ROW, WidgetsRadioSearchRowClass))

typedef struct _WidgetsRadioSearchRow WidgetsRadioSearchRow;
typedef struct _WidgetsRadioSearchRowClass WidgetsRadioSearchRowClass;
typedef struct _WidgetsRadioSearchRowPrivate WidgetsRadioSearchRowPrivate;

#define OBJECTS_TYPE_RADIO (objects_radio_get_type ())
#define OBJECTS_RADIO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), OBJECTS_TYPE_RADIO, ObjectsRadio))
#define OBJECTS_RADIO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), OBJECTS_TYPE_RADIO, ObjectsRadioClass))
#define OBJECTS_IS_RADIO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), OBJECTS_TYPE_RADIO))
#define OBJECTS_IS_RADIO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), OBJECTS_TYPE_RADIO))
#define OBJECTS_RADIO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), OBJECTS_TYPE_RADIO, ObjectsRadioClass))

typedef struct _ObjectsRadio ObjectsRadio;
typedef struct _ObjectsRadioClass ObjectsRadioClass;

#define WIDGETS_TYPE_COVER (widgets_cover_get_type ())
#define WIDGETS_COVER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WIDGETS_TYPE_COVER, WidgetsCover))
#define WIDGETS_COVER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WIDGETS_TYPE_COVER, WidgetsCoverClass))
#define WIDGETS_IS_COVER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WIDGETS_TYPE_COVER))
#define WIDGETS_IS_COVER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WIDGETS_TYPE_COVER))
#define WIDGETS_COVER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WIDGETS_TYPE_COVER, WidgetsCoverClass))

typedef struct _WidgetsCover WidgetsCover;
typedef struct _WidgetsCoverClass WidgetsCoverClass;
enum  {
	WIDGETS_RADIO_SEARCH_ROW_0_PROPERTY,
	WIDGETS_RADIO_SEARCH_ROW_RADIO_PROPERTY,
	WIDGETS_RADIO_SEARCH_ROW_NUM_PROPERTIES
};
static GParamSpec* widgets_radio_search_row_properties[WIDGETS_RADIO_SEARCH_ROW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block31Data Block31Data;
#define _g_free0(var) (var = (g_free (var), NULL))

#define SERVICES_TYPE_DATABASE (services_database_get_type ())
#define SERVICES_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SERVICES_TYPE_DATABASE, ServicesDatabase))
#define SERVICES_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SERVICES_TYPE_DATABASE, ServicesDatabaseClass))
#define SERVICES_IS_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SERVICES_TYPE_DATABASE))
#define SERVICES_IS_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SERVICES_TYPE_DATABASE))
#define SERVICES_DATABASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SERVICES_TYPE_DATABASE, ServicesDatabaseClass))

typedef struct _ServicesDatabase ServicesDatabase;
typedef struct _ServicesDatabaseClass ServicesDatabaseClass;
enum  {
	WIDGETS_RADIO_SEARCH_ROW_SEND_NOTIFICATION_ERROR_SIGNAL,
	WIDGETS_RADIO_SEARCH_ROW_NUM_SIGNALS
};
static guint widgets_radio_search_row_signals[WIDGETS_RADIO_SEARCH_ROW_NUM_SIGNALS] = {0};

struct _WidgetsRadioSearchRow {
	GtkListBoxRow parent_instance;
	WidgetsRadioSearchRowPrivate * priv;
};

struct _WidgetsRadioSearchRowClass {
	GtkListBoxRowClass parent_class;
};

struct _WidgetsRadioSearchRowPrivate {
	ObjectsRadio* _radio;
	GtkLabel* name_label;
	GtkLabel* secondary_label;
	WidgetsCover* image_cover;
};

struct _Block31Data {
	int _ref_count_;
	WidgetsRadioSearchRow* self;
	GtkButton* add_button;
	GtkRevealer* add_revealer;
};


static gpointer widgets_radio_search_row_parent_class = NULL;
extern ServicesDatabase* byte_database;

GType widgets_radio_search_row_get_type (void) G_GNUC_CONST;
GType objects_radio_get_type (void) G_GNUC_CONST;
GType widgets_cover_get_type (void) G_GNUC_CONST;
#define WIDGETS_RADIO_SEARCH_ROW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), WIDGETS_TYPE_RADIO_SEARCH_ROW, WidgetsRadioSearchRowPrivate))
WidgetsRadioSearchRow* widgets_radio_search_row_new (ObjectsRadio* radio);
WidgetsRadioSearchRow* widgets_radio_search_row_construct (GType object_type,
                                                           ObjectsRadio* radio);
ObjectsRadio* widgets_radio_search_row_get_radio (WidgetsRadioSearchRow* self);
static void widgets_radio_search_row_set_radio (WidgetsRadioSearchRow* self,
                                         ObjectsRadio* value);
static GObject * widgets_radio_search_row_constructor (GType type,
                                                guint n_construct_properties,
                                                GObjectConstructParam * construct_properties);
static Block31Data* block31_data_ref (Block31Data* _data31_);
static void block31_data_unref (void * _userdata_);
const gchar* objects_radio_get_name (ObjectsRadio* self);
const gchar* objects_radio_get_votes (ObjectsRadio* self);
const gchar* objects_radio_get_country (ObjectsRadio* self);
const gchar* objects_radio_get_favicon (ObjectsRadio* self);
WidgetsCover* widgets_cover_new_from_url_async (const gchar* uri,
                                                gint pixel_size,
                                                gboolean preserve_aspect_ratio,
                                                const gchar* type,
                                                GCancellable* cancellable);
WidgetsCover* widgets_cover_construct_from_url_async (GType object_type,
                                                      const gchar* uri,
                                                      gint pixel_size,
                                                      gboolean preserve_aspect_ratio,
                                                      const gchar* type,
                                                      GCancellable* cancellable);
static void _widgets_radio_search_row___lambda295_ (WidgetsRadioSearchRow* self);
GType services_database_get_type (void) G_GNUC_CONST;
gboolean services_database_radio_exists (ServicesDatabase* self,
                                         const gchar* url);
const gchar* objects_radio_get_url (ObjectsRadio* self);
void services_database_insert_radio (ServicesDatabase* self,
                                     ObjectsRadio* radio);
static void __widgets_radio_search_row___lambda295__gtk_button_clicked (GtkButton* _sender,
                                                                 gpointer self);
static gboolean _widgets_radio_search_row___lambda296_ (Block31Data* _data31_,
                                                 GdkEventCrossing* event);
static gboolean __widgets_radio_search_row___lambda296__gtk_widget_enter_notify_event (GtkWidget* _sender,
                                                                                GdkEventCrossing* event,
                                                                                gpointer self);
static gboolean _widgets_radio_search_row___lambda297_ (Block31Data* _data31_,
                                                 GdkEventCrossing* event);
static gboolean __widgets_radio_search_row___lambda297__gtk_widget_leave_notify_event (GtkWidget* _sender,
                                                                                GdkEventCrossing* event,
                                                                                gpointer self);
static void widgets_radio_search_row_finalize (GObject * obj);
static void _vala_widgets_radio_search_row_get_property (GObject * object,
                                                  guint property_id,
                                                  GValue * value,
                                                  GParamSpec * pspec);
static void _vala_widgets_radio_search_row_set_property (GObject * object,
                                                  guint property_id,
                                                  const GValue * value,
                                                  GParamSpec * pspec);


WidgetsRadioSearchRow*
widgets_radio_search_row_construct (GType object_type,
                                    ObjectsRadio* radio)
{
	WidgetsRadioSearchRow * self = NULL;
	g_return_val_if_fail (radio != NULL, NULL);
	self = (WidgetsRadioSearchRow*) g_object_new (object_type, "radio", radio, NULL);
	return self;
}


WidgetsRadioSearchRow*
widgets_radio_search_row_new (ObjectsRadio* radio)
{
	return widgets_radio_search_row_construct (WIDGETS_TYPE_RADIO_SEARCH_ROW, radio);
}


ObjectsRadio*
widgets_radio_search_row_get_radio (WidgetsRadioSearchRow* self)
{
	ObjectsRadio* result;
	ObjectsRadio* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_radio;
	result = _tmp0_;
	return result;
}


static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}


static void
widgets_radio_search_row_set_radio (WidgetsRadioSearchRow* self,
                                    ObjectsRadio* value)
{
	g_return_if_fail (self != NULL);
	if (widgets_radio_search_row_get_radio (self) != value) {
		ObjectsRadio* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_radio);
		self->priv->_radio = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, widgets_radio_search_row_properties[WIDGETS_RADIO_SEARCH_ROW_RADIO_PROPERTY]);
	}
}


static Block31Data*
block31_data_ref (Block31Data* _data31_)
{
	g_atomic_int_inc (&_data31_->_ref_count_);
	return _data31_;
}


static void
block31_data_unref (void * _userdata_)
{
	Block31Data* _data31_;
	_data31_ = (Block31Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data31_->_ref_count_)) {
		WidgetsRadioSearchRow* self;
		self = _data31_->self;
		_g_object_unref0 (_data31_->add_revealer);
		_g_object_unref0 (_data31_->add_button);
		_g_object_unref0 (self);
		g_slice_free (Block31Data, _data31_);
	}
}


static void
_widgets_radio_search_row___lambda295_ (WidgetsRadioSearchRow* self)
{
	ServicesDatabase* _tmp0_;
	ObjectsRadio* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	_tmp0_ = byte_database;
	_tmp1_ = self->priv->_radio;
	_tmp2_ = objects_radio_get_url (_tmp1_);
	_tmp3_ = _tmp2_;
	if (services_database_radio_exists (_tmp0_, _tmp3_)) {
		g_signal_emit (self, widgets_radio_search_row_signals[WIDGETS_RADIO_SEARCH_ROW_SEND_NOTIFICATION_ERROR_SIGNAL], 0);
	} else {
		ServicesDatabase* _tmp4_;
		ObjectsRadio* _tmp5_;
		_tmp4_ = byte_database;
		_tmp5_ = self->priv->_radio;
		services_database_insert_radio (_tmp4_, _tmp5_);
	}
}


static void
__widgets_radio_search_row___lambda295__gtk_button_clicked (GtkButton* _sender,
                                                            gpointer self)
{
	_widgets_radio_search_row___lambda295_ ((WidgetsRadioSearchRow*) self);
}


static gboolean
_widgets_radio_search_row___lambda296_ (Block31Data* _data31_,
                                        GdkEventCrossing* event)
{
	WidgetsRadioSearchRow* self;
	gboolean result = FALSE;
	GtkRevealer* _tmp0_;
	GtkButton* _tmp1_;
	GtkStyleContext* _tmp2_;
	self = _data31_->self;
	g_return_val_if_fail (event != NULL, FALSE);
	_tmp0_ = _data31_->add_revealer;
	gtk_revealer_set_reveal_child (_tmp0_, TRUE);
	_tmp1_ = _data31_->add_button;
	_tmp2_ = gtk_widget_get_style_context ((GtkWidget*) _tmp1_);
	gtk_style_context_add_class (_tmp2_, "closed");
	result = FALSE;
	return result;
}


static gboolean
__widgets_radio_search_row___lambda296__gtk_widget_enter_notify_event (GtkWidget* _sender,
                                                                       GdkEventCrossing* event,
                                                                       gpointer self)
{
	gboolean result;
	result = _widgets_radio_search_row___lambda296_ (self, event);
	return result;
}


static gboolean
_widgets_radio_search_row___lambda297_ (Block31Data* _data31_,
                                        GdkEventCrossing* event)
{
	WidgetsRadioSearchRow* self;
	gboolean result = FALSE;
	GdkNotifyType _tmp0_;
	GtkRevealer* _tmp1_;
	GtkButton* _tmp2_;
	GtkStyleContext* _tmp3_;
	self = _data31_->self;
	g_return_val_if_fail (event != NULL, FALSE);
	_tmp0_ = event->detail;
	if (_tmp0_ == GDK_NOTIFY_INFERIOR) {
		result = FALSE;
		return result;
	}
	_tmp1_ = _data31_->add_revealer;
	gtk_revealer_set_reveal_child (_tmp1_, FALSE);
	_tmp2_ = _data31_->add_button;
	_tmp3_ = gtk_widget_get_style_context ((GtkWidget*) _tmp2_);
	gtk_style_context_remove_class (_tmp3_, "closed");
	result = FALSE;
	return result;
}


static gboolean
__widgets_radio_search_row___lambda297__gtk_widget_leave_notify_event (GtkWidget* _sender,
                                                                       GdkEventCrossing* event,
                                                                       gpointer self)
{
	gboolean result;
	result = _widgets_radio_search_row___lambda297_ (self, event);
	return result;
}


static GObject *
widgets_radio_search_row_constructor (GType type,
                                      guint n_construct_properties,
                                      GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	WidgetsRadioSearchRow * self;
	Block31Data* _data31_;
	GtkStyleContext* _tmp0_;
	ObjectsRadio* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	ObjectsRadio* _tmp4_;
	const gchar* _tmp5_;
	const gchar* _tmp6_;
	GtkLabel* _tmp7_;
	GtkLabel* _tmp8_;
	GtkLabel* _tmp9_;
	GtkStyleContext* _tmp10_;
	GtkLabel* _tmp11_;
	GtkLabel* _tmp12_;
	GtkLabel* _tmp13_;
	ObjectsRadio* _tmp14_;
	const gchar* _tmp15_;
	const gchar* _tmp16_;
	ObjectsRadio* _tmp17_;
	const gchar* _tmp18_;
	const gchar* _tmp19_;
	gchar* _tmp20_;
	gchar* _tmp21_;
	GtkLabel* _tmp22_;
	GtkLabel* _tmp23_;
	GtkLabel* _tmp24_;
	GtkLabel* _tmp25_;
	GtkLabel* _tmp26_;
	ObjectsRadio* _tmp27_;
	const gchar* _tmp28_;
	const gchar* _tmp29_;
	WidgetsCover* _tmp30_;
	GtkButton* _tmp31_;
	GtkButton* _tmp32_;
	GtkStyleContext* _tmp33_;
	GtkButton* _tmp34_;
	GtkStyleContext* _tmp35_;
	GtkButton* _tmp36_;
	GtkButton* _tmp37_;
	GtkButton* _tmp38_;
	GtkRevealer* _tmp39_;
	GtkRevealer* _tmp40_;
	GtkRevealer* _tmp41_;
	GtkRevealer* _tmp42_;
	GtkRevealer* _tmp43_;
	GtkButton* _tmp44_;
	GtkRevealer* _tmp45_;
	GtkGrid* main_grid = NULL;
	GtkGrid* _tmp46_;
	GtkGrid* _tmp47_;
	GtkGrid* _tmp48_;
	GtkGrid* _tmp49_;
	GtkGrid* _tmp50_;
	WidgetsCover* _tmp51_;
	GtkGrid* _tmp52_;
	GtkLabel* _tmp53_;
	GtkGrid* _tmp54_;
	GtkLabel* _tmp55_;
	GtkGrid* _tmp56_;
	GtkRevealer* _tmp57_;
	GtkEventBox* eventbox = NULL;
	GtkEventBox* _tmp58_;
	GtkEventBox* _tmp59_;
	GtkEventBox* _tmp60_;
	GtkGrid* _tmp61_;
	GtkEventBox* _tmp62_;
	GtkButton* _tmp63_;
	GtkEventBox* _tmp64_;
	GtkEventBox* _tmp65_;
	parent_class = G_OBJECT_CLASS (widgets_radio_search_row_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WIDGETS_TYPE_RADIO_SEARCH_ROW, WidgetsRadioSearchRow);
	_data31_ = g_slice_new0 (Block31Data);
	_data31_->_ref_count_ = 1;
	_data31_->self = g_object_ref (self);
	_tmp0_ = gtk_widget_get_style_context ((GtkWidget*) self);
	gtk_style_context_add_class (_tmp0_, "album-row");
	_tmp1_ = self->priv->_radio;
	_tmp2_ = objects_radio_get_name (_tmp1_);
	_tmp3_ = _tmp2_;
	gtk_widget_set_tooltip_text ((GtkWidget*) self, _tmp3_);
	_tmp4_ = self->priv->_radio;
	_tmp5_ = objects_radio_get_name (_tmp4_);
	_tmp6_ = _tmp5_;
	_tmp7_ = (GtkLabel*) gtk_label_new (_tmp6_);
	g_object_ref_sink (_tmp7_);
	_g_object_unref0 (self->priv->name_label);
	self->priv->name_label = _tmp7_;
	_tmp8_ = self->priv->name_label;
	gtk_widget_set_margin_end ((GtkWidget*) _tmp8_, 6);
	_tmp9_ = self->priv->name_label;
	_tmp10_ = gtk_widget_get_style_context ((GtkWidget*) _tmp9_);
	gtk_style_context_add_class (_tmp10_, "font-bold");
	_tmp11_ = self->priv->name_label;
	gtk_label_set_ellipsize (_tmp11_, PANGO_ELLIPSIZE_END);
	_tmp12_ = self->priv->name_label;
	gtk_widget_set_halign ((GtkWidget*) _tmp12_, GTK_ALIGN_START);
	_tmp13_ = self->priv->name_label;
	gtk_widget_set_valign ((GtkWidget*) _tmp13_, GTK_ALIGN_END);
	_tmp14_ = self->priv->_radio;
	_tmp15_ = objects_radio_get_votes (_tmp14_);
	_tmp16_ = _tmp15_;
	_tmp17_ = self->priv->_radio;
	_tmp18_ = objects_radio_get_country (_tmp17_);
	_tmp19_ = _tmp18_;
	_tmp20_ = g_strdup_printf ("👍️ %s - %s", _tmp16_, _tmp19_);
	_tmp21_ = _tmp20_;
	_tmp22_ = (GtkLabel*) gtk_label_new (_tmp21_);
	g_object_ref_sink (_tmp22_);
	_g_object_unref0 (self->priv->secondary_label);
	self->priv->secondary_label = _tmp22_;
	_g_free0 (_tmp21_);
	_tmp23_ = self->priv->secondary_label;
	gtk_widget_set_halign ((GtkWidget*) _tmp23_, GTK_ALIGN_START);
	_tmp24_ = self->priv->secondary_label;
	gtk_widget_set_valign ((GtkWidget*) _tmp24_, GTK_ALIGN_START);
	_tmp25_ = self->priv->secondary_label;
	gtk_label_set_max_width_chars (_tmp25_, 35);
	_tmp26_ = self->priv->secondary_label;
	gtk_label_set_ellipsize (_tmp26_, PANGO_ELLIPSIZE_END);
	_tmp27_ = self->priv->_radio;
	_tmp28_ = objects_radio_get_favicon (_tmp27_);
	_tmp29_ = _tmp28_;
	_tmp30_ = widgets_cover_new_from_url_async (_tmp29_, 32, TRUE, "radio", NULL);
	g_object_ref_sink (_tmp30_);
	_g_object_unref0 (self->priv->image_cover);
	self->priv->image_cover = _tmp30_;
	_tmp31_ = (GtkButton*) gtk_button_new_from_icon_name ("list-add-symbolic", (GtkIconSize) GTK_ICON_SIZE_MENU);
	g_object_ref_sink (_tmp31_);
	_data31_->add_button = _tmp31_;
	_tmp32_ = _data31_->add_button;
	_tmp33_ = gtk_widget_get_style_context ((GtkWidget*) _tmp32_);
	gtk_style_context_add_class (_tmp33_, "quick-find-add-radio");
	_tmp34_ = _data31_->add_button;
	_tmp35_ = gtk_widget_get_style_context ((GtkWidget*) _tmp34_);
	gtk_style_context_add_class (_tmp35_, "remove-button");
	_tmp36_ = _data31_->add_button;
	gtk_widget_set_hexpand ((GtkWidget*) _tmp36_, TRUE);
	_tmp37_ = _data31_->add_button;
	gtk_widget_set_halign ((GtkWidget*) _tmp37_, GTK_ALIGN_END);
	_tmp38_ = _data31_->add_button;
	gtk_widget_set_valign ((GtkWidget*) _tmp38_, GTK_ALIGN_CENTER);
	_tmp39_ = (GtkRevealer*) gtk_revealer_new ();
	g_object_ref_sink (_tmp39_);
	_data31_->add_revealer = _tmp39_;
	_tmp40_ = _data31_->add_revealer;
	gtk_widget_set_halign ((GtkWidget*) _tmp40_, GTK_ALIGN_END);
	_tmp41_ = _data31_->add_revealer;
	gtk_widget_set_valign ((GtkWidget*) _tmp41_, GTK_ALIGN_CENTER);
	_tmp42_ = _data31_->add_revealer;
	gtk_revealer_set_transition_type (_tmp42_, GTK_REVEALER_TRANSITION_TYPE_SLIDE_LEFT);
	_tmp43_ = _data31_->add_revealer;
	_tmp44_ = _data31_->add_button;
	gtk_container_add ((GtkContainer*) _tmp43_, (GtkWidget*) _tmp44_);
	_tmp45_ = _data31_->add_revealer;
	gtk_revealer_set_reveal_child (_tmp45_, FALSE);
	_tmp46_ = (GtkGrid*) gtk_grid_new ();
	g_object_ref_sink (_tmp46_);
	main_grid = _tmp46_;
	_tmp47_ = main_grid;
	g_object_set ((GtkWidget*) _tmp47_, "margin", 3, NULL);
	_tmp48_ = main_grid;
	gtk_widget_set_margin_end ((GtkWidget*) _tmp48_, 12);
	_tmp49_ = main_grid;
	gtk_grid_set_column_spacing (_tmp49_, 6);
	_tmp50_ = main_grid;
	_tmp51_ = self->priv->image_cover;
	gtk_grid_attach (_tmp50_, (GtkWidget*) _tmp51_, 0, 0, 1, 2);
	_tmp52_ = main_grid;
	_tmp53_ = self->priv->name_label;
	gtk_grid_attach (_tmp52_, (GtkWidget*) _tmp53_, 1, 0, 1, 1);
	_tmp54_ = main_grid;
	_tmp55_ = self->priv->secondary_label;
	gtk_grid_attach (_tmp54_, (GtkWidget*) _tmp55_, 1, 1, 1, 1);
	_tmp56_ = main_grid;
	_tmp57_ = _data31_->add_revealer;
	gtk_grid_attach (_tmp56_, (GtkWidget*) _tmp57_, 2, 0, 2, 2);
	_tmp58_ = (GtkEventBox*) gtk_event_box_new ();
	g_object_ref_sink (_tmp58_);
	eventbox = _tmp58_;
	_tmp59_ = eventbox;
	gtk_widget_add_events ((GtkWidget*) _tmp59_, (gint) (GDK_ENTER_NOTIFY_MASK | GDK_LEAVE_NOTIFY_MASK));
	_tmp60_ = eventbox;
	_tmp61_ = main_grid;
	gtk_container_add ((GtkContainer*) _tmp60_, (GtkWidget*) _tmp61_);
	_tmp62_ = eventbox;
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp62_);
	_tmp63_ = _data31_->add_button;
	g_signal_connect_object (_tmp63_, "clicked", (GCallback) __widgets_radio_search_row___lambda295__gtk_button_clicked, self, 0);
	_tmp64_ = eventbox;
	g_signal_connect_data ((GtkWidget*) _tmp64_, "enter-notify-event", (GCallback) __widgets_radio_search_row___lambda296__gtk_widget_enter_notify_event, block31_data_ref (_data31_), (GClosureNotify) block31_data_unref, 0);
	_tmp65_ = eventbox;
	g_signal_connect_data ((GtkWidget*) _tmp65_, "leave-notify-event", (GCallback) __widgets_radio_search_row___lambda297__gtk_widget_leave_notify_event, block31_data_ref (_data31_), (GClosureNotify) block31_data_unref, 0);
	_g_object_unref0 (eventbox);
	_g_object_unref0 (main_grid);
	block31_data_unref (_data31_);
	_data31_ = NULL;
	return obj;
}


static void
widgets_radio_search_row_class_init (WidgetsRadioSearchRowClass * klass)
{
	widgets_radio_search_row_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (WidgetsRadioSearchRowPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_widgets_radio_search_row_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_widgets_radio_search_row_set_property;
	G_OBJECT_CLASS (klass)->constructor = widgets_radio_search_row_constructor;
	G_OBJECT_CLASS (klass)->finalize = widgets_radio_search_row_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_RADIO_SEARCH_ROW_RADIO_PROPERTY, widgets_radio_search_row_properties[WIDGETS_RADIO_SEARCH_ROW_RADIO_PROPERTY] = g_param_spec_object ("radio", "radio", "radio", OBJECTS_TYPE_RADIO, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	widgets_radio_search_row_signals[WIDGETS_RADIO_SEARCH_ROW_SEND_NOTIFICATION_ERROR_SIGNAL] = g_signal_new ("send-notification-error", WIDGETS_TYPE_RADIO_SEARCH_ROW, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
}


static void
widgets_radio_search_row_instance_init (WidgetsRadioSearchRow * self)
{
	self->priv = WIDGETS_RADIO_SEARCH_ROW_GET_PRIVATE (self);
}


static void
widgets_radio_search_row_finalize (GObject * obj)
{
	WidgetsRadioSearchRow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WIDGETS_TYPE_RADIO_SEARCH_ROW, WidgetsRadioSearchRow);
	_g_object_unref0 (self->priv->_radio);
	_g_object_unref0 (self->priv->name_label);
	_g_object_unref0 (self->priv->secondary_label);
	_g_object_unref0 (self->priv->image_cover);
	G_OBJECT_CLASS (widgets_radio_search_row_parent_class)->finalize (obj);
}


GType
widgets_radio_search_row_get_type (void)
{
	static volatile gsize widgets_radio_search_row_type_id__volatile = 0;
	if (g_once_init_enter (&widgets_radio_search_row_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (WidgetsRadioSearchRowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) widgets_radio_search_row_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (WidgetsRadioSearchRow), 0, (GInstanceInitFunc) widgets_radio_search_row_instance_init, NULL };
		GType widgets_radio_search_row_type_id;
		widgets_radio_search_row_type_id = g_type_register_static (gtk_list_box_row_get_type (), "WidgetsRadioSearchRow", &g_define_type_info, 0);
		g_once_init_leave (&widgets_radio_search_row_type_id__volatile, widgets_radio_search_row_type_id);
	}
	return widgets_radio_search_row_type_id__volatile;
}


static void
_vala_widgets_radio_search_row_get_property (GObject * object,
                                             guint property_id,
                                             GValue * value,
                                             GParamSpec * pspec)
{
	WidgetsRadioSearchRow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, WIDGETS_TYPE_RADIO_SEARCH_ROW, WidgetsRadioSearchRow);
	switch (property_id) {
		case WIDGETS_RADIO_SEARCH_ROW_RADIO_PROPERTY:
		g_value_set_object (value, widgets_radio_search_row_get_radio (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void
_vala_widgets_radio_search_row_set_property (GObject * object,
                                             guint property_id,
                                             const GValue * value,
                                             GParamSpec * pspec)
{
	WidgetsRadioSearchRow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, WIDGETS_TYPE_RADIO_SEARCH_ROW, WidgetsRadioSearchRow);
	switch (property_id) {
		case WIDGETS_RADIO_SEARCH_ROW_RADIO_PROPERTY:
		widgets_radio_search_row_set_radio (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


