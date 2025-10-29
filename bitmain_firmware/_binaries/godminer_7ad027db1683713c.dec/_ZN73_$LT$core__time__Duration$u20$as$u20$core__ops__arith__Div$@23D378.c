int __fastcall <core::time::Duration as core::ops::arith::Div<u32>>::div(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v8; // r0
  __int64 v9; // kr18_8
  unsigned int v10; // r6
  unsigned int v11; // kr10_4
  int result; // r0
  _DWORD v13[6]; // [sp+4h] [bp-18h] BYREF

  if ( !a4 )
    core::option::expect_failed((int)aDivideByZeroEr, 53, (int)&off_2CF548);
  LODWORD(v8) = sub_25A4F8(a1, a2, a4);
  v9 = v8;
  v10 = sub_25A4F8(1000000000 * (a1 - v8 * a4), (1000000000 * (__PAIR64__(a2, a1) - v8 * a4)) >> 32, a4);
  v11 = sub_25ABA8(a3, a4) + v10;
  result = v9 + v11 / 0x3B9ACA00;
  if ( (__CFADD__((_DWORD)v9, v11 / 0x3B9ACA00) + (unsigned __int64)HIDWORD(v9)) >> 32 == 1 )
  {
    v13[2] = &off_2CF500;
    v13[3] = 1;
    v13[5] = 0;
    v13[0] = 0;
    v13[4] = aLibraryCoreSrc;
    core::panicking::panic_fmt((int)v13, (int)&off_2CF508);
  }
  return result;
}
