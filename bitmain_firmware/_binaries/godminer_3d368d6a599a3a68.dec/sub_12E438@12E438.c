int __fastcall sub_12E438(int a1, char a2, int a3, int a4, int a5)
{
  int v6; // r12
  unsigned int v7; // lr
  __int64 v8; // r8
  unsigned int v10; // r6
  unsigned int v11; // r7
  _BYTE *v12; // r0
  char *v13; // r9
  size_t v14; // r10
  size_t v15; // r2
  char *v16; // r1
  int v17; // r0
  int v18; // r8
  __int64 *v19; // r5
  __int64 *v20; // r8
  __int64 v21; // t1
  int result; // r0
  __int64 v23; // [sp+0h] [bp-9Ch]
  unsigned __int64 v24; // [sp+8h] [bp-94h]
  __int64 v25; // [sp+10h] [bp-8Ch]
  _BYTE s[112]; // [sp+18h] [bp-84h] BYREF
  unsigned int v27; // [sp+88h] [bp-14h]
  unsigned int v28; // [sp+8Ch] [bp-10h]
  unsigned int v29; // [sp+90h] [bp-Ch]
  unsigned int v30; // [sp+94h] [bp-8h]

  v6 = *(_DWORD *)(a1 + 128);
  v7 = a3 + 8 * v6;
  v23 = *(_QWORD *)(a1 + 240);
  v8 = *(_QWORD *)(a1 + 232);
  s[v6] = (128 >> a3) | a2 & -(128 >> a3);
  v24 = vshrd_n_u64(vdup_n_s32(v7).n64_u64[0], 0x20u);
  v25 = v24 + v8;
  v10 = bswap32(v23);
  v11 = bswap32(HIDWORD(v23));
  if ( v6 | a3 )
  {
    if ( v8 )
    {
      *(_QWORD *)(a1 + 232) = v8 - (1024 - v7);
    }
    else
    {
      *(_QWORD *)(a1 + 232) = v24 - 1024;
      *(_QWORD *)(a1 + 240) = v23 - 1;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 232) = -1024;
    *(_QWORD *)(a1 + 240) = -1;
  }
  v12 = &s[v6 + 1];
  v13 = &s[v6];
  v14 = 128 - v6;
  if ( v7 > 0x37E )
  {
    memset(v12, 0, 127 - v6);
    sph_blake384_0(a1, v13, v14);
    *(_QWORD *)(a1 + 240) = -1;
    *(_QWORD *)(a1 + 232) = -1024;
    memset(s, 0, sizeof(s));
    v16 = s;
    v15 = 128;
    v27 = v11;
    v17 = a1;
    if ( a5 == 8 )
      s[111] = 1;
  }
  else
  {
    memset(v12, 0, 111 - v6);
    v15 = v14;
    v16 = v13;
    v17 = a1;
    v27 = v11;
    if ( a5 == 8 )
      s[111] |= 1u;
  }
  v28 = v10;
  v29 = bswap32(HIDWORD(v25));
  v30 = bswap32(v25);
  sph_blake384_0(v17, v16, v15);
  v18 = a1 + 8 * a5;
  v19 = (__int64 *)(a1 + 136);
  v20 = (__int64 *)(v18 + 136);
  do
  {
    v21 = *v19++;
    a4 += 8;
    *(_BYTE *)(a4 - 5) = BYTE4(v21);
    *(_BYTE *)(a4 - 1) = v21;
    result = BYTE1(v21);
    *(_BYTE *)(a4 - 4) = BYTE3(v21);
    *(_BYTE *)(a4 - 3) = BYTE2(v21);
    *(_BYTE *)(a4 - 2) = BYTE1(v21);
    *(_BYTE *)(a4 - 8) = HIBYTE(v21);
    *(_BYTE *)(a4 - 7) = BYTE6(v21);
    *(_BYTE *)(a4 - 6) = BYTE5(v21);
  }
  while ( v20 != v19 );
  return result;
}
