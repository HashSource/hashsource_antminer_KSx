int __fastcall sub_248524(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4, int *a5)
{
  unsigned int v5; // r7
  unsigned int v6; // r11
  unsigned int v7; // r9
  unsigned int v8; // r4
  __int64 v9; // r0
  __int64 v10; // r2
  unsigned int v11; // r12
  unsigned __int64 v12; // kr00_8
  unsigned __int64 v13; // r2
  unsigned int v14; // r5
  unsigned int v15; // r10
  __int64 v16; // r0
  __int64 v17; // r2
  unsigned int v18; // r4
  int *v19; // r2
  unsigned int v20; // r9
  unsigned int v21; // r12
  unsigned __int64 v22; // r6
  unsigned __int64 v23; // r4
  unsigned int v24; // r11
  __int64 v25; // r0
  bool v26; // cf
  unsigned __int64 v27; // r2
  unsigned int v28; // r0
  int v29; // r10
  unsigned __int64 v30; // r2
  unsigned int v31; // r11
  int v32; // r8
  unsigned int v33; // r0
  int v34; // r5
  unsigned __int64 v35; // r0
  int v36; // r7
  unsigned int v37; // r10
  unsigned int v38; // r11
  unsigned int v39; // r5
  unsigned int v40; // r8
  unsigned __int64 v41; // kr08_8
  __int64 v42; // r0
  unsigned int v43; // r2
  unsigned int v44; // r3
  unsigned int v45; // r12
  unsigned int v46; // kr10_4
  __int64 v47; // r2
  _WORD *v48; // lr
  int v49; // r6
  _WORD *v50; // r5
  __int64 v51; // r0
  _WORD *v52; // r7
  _WORD *v53; // r5
  unsigned int v54; // r2
  unsigned int v55; // r3
  int v56; // r4
  int v57; // r2
  unsigned int v58; // r1
  int v59; // r12
  char v60; // r5
  bool v61; // zf
  char v62; // r5
  int v63; // r1
  int v64; // r1
  const char *v65; // r3
  unsigned int v67; // [sp+14h] [bp-78h]
  unsigned int v68; // [sp+1Ch] [bp-70h]
  int v69; // [sp+20h] [bp-6Ch]
  unsigned int v70; // [sp+24h] [bp-68h]
  unsigned int v71; // [sp+24h] [bp-68h]
  int v72; // [sp+28h] [bp-64h]
  _BYTE v73[40]; // [sp+2Dh] [bp-5Fh] BYREF
  char v74; // [sp+55h] [bp-37h] BYREF
  __int16 v75; // [sp+56h] [bp-36h]
  __int16 v76; // [sp+58h] [bp-34h] BYREF
  _BYTE *v77; // [sp+5Ch] [bp-30h]
  int v78; // [sp+60h] [bp-2Ch]
  __int16 v79; // [sp+64h] [bp-28h]
  int v80; // [sp+68h] [bp-24h]
  __int16 v81; // [sp+70h] [bp-1Ch]
  char *v82; // [sp+74h] [bp-18h]
  int v83; // [sp+78h] [bp-14h]
  const char *v84[4]; // [sp+7Ch] [bp-10h] BYREF

  v5 = HIDWORD(a1);
  v6 = a1;
  v7 = HIDWORD(a2);
  v8 = a2;
  v9 = sub_25A414(a1, a2, 0xAu, 0);
  v11 = v8;
  if ( __PAIR64__(v7, v8) < (__PAIR64__(v5, v6) < 0xA) || v9 | v10 )
  {
    v14 = v8;
    v18 = v7;
    v72 = 0;
    v12 = __PAIR64__(v5, v6);
LABEL_8:
    v19 = a5;
    if ( a5[4] != 1 )
      goto LABEL_25;
  }
  else
  {
    v72 = 0;
    while ( 1 )
    {
      v70 = v11;
      v12 = sub_25A5B4(__PAIR64__(v5, v6), __PAIR64__(v7, v11), 0xAu, 0);
      v15 = HIDWORD(v13);
      v14 = v13;
      v16 = sub_25A414(v12, v13, 0xAu, 0);
      ++v72;
      if ( __PAIR64__(v7, v70) < (__PAIR64__(v5, v6) < 0x64) )
        break;
      v5 = HIDWORD(v12);
      v6 = v12;
      v11 = v14;
      v7 = v15;
      v18 = v15;
      if ( v16 | v17 )
        goto LABEL_8;
    }
    v18 = v15;
    v19 = a5;
    if ( a5[4] != 1 )
    {
LABEL_25:
      v20 = v12;
      v69 = 0;
      v37 = HIDWORD(v12);
      v38 = v14;
      goto LABEL_29;
    }
  }
  v20 = v12;
  v67 = v19[5];
  v21 = 0;
  v71 = v14;
  v68 = v18;
  if ( __PAIR64__(v18, v14) >= (v12 < 0xA) )
  {
    v22 = __PAIR64__(v18, v14);
    v23 = v12;
    v21 = 0;
    do
    {
      v24 = v21;
      v25 = sub_25A5B4(v23, v22, 0xAu, 0);
      v21 = v24 + 1;
      v26 = __CFSUB__(0, (_DWORD)v22, v23 <= 0x63);
      v23 = v25;
      v26 = __CFSUB__(0, HIDWORD(v22), v26);
      v22 = v27;
    }
    while ( !v26 );
  }
  v28 = v21 - v67;
  if ( v21 < v67 )
    v28 = 0;
  v29 = v67 - v21;
  if ( v67 < v21 )
    v29 = 0;
  if ( v28 < 2 )
  {
    HIDWORD(v35) = HIDWORD(v12);
    v30 = __PAIR64__(v68, v71);
    v36 = v72;
    v69 = v29;
    if ( v21 <= v67 )
    {
LABEL_23:
      v72 = v36;
      v37 = HIDWORD(v35);
      v18 = HIDWORD(v30);
      v38 = v30;
      goto LABEL_29;
    }
  }
  else
  {
    LODWORD(v30) = v71;
    v31 = v21;
    v32 = v28 + v72;
    v33 = v67;
    if ( v21 < v67 )
      v33 = v21;
    HIDWORD(v30) = v68;
    v34 = ~v33 + v21;
    v35 = v12;
    do
    {
      v35 = sub_25A5B4(v35, v30, 0xAu, 0);
      --v34;
    }
    while ( v34 );
    v36 = v32 - 1;
    v20 = v35;
    v69 = v29;
    if ( v31 <= v67 )
      goto LABEL_23;
  }
  v39 = v20;
  v40 = HIDWORD(v35);
  LODWORD(v35) = v20;
  v41 = v30;
  v42 = sub_25A5B4(v35, v30, 0xAu, 0);
  v37 = HIDWORD(v42);
  v20 = v42;
  v38 = v43;
  v18 = v44;
  v46 = v42;
  HIDWORD(v42) = (10 * (unsigned __int64)(unsigned int)v42) >> 32;
  v45 = 10 * v42;
  v72 = v36 + 1;
  v47 = 10LL * v43;
  LODWORD(v42) = (10 * (unsigned __int64)v37) >> 32;
  if ( __PAIR64__(
         HIDWORD(v41)
       - (10 * v18
        + (__CFADD__(__CFADD__(10 * v37, HIDWORD(v42)), (_DWORD)v47)
         | __CFADD__((_DWORD)v42, (__PAIR64__(v47, 10 * v37) + HIDWORD(v42)) >> 32))
        + HIDWORD(v47)
        + !__CFSUB__(
             (_DWORD)v41,
             v42 + ((__PAIR64__(v47, 10 * v37) + HIDWORD(v42)) >> 32),
             __PAIR64__(v40, v39) >= __PAIR64__((10 * __PAIR64__(v37, v46)) >> 32, v45))),
         v41
       - (v42
        + ((__PAIR64__(v47, 10 * v37) + HIDWORD(v42)) >> 32)
        + (__PAIR64__(v40, v39) < __PAIR64__((10 * __PAIR64__(v37, v46)) >> 32, v45)))) >= (__PAIR64__(v40, v39)
                                                                                          - __PAIR64__(
                                                                                              (10 * __PAIR64__(v37, v46)) >> 32,
                                                                                              v45) < 5) )
  {
    v26 = __CFADD__(__CFADD__(v20, 1), v37);
    v37 = (__PAIR64__(v37, v20++) + 1) >> 32;
    v18 = (__PAIR64__(v18, v26) + v38) >> 32;
    v38 += v26;
  }
LABEL_29:
  v48 = word_29F267;
  if ( __PAIR64__(v18, v38) < (__PAIR64__(v37, v20) < 0x64) )
  {
    v56 = v72;
    v57 = 40;
    v58 = v72;
    v59 = v69;
    if ( v20 <= 9 )
    {
LABEL_34:
      v60 = v20;
      goto LABEL_37;
    }
  }
  else
  {
    v49 = 0;
    do
    {
      v50 = v48;
      v51 = sub_25A5B4(__PAIR64__(v37, v20), __PAIR64__(v18, v38), 0x64u, 0);
      v48 = v50;
      v52 = &v50[v20 - 100 * v51];
      v53 = &v73[v49 + 38];
      v49 -= 2;
      *v53 = *v52;
      v26 = v20 <= 0x270F;
      v20 = v51;
      v26 = __CFSUB__(0, v37, v26);
      v37 = HIDWORD(v51);
      v26 = __CFSUB__(0, v38, v26);
      v38 = v54;
      v26 = __CFSUB__(0, v18, v26);
      v18 = v55;
    }
    while ( !v26 );
    v56 = v72;
    v57 = v49 + 40;
    LOBYTE(v20) = v51;
    v58 = v72 - v49;
    v59 = v69;
    if ( (unsigned int)v51 <= 9 )
      goto LABEL_34;
  }
  --v57;
  ++v58;
  v60 = (unsigned __int8)v20 / 0xAu;
  v73[v57] = ((unsigned __int8)v20 % 0xAu) | 0x30;
LABEL_37:
  v61 = v58 == v56;
  if ( v58 == v56 )
    v61 = v59 == 0;
  if ( !v61 )
    v73[--v57] = 46;
  v73[v57 - 1] = v60 + 48;
  v62 = 101;
  if ( a4 )
    v62 = 69;
  v74 = v62;
  if ( v58 >= 0xA )
  {
    v75 = v48[v58];
    v63 = 3;
  }
  else
  {
    LOBYTE(v75) = v58 + 48;
    v63 = 2;
  }
  v83 = v63;
  v82 = &v74;
  v81 = 2;
  v80 = v59;
  v79 = 0;
  v78 = 41 - v57;
  v77 = &v73[v57 - 1];
  v76 = 2;
  if ( a3 )
  {
    v64 = a5[6] & 1;
    v65 = aLibraryCoreSrc;
    if ( v64 )
      v65 = (const char *)&unk_29EABB;
  }
  else
  {
    v64 = 1;
    v65 = asc_29EABA;
  }
  v84[1] = (const char *)v64;
  v84[0] = v65;
  v84[3] = (const char *)3;
  v84[2] = (const char *)&v76;
  return sub_237C4C(a5, v84);
}
