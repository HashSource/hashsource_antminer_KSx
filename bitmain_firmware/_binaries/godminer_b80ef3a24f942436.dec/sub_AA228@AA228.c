_DWORD *__fastcall sub_AA228(int a1, int a2)
{
  int v2; // lr
  int v3; // r1
  _DWORD *v4; // r3
  _DWORD *result; // r0
  int v6; // r1
  int v7; // t1
  char *v8; // r2
  _DWORD v9[9]; // [sp+0h] [bp-24h] BYREF

  v2 = a2;
  v9[0] = 65;
  v9[1] = 43;
  v9[2] = 37;
  v9[3] = 32;
  if ( dword_2F0750 > a2 )
    v2 = a2 + 1;
  v9[4] = -1046478848;
  v9[5] = -1054867456;
  v9[6] = 0;
  v9[7] = 0;
  if ( dword_2F0750 < a2 )
    --v2;
  v3 = *(_DWORD *)(a1 + 88);
  v4 = v9;
  result = 0;
  dword_2F0750 = v2;
  v6 = v2 - v3;
  while ( 1 )
  {
    v7 = v4[1];
    ++v4;
    v8 = (char *)result + 1;
    if ( v7 < v6 && *(v4 - 1) >= v6 )
      break;
    result = (_DWORD *)((char *)result + 1);
    if ( v8 == (char *)3 )
      return result;
  }
  return &v9[(_DWORD)result + 8];
}
