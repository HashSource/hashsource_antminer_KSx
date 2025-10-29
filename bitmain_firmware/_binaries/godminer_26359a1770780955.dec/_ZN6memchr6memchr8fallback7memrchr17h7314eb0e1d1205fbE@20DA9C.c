int __fastcall memchr::memchr::fallback::memrchr(unsigned __int8 a1, unsigned int a2, unsigned int a3)
{
  int v3; // r5
  unsigned int v4; // r2
  int v5; // r3
  int v6; // r12
  unsigned int v7; // r2
  int v8; // r3
  unsigned int v10; // r3
  int v11; // r5
  int v12; // r6
  int v13; // r7
  unsigned int v14; // r6
  bool v15; // zf
  unsigned int v16; // r2
  int v17; // t1

  v3 = a3;
  if ( a3 >= 8 )
    v3 = 8;
  if ( a3 > 3 )
  {
    v6 = 16843009 * a1;
    if ( (((*(_DWORD *)(a2 + a3 - 4) ^ v6) - 16843009) & ~(*(_DWORD *)(a2 + a3 - 4) ^ v6) & 0x80808080) != 0 )
    {
      v7 = a3 - 1;
      while ( a2 + v7 + 1 > a2 )
      {
        v8 = *(unsigned __int8 *)(a2 + v7--);
        if ( v8 == a1 )
          return 1;
      }
    }
    else
    {
      v10 = (a2 + a3) & 0xFFFFFFFC;
      if ( a3 >= 8 && a2 + 8 <= v10 )
      {
        v11 = -v3;
        do
        {
          v12 = *(_DWORD *)(v10 - 8) ^ v6;
          v13 = v12 - 16843009;
          v14 = ~v12 & 0x80808080;
          v15 = (v14 & v13) == 0;
          if ( (v14 & v13) == 0 )
            v15 = (~(*(_DWORD *)(v10 - 4) ^ v6) & 0x80808080 & ((*(_DWORD *)(v10 - 4) ^ v6) - 16843009)) == 0;
          if ( !v15 )
            break;
          v10 += v11;
        }
        while ( v10 >= a2 + 8 );
      }
      v16 = v10 - a2;
      while ( v10 > a2 )
      {
        v17 = *(unsigned __int8 *)--v10;
        --v16;
        if ( v17 == a1 )
          return 1;
      }
    }
  }
  else
  {
    v4 = a3 - 1;
    while ( a2 + v4 + 1 > a2 )
    {
      v5 = *(unsigned __int8 *)(a2 + v4--);
      if ( v5 == a1 )
        return 1;
    }
  }
  return 0;
}
