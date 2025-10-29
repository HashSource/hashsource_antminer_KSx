int __fastcall sub_AA130(int a1, int a2)
{
  int v2; // lr
  int v3; // r1
  _DWORD *v4; // r3
  int v5; // r0
  int v6; // r1
  int v7; // t1
  int v8; // r2
  int result; // r0
  _DWORD v10[25]; // [sp+0h] [bp-64h] BYREF

  v2 = a2;
  v10[0] = 65;
  v10[1] = 43;
  v10[2] = 37;
  v10[3] = 32;
  v10[4] = 17;
  v10[5] = 15;
  v10[6] = 12;
  v10[7] = 7;
  v10[8] = -3;
  v10[9] = -8;
  v10[10] = -13;
  v10[11] = -18;
  v10[12] = -10;
  v10[13] = -10;
  v10[14] = -10;
  v10[15] = 0;
  v10[16] = 10;
  v10[17] = 20;
  v10[18] = 30;
  v10[19] = 40;
  if ( dword_2F074C > a2 )
    v2 = a2 + 1;
  v10[20] = 60;
  v10[21] = 70;
  v10[22] = 80;
  v10[23] = 100;
  if ( dword_2F074C < a2 )
    --v2;
  v3 = *(_DWORD *)(a1 + 88);
  v4 = v10;
  v5 = 0;
  dword_2F074C = v2;
  v6 = v2 - v3;
  while ( 1 )
  {
    v7 = v4[1];
    ++v4;
    v8 = v5 + 1;
    if ( v7 < v6 && *(v4 - 1) >= v6 )
      break;
    ++v5;
    if ( v8 == 11 )
    {
      result = 0;
      goto LABEL_10;
    }
  }
  result = v10[v5 + 12];
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
