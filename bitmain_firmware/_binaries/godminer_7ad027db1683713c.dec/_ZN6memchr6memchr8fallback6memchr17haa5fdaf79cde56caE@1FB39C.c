int __fastcall memchr::memchr::fallback::memchr(unsigned __int8 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // lr
  int v4; // r12
  int v5; // r3
  int v6; // r0
  int v7; // r3
  int result; // r0
  _DWORD *v9; // r4
  int v10; // r7
  int v11; // r3
  unsigned int v12; // r7
  bool v13; // zf
  char *v14; // r3

  v3 = a2 + a3;
  v4 = a1;
  if ( a3 <= 3 )
  {
    if ( a3 )
    {
      v5 = 0;
      while ( *(unsigned __int8 *)(a2 + v5) != a1 )
      {
        ++v5;
        if ( a2 + v5 >= v3 )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  v6 = 16843009 * a1;
  if ( (((*(_DWORD *)a2 ^ v6) - 16843009) & ~(*(_DWORD *)a2 ^ v6) & 0x80808080) != 0 )
  {
    if ( (int)a3 >= 1 )
    {
      v7 = 0;
      while ( *(unsigned __int8 *)(a2 + v7) != v4 )
      {
        ++v7;
        if ( a2 + v7 >= v3 )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  v9 = (_DWORD *)((a2 & 0xFFFFFFFC) + 4);
  if ( a3 >= 8 )
  {
    while ( (unsigned int)v9 <= v3 - 8 )
    {
      v10 = *v9 ^ v6;
      v11 = v10 - 16843009;
      v12 = ~v10 & 0x80808080;
      v13 = (v12 & v11) == 0;
      if ( (v12 & v11) == 0 )
        v13 = (~(v9[1] ^ v6) & 0x80808080 & ((v9[1] ^ v6) - 16843009)) == 0;
      if ( !v13 )
        break;
      v9 += 2;
    }
  }
  result = 0;
  if ( (unsigned int)v9 < v3 )
  {
    v14 = (char *)v9 - a2;
    while ( *(unsigned __int8 *)v9 != v4 )
    {
      ++v14;
      v9 = (_DWORD *)((char *)v9 + 1);
      if ( (char *)a3 == v14 )
        return result;
    }
    return 1;
  }
  return result;
}
