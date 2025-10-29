int __fastcall <std::fs::DirBuilder as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aDirbuilder,
           10,
           (int)aInner,
           5,
           (int)&v3,
           (int)&off_2DF5E0,
           &unk_2A6BAA,
           9,
           &v4,
           &off_2DF5F0);
}
