__int64 *__fastcall update_chip_status(int a1, int a2, int a3)
{
  __int64 *v3; // r7
  char *v4; // r3
  int v7; // r2
  int v8; // r1
  int v9; // r3
  int v10; // r1
  int v11; // r1

  v3 = (__int64 *)(a3 + 48);
  v4 = (char *)dword_2D5D80 + *(_DWORD *)(a1 + 228);
  v7 = (unsigned __int8)v4[64];
  if ( !v4[64] )
  {
    v8 = *(_DWORD *)(a1 + 312);
    if ( v8 > 0 )
    {
      v9 = *(_DWORD *)(a1 + 504);
      v10 = v9 + 44 * v8;
      do
      {
        *(_DWORD *)(v9 + 16) = v7;
        v9 += 44;
      }
      while ( v10 != v9 );
    }
    *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 440);
    update_str_and_flag(a1, a2, v3);
    v11 = *(_DWORD *)(a1 + 228);
    *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 400);
    *((_BYTE *)&dword_2D5D80[16] + v11) = 1;
    return v3;
  }
  if ( !*(_BYTE *)(a1 + 238) )
    return v3;
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 440);
  chip_speed_test((_DWORD *)a1);
  update_str_and_flag(a1, a2, v3);
  return v3;
}
