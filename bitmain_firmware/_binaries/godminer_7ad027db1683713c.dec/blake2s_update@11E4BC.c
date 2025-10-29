int __fastcall blake2s_update(_DWORD *a1, char *src, __int64 n)
{
  __int64 v3; // r8
  int v5; // r0
  bool v6; // cc
  unsigned int v7; // r5
  _DWORD *v9; // r6
  int v10; // r2
  int v11; // r0
  unsigned int v12; // r3
  int *v13; // r3
  _DWORD *v14; // r2
  int v15; // lr
  int v16; // r12
  int v17; // r0
  int v18; // r1
  unsigned __int64 v19; // kr00_8
  bool v20; // cf
  unsigned __int64 v21; // d16
  unsigned __int64 v23; // [sp+0h] [bp-Ch]

  v3 = n;
  if ( n )
  {
    v5 = a1[44];
    v6 = HIDWORD(n) != 0;
    v7 = 128 - v5;
    if ( !HIDWORD(n) )
      v6 = (unsigned int)n > v7;
    v9 = a1 + 12;
    v23 = vshrd_n_u64(vdup_n_s32(v7).n64_u64[0], 0x20u);
    if ( v6 )
    {
      do
      {
        memcpy((char *)v9 + v5, src, v7);
        v10 = a1[44];
        v11 = a1[9];
        v12 = a1[8] + 64;
        a1[8] = v12;
        if ( v12 <= 0x3F )
          ++v11;
        a1[9] = v11;
        a1[44] = v10 + v7;
        blake2s_compress(a1, a1 + 12);
        v13 = a1 + 28;
        v14 = a1 + 12;
        do
        {
          v15 = *v13;
          v13 += 4;
          v16 = *(v13 - 3);
          v14 += 4;
          v17 = *(v13 - 2);
          v18 = *(v13 - 1);
          *(v14 - 4) = v15;
          *(v14 - 3) = v16;
          *(v14 - 2) = v17;
          *(v14 - 1) = v18;
        }
        while ( v13 != a1 + 44 );
        src += v7;
        v5 = a1[44] - 64;
        a1[44] = v5;
        v7 = 128 - v5;
        v19 = v3 - v23;
        HIDWORD(v3) = (v3 - v23) >> 32;
        v20 = HIDWORD(v3) == 0;
        v21 = vshrd_n_u64(vdup_n_s32(128 - v5).n64_u64[0], 0x20u);
        LODWORD(v3) = v19;
        if ( !HIDWORD(v3) )
          v20 = v7 >= (unsigned int)v19;
        v23 = v21;
      }
      while ( !v20 );
    }
    memcpy((char *)v9 + v5, src, v3);
    a1[44] += v3;
  }
  return 0;
}
