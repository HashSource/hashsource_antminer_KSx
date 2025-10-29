int __fastcall <alloc::ffi::c_str::FromVecWithNulError as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aFromvecwithnul,
           19,
           (int)&unk_2BDD48,
           0xAu,
           (int)&v3,
           (int)&off_2EE994,
           (int)&unk_2BDD52,
           5u,
           (int)&v4,
           (int)&off_2EE984);
}
