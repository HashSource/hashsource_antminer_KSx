unsigned int __fastcall sub_25DADC(unsigned int a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v3; // r7
  unsigned int v4; // r9
  unsigned int v5; // r6
  unsigned int v6; // r10
  unsigned int result; // r0
  char v8; // r0
  int v9; // r2
  char v10; // r0
  bool v11; // nf
  char v12; // r3
  unsigned int v13; // r1
  unsigned int v14; // r2
  unsigned int v15; // r5
  char v16; // cf
  unsigned int v17; // r0
  int v18; // r5
  char v19; // r2
  char v20; // r1
  char v21; // r0
  char v22; // r3
  char v23; // r2
  unsigned int v24; // r0
  unsigned int v25; // r1
  unsigned int i; // r2
  unsigned __int64 v27; // kr08_8
  unsigned int v28; // r3
  unsigned int v29; // r7
  unsigned int v30; // r1
  unsigned int v31; // r0
  unsigned int v32; // r2
  int v33; // r5
  unsigned __int64 v34; // r6

  v3 = HIDWORD(a3);
  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( (_DWORD)a3 && !HIDWORD(a3) )
  {
    if ( !a2 )
      return sub_25BD18(a1, a3);
    if ( a2 < (unsigned int)a3 )
    {
      v17 = __clz(a3) - __clz(a2);
      v18 = 0;
      v19 = v17 + 32;
      if ( !v17 )
        v19 = 31;
      v20 = v19 & 0x3F;
      v21 = 32 - (v19 & 0x3F);
      v22 = (v19 & 0x3F) - 32;
      v11 = (v19 & 0x3F) - 32 < 0;
      v23 = v19 & 0x1F;
      v24 = v4 >> v21;
      v25 = v4 << v20;
      if ( !v11 )
      {
        v24 = v4 << v22;
        v25 = 0;
      }
      for ( i = 1 << v23; ; i >>= 1 )
      {
        v27 = __PAIR64__(v5, v6) - __PAIR64__(v24, v25);
        if ( (int)((__PAIR64__(v5, v6) - __PAIR64__(v24, v25)) >> 32) > -1 )
        {
          v18 |= i;
          if ( !HIDWORD(v27) )
            return sub_25BD18(v27, v4) | v18;
          v5 = (__PAIR64__(v5, v6) - __PAIR64__(v24, v25)) >> 32;
          v6 -= v25;
        }
        v16 = v24 & 1;
        v24 >>= 1;
        v25 = (v25 >> 1) | (v16 << 31);
      }
    }
    if ( a2 == (_DWORD)a3 )
      return sub_25BD18(a1, a2);
    v28 = a2 - sub_25BD18(a2, a3) * a3;
    if ( v4 < 0x10000 )
    {
      v29 = sub_25BD18((v28 << 16) | HIWORD(v6), v4);
      return sub_25BD18((unsigned __int16)v6, v4) | (v29 << 16);
    }
    if ( __PAIR64__(v28, v6) < v4 )
      return 0;
    v30 = v4 << 31;
    v31 = v4 >> 1;
    v32 = 0x80000000;
    v33 = 0;
    while ( 1 )
    {
      v34 = __PAIR64__(v28, v6) - __PAIR64__(v31, v30);
      if ( (int)((__PAIR64__(v28, v6) - __PAIR64__(v31, v30)) >> 32) > -1 )
      {
        v33 |= v32;
        if ( !HIDWORD(v34) )
          return sub_25BD18(v34, v4) | v33;
        v28 = (__PAIR64__(v28, v6) - __PAIR64__(v31, v30)) >> 32;
        v6 -= v30;
      }
      v16 = v31 & 1;
      v31 >>= 1;
      v30 = (v30 >> 1) | (v16 << 31);
      v32 >>= 1;
    }
  }
  result = 0;
  if ( __PAIR64__(a2, v6) >= a3 && a2 )
  {
    v8 = __clz(HIDWORD(a3)) - __clz(a2);
    v9 = v8 & 0x3F;
    v10 = v8 & 0x1F;
    v12 = v9 - 32;
    v11 = v9 - 32 < 0;
    v13 = (v4 >> (32 - v9)) | (v3 << v9);
    v14 = v4 << v9;
    if ( !v11 )
      v13 = v4 << v12;
    v15 = 1 << v10;
    if ( !v11 )
      v14 = 0;
    result = 0;
    while ( 1 )
    {
      if ( (int)((__PAIR64__(v5, v6) - __PAIR64__(v13, v14)) >> 32) > -1 )
      {
        result |= v15;
        if ( __PAIR64__(v5, v6) - __PAIR64__(v13, v14) < __PAIR64__(v3, v4) )
          return result;
        v5 = (__PAIR64__(v5, v6) - __PAIR64__(v13, v14)) >> 32;
        v6 -= v14;
      }
      v16 = v13 & 1;
      v13 >>= 1;
      v14 = (v14 >> 1) | (v16 << 31);
      v15 >>= 1;
    }
  }
  return result;
}
