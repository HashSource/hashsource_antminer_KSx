__int64 __fastcall std::time::Instant::elapsed(int *a1)
{
  int v2; // r2
  int v3; // r12
  int v4; // r3
  int v5; // r4
  __int64 result; // r0
  int v7; // r2
  __int64 v8; // [sp+0h] [bp-38h] BYREF
  int v9; // [sp+8h] [bp-30h]
  _DWORD v10[4]; // [sp+10h] [bp-28h] BYREF
  _QWORD v11[2]; // [sp+20h] [bp-18h] BYREF
  int v12; // [sp+30h] [bp-8h]

  v8 = sub_1F47DC(1);
  v9 = v2;
  v3 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  v10[1] = v4;
  v10[0] = v3;
  v10[2] = v5;
  sub_1F465C(v11, &v8, v10);
  result = v11[1];
  v7 = v12;
  if ( v11[0] )
    v7 = 1000000000;
  if ( v7 == 1000000000 )
    return 0;
  return result;
}
