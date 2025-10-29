int __fastcall sub_A2E58(int a1, int a2)
{
  int v2; // lr
  int v3; // r1
  _DWORD *v4; // r3
  int v5; // r0
  int v6; // r1
  int v7; // t1
  int v8; // r2
  int result; // r0
  _DWORD v10[23]; // [sp+0h] [bp-5Ch] BYREF

  v2 = a2;
  v10[0] = *(_DWORD *)"A";
  v10[1] = *(_DWORD *)"+";
  v10[2] = *(_DWORD *)"%";
  v10[3] = *(_DWORD *)" ";
  v10[4] = 17;
  v10[5] = 12;
  v10[6] = 7;
  v10[7] = -3;
  v10[8] = -8;
  v10[9] = -13;
  v10[10] = -18;
  v10[11] = -10;
  v10[12] = -10;
  v10[13] = -10;
  v10[14] = 0;
  v10[15] = 20;
  v10[16] = 30;
  v10[17] = 40;
  v10[18] = 60;
  if ( dword_2D0708 > a2 )
    v2 = a2 + 1;
  v10[19] = 70;
  v10[20] = 80;
  v10[21] = 100;
  if ( dword_2D0708 < a2 )
    --v2;
  v3 = *(_DWORD *)(a1 + 88);
  v4 = v10;
  v5 = 0;
  dword_2D0708 = v2;
  v6 = v2 - v3;
  while ( 1 )
  {
    v7 = v4[1];
    ++v4;
    v8 = v5 + 1;
    if ( v7 < v6 && *(v4 - 1) >= v6 )
      break;
    ++v5;
    if ( v8 == 10 )
    {
      result = 0;
      goto LABEL_10;
    }
  }
  result = v10[v5 + 11];
LABEL_10:
  if ( v6 > 65 )
    return -10;
  if ( v6 < -17 )
    return 100;
  if ( result >= 100 )
    result = 100;
  if ( result < -10 )
    return -10;
  return result;
}
