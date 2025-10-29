int __fastcall memchr::memchr::fallback::memrchr2(
        unsigned __int8 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned int a4)
{
  int v4; // r12
  int v5; // lr
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r1
  int v9; // r0
  int v10; // r7
  unsigned int v11; // r0
  int v12; // r1
  bool v13; // zf
  int result; // r0
  unsigned int v15; // r7
  unsigned int v16; // r6
  unsigned int v17; // r3
  unsigned int v18; // r1
  int v19; // r5
  unsigned int v20; // r4
  bool v21; // zf
  int v22; // r4
  int v23; // r4
  int v24; // t1

  v4 = a2;
  v5 = a1;
  if ( a4 > 3 )
  {
    v8 = a3 + a4;
    v9 = 16843009 * a1;
    v10 = *(_DWORD *)(a3 + a4 - 4);
    if ( (((v10 ^ (16843009 * v5)) - 16843009) & ~(v10 ^ (16843009 * v5)) & 0x80808080) != 0
      || (~(v10 ^ (16843009 * v4)) & 0x80808080 & ((v10 ^ (16843009 * v4)) - 16843009)) != 0 )
    {
      v11 = a4 - 1;
      while ( a3 + v11 + 1 > a3 )
      {
        v12 = *(unsigned __int8 *)(a3 + v11--);
        v13 = v12 == v5;
        if ( v12 != v5 )
          v13 = v12 == v4;
        if ( v13 )
          return 1;
      }
    }
    else
    {
      v15 = v8 & 0xFFFFFFFC;
      v16 = (v8 & 0xFFFFFFFC) - a3;
      do
      {
        v17 = v15;
        v18 = v16;
        if ( v15 < a3 + 4 )
          break;
        v15 -= 4;
        v16 = *(_DWORD *)(v17 - 4);
        v19 = (v16 ^ v9) - 16843009;
        v20 = ~(v16 ^ v9) & 0x80808080;
        v21 = (v20 & v19) == 0;
        if ( (v20 & v19) == 0 )
        {
          v22 = v16 ^ (16843009 * v4);
          v16 = v18 - 4;
          v21 = (~v22 & 0x80808080 & (v22 - 16843009)) == 0;
        }
      }
      while ( v21 );
      result = 1;
      while ( v17 > a3 )
      {
        v24 = *(unsigned __int8 *)--v17;
        v23 = v24;
        --v18;
        if ( v24 == v5 || v23 == v4 )
          return result;
      }
    }
  }
  else
  {
    v6 = a4 - 1;
    while ( a3 + v6 + 1 > a3 )
    {
      v7 = *(unsigned __int8 *)(a3 + v6--);
      if ( v7 == v5 || v7 == v4 )
        return 1;
    }
  }
  return 0;
}
