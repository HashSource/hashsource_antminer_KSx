int __fastcall sub_252640(
        unsigned __int16 a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        int a7)
{
  int v7; // r5
  unsigned __int8 *v8; // r8
  unsigned int v9; // r9
  unsigned int v10; // r4
  int v11; // r7
  unsigned int v12; // r2
  unsigned int v13; // lr
  unsigned __int8 *v14; // r4
  int v15; // t1
  unsigned __int8 *v16; // r6
  unsigned __int8 *v17; // r1
  char v18; // r0
  int v19; // r3
  int v20; // r2

  v7 = a1;
  if ( a3 )
  {
    v8 = &a2[2 * a3];
    v9 = HIBYTE(a1);
    v10 = 0;
    do
    {
      v11 = a2[1];
      v12 = *a2;
      a2 += 2;
      v13 = v10 + v11;
      if ( v12 == v9 )
      {
        if ( v13 < v10 )
          core::slice::index::slice_index_order_fail();
        if ( v13 > a5 )
          core::slice::index::slice_end_index_len_fail();
        v14 = (unsigned __int8 *)(a4 + v10);
        while ( v11 )
        {
          v15 = *v14++;
          --v11;
          if ( v15 == (unsigned __int8)a1 )
            return 0;
        }
      }
      else if ( v12 > v9 )
      {
        break;
      }
      v10 = v13;
    }
    while ( a2 != v8 );
  }
  if ( a7 )
  {
    v16 = a6;
    v17 = &a6[a7];
    v18 = 1;
    while ( 1 )
    {
      v19 = *v16;
      if ( (v19 & 0x80u) != 0 )
      {
        if ( v16 + 1 == v17 )
          core::panicking::panic((int)aCalledOptionUn_3, 43, (int)&off_2E65C0);
        v20 = v16[1];
        v16 += 2;
        v7 -= v20 | ((v19 & 0x7F) << 8);
        if ( v7 < 0 )
          return v18 & 1;
      }
      else
      {
        ++v16;
        v7 -= v19;
        if ( v7 < 0 )
          return v18 & 1;
      }
      v18 ^= 1u;
      if ( v16 == v17 )
        return v18 & 1;
    }
  }
  return 1;
}
