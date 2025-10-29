int __fastcall <object::read::ObjectMap as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 12;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aObjectmap,
           9,
           (int)&unk_2A7CFD,
           7,
           (int)&v3,
           (int)&off_2DF498,
           &unk_2A7D21,
           7,
           &v4,
           &off_2DF4A8);
}
