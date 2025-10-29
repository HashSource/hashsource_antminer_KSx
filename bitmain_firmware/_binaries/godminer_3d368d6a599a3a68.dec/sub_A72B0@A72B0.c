int __fastcall sub_A72B0(int a1, int a2)
{
  int v2; // r4
  int v3; // lr
  _DWORD *v4; // r12
  int v5; // t1
  int result; // r0
  _DWORD v7[15]; // [sp+0h] [bp+0h] BYREF

  v2 = a2 - *(_DWORD *)(a1 + 92);
  v7[0] = 15;
  v7[1] = 8;
  v7[2] = 3;
  v7[3] = -2;
  v3 = 0;
  v4 = v7;
  v7[4] = -8;
  v7[5] = -13;
  v7[6] = -18;
  v7[7] = 10;
  v7[8] = 20;
  v7[9] = 30;
  v7[10] = 40;
  v7[11] = 60;
  v7[12] = 80;
  v7[13] = 100;
  while ( 1 )
  {
    v5 = v4[1];
    ++v4;
    if ( v5 < v2 && *(v4 - 1) >= v2 )
      break;
    ++v3;
  }
  result = v7[v3 + 7];
  if ( v2 > 15 )
    return 0;
  if ( v2 < -17 )
    return 100;
  if ( result <= 0 )
    return 0;
  if ( result >= 100 )
    return 100;
  return result;
}
