int __fastcall <core::time::Duration as core::ops::arith::Sub>::sub(
        unsigned __int64 a1,
        unsigned int a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  int v5; // r4
  bool v6; // cf
  _DWORD v8[6]; // [sp+0h] [bp-18h] BYREF

  v5 = a1 - a4;
  v6 = a1 >= a4;
  HIDWORD(a1) = (a1 - a4) >> 32;
  if ( !v6 )
LABEL_8:
    core::option::expect_failed((int)aOverflowWhenSu_0, 35, (int)&off_2CF528);
  if ( a2 < a5 )
  {
    if ( !(v5 | HIDWORD(a1)) )
      goto LABEL_8;
    --v5;
    a2 += 1000000000;
    HIDWORD(a1) -= a1 == a4;
  }
  LODWORD(a1) = v5 + (a2 - a5) / 0x3B9ACA00;
  if ( (__CFADD__(v5, (a2 - a5) / 0x3B9ACA00) + (unsigned __int64)HIDWORD(a1)) >> 32 == 1 )
  {
    v8[2] = &off_2CF500;
    v8[3] = 1;
    v8[5] = 0;
    v8[0] = 0;
    v8[4] = aLibraryCoreSrc;
    core::panicking::panic_fmt((int)v8, (int)&off_2CF508);
  }
  return a1;
}
