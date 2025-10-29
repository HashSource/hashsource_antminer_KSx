int __fastcall <std::sys::unix::fs::DirBuilder as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a1;
  return core::fmt::Formatter::debug_struct_field1_finish(
           a2,
           (int)aDirbuilder,
           10,
           (int)aModenullnoexit,
           4u,
           (int)&v3,
           (int)&off_2E91A0);
}
