/* libgsf-1.vapi generated by vapigen, do not modify. */

[CCode (cprefix = "Gsf", gir_namespace = "Gsf", gir_version = "1", lower_case_cprefix = "gsf_")]
namespace Gsf {
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_blob_get_type ()")]
	public class Blob : GLib.Object {
		[CCode (has_construct_function = false)]
		public Blob ([CCode (array_length_cname = "size", array_length_pos = 0.5, array_length_type = "gsize")] uint8[] data_to_copy) throws GLib.Error;
		public size_t get_size ();
		public void* peek_data ();
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_clip_data_get_type ()")]
	public class ClipData : GLib.Object {
		[CCode (has_construct_function = false)]
		public ClipData (Gsf.ClipFormat format, Gsf.Blob data_blob);
		public Gsf.Blob get_data_blob ();
		public Gsf.ClipFormat get_format ();
		public Gsf.ClipFormatWindows get_windows_clipboard_format () throws GLib.Error;
		public void* peek_real_data (size_t ret_size) throws GLib.Error;
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_doc_meta_data_get_type ()")]
	public class DocMetaData : GLib.Object {
		[CCode (has_construct_function = false)]
		public DocMetaData ();
		public void @foreach ([CCode (type = "GHFunc")] GLib.HFunc<string,Gsf.DocProp> func);
		public void insert (owned string name, owned GLib.Value value);
		public unowned Gsf.DocProp? lookup (string name);
		[Version (since = "1.14.24")]
		public void odf_subtree (Gsf.XMLIn doc);
		[Version (since = "1.14.24")]
		public GLib.Error read_from_msole (Gsf.Input @in);
		[Version (since = "1.14.24")]
		public GLib.Error read_from_odf (Gsf.Input input);
		public void remove (string name);
		public size_t size ();
		public Gsf.DocProp? steal (string name);
		public void store (Gsf.DocProp prop);
		[Version (since = "1.14.24")]
		public bool write_to_msole (Gsf.Output @out, bool doc_not_component);
		[Version (since = "1.14.24")]
		public bool write_to_odf (Gsf.XMLOut output);
	}
	[CCode (cheader_filename = "gsf/gsf.h", copy_function = "g_boxed_copy", free_function = "g_boxed_free", type_id = "gsf_doc_prop_get_type ()")]
	[Compact]
	public class DocProp {
		[CCode (has_construct_function = false)]
		public DocProp (owned string name);
		public void dump ();
		[DestroysInstance]
		public void free ();
		public unowned string? get_link ();
		public unowned string get_name ();
		public unowned GLib.Value? get_val ();
		public void set_link (owned string? link);
		public void set_val (owned GLib.Value val);
		public GLib.Value? swap_val (owned GLib.Value val);
	}
	[CCode (cheader_filename = "gsf/gsf.h", lower_case_csuffix = "docprop_vector", type_id = "gsf_docprop_vector_get_type ()")]
	public class DocPropVector : GLib.Object {
		[CCode (has_construct_function = false)]
		public DocPropVector ();
		public void append (GLib.Value value);
		public string as_string ();
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_infile_get_type ()")]
	public abstract class Infile : Gsf.Input {
		[CCode (has_construct_function = false)]
		protected Infile ();
		public Gsf.Input child_by_aname ([CCode (array_length = false, array_null_terminated = true)] string[] names);
		public Gsf.Input child_by_index (int i);
		public Gsf.Input child_by_name (string name);
		public Gsf.Input child_by_vaname (va_list names);
		public virtual unowned string? name_by_index (int i);
		public virtual int num_children ();
	}
	[CCode (cheader_filename = "gsf/gsf.h", lower_case_csuffix = "infile_msole", type_id = "gsf_infile_msole_get_type ()")]
	public class InfileMSOle : Gsf.Infile {
		[CCode (has_construct_function = false, type = "GsfInfile*")]
		public InfileMSOle (Gsf.Input source) throws GLib.Error;
		public bool get_class_id (uint8 res);
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_infile_msvba_get_type ()")]
	public class InfileMSVBA : Gsf.Infile {
		[CCode (has_construct_function = false, type = "GsfInfile*")]
		public InfileMSVBA (Gsf.Infile source) throws GLib.Error;
		public unowned GLib.HashTable<string,void*> get_modules ();
		public GLib.HashTable<string,void*> steal_modules ();
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_infile_stdio_get_type ()")]
	public class InfileStdio : Gsf.Infile {
		[CCode (has_construct_function = false, type = "GsfInfile*")]
		public InfileStdio (string root) throws GLib.Error;
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_infile_tar_get_type ()")]
	public class InfileTar : Gsf.Infile {
		[CCode (has_construct_function = false, type = "GsfInfile*")]
		public InfileTar (Gsf.Input source) throws GLib.Error;
		[NoAccessorMethod]
		public Gsf.Input source { owned get; construct; }
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_infile_zip_get_type ()")]
	public class InfileZip : Gsf.Infile {
		[CCode (has_construct_function = false, type = "GsfInfile*")]
		public InfileZip (Gsf.Input source) throws GLib.Error;
		[NoAccessorMethod]
		public int compression_level { get; }
		[NoAccessorMethod]
		public Gsf.InfileZip internal_parent { construct; }
		[NoAccessorMethod]
		public Gsf.Input source { owned get; construct; }
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_input_get_type ()")]
	public abstract class Input : GLib.Object {
		public Gsf.off_t cur_offset;
		[CCode (has_construct_function = false)]
		protected Input ();
		public bool copy (Gsf.Output output);
		public void dump (bool dump_as_hex);
		[CCode (vfunc_name = "Dup")]
		public virtual Gsf.Input? dup () throws GLib.Error;
		public static GLib.Quark error_id ();
		public Gsf.InfileMSVBA? find_vba () throws GLib.Error;
		public unowned GLib.DateTime get_modtime ();
		[CCode (cname = "gsf_input_mmap_new", has_construct_function = false)]
		public Input.mmap_new (string filename) throws GLib.Error;
		[CCode (array_length = false, vfunc_name = "Read")]
		public virtual unowned uint8[]? read (size_t num_bytes, [CCode (array_length = false)] uint8[]? optional_buffer);
		[CCode (array_length_pos = 1.1, array_length_type = "gsize")]
		public uint8[] read0 (size_t num_bytes);
		[CCode (vfunc_name = "Seek")]
		public virtual bool seek (Gsf.off_t offset, GLib.SeekType whence);
		public bool seek_emulate (Gsf.off_t pos);
		public bool set_container (Gsf.Infile? container);
		public bool set_modtime (GLib.DateTime? modtime);
		public bool set_modtime_from_stat (void* st);
		public bool set_name (string? name);
		public bool set_name_from_filename (string filename);
		public bool set_size (Gsf.off_t size);
		[CCode (vfunc_name = "OpenSibling")]
		public virtual Gsf.Input sibling (string name) throws GLib.Error;
		public Gsf.off_t tell ();
		public Gsf.Input uncompress ();
		[NoAccessorMethod]
		public Gsf.Infile container { owned get; }
		[NoAccessorMethod]
		public bool eof { get; }
		public GLib.DateTime modtime { get; }
		[NoAccessorMethod]
		public string name { owned get; }
		[NoAccessorMethod]
		public int64 position { get; }
		[NoAccessorMethod]
		public int64 remaining { get; }
		[NoAccessorMethod]
		public int64 size { get; }
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_input_gzip_get_type ()")]
	public class InputGZip : Gsf.Input {
		[CCode (has_construct_function = false, type = "GsfInput*")]
		public InputGZip (Gsf.Input source) throws GLib.Error;
		[NoAccessorMethod]
		public bool raw { get; construct; }
		[NoAccessorMethod]
		public Gsf.Input source { owned get; construct; }
		[NoAccessorMethod]
		public int64 uncompressed_size { get; construct; }
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_input_gio_get_type ()")]
	public class InputGio : Gsf.Input {
		[CCode (has_construct_function = false, type = "GsfInput*")]
		public InputGio (GLib.File file) throws GLib.Error;
		[CCode (has_construct_function = false, type = "GsfInput*")]
		public InputGio.for_path (string path) throws GLib.Error;
		[CCode (has_construct_function = false, type = "GsfInput*")]
		public InputGio.for_uri (string uri) throws GLib.Error;
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_input_http_get_type ()")]
	public class InputHTTP : Gsf.Input {
		[CCode (has_construct_function = false, type = "GsfInput*")]
		public InputHTTP (string url) throws GLib.Error;
		public string get_content_type ();
		public string get_url ();
		public string content_type { owned get; construct; }
		public string url { owned get; construct; }
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_input_memory_get_type ()")]
	public class InputMemory : Gsf.Input {
		[CCode (has_construct_function = false, type = "GsfInput*")]
		public InputMemory ([CCode (array_length_cname = "length", array_length_pos = 1.5)] uint8[] buf, bool needs_free);
		[CCode (has_construct_function = false, type = "GsfInput*")]
		public InputMemory.clone ([CCode (array_length_cname = "length", array_length_pos = 1.1)] uint8[] buf);
		[CCode (has_construct_function = false, type = "GsfInput*")]
		public InputMemory.from_bzip (Gsf.Input source) throws GLib.Error;
		[CCode (has_construct_function = false, type = "GsfInput*")]
		public InputMemory.from_iochannel (GLib.IOChannel channel) throws GLib.Error;
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_input_proxy_get_type ()")]
	public class InputProxy : Gsf.Input {
		[CCode (has_construct_function = false, type = "GsfInput*")]
		public InputProxy (Gsf.Input source);
		[CCode (has_construct_function = false, type = "GsfInput*")]
		public InputProxy.section (Gsf.Input source, Gsf.off_t offset, Gsf.off_t size);
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_input_stdio_get_type ()")]
	public class InputStdio : Gsf.Input {
		[CCode (has_construct_function = false, type = "GsfInput*")]
		public InputStdio (string filename) throws GLib.Error;
		[CCode (has_construct_function = false, type = "GsfInput*")]
		public InputStdio.FILE (string filename, owned void* file, bool keep_open);
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_input_textline_get_type ()")]
	public class InputTextline : Gsf.Input {
		[CCode (has_construct_function = false, type = "GsfInput*")]
		public InputTextline (Gsf.Input source);
		[CCode (array_length = false)]
		public unowned uint8[]? ascii_gets ();
		[CCode (array_length = false)]
		public unowned uint8[]? utf8_gets ();
	}
	[CCode (cheader_filename = "gsf/gsf.h", copy_function = "g_boxed_copy", free_function = "g_boxed_free", lower_case_csuffix = "msole_sorting_key", type_id = "gsf_msole_sorting_key_get_type ()")]
	[Compact]
	public class MSOleSortingKey {
		[CCode (has_construct_function = false)]
		public MSOleSortingKey (string name);
		public int cmp (Gsf.MSOleSortingKey b);
		[DestroysInstance]
		public void free ();
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_odf_out_get_type ()")]
	public class ODFOut : Gsf.XMLOut {
		[CCode (has_construct_function = false)]
		protected ODFOut ();
		public int get_version ();
		public string get_version_string ();
		[NoAccessorMethod]
		public int odf_version { get; construct; }
	}
	[CCode (cheader_filename = "gsf/gsf.h", has_type_id = false)]
	[Compact]
	public class OpenPkgRel {
		public unowned string get_target ();
		public unowned string get_type ();
		public bool is_extern ();
	}
	[CCode (cheader_filename = "gsf/gsf.h", has_type_id = false)]
	[Compact]
	public class OpenPkgRels {
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_outfile_get_type ()")]
	public abstract class Outfile : Gsf.Output {
		[CCode (has_construct_function = false)]
		protected Outfile ();
		public Gsf.Output new_child (string name, bool is_dir);
		public Gsf.Output new_child_full (string name, bool is_dir, ...);
		[CCode (vfunc_name = "new_child")]
		public virtual Gsf.Output new_child_varg (string name, bool is_dir, string first_property_name, va_list args);
		public Gsf.Output open_pkg_add_rel (string name, string content_type, Gsf.Outfile parent, string type);
	}
	[CCode (cheader_filename = "gsf/gsf.h", lower_case_csuffix = "outfile_msole", type_id = "gsf_outfile_msole_get_type ()")]
	public class OutfileMSOle : Gsf.Outfile {
		[CCode (has_construct_function = false, type = "GsfOutfile*")]
		public OutfileMSOle (Gsf.Output sink);
		[CCode (has_construct_function = false, type = "GsfOutfile*")]
		public OutfileMSOle.full (Gsf.Output sink, uint bb_size, uint sb_size);
		public bool set_class_id ([CCode (array_length = false)] uint8 clsid[16]);
		[NoAccessorMethod]
		public uint big_block_size { get; construct; }
		[NoAccessorMethod]
		public Gsf.Output sink { owned get; construct; }
		[NoAccessorMethod]
		public uint small_block_size { get; construct; }
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_outfile_open_pkg_get_type ()")]
	public class OutfileOpenPkg : Gsf.Outfile {
		[CCode (has_construct_function = false, type = "GsfOutfile*")]
		public OutfileOpenPkg (Gsf.Outfile sink);
		public unowned string add_extern_rel (string target, string content_type);
		public unowned string relate (Gsf.OutfileOpenPkg parent, string type);
		public void set_content_type (string content_type);
		public void set_sink (Gsf.Output sink);
		[NoAccessorMethod]
		public string content_type { owned get; construct; }
		[NoAccessorMethod]
		public bool is_dir { get; construct; }
		[NoAccessorMethod]
		public Gsf.Outfile sink { owned get; construct; }
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_outfile_stdio_get_type ()")]
	public class OutfileStdio : Gsf.Outfile {
		[CCode (has_construct_function = false, type = "GsfOutfile*")]
		public OutfileStdio (string root) throws GLib.Error;
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_outfile_zip_get_type ()")]
	public class OutfileZip : Gsf.Outfile {
		[CCode (has_construct_function = false, type = "GsfOutfile*")]
		public OutfileZip (Gsf.Output sink) throws GLib.Error;
		public bool set_compression_method (Gsf.ZipCompressionMethod method);
		[NoAccessorMethod]
		public int compression_level { get; construct; }
		[NoAccessorMethod]
		public int deflate_level { get; construct; }
		[NoAccessorMethod]
		public string entry_name { owned get; construct; }
		[NoAccessorMethod]
		public Gsf.Output sink { owned get; construct; }
		[NoAccessorMethod]
		public int zip64 { get; construct; }
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_output_get_type ()")]
	public abstract class Output : GLib.Object {
		public Gsf.off_t cur_offset;
		public Gsf.off_t cur_size;
		public weak GLib.Error err;
		public weak string printf_buf;
		public int printf_buf_size;
		public weak GLib.Object wrapped_by;
		[CCode (has_construct_function = false)]
		protected Output ();
		[CCode (vfunc_name = "Close")]
		public virtual bool close ();
		public unowned GLib.Error? error ();
		public static GLib.Quark error_id ();
		public unowned GLib.DateTime? get_modtime ();
		public bool printf (string format, ...);
		public bool puts (string line);
		[CCode (vfunc_name = "Seek")]
		public virtual bool seek (Gsf.off_t offset, GLib.SeekType whence);
		public bool set_container (Gsf.Outfile container);
		public bool set_error (int code, string format, ...);
		public bool set_modtime (GLib.DateTime? modtime);
		public bool set_name (string name);
		public bool set_name_from_filename (string filename);
		public Gsf.off_t tell ();
		public static bool unwrap (GLib.Object wrapper, Gsf.Output wrapee);
		[CCode (vfunc_name = "Vprintf")]
		public virtual Gsf.off_t vprintf (string format, va_list args);
		public static bool wrap (GLib.Object wrapper, Gsf.Output wrapee);
		[CCode (vfunc_name = "Write")]
		public virtual bool write ([CCode (array_length_cname = "num_bytes", array_length_pos = 0.5, array_length_type = "gsize")] uint8[] data);
		[NoAccessorMethod]
		public Gsf.Outfile container { owned get; set; }
		[NoAccessorMethod]
		public bool is_closed { get; }
		public GLib.DateTime modtime { get; construct; }
		[NoAccessorMethod]
		public string name { owned get; set; }
		[NoAccessorMethod]
		public int64 position { get; }
		[NoAccessorMethod]
		public int64 size { get; }
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_output_bzip_get_type ()")]
	public class OutputBzip : Gsf.Output {
		[CCode (has_construct_function = false, type = "GsfOutput*")]
		public OutputBzip (Gsf.Output sink) throws GLib.Error;
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_output_csv_get_type ()")]
	public class OutputCsv : Gsf.Output {
		public weak GLib.StringBuilder buf;
		public size_t eol_len;
		public bool fields_on_line;
		public size_t quote_len;
		public size_t separator_len;
		[CCode (has_construct_function = false)]
		protected OutputCsv ();
		public bool write_eol ();
		public bool write_field (string field, size_t len);
		[NoAccessorMethod]
		public string eol { owned get; set construct; }
		[NoAccessorMethod]
		public string quote { owned get; set construct; }
		[NoAccessorMethod]
		public Gsf.OutputCsvQuotingMode quoting_mode { get; set construct; }
		[NoAccessorMethod]
		public bool quoting_on_whitespace { get; set; }
		[NoAccessorMethod]
		public string quoting_triggers { owned get; set; }
		[NoAccessorMethod]
		public string separator { owned get; set construct; }
		[NoAccessorMethod]
		public Gsf.Output sink { owned get; set; }
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_output_gzip_get_type ()")]
	public class OutputGZip : Gsf.Output {
		[CCode (has_construct_function = false, type = "GsfOutput*")]
		public OutputGZip (Gsf.Output sink) throws GLib.Error;
		[NoAccessorMethod]
		public bool raw { get; construct; }
		[NoAccessorMethod]
		public Gsf.Output sink { owned get; construct; }
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_output_gio_get_type ()")]
	public class OutputGio : Gsf.Output {
		[CCode (has_construct_function = false, type = "GsfOutput*")]
		public OutputGio (GLib.File file);
		[CCode (has_construct_function = false, type = "GsfOutput*")]
		public OutputGio.for_path (string path) throws GLib.Error;
		[CCode (has_construct_function = false, type = "GsfOutput*")]
		public OutputGio.for_uri (string uri) throws GLib.Error;
	}
	[CCode (cheader_filename = "gsf/gsf.h", lower_case_csuffix = "output_iochannel", type_id = "gsf_output_iochannel_get_type ()")]
	public class OutputIOChannel : Gsf.Output {
		[CCode (has_construct_function = false, type = "GsfOutput*")]
		public OutputIOChannel (GLib.IOChannel channel);
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_output_iconv_get_type ()")]
	public class OutputIconv : Gsf.Output {
		[CCode (has_construct_function = false, type = "GsfOutput*")]
		public OutputIconv (Gsf.Output sink, string dst, string src);
		[NoAccessorMethod]
		public string fallback { owned get; set; }
		[NoAccessorMethod]
		public string input_charset { owned get; construct; }
		[NoAccessorMethod]
		public string output_charset { owned get; construct; }
		[NoAccessorMethod]
		public Gsf.Output sink { owned get; construct; }
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_output_memory_get_type ()")]
	public class OutputMemory : Gsf.Output {
		[CCode (has_construct_function = false, type = "GsfOutput*")]
		public OutputMemory ();
		[CCode (array_length = false)]
		public unowned uint8[]? get_bytes ();
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_output_stdio_get_type ()")]
	public class OutputStdio : Gsf.Output {
		[CCode (has_construct_function = false, type = "GsfOutput*")]
		public OutputStdio (string filename) throws GLib.Error;
		[CCode (has_construct_function = false, type = "GsfOutput*")]
		public OutputStdio.FILE (string filename, owned void* file, bool keep_open);
		[CCode (has_construct_function = false, type = "GsfOutput*")]
		public OutputStdio.full (string filename, ...) throws GLib.Error;
		[CCode (has_construct_function = false, type = "GsfOutput*")]
		public OutputStdio.valist (string filename, GLib.Error err, string first_property_name, va_list var_args);
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_shared_memory_get_type ()")]
	public class SharedMemory : GLib.Object {
		public void* buf;
		public bool needs_free;
		public bool needs_unmap;
		public Gsf.off_t size;
		[CCode (has_construct_function = false)]
		public SharedMemory (void* buf, Gsf.off_t size, bool needs_free);
		[CCode (cname = "gsf_shared_memory_mmapped_new", has_construct_function = false)]
		public SharedMemory.mmapped_new (void* buf, Gsf.off_t size);
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_structured_blob_get_type ()")]
	public class StructuredBlob : Gsf.Infile {
		[CCode (has_construct_function = false)]
		protected StructuredBlob ();
		public static Gsf.StructuredBlob read (Gsf.Input input);
		public bool write (Gsf.Outfile container);
	}
	[CCode (cheader_filename = "gsf/gsf.h", copy_function = "g_boxed_copy", free_function = "g_boxed_free", type_id = "gsf_timestamp_get_type ()")]
	[Compact]
	public class Timestamp {
		public GLib.Date date;
		public long seconds;
		public weak GLib.StringBuilder time_zone;
		public uint32 timet;
		[CCode (has_construct_function = false)]
		public Timestamp ();
		public string as_string ();
		public Gsf.Timestamp copy ();
		public bool equal (Gsf.Timestamp b);
		[DestroysInstance]
		public void free ();
		public uint hash ();
		[Version (since = "1.14.24")]
		public int load_from_string (string spec);
		public void set_time (uint64 t);
		[Version (since = "1.14.24")]
		public void to_value (GLib.Value value);
	}
	[CCode (cheader_filename = "gsf/gsf.h", has_type_id = false)]
	[Compact]
	public class XMLBlob {
	}
	[CCode (cheader_filename = "gsf/gsf.h", has_type_id = false)]
	[Compact]
	public class XMLIn {
		public weak GLib.StringBuilder content;
		public weak Gsf.XMLInDoc doc;
		public weak Gsf.XMLInNode node;
		public weak GLib.SList<void*> node_stack;
		public void* user_state;
		public unowned string? check_ns (string str, uint ns_id);
		public unowned Gsf.Input get_input ();
		public bool namecmp (string str, uint ns_id, string name);
		public void push_state (Gsf.XMLInDoc doc, void* new_state, Gsf.XMLInExtDtor dtor, [CCode (array_length = false)] string[] attrs);
		public void set_silent_unknowns (bool silent);
	}
	[CCode (cheader_filename = "gsf/gsf.h", copy_function = "g_boxed_copy", free_function = "g_boxed_free", type_id = "gsf_xml_in_doc_get_type ()")]
	[Compact]
	public class XMLInDoc {
		[CCode (has_construct_function = false)]
		public XMLInDoc ([CCode (array_length = false, array_null_terminated = true)] Gsf.XMLInNode[] nodes, [CCode (array_length = false, array_null_terminated = true)] Gsf.XMLInNS[] ns);
		public void add_nodes ([CCode (array_length = false, array_null_terminated = true)] Gsf.XMLInNode[] nodes);
		[DestroysInstance]
		public void free ();
		public bool parse (Gsf.Input input, void* user_state);
		public void set_unknown_handler (Gsf.XMLInUnknownFunc handler);
	}
	[CCode (cheader_filename = "gsf/gsf.h", copy_function = "g_boxed_copy", free_function = "g_boxed_free", type_id = "gsf_xml_in_ns_get_type ()")]
	[Compact]
	public class XMLInNS {
		public uint ns_id;
		public weak string uri;
	}
	[CCode (cheader_filename = "gsf/gsf.h", has_type_id = false)]
	[Compact]
	public class XMLInNode {
		public uint check_children_for_ns;
		public GLib.Callback end;
		public Gsf.XMLContent has_content;
		public weak string id;
		public weak string name;
		public int ns_id;
		public weak string parent_id;
		public uint share_children_with_parent;
		public GLib.Callback start;
		[CCode (cname = "user_data.v_blob")]
		public void* user_data_v_blob;
		[CCode (cname = "user_data.v_bool")]
		public bool user_data_v_bool;
		[CCode (cname = "user_data.v_int")]
		public int user_data_v_int;
		[CCode (cname = "user_data.v_str")]
		public weak string user_data_v_str;
	}
	[CCode (cheader_filename = "gsf/gsf.h", type_id = "gsf_xml_out_get_type ()")]
	public class XMLOut : GLib.Object {
		public weak Gsf.Output output;
		[CCode (has_construct_function = false)]
		public XMLOut (Gsf.Output output);
		public void add_base64 (string? id, [CCode (array_length_cname = "len", array_length_pos = 2.1, array_length_type = "guint")] uint8[] data);
		public void add_bool (string? id, bool val);
		public void add_color (string? id, uint r, uint g, uint b);
		public void add_cstr (string? id, string? val_utf8);
		public void add_cstr_unchecked (string? id, string? val_utf8);
		public void add_enum (string? id, GLib.Type etype, int val);
		public void add_float (string? id, double val, int precision);
		public void add_gvalue (string? id, GLib.Value val);
		public void add_int (string? id, int val);
		public void add_uint (string? id, uint val);
		public unowned string end_element ();
		public unowned Gsf.Output? get_output ();
		public bool get_pretty_print ();
		public void set_doc_type (string type);
		public bool set_pretty_print (bool pp);
		public void simple_element (string id, string content);
		public void simple_float_element (string id, double val, int precision);
		public void simple_int_element (string id, int val);
		public void start_element (string id);
		public bool pretty_print { get; set; }
		[NoAccessorMethod]
		public Gsf.Output sink { owned get; construct; }
	}
	[CCode (cheader_filename = "gsf/gsf.h", cname = "gsf_off_t")]
	[GIR (name = "gsf_off_t")]
	[SimpleType]
	public struct off_t : int64 {
	}
	[CCode (cheader_filename = "gsf/gsf.h", cprefix = "GSF_CLIP_FORMAT_", has_type_id = false)]
	public enum ClipFormat {
		WINDOWS_CLIPBOARD,
		MACINTOSH_CLIPBOARD,
		GUID,
		NO_DATA,
		CLIPBOARD_FORMAT_NAME,
		UNKNOWN
	}
	[CCode (cheader_filename = "gsf/gsf.h", cprefix = "GSF_CLIP_FORMAT_WINDOWS_", has_type_id = false)]
	public enum ClipFormatWindows {
		ERROR,
		UNKNOWN,
		METAFILE,
		DIB,
		ENHANCED_METAFILE
	}
	[CCode (cheader_filename = "gsf/gsf.h", cprefix = "GSF_OUTPUT_CSV_QUOTING_MODE_", type_id = "gsf_output_csv_quoting_mode_get_type ()")]
	public enum OutputCsvQuotingMode {
		NEVER,
		AUTO,
		ALWAYS
	}
	[CCode (cheader_filename = "gsf/gsf.h", cprefix = "GSF_XML_", has_type_id = false)]
	public enum XMLContent {
		NO_CONTENT,
		CONTENT,
		SHARED_CONTENT,
		@2ND
	}
	[CCode (cheader_filename = "gsf/gsf.h", cprefix = "GSF_ZIP_", has_type_id = false)]
	public enum ZipCompressionMethod {
		STORED,
		SHRUNK,
		[CCode (cname = "GSF_ZIP_REDUCEDx1")]
		REDUCEDX1,
		[CCode (cname = "GSF_ZIP_REDUCEDx2")]
		REDUCEDX2,
		[CCode (cname = "GSF_ZIP_REDUCEDx3")]
		REDUCEDX3,
		[CCode (cname = "GSF_ZIP_REDUCEDx4")]
		REDUCEDX4,
		IMPLODED,
		TOKENIZED,
		DEFLATED,
		DEFLATED_BETTER,
		IMPLODED_BETTER
	}
	[CCode (cheader_filename = "gsf/gsf.h", cprefix = "GSF_ERROR_")]
	public errordomain Error {
		OUT_OF_MEMORY,
		INVALID_DATA;
		public static GLib.Quark quark ();
	}
	[CCode (cheader_filename = "gsf/gsf.h", instance_pos = 2.9)]
	public delegate void OpenPkgIter (Gsf.Input opkg, Gsf.OpenPkgRel rel);
	[CCode (cheader_filename = "gsf/gsf.h", has_target = false)]
	public delegate void XMLInExtDtor (Gsf.XMLIn xin, void* old_state);
	[CCode (cheader_filename = "gsf/gsf.h", has_target = false)]
	public delegate bool XMLInUnknownFunc (Gsf.XMLIn xin, [CCode (type = "const xmlChar*")] string elem, [CCode (array_length = false, type = "const xmlChar**")] string[] attrs);
	[CCode (cheader_filename = "gsf/gsf.h", has_target = false)]
	public delegate bool XMLProbeFunc ([CCode (type = "const xmlChar*")] string name, [CCode (type = "const xmlChar*")] string prefix, [CCode (type = "const xmlChar*")] string URI, [CCode (array_length_cname = "nb_namespaces", array_length_pos = 3.5, type = "const xmlChar**")] string[] namespaces, int nb_defaulted, [CCode (array_length_cname = "nb_attributes", array_length_pos = 4.5, type = "const xmlChar**")] string[] attributes);
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_BYTE_COUNT")]
	public const string META_NAME_BYTE_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_CASE_SENSITIVE")]
	public const string META_NAME_CASE_SENSITIVE;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_CATEGORY")]
	public const string META_NAME_CATEGORY;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_CELL_COUNT")]
	public const string META_NAME_CELL_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_CHARACTER_COUNT")]
	public const string META_NAME_CHARACTER_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_CODEPAGE")]
	public const string META_NAME_CODEPAGE;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_COMPANY")]
	public const string META_NAME_COMPANY;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_CREATOR")]
	public const string META_NAME_CREATOR;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_DATE_CREATED")]
	public const string META_NAME_DATE_CREATED;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_DATE_MODIFIED")]
	public const string META_NAME_DATE_MODIFIED;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_DESCRIPTION")]
	public const string META_NAME_DESCRIPTION;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_DICTIONARY")]
	public const string META_NAME_DICTIONARY;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_DOCUMENT_PARTS")]
	public const string META_NAME_DOCUMENT_PARTS;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_EDITING_DURATION")]
	public const string META_NAME_EDITING_DURATION;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_GENERATOR")]
	public const string META_NAME_GENERATOR;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_HEADING_PAIRS")]
	public const string META_NAME_HEADING_PAIRS;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_HIDDEN_SLIDE_COUNT")]
	public const string META_NAME_HIDDEN_SLIDE_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_IMAGE_COUNT")]
	public const string META_NAME_IMAGE_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_INITIAL_CREATOR")]
	public const string META_NAME_INITIAL_CREATOR;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_KEYWORD")]
	public const string META_NAME_KEYWORD;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_KEYWORDS")]
	public const string META_NAME_KEYWORDS;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_LANGUAGE")]
	public const string META_NAME_LANGUAGE;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_LAST_PRINTED")]
	public const string META_NAME_LAST_PRINTED;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_LAST_SAVED_BY")]
	public const string META_NAME_LAST_SAVED_BY;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_LINE_COUNT")]
	public const string META_NAME_LINE_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_LINKS_DIRTY")]
	public const string META_NAME_LINKS_DIRTY;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_LOCALE_SYSTEM_DEFAULT")]
	public const string META_NAME_LOCALE_SYSTEM_DEFAULT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_MANAGER")]
	public const string META_NAME_MANAGER;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_MM_CLIP_COUNT")]
	public const string META_NAME_MM_CLIP_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_MSOLE_UNKNOWN_17")]
	public const string META_NAME_MSOLE_UNKNOWN_17;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_MSOLE_UNKNOWN_18")]
	public const string META_NAME_MSOLE_UNKNOWN_18;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_MSOLE_UNKNOWN_19")]
	public const string META_NAME_MSOLE_UNKNOWN_19;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_MSOLE_UNKNOWN_20")]
	public const string META_NAME_MSOLE_UNKNOWN_20;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_MSOLE_UNKNOWN_21")]
	public const string META_NAME_MSOLE_UNKNOWN_21;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_MSOLE_UNKNOWN_22")]
	public const string META_NAME_MSOLE_UNKNOWN_22;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_MSOLE_UNKNOWN_23")]
	public const string META_NAME_MSOLE_UNKNOWN_23;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_NOTE_COUNT")]
	public const string META_NAME_NOTE_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_OBJECT_COUNT")]
	public const string META_NAME_OBJECT_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_PAGE_COUNT")]
	public const string META_NAME_PAGE_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_PARAGRAPH_COUNT")]
	public const string META_NAME_PARAGRAPH_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_PRESENTATION_FORMAT")]
	public const string META_NAME_PRESENTATION_FORMAT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_PRINTED_BY")]
	public const string META_NAME_PRINTED_BY;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_PRINT_DATE")]
	public const string META_NAME_PRINT_DATE;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_REVISION_COUNT")]
	public const string META_NAME_REVISION_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_SCALE")]
	public const string META_NAME_SCALE;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_SECURITY")]
	public const string META_NAME_SECURITY;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_SLIDE_COUNT")]
	public const string META_NAME_SLIDE_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_SPREADSHEET_COUNT")]
	public const string META_NAME_SPREADSHEET_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_SUBJECT")]
	public const string META_NAME_SUBJECT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_TABLE_COUNT")]
	public const string META_NAME_TABLE_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_TEMPLATE")]
	public const string META_NAME_TEMPLATE;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_THUMBNAIL")]
	public const string META_NAME_THUMBNAIL;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_TITLE")]
	public const string META_NAME_TITLE;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_META_NAME_WORD_COUNT")]
	public const string META_NAME_WORD_COUNT;
	[CCode (cheader_filename = "gsf/gsf.h", cname = "GSF_PARAM_STATIC")]
	public const int PARAM_STATIC;
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static size_t base64_decode_simple ([CCode (array_length = false)] uint8[] data, size_t len);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static size_t base64_decode_step ([CCode (array_length = false)] uint8[] @in, size_t len, [CCode (array_length = false)] uint8[] @out, ref int state, ref uint save);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static size_t base64_encode_close ([CCode (array_length_cname = "inlen", array_length_pos = 1.5, array_length_type = "gsize")] uint8[] @in, bool break_lines, [CCode (array_length = false)] uint8[] @out, ref int state, ref uint save);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static uint8 base64_encode_simple ([CCode (array_length = false)] uint8[] data, size_t len);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static size_t base64_encode_step ([CCode (array_length = false)] uint8[] @in, size_t len, bool break_lines, [CCode (array_length = false)] uint8[] @out, ref int state, ref uint save);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static bool debug_flag (string flag);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static void doc_meta_dump (Gsf.DocMetaData meta);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static unowned string extension_pointer (string path);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static string filename_to_utf8 (string filename, bool quoted);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static void init ();
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static void init_dynamic (GLib.TypeModule module);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static double le_get_double (void* p);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static float le_get_float (void* p);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static uint64 le_get_guint64 (void* p);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static void le_set_double (void* p, double d);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static void le_set_float (void* p, float f);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static void mem_dump (uint8 ptr, size_t len);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static uint msole_codepage_to_lid (int codepage);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static int msole_iconv_win_codepage ();
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static GLib.ByteArray msole_inflate (Gsf.Input input, Gsf.off_t offset);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static unowned string msole_language_for_lid (uint lid);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static uint msole_lid_for_language (string? lang);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static int msole_lid_to_codepage (uint lid);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static string msole_lid_to_codepage_str (uint lid);
	[CCode (cheader_filename = "gsf/gsf.h")]
	[Version (since = "1.14.24")]
	public static unowned Gsf.XMLInNS odf_get_ns ();
	[CCode (cheader_filename = "gsf/gsf.h")]
	[Version (since = "1.14.24")]
	public static short odf_get_version ();
	[CCode (cheader_filename = "gsf/gsf.h")]
	[Version (since = "1.14.24")]
	public static unowned string odf_get_version_string ();
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static int open_pkg_error_id ();
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static void open_pkg_foreach_rel (Gsf.Input opkg, Gsf.OpenPkgIter func);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static Gsf.Input open_pkg_open_rel (Gsf.Input opkg, Gsf.OpenPkgRel rel) throws GLib.Error;
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static Gsf.Input open_pkg_open_rel_by_id (Gsf.Input opkg, string id) throws GLib.Error;
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static Gsf.Input open_pkg_open_rel_by_type (Gsf.Input opkg, string type) throws GLib.Error;
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static GLib.Error open_pkg_parse_rel_by_id (Gsf.XMLIn xin, string id, Gsf.XMLInNode dtd, Gsf.XMLInNS ns);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static unowned GLib.Parameter? property_settings_find (string name, [CCode (array_length_cname = "n_params", array_length_pos = 2.1, array_length_type = "gsize")] GLib.Parameter[] @params);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static void property_settings_free ([CCode (array_length_cname = "n_params", array_length_pos = 1.1, array_length_type = "gsize")] owned GLib.Parameter[] @params);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static void shutdown ();
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static void shutdown_dynamic (GLib.TypeModule module);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static GLib.ValueArray value_get_docprop_varray (GLib.Value value);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static unowned Gsf.DocPropVector value_get_docprop_vector (GLib.Value value);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static uint8 vba_inflate (Gsf.Input input, Gsf.off_t offset, int size, bool add_null_terminator);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static int xmlDocFormatDump (Gsf.Output output, Xml.Doc cur, string? encoding, bool format);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static bool xml_gvalue_from_str (GLib.Value res, GLib.Type t, string str);
	[CCode (cheader_filename = "gsf/gsf.h")]
	public static bool xml_probe (Gsf.Input input, Gsf.XMLProbeFunc func);
}