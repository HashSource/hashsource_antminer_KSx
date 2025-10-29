int __fastcall <alloc::ffi::c_str::FromVecWithNulError as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aFromvecwithnul,
           19,
           (int)&unk_2B3148,
           10,
           (int)&v3,
           (int)&off_2E4994,
           &unk_2B3152,
           5,
           &v4,
           &off_2E4984);
}
