void __fastcall __noreturn alloc::vec::Vec<T,A>::remove::assert_failed(int a1, int a2, int a3)
{
  int v3; // [sp+0h] [bp-30h] BYREF
  int v4; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v5[6]; // [sp+8h] [bp-28h] BYREF
  _DWORD v6[4]; // [sp+20h] [bp-10h] BYREF

  v3 = a1;
  v4 = a2;
  v5[3] = 3;
  v5[5] = 2;
  v5[4] = v6;
  v5[2] = &off_2E2904;
  v5[0] = 0;
  v6[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v6[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v6[0] = &v3;
  v6[2] = &v4;
  core::panicking::panic_fmt(v5, a3);
}
