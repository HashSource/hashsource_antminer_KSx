int __fastcall memchr::memchr::fallback::memchr3(
        unsigned __int8 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned int a4,
        unsigned int a5)
{
  int v5; // lr
  int v6; // r12
  int v7; // r2
  unsigned int v8; // r4
  int v9; // r1
  int v10; // r5
  int result; // r0
  bool v12; // zf
  int v13; // r9
  int v14; // r1
  int v15; // r5
  bool v16; // zf
  unsigned int v17; // r0
  _DWORD *i; // r6
  int v19; // r1
  int v20; // r8
  unsigned int v21; // r1
  bool v22; // zf
  char *v23; // r1
  int v24; // r3
  bool v25; // zf

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = a4 + a5;
  if ( a5 <= 3 )
  {
    if ( a5 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = *(unsigned __int8 *)(a4 + v9);
        result = 1;
        if ( v10 == v5 )
          break;
        v12 = v10 == v7;
        if ( v10 != v7 )
          v12 = v10 == v6;
        if ( v12 )
          break;
        ++v9;
        if ( a4 + v9 >= v8 )
          return 0;
      }
      return result;
    }
    return 0;
  }
  v13 = 16843009 * a1;
  if ( (((*(_DWORD *)a4 ^ v13) - 16843009) & ~(*(_DWORD *)a4 ^ v13) & 0x80808080) != 0
    || ~(*(_DWORD *)a4 ^ (16843009 * a2)) & 0x80808080 & ((*(_DWORD *)a4 ^ (16843009 * a2)) - 16843009)
     | ~(*(_DWORD *)a4 ^ (16843009 * v5)) & 0x80808080 & ((*(_DWORD *)a4 ^ (16843009 * v5)) - 16843009) )
  {
    if ( (int)a5 < 1 )
      return 0;
    v14 = 0;
    while ( 1 )
    {
      v15 = *(unsigned __int8 *)(a4 + v14);
      result = 1;
      if ( v15 == v5 )
        break;
      v16 = v15 == v7;
      if ( v15 != v7 )
        v16 = v15 == v6;
      if ( v16 )
        break;
      ++v14;
      if ( a4 + v14 >= v8 )
        return 0;
    }
  }
  else
  {
    v17 = v8 - 4;
    for ( i = (_DWORD *)((a4 & 0xFFFFFFFC) + 4); (unsigned int)i <= v17; ++i )
    {
      v19 = *i ^ v13;
      v20 = v19 - 16843009;
      v21 = ~v19 & 0x80808080;
      v22 = (v21 & v20) == 0;
      if ( (v21 & v20) == 0 )
        v22 = (~(*i ^ (16843009 * v6)) & 0x80808080 & ((*i ^ (16843009 * v6)) - 16843009)
             | ~(*i ^ (16843009 * v5)) & 0x80808080 & ((*i ^ (16843009 * v5)) - 16843009)) == 0;
      if ( !v22 )
        break;
      v17 = v8 - 4;
    }
    if ( (unsigned int)i >= v8 )
    {
      return 0;
    }
    else
    {
      v23 = (char *)i - a4;
      result = 1;
      while ( 1 )
      {
        v24 = *(unsigned __int8 *)i;
        if ( v24 == v5 )
          break;
        v25 = v24 == v7;
        if ( v24 != v7 )
          v25 = v24 == v6;
        if ( v25 )
          break;
        ++v23;
        i = (_DWORD *)((char *)i + 1);
        if ( (char *)a5 == v23 )
          return 0;
      }
    }
  }
  return result;
}
