int __fastcall <alloc::ffi::c_str::IntoStringError as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aIntostringerro,
           15,
           (int)&unk_2BDD66,
           5u,
           (int)&v3,
           (int)&off_2EE9A4,
           (int)&unk_2BDD6B,
           5u,
           (int)&v4,
           (int)&off_2EE9B4);
}
