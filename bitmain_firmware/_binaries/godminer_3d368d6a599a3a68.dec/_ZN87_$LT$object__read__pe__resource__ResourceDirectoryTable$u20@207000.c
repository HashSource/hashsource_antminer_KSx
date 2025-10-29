int __fastcall <object::read::pe::resource::ResourceDirectoryTable as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v4 = a1;
  v3 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aResourcedirect_0,
           22,
           (int)&unk_2A89F2,
           6,
           (int)&v3,
           (int)&off_2E0408,
           &unk_2A8A4E,
           7,
           &v4,
           &off_2E0418);
}
