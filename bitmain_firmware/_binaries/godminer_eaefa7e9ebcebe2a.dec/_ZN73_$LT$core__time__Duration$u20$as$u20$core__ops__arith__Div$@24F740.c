int __fastcall <core::time::Duration as core::ops::arith::Div<u32>>::div(
        unsigned int a1,
        unsigned int a2,
        int a3,
        unsigned int a4)
{
  __int64 v8; // kr18_8
  int v9; // r6
  unsigned int v10; // kr10_4
  int result; // r0
  _DWORD v12[6]; // [sp+4h] [bp-18h] BYREF

  if ( !a4 )
    core::option::expect_failed();
  v8 = sub_26C8C0(a1, a2, a4, 0);
  v9 = sub_26C8C0(1000000000 * (a1 - v8 * a4), (1000000000 * (__PAIR64__(a2, a1) - v8 * a4)) >> 32, a4, 0);
  v10 = sub_26CF70(a3, a4) + v9;
  result = v8 + v10 / 0x3B9ACA00;
  if ( (__CFADD__((_DWORD)v8, v10 / 0x3B9ACA00) + (unsigned __int64)HIDWORD(v8)) >> 32 == 1 )
  {
    v12[2] = &off_2E4500;
    v12[3] = 1;
    v12[5] = 0;
    v12[0] = 0;
    v12[4] = aLibraryCoreSrc;
    core::panicking::panic_fmt((int)v12, (int)&off_2E4508);
  }
  return result;
}
