int __fastcall memchr::memchr::fallback::memchr2(unsigned __int8 a1, unsigned __int8 a2, unsigned int a3, int a4)
{
  unsigned int v4; // r4
  int v5; // r12
  int v6; // lr
  int v7; // r1
  int v8; // r3
  int result; // r0
  bool v10; // zf
  int v11; // r0
  int v12; // r9
  int v13; // r1
  int v14; // r3
  bool v15; // zf
  _DWORD *i; // r5
  int v17; // r1
  int v18; // r6
  unsigned int v19; // r1
  bool v20; // zf
  int v21; // r1
  int v22; // r2
  bool v23; // zf

  v4 = a3 + a4;
  v5 = a2;
  v6 = a1;
  if ( (unsigned int)a4 <= 3 )
  {
    if ( a4 )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = *(unsigned __int8 *)(a3 + v7);
        result = 1;
        v10 = v8 == v6;
        if ( v8 != v6 )
          v10 = v8 == v5;
        if ( v10 )
          break;
        ++v7;
        if ( a3 + v7 >= v4 )
          return 0;
      }
      return result;
    }
    return 0;
  }
  v11 = 16843009 * a1;
  if ( (((*(_DWORD *)a3 ^ (16843009 * v6)) - 16843009) & ~(*(_DWORD *)a3 ^ (16843009 * v6)) & 0x80808080) != 0
    || (v12 = 16843009 * a2, (~(*(_DWORD *)a3 ^ v12) & 0x80808080 & ((*(_DWORD *)a3 ^ v12) - 16843009)) != 0) )
  {
    if ( a4 < 1 )
      return 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = *(unsigned __int8 *)(a3 + v13);
      result = 1;
      v15 = v14 == v6;
      if ( v14 != v6 )
        v15 = v14 == v5;
      if ( v15 )
        break;
      ++v13;
      if ( a3 + v13 >= v4 )
        return 0;
    }
  }
  else
  {
    for ( i = (_DWORD *)((a3 & 0xFFFFFFFC) + 4); (unsigned int)i <= v4 - 4; ++i )
    {
      v17 = *i ^ v11;
      v18 = v17 - 16843009;
      v19 = ~v17 & 0x80808080;
      v20 = (v19 & v18) == 0;
      if ( (v19 & v18) == 0 )
        v20 = (~(*i ^ v12) & 0x80808080 & ((*i ^ v12) - 16843009)) == 0;
      if ( !v20 )
        break;
    }
    if ( (unsigned int)i >= v4 )
    {
      return 0;
    }
    else
    {
      v21 = (int)i - a3;
      result = 1;
      while ( 1 )
      {
        v22 = *(unsigned __int8 *)i;
        v23 = v22 == v6;
        if ( v22 != v6 )
          v23 = v22 == v5;
        if ( v23 )
          break;
        ++v21;
        i = (_DWORD *)((char *)i + 1);
        if ( a4 == v21 )
          return 0;
      }
    }
  }
  return result;
}
