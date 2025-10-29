unsigned int *__fastcall <core::time::Duration as core::ops::arith::SubAssign>::sub_assign(
        unsigned int *result,
        int a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  _BOOL1 v5; // cf
  __int64 v6; // r2
  _BOOL1 v7; // off
  unsigned int v8; // r1
  unsigned int v9; // r1
  __int64 v10; // r2
  _DWORD v11[6]; // [sp+0h] [bp-18h] BYREF

  v5 = *result >= a3;
  LODWORD(v6) = *result - a3;
  v7 = v5;
  v5 = __CFSUB__(result[1], a4, v5);
  HIDWORD(v6) = result[1] - (a4 + !v7);
  if ( !v5 )
LABEL_9:
    core::option::expect_failed();
  v8 = result[2];
  if ( v8 < a5 )
  {
    if ( !v6 )
      goto LABEL_9;
    v8 += 1000000000;
    --v6;
  }
  v9 = v8 - a5;
  v5 = __CFADD__(__CFADD__((_DWORD)v6, v9 / 0x3B9ACA00), HIDWORD(v6));
  v10 = v6 + v9 / 0x3B9ACA00;
  if ( v5 )
  {
    v11[2] = &off_2E5500;
    v11[3] = 1;
    v11[5] = 0;
    v11[0] = 0;
    v11[4] = aLibraryCoreSrc;
    core::panicking::panic_fmt((int)v11, (int)&off_2E5508);
  }
  *(_QWORD *)result = v10;
  result[2] = v9 % 0x3B9ACA00;
  return result;
}
