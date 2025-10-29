int __fastcall sub_2480A4(unsigned int a1, unsigned int a2, int a3, int a4, int *a5)
{
  unsigned int v7; // r4
  unsigned int v8; // r7
  int v9; // r10
  __int64 v10; // r2
  int *v11; // r11
  int v12; // r8
  unsigned int v13; // r5
  unsigned int v14; // r1
  unsigned int v15; // r6
  __int64 v16; // r2
  unsigned int v17; // r9
  unsigned int v18; // r10
  unsigned int v19; // r4
  unsigned int v20; // r7
  unsigned int v21; // r0
  bool v22; // cf
  unsigned int v23; // r1
  unsigned int v24; // r0
  int v25; // r1
  int v26; // r4
  unsigned int v27; // r0
  int v28; // r7
  unsigned int v29; // r1
  __int64 v30; // r0
  unsigned int v31; // r4
  unsigned int v32; // r7
  int v33; // r6
  unsigned int v34; // r0
  _WORD *v35; // r3
  unsigned int v36; // r1
  unsigned int v37; // r1
  int v38; // r2
  char v39; // r0
  bool v40; // zf
  bool v41; // zf
  char v42; // r0
  int v43; // r1
  int v44; // r1
  const char *v45; // r0
  int v47; // [sp+0h] [bp-6Ch]
  int v48; // [sp+4h] [bp-68h]
  int v49; // [sp+8h] [bp-64h]
  _BYTE v50[40]; // [sp+Dh] [bp-5Fh] BYREF
  char v51; // [sp+35h] [bp-37h] BYREF
  __int16 v52; // [sp+36h] [bp-36h]
  __int16 v53; // [sp+38h] [bp-34h] BYREF
  _BYTE *v54; // [sp+3Ch] [bp-30h]
  int v55; // [sp+40h] [bp-2Ch]
  __int16 v56; // [sp+44h] [bp-28h]
  int v57; // [sp+48h] [bp-24h]
  __int16 v58; // [sp+50h] [bp-1Ch]
  char *v59; // [sp+54h] [bp-18h]
  int v60; // [sp+58h] [bp-14h]
  const char *v61[4]; // [sp+5Ch] [bp-10h] BYREF

  v7 = a2;
  v8 = a1;
  v9 = 0;
  sub_25A4F8(a1, a2, 0xAu);
  v11 = a5;
  v48 = a3;
  v47 = a4;
  if ( __PAIR64__(v7, v8) >= 0xA && !v10 )
  {
    v12 = 0;
    do
    {
      v13 = sub_25A4F8(v8, v7, 0xAu);
      v15 = v14;
      sub_25A4F8(v13, v14, 0xAu);
      ++v12;
      if ( __PAIR64__(v7, v8) < 0x64 )
        break;
      v8 = v13;
      v7 = v15;
    }
    while ( !v16 );
    if ( a5[4] == 1 )
      goto LABEL_7;
LABEL_26:
    v32 = v13;
    v31 = v15;
    goto LABEL_29;
  }
  v12 = 0;
  v13 = v8;
  v15 = v7;
  if ( a5[4] != 1 )
    goto LABEL_26;
LABEL_7:
  v17 = a5[5];
  v18 = 0;
  if ( __PAIR64__(v15, v13) >= 0xA )
  {
    v18 = 0;
    v19 = v13;
    v20 = v15;
    do
    {
      v21 = sub_25A4F8(v19, v20, 0xAu);
      ++v18;
      v22 = __PAIR64__(v20, v19) <= 0x63;
      v19 = v21;
      v20 = v23;
    }
    while ( !v22 );
  }
  v24 = v18 - v17;
  if ( v18 < v17 )
    v24 = 0;
  v25 = v17 - v18;
  if ( v17 < v18 )
    v25 = 0;
  v49 = v25;
  if ( v24 >= 2 )
  {
    v26 = v24 + v12;
    v27 = v17;
    if ( v18 < v17 )
      v27 = v18;
    v28 = ~v27 + v18;
    do
    {
      --v28;
      v13 = sub_25A4F8(v13, v15, 0xAu);
      v15 = v29;
    }
    while ( v28 );
    v12 = v26 - 1;
  }
  if ( v18 <= v17 )
  {
    v32 = v13;
    v31 = v15;
  }
  else
  {
    LODWORD(v30) = sub_25A4F8(v13, v15, 0xAu);
    ++v12;
    v31 = (unsigned __int64)(v30 + 1) >> 32;
    v32 = v30 + 1;
    if ( __PAIR64__(v15, v13) - 10 * v30 <= 4 )
    {
      v31 = HIDWORD(v30);
      v32 = v30;
    }
  }
  v9 = v49;
LABEL_29:
  if ( __PAIR64__(v31, v32) < 0x64 )
  {
    v38 = 40;
    v37 = v12;
    if ( v32 <= 9 )
      goto LABEL_34;
LABEL_40:
    --v38;
    ++v37;
    v39 = (unsigned __int8)v32 / 0xAu;
    v50[v38] = ((unsigned __int8)v32 % 0xAu) | 0x30;
    v41 = v37 == v12;
    if ( v37 == v12 )
      v41 = v9 == 0;
    if ( !v41 )
      goto LABEL_43;
    goto LABEL_44;
  }
  v33 = 0;
  do
  {
    v34 = sub_25A4F8(v32, v31, 0x64u);
    v35 = &v50[v33 + 38];
    v33 -= 2;
    *v35 = word_29F267[v32 - 100 * v34];
    v22 = __PAIR64__(v31, v32) <= 0x270F;
    v32 = v34;
    v31 = v36;
  }
  while ( !v22 );
  v11 = a5;
  v37 = v12 - v33;
  v38 = v33 + 40;
  LOBYTE(v32) = v34;
  if ( v34 > 9 )
    goto LABEL_40;
LABEL_34:
  v39 = v32;
  v40 = v37 == v12;
  if ( v37 == v12 )
    v40 = v9 == 0;
  if ( !v40 )
LABEL_43:
    v50[--v38] = 46;
LABEL_44:
  v50[v38 - 1] = v39 + 48;
  v42 = 101;
  if ( v47 )
    v42 = 69;
  v51 = v42;
  if ( v37 >= 0xA )
  {
    v52 = word_29F267[v37];
    v43 = 3;
  }
  else
  {
    LOBYTE(v52) = v37 + 48;
    v43 = 2;
  }
  v60 = v43;
  v59 = &v51;
  v58 = 2;
  v57 = v9;
  v56 = 0;
  v55 = 41 - v38;
  v54 = &v50[v38 - 1];
  v53 = 2;
  if ( v48 )
  {
    v44 = v11[6] & 1;
    v45 = aLibraryCoreSrc;
    if ( v44 )
      v45 = (const char *)&unk_29EABB;
  }
  else
  {
    v44 = 1;
    v45 = asc_29EABA;
  }
  v61[3] = (const char *)3;
  v61[0] = v45;
  v61[1] = (const char *)v44;
  v61[2] = (const char *)&v53;
  return sub_237C4C(v11, v61);
}
