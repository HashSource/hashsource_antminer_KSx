__int64 __fastcall std::time::SystemTime::elapsed(int a1, int *a2)
{
  int v4; // r2
  int v5; // r3
  int v6; // r6
  int v7; // r5
  __int64 result; // r0
  int v9; // r2
  _BOOL4 v10; // r6
  __int64 v11; // [sp+0h] [bp-38h] BYREF
  int v12; // [sp+8h] [bp-30h]
  _DWORD v13[4]; // [sp+10h] [bp-28h] BYREF
  __int64 v14; // [sp+20h] [bp-18h] BYREF
  __int64 v15; // [sp+28h] [bp-10h]
  int v16; // [sp+30h] [bp-8h]

  v11 = sub_1F5F2C(0);
  v12 = v4;
  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  v13[1] = v6;
  v13[0] = v5;
  v13[2] = v7;
  sub_1F5DAC(&v14, &v11, v13);
  result = v15;
  v9 = v16;
  v10 = v14 != 0;
  *(_QWORD *)(a1 + 8) = v15;
  *(_DWORD *)(a1 + 16) = v9;
  *(_QWORD *)a1 = v10;
  return result;
}
