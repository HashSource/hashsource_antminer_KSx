int __fastcall <object::read::pe::data_directory::DataDirectories as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a1;
  return ((int (__fastcall *)(int, const char *, int, void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field1_finish)(
           a2,
           aDatadirectorie,
           15,
           &unk_2A8A4E,
           7,
           &v3,
           &off_2E0378);
}
