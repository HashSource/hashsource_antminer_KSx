int __fastcall <object::pe::ImageResourceDirectoryEntry as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aImageresourced_0,
           27,
           (int)&unk_29587F,
           10,
           (int)&v3,
           (int)&off_2CC638,
           &unk_295889,
           27,
           &v4,
           &off_2CC638);
}
