int __fastcall memchr::memchr::fallback::memrchr3(
        unsigned __int8 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned int a4,
        unsigned int a5)
{
  int v5; // lr
  int v6; // r12
  int v7; // r2
  int v8; // r0
  int v9; // r1
  bool v10; // zf
  int v11; // r7
  int v12; // r0
  int v13; // r1
  bool v14; // zf
  int result; // r0
  unsigned int v16; // r7
  int v17; // r0
  int v18; // r1
  unsigned int v19; // r6
  int v20; // r0
  int v21; // r4
  int v22; // t1
  bool v23; // zf
  int v24; // [sp+4h] [bp-Ch]
  int v25; // [sp+Ch] [bp-4h]

  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( a5 > 3 )
  {
    v11 = *(_DWORD *)(a4 + a5 - 4);
    v25 = 16843009 * a1;
    if ( (((v11 ^ v25) - 16843009) & ~(v11 ^ v25) & 0x80808080) != 0
      || (v24 = 16843009 * a2,
          ~(v11 ^ v24) & 0x80808080 & ((v11 ^ v24) - 16843009)
        | ~(v11 ^ (16843009 * v5)) & 0x80808080 & ((v11 ^ (16843009 * v5)) - 16843009)) )
    {
      v12 = a5 - 1;
      while ( a4 + v12 + 1 > a4 )
      {
        v13 = *(unsigned __int8 *)(a4 + v12--);
        v14 = v13 == v5;
        if ( v13 != v5 )
          v14 = v13 == v7;
        if ( v14 || v13 == v6 )
          return 1;
      }
    }
    else
    {
      v16 = (a4 + a5) & 0xFFFFFFFC;
      v17 = v16 - a4;
      do
      {
        v18 = v17;
        v19 = v16;
        if ( v16 < a4 + 4 )
          break;
        v16 -= 4;
        v20 = *(_DWORD *)(v19 - 4);
        if ( (~(v20 ^ v25) & 0x80808080 & ((v20 ^ v25) - 16843009)) != 0 )
          break;
        v10 = (~(v20 ^ v24) & 0x80808080 & ((v20 ^ v24) - 16843009)
             | ~(v20 ^ (16843009 * v5)) & 0x80808080 & ((v20 ^ (16843009 * v5)) - 16843009)) == 0;
        v17 = v18 - 4;
      }
      while ( v10 );
      result = 1;
      while ( v19 > a4 )
      {
        v22 = *(unsigned __int8 *)--v19;
        v21 = v22;
        --v18;
        v23 = v22 == v5;
        if ( v22 != v5 )
          v23 = v21 == v7;
        if ( v23 || v21 == v6 )
          return result;
      }
    }
  }
  else
  {
    v8 = a5 - 1;
    while ( a4 + v8 + 1 > a4 )
    {
      v9 = *(unsigned __int8 *)(a4 + v8--);
      v10 = v9 == v5;
      if ( v9 != v5 )
        v10 = v9 == v7;
      if ( v10 || v9 == v6 )
        return 1;
    }
  }
  return 0;
}
