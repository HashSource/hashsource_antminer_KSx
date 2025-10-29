int __fastcall <object::read::Export as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v4 = a1;
  v3 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aExport,
           6,
           (int)aName_1,
           4,
           (int)&v3,
           (int)&off_2CC158,
           &unk_294AB1,
           7,
           &v4,
           &off_2CC338);
}
