__int64 *__fastcall update_chip_status(int a1, int a2, int a3)
{
  int v3; // r3
  __int64 *v4; // r7
  int v7; // r2
  int v8; // r1
  int v9; // r3
  int v10; // r1
  int v11; // r1

  v3 = *(_DWORD *)(a1 + 244);
  v4 = (__int64 *)(a3 + 48);
  v7 = byte_2EADC0[v3];
  if ( !byte_2EADC0[v3] )
  {
    v8 = *(_DWORD *)(a1 + 332);
    if ( v8 > 0 )
    {
      v9 = *(_DWORD *)(a1 + 528);
      v10 = v9 + 44 * v8;
      do
      {
        *(_DWORD *)(v9 + 16) = v7;
        v9 += 44;
      }
      while ( v10 != v9 );
    }
    *(_DWORD *)(a2 + 80) = *(_DWORD *)(a1 + 464);
    update_str_and_flag(a1, a2, v4);
    v11 = *(_DWORD *)(a1 + 424);
    byte_2EADC0[*(_DWORD *)(a1 + 244)] = 1;
    *(_DWORD *)(a2 + 72) = v11;
    return v4;
  }
  if ( !*(_BYTE *)(a1 + 254) )
    return v4;
  *(_DWORD *)(a2 + 80) = *(_DWORD *)(a1 + 464);
  chip_speed_test(a1);
  update_str_and_flag(a1, a2, v4);
  return v4;
}
