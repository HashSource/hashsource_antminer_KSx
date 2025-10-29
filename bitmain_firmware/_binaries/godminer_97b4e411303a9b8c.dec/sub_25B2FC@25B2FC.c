int __fastcall sub_25B2FC(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  unsigned int v7; // r7
  unsigned int v8; // r11
  __int64 v11; // r0
  __int64 v12; // r2
  unsigned int v13; // r12
  unsigned __int64 v14; // kr00_8
  unsigned int v15; // r2
  unsigned int v16; // r5
  unsigned int v17; // r3
  unsigned int v18; // r10
  __int64 v19; // r0
  __int64 v20; // r2
  unsigned int v21; // r4
  _DWORD *v22; // r2
  unsigned int v23; // r9
  unsigned int v24; // r12
  unsigned int v25; // r6
  unsigned int v26; // r7
  unsigned __int64 v27; // r4
  unsigned int v28; // r11
  __int64 v29; // r0
  bool v30; // cf
  unsigned int v31; // r2
  unsigned int v32; // r3
  unsigned int v33; // r0
  unsigned int v34; // r10
  unsigned int v35; // r2
  unsigned int v36; // r11
  int v37; // r8
  unsigned int v38; // r0
  unsigned int v39; // r3
  unsigned int v40; // r5
  __int64 v41; // r0
  int v42; // r7
  unsigned int v43; // r10
  unsigned int v44; // r11
  unsigned int v45; // r5
  unsigned int v46; // r8
  __int64 v47; // r0
  unsigned int v48; // r2
  unsigned int v49; // r3
  unsigned int v50; // r12
  unsigned int v51; // kr08_4
  __int64 v52; // r2
  unsigned __int16 *v53; // lr
  int v54; // r6
  unsigned __int16 *v55; // r5
  __int64 v56; // r0
  unsigned __int16 *v57; // r7
  unsigned __int16 *v58; // r5
  unsigned int v59; // r2
  unsigned int v60; // r3
  int v61; // r4
  int v62; // r2
  unsigned int v63; // r1
  unsigned int v64; // r12
  char v65; // r5
  bool v66; // zf
  char v67; // r5
  int v68; // r1
  int v69; // r1
  const char *v70; // r3
  unsigned int v72; // [sp+14h] [bp-78h]
  unsigned int v73; // [sp+1Ch] [bp-70h]
  unsigned int v74; // [sp+1Ch] [bp-70h]
  unsigned int v75; // [sp+20h] [bp-6Ch]
  unsigned int v76; // [sp+24h] [bp-68h]
  unsigned int v77; // [sp+24h] [bp-68h]
  unsigned int v78; // [sp+24h] [bp-68h]
  int v79; // [sp+28h] [bp-64h]
  _BYTE v80[40]; // [sp+2Dh] [bp-5Fh] BYREF
  char v81; // [sp+55h] [bp-37h] BYREF
  unsigned __int16 v82; // [sp+56h] [bp-36h]
  __int16 v83; // [sp+58h] [bp-34h] BYREF
  _BYTE *v84; // [sp+5Ch] [bp-30h]
  int v85; // [sp+60h] [bp-2Ch]
  __int16 v86; // [sp+64h] [bp-28h]
  unsigned int v87; // [sp+68h] [bp-24h]
  __int16 v88; // [sp+70h] [bp-1Ch]
  char *v89; // [sp+74h] [bp-18h]
  int v90; // [sp+78h] [bp-14h]
  const char *v91[4]; // [sp+7Ch] [bp-10h] BYREF

  v7 = a2;
  v8 = a1;
  LODWORD(v11) = sub_26D1EC(a1, a2);
  v13 = a3;
  if ( __PAIR64__(a4, a3) < (__PAIR64__(v7, v8) < 0xA) || v11 | v12 )
  {
    v16 = a3;
    v21 = a4;
    v79 = 0;
    v14 = __PAIR64__(v7, v8);
LABEL_8:
    v22 = a7;
    if ( a7[4] != 1 )
      goto LABEL_25;
  }
  else
  {
    v79 = 0;
    while ( 1 )
    {
      v76 = v13;
      v14 = sub_26D38C(v8, v7, v13, a4, 10, 0, 0, 0);
      v16 = v15;
      v18 = v17;
      LODWORD(v19) = sub_26D1EC(v14, HIDWORD(v14));
      ++v79;
      if ( __PAIR64__(a4, v76) < (__PAIR64__(v7, v8) < 0x64) )
        break;
      v7 = HIDWORD(v14);
      v8 = v14;
      v13 = v16;
      a4 = v18;
      v21 = v18;
      if ( v19 | v20 )
        goto LABEL_8;
    }
    v21 = v18;
    v22 = a7;
    if ( a7[4] != 1 )
    {
LABEL_25:
      v23 = v14;
      v75 = 0;
      v43 = HIDWORD(v14);
      v44 = v16;
      goto LABEL_29;
    }
  }
  v23 = v14;
  v72 = v22[5];
  v24 = 0;
  v77 = v16;
  v73 = v21;
  if ( __PAIR64__(v21, v16) >= (v14 < 0xA) )
  {
    v25 = v16;
    v26 = v21;
    v27 = v14;
    v24 = 0;
    do
    {
      v28 = v24;
      v29 = sub_26D38C(v27, HIDWORD(v27), v25, v26, 10, 0, 0, 0);
      v24 = v28 + 1;
      v30 = __CFSUB__(0, v25, v27 <= 0x63);
      v27 = v29;
      v30 = __CFSUB__(0, v26, v30);
      v25 = v31;
      v26 = v32;
    }
    while ( !v30 );
  }
  v33 = v24 - v72;
  if ( v24 < v72 )
    v33 = 0;
  v34 = v72 - v24;
  if ( v72 < v24 )
    v34 = 0;
  if ( v33 < 2 )
  {
    HIDWORD(v41) = HIDWORD(v14);
    v35 = v77;
    v39 = v73;
    v42 = v79;
    v75 = v34;
    if ( v24 <= v72 )
    {
LABEL_23:
      v79 = v42;
      v43 = HIDWORD(v41);
      v44 = v35;
      v21 = v39;
      goto LABEL_29;
    }
  }
  else
  {
    v35 = v77;
    v36 = v24;
    v37 = v33 + v79;
    v38 = v72;
    if ( v24 < v72 )
      v38 = v24;
    v39 = v73;
    v40 = ~v38 + v24;
    v41 = v14;
    do
    {
      v41 = sub_26D38C(v41, HIDWORD(v41), v35, v39, 10, 0, 0, 0);
      --v40;
    }
    while ( v40 );
    v42 = v37 - 1;
    v23 = v41;
    v75 = v34;
    if ( v36 <= v72 )
      goto LABEL_23;
  }
  v45 = v23;
  v46 = HIDWORD(v41);
  v78 = v35;
  v74 = v39;
  v47 = sub_26D38C(v23, HIDWORD(v41), v35, v39, 10, 0, 0, 0);
  v43 = HIDWORD(v47);
  v23 = v47;
  v44 = v48;
  v21 = v49;
  v51 = v47;
  HIDWORD(v47) = (10 * (unsigned __int64)(unsigned int)v47) >> 32;
  v50 = 10 * v47;
  v79 = v42 + 1;
  v52 = 10LL * v48;
  LODWORD(v47) = (10 * (unsigned __int64)v43) >> 32;
  if ( __PAIR64__(
         v74
       - (10 * v21
        + (__CFADD__(__CFADD__(10 * v43, HIDWORD(v47)), (_DWORD)v52)
         | __CFADD__((_DWORD)v47, (__PAIR64__(v52, 10 * v43) + HIDWORD(v47)) >> 32))
        + HIDWORD(v52)
        + !__CFSUB__(
             v78,
             v47 + ((__PAIR64__(v52, 10 * v43) + HIDWORD(v47)) >> 32),
             __PAIR64__(v46, v45) >= __PAIR64__((10 * __PAIR64__(v43, v51)) >> 32, v50))),
         v78
       - (v47
        + ((__PAIR64__(v52, 10 * v43) + HIDWORD(v47)) >> 32)
        + (__PAIR64__(v46, v45) < __PAIR64__((10 * __PAIR64__(v43, v51)) >> 32, v50)))) >= (__PAIR64__(v46, v45)
                                                                                          - __PAIR64__(
                                                                                              (10 * __PAIR64__(v43, v51)) >> 32,
                                                                                              v50) < 5) )
  {
    v30 = __CFADD__(__CFADD__(v23, 1), v43);
    v43 = (__PAIR64__(v43, v23++) + 1) >> 32;
    v21 = (__PAIR64__(v21, v30) + v44) >> 32;
    v44 += v30;
  }
LABEL_29:
  v53 = word_2B4BB7;
  if ( __PAIR64__(v21, v44) < (__PAIR64__(v43, v23) < 0x64) )
  {
    v61 = v79;
    v62 = 40;
    v63 = v79;
    v64 = v75;
    if ( v23 <= 9 )
    {
LABEL_34:
      v65 = v23;
      goto LABEL_37;
    }
  }
  else
  {
    v54 = 0;
    do
    {
      v55 = v53;
      v56 = sub_26D38C(v23, v43, v44, v21, 100, 0, 0, 0);
      v53 = v55;
      v57 = &v55[v23 - 100 * v56];
      v58 = (unsigned __int16 *)&v80[v54 + 38];
      v54 -= 2;
      *v58 = *v57;
      v30 = v23 <= 0x270F;
      v23 = v56;
      v30 = __CFSUB__(0, v43, v30);
      v43 = HIDWORD(v56);
      v30 = __CFSUB__(0, v44, v30);
      v44 = v59;
      v30 = __CFSUB__(0, v21, v30);
      v21 = v60;
    }
    while ( !v30 );
    v61 = v79;
    v62 = v54 + 40;
    LOBYTE(v23) = v56;
    v63 = v79 - v54;
    v64 = v75;
    if ( (unsigned int)v56 <= 9 )
      goto LABEL_34;
  }
  --v62;
  ++v63;
  v65 = (unsigned __int8)v23 / 0xAu;
  v80[v62] = ((unsigned __int8)v23 % 0xAu) | 0x30;
LABEL_37:
  v66 = v63 == v61;
  if ( v63 == v61 )
    v66 = v64 == 0;
  if ( !v66 )
    v80[--v62] = 46;
  v80[v62 - 1] = v65 + 48;
  v67 = 101;
  if ( a6 )
    v67 = 69;
  v81 = v67;
  if ( v63 >= 0xA )
  {
    v82 = v53[v63];
    v68 = 3;
  }
  else
  {
    LOBYTE(v82) = v63 + 48;
    v68 = 2;
  }
  v90 = v68;
  v89 = &v81;
  v88 = 2;
  v87 = v64;
  v86 = 0;
  v85 = 41 - v62;
  v84 = &v80[v62 - 1];
  v83 = 2;
  if ( a5 )
  {
    v69 = a7[6] & 1;
    v70 = aLibraryCoreSrc;
    if ( v69 )
      v70 = (const char *)&unk_2B440B;
  }
  else
  {
    v69 = 1;
    v70 = asc_2B440A;
  }
  v91[1] = (const char *)v69;
  v91[0] = v70;
  v91[3] = (const char *)3;
  v91[2] = (const char *)&v83;
  return sub_24AA24(a7, v91);
}
