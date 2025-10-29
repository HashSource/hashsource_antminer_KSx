int __fastcall sub_A9498(int a1, int a2)
{
  int v2; // lr
  int v3; // r1
  _DWORD *v4; // r3
  int v5; // r0
  int v6; // r1
  int v7; // t1
  int v8; // r2
  int v9; // r0
  _DWORD v11[25]; // [sp+0h] [bp-64h] BYREF

  v2 = a2;
  v11[0] = 71;
  v11[1] = 69;
  v11[2] = 65;
  v11[3] = 63;
  v11[4] = 54;
  v11[5] = 48;
  v11[6] = 45;
  v11[7] = 42;
  v11[8] = 40;
  v11[9] = 38;
  v11[10] = 35;
  v11[11] = 33;
  memset(&v11[12], 0, 20);
  v11[17] = 10;
  v11[18] = 20;
  v11[19] = 30;
  if ( dword_2E7B90 > a2 )
    v2 = a2 + 1;
  v11[20] = 40;
  v11[21] = 50;
  v11[22] = 60;
  v11[23] = 70;
  if ( dword_2E7B90 < a2 )
    --v2;
  v3 = *(_DWORD *)(a1 + 92);
  v4 = v11;
  v5 = 0;
  dword_2E7B90 = v2;
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
      v9 = 0;
      goto LABEL_10;
    }
  }
  v9 = v11[v5 + 12];
LABEL_10:
  if ( v6 > 71 )
    return 0;
  if ( v6 <= 33 )
    return 70;
  if ( v9 >= 100 )
    v9 = 100;
  return v9 & ~(v9 >> 31);
}
