int __fastcall <std::fs::DirBuilder as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
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
           5u,
           (int)&v3,
           (int)&off_2EA5E0,
           (int)&unk_2B1A0A,
           9u,
           (int)&v4,
           (int)&off_2EA5F0);
}
