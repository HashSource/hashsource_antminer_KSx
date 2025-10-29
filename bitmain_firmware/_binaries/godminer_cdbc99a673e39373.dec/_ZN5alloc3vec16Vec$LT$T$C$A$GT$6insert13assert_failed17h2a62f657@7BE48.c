void __fastcall __noreturn alloc::vec::Vec<T,A>::insert::assert_failed(int a1, int a2)
{
  int v2; // [sp+0h] [bp-30h] BYREF
  int v3; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v4[6]; // [sp+8h] [bp-28h] BYREF
  _DWORD v5[4]; // [sp+20h] [bp-10h] BYREF

  v2 = a1;
  v3 = a2;
  v4[3] = 3;
  v4[5] = 2;
  v4[4] = v5;
  v4[2] = &off_2CF8DC;
  v4[0] = 0;
  v5[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v5[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v5[0] = &v2;
  v5[2] = &v3;
  core::panicking::panic_fmt(v4, &off_2CF8F4);
}
