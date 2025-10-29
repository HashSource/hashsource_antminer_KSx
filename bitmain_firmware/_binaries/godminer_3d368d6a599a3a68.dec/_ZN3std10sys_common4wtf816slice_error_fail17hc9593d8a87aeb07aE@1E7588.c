void __fastcall __noreturn std::sys_common::wtf8::slice_error_fail(int a1, int a2, unsigned int a3, unsigned int a4)
{
  _DWORD v4[2]; // [sp+0h] [bp-40h] BYREF
  unsigned int v5; // [sp+8h] [bp-38h] BYREF
  unsigned int v6; // [sp+Ch] [bp-34h] BYREF
  _DWORD v7[6]; // [sp+10h] [bp-30h] BYREF
  _DWORD v8[6]; // [sp+28h] [bp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  v5 = a3;
  v6 = a4;
  if ( a3 > a4 )
    core::panicking::panic((int)aAssertionFaile_1, 30, (int)&off_2DF23C);
  v7[3] = 4;
  v7[5] = 3;
  v7[4] = v8;
  v8[5] = sub_1AC15C;
  v7[0] = 0;
  v8[4] = v4;
  v8[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v8[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v8[0] = &v5;
  v8[2] = &v6;
  v7[2] = &off_2DF24C;
  core::panicking::panic_fmt((int)v7, (int)&off_2DF26C);
}
