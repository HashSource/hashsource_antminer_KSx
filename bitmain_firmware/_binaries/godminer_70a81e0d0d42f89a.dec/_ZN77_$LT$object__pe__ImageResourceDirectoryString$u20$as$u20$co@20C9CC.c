int __fastcall <object::pe::ImageResourceDirectoryString as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a1;
  return ((int (__fastcall *)(int, const char *, int, const char *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field1_finish)(
           a2,
           aImageresourced_1,
           28,
           aLength,
           6,
           &v3,
           &off_2E2110);
}
