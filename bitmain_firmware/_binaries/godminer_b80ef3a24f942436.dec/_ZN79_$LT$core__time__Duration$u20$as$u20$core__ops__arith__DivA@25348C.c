unsigned int __fastcall <core::time::Duration as core::ops::arith::DivAssign<u32>>::div_assign(
        unsigned int *a1,
        unsigned int a2)
{
  __int64 v2; // r6
  unsigned int v3; // r8
  __int64 v6; // r0
  int v7; // r9
  __int64 v8; // r10
  unsigned int v9; // r0
  __int64 v10; // kr18_8
  unsigned int result; // r0
  _DWORD v12[6]; // [sp+4h] [bp-18h] BYREF

  if ( !a2 )
    core::option::expect_failed();
  v2 = *(_QWORD *)a1;
  v3 = a1[2];
  v6 = sub_2704F8(*a1, a1[1], a2, 0);
  v7 = v6;
  v8 = HIDWORD(v6);
  LODWORD(v2) = sub_2704F8(1000000000 * (v2 - v6 * a2), (1000000000 * (v2 - v6 * (unsigned __int64)a2)) >> 32, a2, 0);
  v9 = sub_270BA8(v3, a2) + v2;
  v10 = v8 + __CFADD__(v7, v9 / 0x3B9ACA00);
  if ( HIDWORD(v10) == 1 )
  {
    v12[2] = &off_2EF500;
    v12[3] = 1;
    v12[5] = 0;
    v12[0] = 0;
    v12[4] = aLibraryCoreSrc;
    core::panicking::panic_fmt((int)v12, (int)&off_2EF508);
  }
  *a1 = v7 + v9 / 0x3B9ACA00;
  a1[1] = v10;
  result = v9 % 0x3B9ACA00;
  a1[2] = result;
  return result;
}
