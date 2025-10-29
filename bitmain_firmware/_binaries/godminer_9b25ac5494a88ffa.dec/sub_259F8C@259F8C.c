int __fastcall sub_259F8C(unsigned int a1, unsigned int a2, int a3, int a4, _DWORD *a5)
{
  unsigned int v7; // r4
  unsigned int v8; // r7
  unsigned int v9; // r10
  __int64 v10; // r2
  _DWORD *v11; // r11
  int v12; // r8
  unsigned int v13; // r5
  unsigned int v14; // r6
  unsigned __int64 v15; // kr00_8
  __int64 v16; // r2
  unsigned int v17; // r9
  unsigned int v18; // r10
  unsigned __int64 v19; // kr08_8
  __int64 v20; // r0
  bool v21; // cf
  unsigned int v22; // r0
  unsigned int v23; // r1
  int v24; // r4
  unsigned int v25; // r0
  unsigned int v26; // r7
  __int64 v27; // kr10_8
  __int64 v28; // r0
  unsigned int v29; // r4
  unsigned int v30; // r7
  int v31; // r6
  __int64 v32; // r0
  _WORD *v33; // r3
  int v34; // r2
  bool v35; // zf
  bool v36; // zf
  int v37; // r1
  int v38; // r1
  const char *v39; // r0
  int v41; // [sp+0h] [bp-6Ch]
  int v42; // [sp+4h] [bp-68h]
  unsigned int v43; // [sp+8h] [bp-64h]
  _BYTE v44[40]; // [sp+Dh] [bp-5Fh] BYREF
  char v45; // [sp+35h] [bp-37h] BYREF
  unsigned __int16 v46; // [sp+36h] [bp-36h]
  __int16 v47; // [sp+38h] [bp-34h] BYREF
  _BYTE *v48; // [sp+3Ch] [bp-30h]
  int v49; // [sp+40h] [bp-2Ch]
  __int16 v50; // [sp+44h] [bp-28h]
  unsigned int v51; // [sp+48h] [bp-24h]
  __int16 v52; // [sp+50h] [bp-1Ch]
  char *v53; // [sp+54h] [bp-18h]
  int v54; // [sp+58h] [bp-14h]
  const char *v55[4]; // [sp+5Ch] [bp-10h] BYREF

  v7 = a2;
  v8 = a1;
  v9 = 0;
  sub_26C3E0(a1, a2, 10, 0);
  v11 = a5;
  v42 = a3;
  v41 = a4;
  if ( __PAIR64__(v7, v8) >= 0xA && !v10 )
  {
    v12 = 0;
    do
    {
      v15 = sub_26C3E0(v8, v7, 10, 0);
      v14 = HIDWORD(v15);
      v13 = v15;
      sub_26C3E0(v15, HIDWORD(v15), 10, 0);
      ++v12;
      if ( __PAIR64__(v7, v8) < 0x64 )
        break;
      v7 = HIDWORD(v15);
      v8 = v15;
    }
    while ( !v16 );
    if ( a5[4] == 1 )
      goto LABEL_7;
LABEL_26:
    v30 = v13;
    v29 = v14;
    goto LABEL_29;
  }
  v12 = 0;
  v13 = v8;
  v14 = v7;
  if ( a5[4] != 1 )
    goto LABEL_26;
LABEL_7:
  v17 = a5[5];
  v18 = 0;
  if ( __PAIR64__(v14, v13) >= 0xA )
  {
    v18 = 0;
    v19 = __PAIR64__(v14, v13);
    do
    {
      v20 = sub_26C3E0(v19, HIDWORD(v19), 10, 0);
      ++v18;
      v21 = v19 <= 0x63;
      v19 = v20;
    }
    while ( !v21 );
  }
  v22 = v18 - v17;
  if ( v18 < v17 )
    v22 = 0;
  v23 = v17 - v18;
  if ( v17 < v18 )
    v23 = 0;
  v43 = v23;
  if ( v22 >= 2 )
  {
    v24 = v22 + v12;
    v25 = v17;
    if ( v18 < v17 )
      v25 = v18;
    v26 = ~v25 + v18;
    do
    {
      --v26;
      v27 = sub_26C3E0(v13, v14, 10, 0);
      v14 = HIDWORD(v27);
      v13 = v27;
    }
    while ( v26 );
    v12 = v24 - 1;
  }
  if ( v18 <= v17 )
  {
    v30 = v13;
    v29 = v14;
  }
  else
  {
    v28 = sub_26C3E0(v13, v14, 10, 0);
    ++v12;
    v29 = (unsigned __int64)(v28 + 1) >> 32;
    v30 = v28 + 1;
    if ( __PAIR64__(v14, v13) - 10 * v28 <= 4 )
    {
      v29 = HIDWORD(v28);
      v30 = v28;
    }
  }
  v9 = v43;
LABEL_29:
  if ( __PAIR64__(v29, v30) < 0x64 )
  {
    v34 = 40;
    HIDWORD(v32) = v12;
    if ( v30 <= 9 )
      goto LABEL_34;
LABEL_40:
    --v34;
    ++HIDWORD(v32);
    LOBYTE(v32) = (unsigned __int8)v30 / 0xAu;
    v44[v34] = ((unsigned __int8)v30 % 0xAu) | 0x30;
    v36 = HIDWORD(v32) == v12;
    if ( HIDWORD(v32) == v12 )
      v36 = v9 == 0;
    if ( !v36 )
      goto LABEL_43;
    goto LABEL_44;
  }
  v31 = 0;
  do
  {
    v32 = sub_26C3E0(v30, v29, 100, 0);
    v33 = &v44[v31 + 38];
    v31 -= 2;
    *v33 = word_2B3A17[v30 - 100 * (_DWORD)v32];
    v21 = __PAIR64__(v29, v30) <= 0x270F;
    v29 = HIDWORD(v32);
    v30 = v32;
  }
  while ( !v21 );
  v11 = a5;
  HIDWORD(v32) = v12 - v31;
  v34 = v31 + 40;
  LOBYTE(v30) = v32;
  if ( (unsigned int)v32 > 9 )
    goto LABEL_40;
LABEL_34:
  LOBYTE(v32) = v30;
  v35 = HIDWORD(v32) == v12;
  if ( HIDWORD(v32) == v12 )
    v35 = v9 == 0;
  if ( !v35 )
LABEL_43:
    v44[--v34] = 46;
LABEL_44:
  v44[v34 - 1] = v32 + 48;
  LOBYTE(v32) = 101;
  if ( v41 )
    LOBYTE(v32) = 69;
  v45 = v32;
  if ( HIDWORD(v32) >= 0xA )
  {
    v46 = word_2B3A17[HIDWORD(v32)];
    v37 = 3;
  }
  else
  {
    LOBYTE(v46) = BYTE4(v32) + 48;
    v37 = 2;
  }
  v54 = v37;
  v53 = &v45;
  v52 = 2;
  v51 = v9;
  v50 = 0;
  v49 = 41 - v34;
  v48 = &v44[v34 - 1];
  v47 = 2;
  if ( v42 )
  {
    v38 = v11[6] & 1;
    v39 = aLibraryCoreSrc;
    if ( v38 )
      v39 = (const char *)&unk_2B326B;
  }
  else
  {
    v38 = 1;
    v39 = asc_2B326A;
  }
  v55[3] = (const char *)3;
  v55[0] = v39;
  v55[1] = (const char *)v38;
  v55[2] = (const char *)&v47;
  return sub_249B34(v11, v55);
}
