/* Application.c generated by valac 0.40.11, the Vala compiler
 * generated from Application.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <gdk/gdk.h>
#include <gst/gst.h>


#define TYPE_BYTE (byte_get_type ())
#define BYTE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_BYTE, Byte))
#define BYTE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_BYTE, ByteClass))
#define IS_BYTE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_BYTE))
#define IS_BYTE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_BYTE))
#define BYTE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_BYTE, ByteClass))

typedef struct _Byte Byte;
typedef struct _ByteClass ByteClass;
typedef struct _BytePrivate BytePrivate;

#define TYPE_MAIN_WINDOW (main_window_get_type ())
#define MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MAIN_WINDOW, MainWindow))
#define MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MAIN_WINDOW, MainWindowClass))
#define IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MAIN_WINDOW))
#define IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MAIN_WINDOW))
#define MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MAIN_WINDOW, MainWindowClass))

typedef struct _MainWindow MainWindow;
typedef struct _MainWindowClass MainWindowClass;
enum  {
	BYTE_0_PROPERTY,
	BYTE_NUM_PROPERTIES
};
static GParamSpec* byte_properties[BYTE_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define SERVICES_TYPE_DATABASE (services_database_get_type ())
#define SERVICES_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SERVICES_TYPE_DATABASE, ServicesDatabase))
#define SERVICES_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SERVICES_TYPE_DATABASE, ServicesDatabaseClass))
#define SERVICES_IS_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SERVICES_TYPE_DATABASE))
#define SERVICES_IS_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SERVICES_TYPE_DATABASE))
#define SERVICES_DATABASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SERVICES_TYPE_DATABASE, ServicesDatabaseClass))

typedef struct _ServicesDatabase ServicesDatabase;
typedef struct _ServicesDatabaseClass ServicesDatabaseClass;

#define SERVICES_TYPE_PLAYER (services_player_get_type ())
#define SERVICES_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SERVICES_TYPE_PLAYER, ServicesPlayer))
#define SERVICES_PLAYER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SERVICES_TYPE_PLAYER, ServicesPlayerClass))
#define SERVICES_IS_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SERVICES_TYPE_PLAYER))
#define SERVICES_IS_PLAYER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SERVICES_TYPE_PLAYER))
#define SERVICES_PLAYER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SERVICES_TYPE_PLAYER, ServicesPlayerClass))

typedef struct _ServicesPlayer ServicesPlayer;
typedef struct _ServicesPlayerClass ServicesPlayerClass;

#define SERVICES_TYPE_TAG_MANAGER (services_tag_manager_get_type ())
#define SERVICES_TAG_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SERVICES_TYPE_TAG_MANAGER, ServicesTagManager))
#define SERVICES_TAG_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SERVICES_TYPE_TAG_MANAGER, ServicesTagManagerClass))
#define SERVICES_IS_TAG_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SERVICES_TYPE_TAG_MANAGER))
#define SERVICES_IS_TAG_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SERVICES_TYPE_TAG_MANAGER))
#define SERVICES_TAG_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SERVICES_TYPE_TAG_MANAGER, ServicesTagManagerClass))

typedef struct _ServicesTagManager ServicesTagManager;
typedef struct _ServicesTagManagerClass ServicesTagManagerClass;

#define SERVICES_TYPE_COVER_IMPORT (services_cover_import_get_type ())
#define SERVICES_COVER_IMPORT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SERVICES_TYPE_COVER_IMPORT, ServicesCoverImport))
#define SERVICES_COVER_IMPORT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SERVICES_TYPE_COVER_IMPORT, ServicesCoverImportClass))
#define SERVICES_IS_COVER_IMPORT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SERVICES_TYPE_COVER_IMPORT))
#define SERVICES_IS_COVER_IMPORT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SERVICES_TYPE_COVER_IMPORT))
#define SERVICES_COVER_IMPORT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SERVICES_TYPE_COVER_IMPORT, ServicesCoverImportClass))

typedef struct _ServicesCoverImport ServicesCoverImport;
typedef struct _ServicesCoverImportClass ServicesCoverImportClass;

#define SERVICES_TYPE_INDICATOR (services_indicator_get_type ())
#define SERVICES_INDICATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SERVICES_TYPE_INDICATOR, ServicesIndicator))
#define SERVICES_INDICATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SERVICES_TYPE_INDICATOR, ServicesIndicatorClass))
#define SERVICES_IS_INDICATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SERVICES_TYPE_INDICATOR))
#define SERVICES_IS_INDICATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SERVICES_TYPE_INDICATOR))
#define SERVICES_INDICATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SERVICES_TYPE_INDICATOR, ServicesIndicatorClass))

typedef struct _ServicesIndicator ServicesIndicator;
typedef struct _ServicesIndicatorClass ServicesIndicatorClass;

#define SERVICES_TYPE_NOTIFICATION (services_notification_get_type ())
#define SERVICES_NOTIFICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SERVICES_TYPE_NOTIFICATION, ServicesNotification))
#define SERVICES_NOTIFICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SERVICES_TYPE_NOTIFICATION, ServicesNotificationClass))
#define SERVICES_IS_NOTIFICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SERVICES_TYPE_NOTIFICATION))
#define SERVICES_IS_NOTIFICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SERVICES_TYPE_NOTIFICATION))
#define SERVICES_NOTIFICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SERVICES_TYPE_NOTIFICATION, ServicesNotificationClass))

typedef struct _ServicesNotification ServicesNotification;
typedef struct _ServicesNotificationClass ServicesNotificationClass;

#define SERVICES_TYPE_SCAN (services_scan_get_type ())
#define SERVICES_SCAN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SERVICES_TYPE_SCAN, ServicesScan))
#define SERVICES_SCAN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SERVICES_TYPE_SCAN, ServicesScanClass))
#define SERVICES_IS_SCAN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SERVICES_TYPE_SCAN))
#define SERVICES_IS_SCAN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SERVICES_TYPE_SCAN))
#define SERVICES_SCAN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SERVICES_TYPE_SCAN, ServicesScanClass))

typedef struct _ServicesScan ServicesScan;
typedef struct _ServicesScanClass ServicesScanClass;

#define SERVICES_TYPE_RADIO_BROWSER (services_radio_browser_get_type ())
#define SERVICES_RADIO_BROWSER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SERVICES_TYPE_RADIO_BROWSER, ServicesRadioBrowser))
#define SERVICES_RADIO_BROWSER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SERVICES_TYPE_RADIO_BROWSER, ServicesRadioBrowserClass))
#define SERVICES_IS_RADIO_BROWSER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SERVICES_TYPE_RADIO_BROWSER))
#define SERVICES_IS_RADIO_BROWSER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SERVICES_TYPE_RADIO_BROWSER))
#define SERVICES_RADIO_BROWSER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SERVICES_TYPE_RADIO_BROWSER, ServicesRadioBrowserClass))

typedef struct _ServicesRadioBrowser ServicesRadioBrowser;
typedef struct _ServicesRadioBrowserClass ServicesRadioBrowserClass;

#define SERVICES_TYPE_LASTFM (services_lastfm_get_type ())
#define SERVICES_LASTFM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SERVICES_TYPE_LASTFM, ServicesLastfm))
#define SERVICES_LASTFM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SERVICES_TYPE_LASTFM, ServicesLastfmClass))
#define SERVICES_IS_LASTFM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SERVICES_TYPE_LASTFM))
#define SERVICES_IS_LASTFM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SERVICES_TYPE_LASTFM))
#define SERVICES_LASTFM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SERVICES_TYPE_LASTFM, ServicesLastfmClass))

typedef struct _ServicesLastfm ServicesLastfm;
typedef struct _ServicesLastfmClass ServicesLastfmClass;

#define TYPE_UTILS (utils_get_type ())
#define UTILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_UTILS, Utils))
#define UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_UTILS, UtilsClass))
#define IS_UTILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_UTILS))
#define IS_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_UTILS))
#define UTILS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_UTILS, UtilsClass))

typedef struct _Utils Utils;
typedef struct _UtilsClass UtilsClass;
#define _g_variant_unref0(var) ((var == NULL) ? NULL : (var = (g_variant_unref (var), NULL)))

struct _Byte {
	GtkApplication parent_instance;
	BytePrivate * priv;
	MainWindow* main_window;
	gchar** argsv;
	gint argsv_length1;
	gboolean has_entry_focus;
	GSimpleAction* toggle_playing_action;
};

struct _ByteClass {
	GtkApplicationClass parent_class;
};


static gpointer byte_parent_class = NULL;
extern ServicesDatabase* byte_database;
ServicesDatabase* byte_database = NULL;
extern GSettings* byte_settings;
GSettings* byte_settings = NULL;
extern ServicesPlayer* byte_player;
ServicesPlayer* byte_player = NULL;
extern ServicesTagManager* byte_tg_manager;
ServicesTagManager* byte_tg_manager = NULL;
extern ServicesCoverImport* byte_cover_import;
ServicesCoverImport* byte_cover_import = NULL;
extern ServicesIndicator* byte_indicator;
ServicesIndicator* byte_indicator = NULL;
extern ServicesNotification* byte_notification;
ServicesNotification* byte_notification = NULL;
extern ServicesScan* byte_scan_service;
ServicesScan* byte_scan_service = NULL;
extern ServicesRadioBrowser* byte_radio_browser;
ServicesRadioBrowser* byte_radio_browser = NULL;
extern ServicesLastfm* byte_lastfm_service;
ServicesLastfm* byte_lastfm_service = NULL;
extern Utils* byte_utils;
Utils* byte_utils = NULL;
extern Byte* byte__instance;
Byte* byte__instance = NULL;

GType byte_get_type (void) G_GNUC_CONST;
GType main_window_get_type (void) G_GNUC_CONST;
GType services_database_get_type (void) G_GNUC_CONST;
GType services_player_get_type (void) G_GNUC_CONST;
GType services_tag_manager_get_type (void) G_GNUC_CONST;
GType services_cover_import_get_type (void) G_GNUC_CONST;
GType services_indicator_get_type (void) G_GNUC_CONST;
GType services_notification_get_type (void) G_GNUC_CONST;
GType services_scan_get_type (void) G_GNUC_CONST;
GType services_radio_browser_get_type (void) G_GNUC_CONST;
GType services_lastfm_get_type (void) G_GNUC_CONST;
GType utils_get_type (void) G_GNUC_CONST;
Byte* byte_new (void);
Byte* byte_construct (GType object_type);
Utils* utils_new (void);
Utils* utils_construct (GType object_type);
void utils_create_dir_with_parents (Utils* self,
                                    const gchar* dir);
ServicesPlayer* services_player_new (void);
ServicesPlayer* services_player_construct (GType object_type);
ServicesDatabase* services_database_new (gboolean skip_tables);
ServicesDatabase* services_database_construct (GType object_type,
                                               gboolean skip_tables);
ServicesTagManager* services_tag_manager_new (void);
ServicesTagManager* services_tag_manager_construct (GType object_type);
ServicesCoverImport* services_cover_import_new (void);
ServicesCoverImport* services_cover_import_construct (GType object_type);
ServicesNotification* services_notification_new (void);
ServicesNotification* services_notification_construct (GType object_type);
ServicesScan* services_scan_new (void);
ServicesScan* services_scan_construct (GType object_type);
ServicesRadioBrowser* services_radio_browser_new (void);
ServicesRadioBrowser* services_radio_browser_construct (GType object_type);
ServicesLastfm* services_lastfm_new (void);
ServicesLastfm* services_lastfm_construct (GType object_type);
static void byte_real_activate (GApplication* base);
static gint32 _variant_get1 (GVariant* value);
static gint32 _variant_get2 (GVariant* value);
static gint32 _variant_get3 (GVariant* value);
static gint32 _variant_get4 (GVariant* value);
MainWindow* main_window_new (Byte* application);
MainWindow* main_window_construct (GType object_type,
                                   Byte* application);
ServicesIndicator* services_indicator_new (void);
ServicesIndicator* services_indicator_construct (GType object_type);
void services_indicator_initialize (ServicesIndicator* self);
void services_media_key_listen (void);
static void __lambda371_ (Byte* self);
static void ___lambda371__g_simple_action_activate (GSimpleAction* _sender,
                                             GVariant* parameter,
                                             gpointer self);
static void __lambda372_ (Byte* self);
static void ___lambda372__g_simple_action_activate (GSimpleAction* _sender,
                                             GVariant* parameter,
                                             gpointer self);
static void __lambda373_ (Byte* self);
static void ___lambda373__g_simple_action_activate (GSimpleAction* _sender,
                                             GVariant* parameter,
                                             gpointer self);
void utils_apply_theme (Utils* self,
                        gint id);
void byte_toggle_playing_action_enabled (Byte* self,
                                         gboolean b);
gint byte_main (gchar** args,
                int args_length1);
Byte* byte_get_instance (void);
static void byte_finalize (GObject * obj);
static void _vala_byte_get_property (GObject * object,
                              guint property_id,
                              GValue * value,
                              GParamSpec * pspec);
static void _vala_array_destroy (gpointer array,
                          gint array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gint array_length,
                       GDestroyNotify destroy_func);


Byte*
byte_construct (GType object_type)
{
	Byte * self = NULL;
	Utils* _tmp0_;
	Utils* _tmp1_;
	Utils* _tmp2_;
	GSettings* _tmp3_;
	ServicesPlayer* _tmp4_;
	ServicesDatabase* _tmp5_;
	ServicesTagManager* _tmp6_;
	ServicesCoverImport* _tmp7_;
	ServicesNotification* _tmp8_;
	ServicesScan* _tmp9_;
	ServicesRadioBrowser* _tmp10_;
	ServicesLastfm* _tmp11_;
	self = (Byte*) g_object_new (object_type, "application-id", "com.github.alainm23.byte", "flags", G_APPLICATION_HANDLES_OPEN, NULL);
	_tmp0_ = utils_new ();
	_g_object_unref0 (byte_utils);
	byte_utils = _tmp0_;
	_tmp1_ = byte_utils;
	utils_create_dir_with_parents (_tmp1_, "/.local/share/com.github.alainm23.byte");
	_tmp2_ = byte_utils;
	utils_create_dir_with_parents (_tmp2_, "/.local/share/com.github.alainm23.byte/covers");
	_tmp3_ = g_settings_new ("com.github.alainm23.byte");
	_g_object_unref0 (byte_settings);
	byte_settings = _tmp3_;
	_tmp4_ = services_player_new ();
	_g_object_unref0 (byte_player);
	byte_player = _tmp4_;
	_tmp5_ = services_database_new (FALSE);
	_g_object_unref0 (byte_database);
	byte_database = _tmp5_;
	_tmp6_ = services_tag_manager_new ();
	_g_object_unref0 (byte_tg_manager);
	byte_tg_manager = _tmp6_;
	_tmp7_ = services_cover_import_new ();
	_g_object_unref0 (byte_cover_import);
	byte_cover_import = _tmp7_;
	_tmp8_ = services_notification_new ();
	_g_object_unref0 (byte_notification);
	byte_notification = _tmp8_;
	_tmp9_ = services_scan_new ();
	_g_object_unref0 (byte_scan_service);
	byte_scan_service = _tmp9_;
	_tmp10_ = services_radio_browser_new ();
	_g_object_unref0 (byte_radio_browser);
	byte_radio_browser = _tmp10_;
	_tmp11_ = services_lastfm_new ();
	_g_object_unref0 (byte_lastfm_service);
	byte_lastfm_service = _tmp11_;
	return self;
}


Byte*
byte_new (void)
{
	return byte_construct (TYPE_BYTE);
}


static gint32
_variant_get1 (GVariant* value)
{
	return g_variant_get_int32 (value);
}


static gint32
_variant_get2 (GVariant* value)
{
	return g_variant_get_int32 (value);
}


static gint32
_variant_get3 (GVariant* value)
{
	return g_variant_get_int32 (value);
}


static gint32
_variant_get4 (GVariant* value)
{
	return g_variant_get_int32 (value);
}


static void
__lambda371_ (Byte* self)
{
	MainWindow* _tmp0_;
	_tmp0_ = self->main_window;
	if (_tmp0_ != NULL) {
		MainWindow* _tmp1_;
		_tmp1_ = self->main_window;
		gtk_widget_destroy ((GtkWidget*) _tmp1_);
	}
}


static void
___lambda371__g_simple_action_activate (GSimpleAction* _sender,
                                        GVariant* parameter,
                                        gpointer self)
{
	__lambda371_ ((Byte*) self);
}


static void
__lambda372_ (Byte* self)
{
	gboolean _tmp0_;
	_tmp0_ = self->has_entry_focus;
	if (!_tmp0_) {
		ServicesPlayer* _tmp1_;
		_tmp1_ = byte_player;
		g_signal_emit_by_name (_tmp1_, "toggle-playing");
	}
}


static void
___lambda372__g_simple_action_activate (GSimpleAction* _sender,
                                        GVariant* parameter,
                                        gpointer self)
{
	__lambda372_ ((Byte*) self);
}


static void
__lambda373_ (Byte* self)
{
}


static void
___lambda373__g_simple_action_activate (GSimpleAction* _sender,
                                        GVariant* parameter,
                                        gpointer self)
{
	__lambda373_ ((Byte*) self);
}


static void
byte_real_activate (GApplication* base)
{
	Byte * self;
	GList* _tmp0_;
	GVariant* window_size = NULL;
	GSettings* _tmp3_;
	GVariant* _tmp4_;
	GtkAllocation rect = {0};
	GVariant* _tmp5_;
	GVariant* _tmp6_;
	GVariant* _tmp7_;
	gint32 _tmp8_;
	GVariant* _tmp9_;
	GVariant* _tmp10_;
	GVariant* _tmp11_;
	gint32 _tmp12_;
	GVariant* window_position = NULL;
	GSettings* _tmp13_;
	GVariant* _tmp14_;
	gint32 window_x = 0;
	GVariant* _tmp15_;
	GVariant* _tmp16_;
	GVariant* _tmp17_;
	gint32 _tmp18_;
	gint32 _tmp19_;
	gint32 window_y = 0;
	GVariant* _tmp20_;
	GVariant* _tmp21_;
	GVariant* _tmp22_;
	gint32 _tmp23_;
	gint32 _tmp24_;
	MainWindow* _tmp25_;
	gboolean _tmp26_ = FALSE;
	gint32 _tmp27_;
	MainWindow* _tmp32_;
	GtkAllocation _tmp33_;
	MainWindow* _tmp34_;
	ServicesIndicator* _tmp35_;
	ServicesIndicator* _tmp36_;
	GSimpleAction* quit_action = NULL;
	GSimpleAction* _tmp37_;
	gchar* _tmp38_;
	gchar** _tmp39_;
	gchar** _tmp40_;
	gint _tmp40__length1;
	GSimpleAction* _tmp41_;
	gchar* _tmp42_;
	gchar** _tmp43_;
	gchar** _tmp44_;
	gint _tmp44__length1;
	GSimpleAction* search_action = NULL;
	GSimpleAction* _tmp45_;
	gchar* _tmp46_;
	gchar** _tmp47_;
	gchar** _tmp48_;
	gint _tmp48__length1;
	GSimpleAction* _tmp49_;
	GSimpleAction* _tmp50_;
	GSimpleAction* _tmp51_;
	GSimpleAction* _tmp52_;
	GSimpleAction* _tmp53_;
	GSimpleAction* _tmp54_;
	GtkIconTheme* default_theme = NULL;
	GtkIconTheme* _tmp55_;
	GtkIconTheme* _tmp56_;
	GtkCssProvider* provider = NULL;
	GtkCssProvider* _tmp57_;
	GtkCssProvider* _tmp58_;
	GdkScreen* _tmp59_;
	GtkCssProvider* _tmp60_;
	Utils* _tmp61_;
	GSettings* _tmp62_;
	GtkSettings* _tmp63_;
	GValue _tmp64_ = {0};
	GtkSettings* _tmp65_;
	GValue _tmp66_ = {0};
	self = (Byte*) base;
	_tmp0_ = gtk_application_get_windows ((GtkApplication*) self);
	if (g_list_length (_tmp0_) > ((guint) 0)) {
		GList* _tmp1_;
		gconstpointer _tmp2_;
		_tmp1_ = gtk_application_get_windows ((GtkApplication*) self);
		_tmp2_ = _tmp1_->data;
		gtk_window_present ((GtkWindow*) _tmp2_);
		return;
	}
	_tmp3_ = byte_settings;
	_tmp4_ = g_settings_get_value (_tmp3_, "window-size");
	window_size = _tmp4_;
	memset (&rect, 0, sizeof (GtkAllocation));
	_tmp5_ = window_size;
	_tmp6_ = g_variant_get_child_value (_tmp5_, (gsize) 0);
	_tmp7_ = _tmp6_;
	_tmp8_ = _variant_get1 (_tmp7_);
	rect.height = (gint) _tmp8_;
	_g_variant_unref0 (_tmp7_);
	_tmp9_ = window_size;
	_tmp10_ = g_variant_get_child_value (_tmp9_, (gsize) 1);
	_tmp11_ = _tmp10_;
	_tmp12_ = _variant_get2 (_tmp11_);
	rect.width = (gint) _tmp12_;
	_g_variant_unref0 (_tmp11_);
	_tmp13_ = byte_settings;
	_tmp14_ = g_settings_get_value (_tmp13_, "window-position");
	window_position = _tmp14_;
	_tmp15_ = window_position;
	_tmp16_ = g_variant_get_child_value (_tmp15_, (gsize) 0);
	_tmp17_ = _tmp16_;
	_tmp18_ = _variant_get3 (_tmp17_);
	_tmp19_ = _tmp18_;
	_g_variant_unref0 (_tmp17_);
	window_x = _tmp19_;
	_tmp20_ = window_position;
	_tmp21_ = g_variant_get_child_value (_tmp20_, (gsize) 1);
	_tmp22_ = _tmp21_;
	_tmp23_ = _variant_get4 (_tmp22_);
	_tmp24_ = _tmp23_;
	_g_variant_unref0 (_tmp22_);
	window_y = _tmp24_;
	_tmp25_ = main_window_new (self);
	g_object_ref_sink (_tmp25_);
	_g_object_unref0 (self->main_window);
	self->main_window = _tmp25_;
	_tmp27_ = window_x;
	if (_tmp27_ != ((gint32) -1)) {
		_tmp26_ = TRUE;
	} else {
		gint32 _tmp28_;
		_tmp28_ = window_y;
		_tmp26_ = _tmp28_ != ((gint32) -1);
	}
	if (_tmp26_) {
		MainWindow* _tmp29_;
		gint32 _tmp30_;
		gint32 _tmp31_;
		_tmp29_ = self->main_window;
		_tmp30_ = window_x;
		_tmp31_ = window_y;
		gtk_window_move ((GtkWindow*) _tmp29_, (gint) _tmp30_, (gint) _tmp31_);
	}
	_tmp32_ = self->main_window;
	_tmp33_ = rect;
	gtk_widget_set_allocation ((GtkWidget*) _tmp32_, &_tmp33_);
	_tmp34_ = self->main_window;
	gtk_widget_show_all ((GtkWidget*) _tmp34_);
	_tmp35_ = services_indicator_new ();
	_g_object_unref0 (byte_indicator);
	byte_indicator = _tmp35_;
	_tmp36_ = byte_indicator;
	services_indicator_initialize (_tmp36_);
	services_media_key_listen ();
	_tmp37_ = g_simple_action_new ("quit", NULL);
	quit_action = _tmp37_;
	_tmp38_ = g_strdup ("<Control>q");
	_tmp39_ = g_new0 (gchar*, 1 + 1);
	_tmp39_[0] = _tmp38_;
	_tmp40_ = _tmp39_;
	_tmp40__length1 = 1;
	gtk_application_set_accels_for_action ((GtkApplication*) self, "app.quit", _tmp40_);
	_tmp40_ = (_vala_array_free (_tmp40_, _tmp40__length1, (GDestroyNotify) g_free), NULL);
	_tmp41_ = g_simple_action_new ("toggle_playing_action", NULL);
	_g_object_unref0 (self->toggle_playing_action);
	self->toggle_playing_action = _tmp41_;
	_tmp42_ = g_strdup ("space");
	_tmp43_ = g_new0 (gchar*, 1 + 1);
	_tmp43_[0] = _tmp42_;
	_tmp44_ = _tmp43_;
	_tmp44__length1 = 1;
	gtk_application_set_accels_for_action ((GtkApplication*) self, "app.toggle_playing_action", _tmp44_);
	_tmp44_ = (_vala_array_free (_tmp44_, _tmp44__length1, (GDestroyNotify) g_free), NULL);
	_tmp45_ = g_simple_action_new ("search", NULL);
	search_action = _tmp45_;
	_tmp46_ = g_strdup ("<Control>f");
	_tmp47_ = g_new0 (gchar*, 1 + 1);
	_tmp47_[0] = _tmp46_;
	_tmp48_ = _tmp47_;
	_tmp48__length1 = 1;
	gtk_application_set_accels_for_action ((GtkApplication*) self, "app.search", _tmp48_);
	_tmp48_ = (_vala_array_free (_tmp48_, _tmp48__length1, (GDestroyNotify) g_free), NULL);
	_tmp49_ = quit_action;
	g_signal_connect_object (_tmp49_, "activate", (GCallback) ___lambda371__g_simple_action_activate, self, 0);
	_tmp50_ = self->toggle_playing_action;
	g_signal_connect_object (_tmp50_, "activate", (GCallback) ___lambda372__g_simple_action_activate, self, 0);
	_tmp51_ = search_action;
	g_signal_connect_object (_tmp51_, "activate", (GCallback) ___lambda373__g_simple_action_activate, self, 0);
	_tmp52_ = quit_action;
	g_action_map_add_action ((GActionMap*) self, (GAction*) _tmp52_);
	_tmp53_ = self->toggle_playing_action;
	g_action_map_add_action ((GActionMap*) self, (GAction*) _tmp53_);
	_tmp54_ = search_action;
	g_action_map_add_action ((GActionMap*) self, (GAction*) _tmp54_);
	_tmp55_ = gtk_icon_theme_get_default ();
	default_theme = _tmp55_;
	_tmp56_ = default_theme;
	gtk_icon_theme_add_resource_path (_tmp56_, "/com/github/alainm23/byte");
	_tmp57_ = gtk_css_provider_new ();
	provider = _tmp57_;
	_tmp58_ = provider;
	gtk_css_provider_load_from_resource (_tmp58_, "/com/github/alainm23/byte/stylesheet.css");
	_tmp59_ = gdk_screen_get_default ();
	_tmp60_ = provider;
	gtk_style_context_add_provider_for_screen (_tmp59_, (GtkStyleProvider*) _tmp60_, (guint) GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
	_tmp61_ = byte_utils;
	_tmp62_ = byte_settings;
	utils_apply_theme (_tmp61_, g_settings_get_enum (_tmp62_, "theme"));
	_tmp63_ = gtk_settings_get_default ();
	g_value_init (&_tmp64_, G_TYPE_STRING);
	g_value_set_string (&_tmp64_, "elementary");
	g_object_set_property ((GObject*) _tmp63_, "gtk-icon-theme-name", &_tmp64_);
	G_IS_VALUE (&_tmp64_) ? (g_value_unset (&_tmp64_), NULL) : NULL;
	_tmp65_ = gtk_settings_get_default ();
	g_value_init (&_tmp66_, G_TYPE_STRING);
	g_value_set_string (&_tmp66_, "elementary");
	g_object_set_property ((GObject*) _tmp65_, "gtk-theme-name", &_tmp66_);
	G_IS_VALUE (&_tmp66_) ? (g_value_unset (&_tmp66_), NULL) : NULL;
	_g_object_unref0 (provider);
	_g_object_unref0 (search_action);
	_g_object_unref0 (quit_action);
	_g_variant_unref0 (window_position);
	_g_variant_unref0 (window_size);
}


void
byte_toggle_playing_action_enabled (Byte* self,
                                    gboolean b)
{
	g_return_if_fail (self != NULL);
	if (b) {
		gchar* _tmp0_;
		gchar** _tmp1_;
		gchar** _tmp2_;
		gint _tmp2__length1;
		_tmp0_ = g_strdup ("space");
		_tmp1_ = g_new0 (gchar*, 1 + 1);
		_tmp1_[0] = _tmp0_;
		_tmp2_ = _tmp1_;
		_tmp2__length1 = 1;
		gtk_application_set_accels_for_action ((GtkApplication*) self, "app.toggle_playing_action", _tmp2_);
		_tmp2_ = (_vala_array_free (_tmp2_, _tmp2__length1, (GDestroyNotify) g_free), NULL);
	} else {
		gchar** _tmp3_;
		gchar** _tmp4_;
		gint _tmp4__length1;
		_tmp3_ = g_new0 (gchar*, 1 + 1);
		_tmp3_[0] = NULL;
		_tmp4_ = _tmp3_;
		_tmp4__length1 = 1;
		gtk_application_set_accels_for_action ((GtkApplication*) self, "app.toggle_playing_action", _tmp4_);
		_tmp4_ = (_vala_array_free (_tmp4_, _tmp4__length1, (GDestroyNotify) g_free), NULL);
	}
}


static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}


gint
byte_main (gchar** args,
           int args_length1)
{
	gint result = 0;
	Byte* app = NULL;
	Byte* _tmp0_;
	Byte* _tmp1_;
	Byte* _tmp2_;
	gst_init (&args_length1, &args);
	_tmp0_ = byte_get_instance ();
	_tmp1_ = _tmp0_;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	app = _tmp2_;
	result = g_application_run ((GApplication*) app, args_length1, args);
	_g_object_unref0 (app);
	return result;
}


int
main (int argc,
      char ** argv)
{
	return byte_main (argv, argc);
}


Byte*
byte_get_instance (void)
{
	Byte* result;
	Byte* _tmp0_;
	Byte* _tmp2_;
	_tmp0_ = byte__instance;
	if (_tmp0_ == NULL) {
		Byte* _tmp1_;
		_tmp1_ = byte_new ();
		_g_object_unref0 (byte__instance);
		byte__instance = _tmp1_;
	}
	_tmp2_ = byte__instance;
	result = _tmp2_;
	return result;
}


static void
byte_class_init (ByteClass * klass)
{
	byte_parent_class = g_type_class_peek_parent (klass);
	((GApplicationClass *) klass)->activate = (void (*) (GApplication *)) byte_real_activate;
	G_OBJECT_CLASS (klass)->get_property = _vala_byte_get_property;
	G_OBJECT_CLASS (klass)->finalize = byte_finalize;
}


static void
byte_instance_init (Byte * self)
{
	self->has_entry_focus = FALSE;
}


static void
byte_finalize (GObject * obj)
{
	Byte * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_BYTE, Byte);
	_g_object_unref0 (self->main_window);
	self->argsv = (_vala_array_free (self->argsv, self->argsv_length1, (GDestroyNotify) g_free), NULL);
	_g_object_unref0 (self->toggle_playing_action);
	G_OBJECT_CLASS (byte_parent_class)->finalize (obj);
}


GType
byte_get_type (void)
{
	static volatile gsize byte_type_id__volatile = 0;
	if (g_once_init_enter (&byte_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ByteClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) byte_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Byte), 0, (GInstanceInitFunc) byte_instance_init, NULL };
		GType byte_type_id;
		byte_type_id = g_type_register_static (gtk_application_get_type (), "Byte", &g_define_type_info, 0);
		g_once_init_leave (&byte_type_id__volatile, byte_type_id);
	}
	return byte_type_id__volatile;
}


static void
_vala_byte_get_property (GObject * object,
                         guint property_id,
                         GValue * value,
                         GParamSpec * pspec)
{
	Byte * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_BYTE, Byte);
	switch (property_id) {
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void
_vala_array_destroy (gpointer array,
                     gint array_length,
                     GDestroyNotify destroy_func)
{
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void
_vala_array_free (gpointer array,
                  gint array_length,
                  GDestroyNotify destroy_func)
{
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


