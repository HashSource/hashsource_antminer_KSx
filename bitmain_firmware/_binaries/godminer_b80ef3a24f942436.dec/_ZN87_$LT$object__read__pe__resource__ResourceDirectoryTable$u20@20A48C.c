int __fastcall <object::read::pe::resource::ResourceDirectoryTable as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v4 = a1;
  v3 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aResourcedirect_0,
           22,
           (int)&unk_2B3852,
           6u,
           (int)&v3,
           (int)&off_2EB408,
           (int)&unk_2B38AE,
           7u,
           (int)&v4,
           (int)&off_2EB418);
}
