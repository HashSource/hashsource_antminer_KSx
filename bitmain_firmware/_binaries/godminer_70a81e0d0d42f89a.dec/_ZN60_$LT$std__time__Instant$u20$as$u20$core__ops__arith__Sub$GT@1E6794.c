__int64 __fastcall <std::time::Instant as core::ops::arith::Sub>::sub(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  __int64 result; // r0
  int v8; // r2
  _DWORD v9[4]; // [sp+0h] [bp-38h] BYREF
  _DWORD v10[4]; // [sp+10h] [bp-28h] BYREF
  _QWORD v11[2]; // [sp+20h] [bp-18h] BYREF
  int v12; // [sp+30h] [bp-8h]

  v9[0] = a1;
  v9[1] = a2;
  v9[2] = a3;
  v10[1] = a6;
  v10[0] = a5;
  v10[2] = a7;
  sub_1F5DAC(v11, v9, v10);
  result = v11[1];
  v8 = v12;
  if ( v11[0] )
    v8 = 1000000000;
  if ( v8 == 1000000000 )
    return 0;
  return result;
}
