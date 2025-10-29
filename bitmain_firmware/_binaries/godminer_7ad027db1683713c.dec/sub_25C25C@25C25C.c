int __fastcall sub_25C25C(_DWORD *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned int v6; // lr
  unsigned int v8; // r7
  int v9; // r12
  unsigned __int64 v10; // r0
  char v11; // r11
  int v12; // r3
  int v13; // r12
  char v14; // r6
  unsigned int v15; // r7
  int v16; // r5
  unsigned int v17; // r2
  int v18; // r4
  unsigned int v19; // r7
  int v20; // r10
  int v21; // r5
  unsigned int v22; // r3
  int v23; // r5
  int v24; // r4
  int v25; // r7
  int v26; // r3
  unsigned int v27; // lr
  _BOOL1 v28; // cf
  unsigned int v29; // r5
  int v30; // r4
  unsigned int v31; // r2
  unsigned int v32; // r3
  unsigned __int64 v33; // kr18_8
  int v34; // r7
  unsigned int v35; // r8
  unsigned int v36; // r6
  unsigned int v37; // r10
  int v38; // r3
  unsigned int v40; // r1
  unsigned int v41; // r0
  unsigned int v42; // r1
  unsigned int v43; // r0
  char v44; // r3
  unsigned int v45; // r0
  int v46; // r2
  int v47; // r8
  char v48; // r7
  char v49; // r12
  unsigned int v50; // r6
  unsigned int v51; // lr
  int v52; // r4
  int v53; // r3
  unsigned int v54; // r6
  int v55; // r7
  unsigned int v56; // r1
  int v57; // r6
  unsigned int v58; // r11
  unsigned int v59; // r4
  unsigned int v60; // r2
  unsigned int v61; // r7
  unsigned int v62; // r2
  unsigned int v63; // r12
  unsigned int v64; // r3
  int v65; // r8
  unsigned __int64 v66; // kr20_8
  unsigned int v67; // r9
  int v68; // r10
  unsigned int v69; // r4
  unsigned int v70; // lr
  unsigned int v71; // r4
  unsigned int v72; // lr
  __int64 v73; // r0
  unsigned __int64 v74; // r2
  unsigned int v75; // r11
  int v76; // r2
  unsigned int v77; // r0
  unsigned int v78; // r5
  unsigned int v79; // r11
  int v80; // r1
  int v81; // r8
  unsigned __int64 v82; // r2
  unsigned int v83; // r10
  unsigned int v84; // r11
  int v85; // r5
  int v86; // r6
  unsigned int v87; // lr
  unsigned int v88; // r12
  unsigned int v89; // r2
  unsigned __int64 v90; // kr50_8
  unsigned int v91; // r3
  int v92; // r8
  unsigned int v93; // kr10_4
  unsigned int v94; // r1
  _DWORD *v95; // [sp+4h] [bp-18h]
  _DWORD *v96; // [sp+4h] [bp-18h]
  unsigned int v97; // [sp+8h] [bp-14h]
  unsigned int v98; // [sp+8h] [bp-14h]
  int v99; // [sp+8h] [bp-14h]
  int v100; // [sp+8h] [bp-14h]
  int v101; // [sp+Ch] [bp-10h]
  int v102; // [sp+Ch] [bp-10h]
  unsigned int v103; // [sp+10h] [bp-Ch]
  unsigned int v104; // [sp+10h] [bp-Ch]
  unsigned int v105; // [sp+10h] [bp-Ch]
  unsigned int v106; // [sp+10h] [bp-Ch]
  int v107; // [sp+14h] [bp-8h]
  unsigned int v108; // [sp+14h] [bp-8h]
  unsigned int v109; // [sp+18h] [bp-4h]
  int v110; // [sp+18h] [bp-4h]
  int v111; // [sp+18h] [bp-4h]

  v6 = HIDWORD(a2);
  v8 = a2;
  v9 = HIDWORD(a3);
  if ( !a4 || a5 )
  {
    LODWORD(v10) = 0;
    if ( __CFSUB__(HIDWORD(a3), HIDWORD(a5), __CFSUB__((_DWORD)a3, (_DWORD)a5, a2 >= a4)) && a3 )
    {
      HIDWORD(v10) = __clz(a5);
      LODWORD(v10) = __clz(a3) + 32;
      if ( HIDWORD(a3) )
        LODWORD(v10) = __clz(HIDWORD(a3));
      HIDWORD(v10) += 32;
      v101 = a3;
      if ( HIDWORD(a5) )
        HIDWORD(v10) = __clz(HIDWORD(a5));
      v97 = a2;
      v11 = BYTE4(v10) - v10;
      v95 = a1;
      HIDWORD(v10) = (HIDWORD(v10) - v10) & 0x7F;
      v103 = HIDWORD(a2);
      v12 = 32 - HIDWORD(v10);
      v13 = HIDWORD(v10) - 32;
      v14 = 64 - BYTE4(v10);
      LOBYTE(v10) = BYTE4(v10) - 64;
      v15 = ((unsigned int)a5 >> (32 - BYTE4(v10))) | (HIDWORD(a5) << SBYTE4(v10));
      if ( HIDWORD(v10) - 32 >= 0 )
        v15 = (_DWORD)a5 << v13;
      v16 = HIDWORD(a4) >> v14;
      if ( v12 >= 0 )
        v16 = 0;
      v17 = ((unsigned int)a4 >> (96 - BYTE4(v10))) | (HIDWORD(a4) << v10);
      v18 = HIDWORD(v10) - 96;
      if ( HIDWORD(v10) - 96 >= 0 )
        v17 = (_DWORD)a4 << v18;
      if ( HIDWORD(v10) < 0x40 )
        v17 = v15 | v16;
      if ( !HIDWORD(v10) )
        v17 = HIDWORD(a5);
      v19 = ((unsigned int)a4 >> v14) | (HIDWORD(a4) << (BYTE4(v10) - 32));
      if ( v12 >= 0 )
        v19 = HIDWORD(a4) >> v12;
      v20 = (_DWORD)a4 << v10;
      v21 = (_DWORD)a5 << SBYTE4(v10);
      v22 = (unsigned int)a4 >> v12;
      if ( v13 >= 0 )
        v21 = 0;
      if ( v18 >= 0 )
        v20 = 0;
      if ( HIDWORD(v10) < 0x40 )
        v20 = v21 | v19;
      v23 = v11 & 0x3F;
      if ( !HIDWORD(v10) )
        v20 = a5;
      v24 = v23 - 32;
      LODWORD(v10) = 1u >> (32 - (v11 & 0x3F));
      v25 = (_DWORD)a4 << SBYTE4(v10);
      if ( v23 - 32 >= 0 )
        LODWORD(v10) = 1 << v24;
      if ( v13 >= 0 )
        v25 = 0;
      if ( HIDWORD(v10) >= 0x40 )
        v25 = 0;
      v26 = v22 | (HIDWORD(a4) << SBYTE4(v10));
      v27 = v97;
      if ( v13 >= 0 )
        v26 = (_DWORD)a4 << v13;
      v28 = HIDWORD(v10) >= 0x40;
      HIDWORD(v10) = 1 << v23;
      v9 = HIDWORD(a3);
      v29 = v103;
      if ( v28 )
        v26 = 0;
      v109 = v10;
      if ( v24 >= 0 )
        HIDWORD(v10) = 0;
      LODWORD(v10) = 0;
      v30 = 0;
      v107 = HIDWORD(v10);
      while ( 1 )
      {
        v33 = __PAIR64__(v29, v27) - __PAIR64__(v26, v25);
        v104 = v25;
        v28 = __CFSUB__(v101, v20, __PAIR64__(v29, v27) >= __PAIR64__(v26, v25));
        HIDWORD(v10) = v101 - (v20 + (__PAIR64__(v29, v27) < __PAIR64__(v26, v25)));
        v34 = v9;
        v9 -= v17 + !v28;
        v35 = v20;
        v36 = v26;
        v37 = v17;
        if ( v9 <= -1 )
        {
          v31 = v109;
          v9 = v34;
          v32 = v107;
        }
        else
        {
          v32 = v107;
          v31 = v109;
          LODWORD(v10) = v10 | v107;
          v30 |= v109;
          if ( !__CFSUB__(v9, HIDWORD(a5), __CFSUB__(HIDWORD(v10), (_DWORD)a5, v33 >= a4)) )
          {
            v38 = 0;
            v6 = HIDWORD(v33);
            v8 = v33;
            goto LABEL_52;
          }
          v29 = HIDWORD(v33);
          v27 = v33;
          v101 = HIDWORD(v10);
        }
        v107 = (v32 >> 1) | ((v31 & 1) << 31);
        v26 = (v36 >> 1) | (v35 << 31);
        v109 = v31 >> 1;
        v25 = (v104 >> 1) | ((v36 & 1) << 31);
        v17 = v37 >> 1;
        v20 = (v35 >> 1) | ((v37 & 1) << 31);
      }
    }
    HIDWORD(v10) = a3;
    v30 = 0;
    goto LABEL_50;
  }
  if ( !a3 )
  {
    v69 = HIDWORD(a2);
    LODWORD(v10) = sub_25A4F8(a2, HIDWORD(a2), a4);
    v70 = v69;
    v30 = HIDWORD(v10);
    v9 = 0;
    HIDWORD(v10) = 0;
    v6 = (__PAIR64__(v70, v8) - __PAIR64__(v30, v10) * a4) >> 32;
    v8 -= v10 * a4;
LABEL_50:
    v38 = 0;
LABEL_51:
    v110 = 0;
    goto LABEL_53;
  }
  if ( a3 < a4 )
  {
    v40 = __clz(a4);
    v41 = __clz(a3) + 32;
    if ( HIDWORD(a3) )
      v41 = __clz(HIDWORD(a3));
    v42 = v40 + 32;
    if ( HIDWORD(a4) )
      v42 = __clz(HIDWORD(a4));
    v95 = a1;
    v98 = a2;
    v43 = v42 - v41;
    v44 = v43 + 64;
    if ( !v43 )
      v44 = 63;
    v45 = v44 & 0x7F;
    v46 = 32 - v45;
    v47 = v45 - 32;
    v48 = 64 - (v44 & 0x7F);
    v111 = HIDWORD(a3);
    v49 = (v44 & 0x7F) - 64;
    v50 = HIDWORD(a4) >> v48;
    v105 = v6;
    if ( (int)(32 - v45) >= 0 )
      v50 = 0;
    v51 = ((unsigned int)a4 >> (96 - v45)) | (HIDWORD(a4) << v49);
    v52 = v45 - 96;
    v53 = v44 & 0x3F;
    if ( (int)(v45 - 96) >= 0 )
      v51 = (_DWORD)a4 << v52;
    if ( v45 < 0x40 )
      v51 = v50;
    if ( !v45 )
      v51 = 0;
    v54 = ((unsigned int)a4 >> v48) | (HIDWORD(a4) << (32 - v48));
    v55 = (_DWORD)a5 << v45;
    if ( v46 >= 0 )
      v54 = HIDWORD(a4) >> v46;
    if ( v47 >= 0 )
      v55 = 0;
    v56 = (_DWORD)a4 << v49;
    if ( v52 >= 0 )
      v56 = 0;
    if ( v45 < 0x40 )
      v56 = v55 | v54;
    if ( !v45 )
      v56 = a5;
    v57 = v53 - 32;
    v58 = 1u >> (32 - v53);
    v59 = (_DWORD)a4 << v45;
    v60 = (unsigned int)a4 >> v46;
    if ( v53 - 32 >= 0 )
      v58 = 1 << v57;
    if ( v47 >= 0 )
      v59 = 0;
    v61 = 0;
    v62 = v60 | (HIDWORD(a4) << v45);
    if ( v45 >= 0x40 )
      v59 = 0;
    if ( v47 >= 0 )
      v62 = (_DWORD)a4 << v47;
    v63 = 1 << v53;
    v64 = a3;
    if ( v45 >= 0x40 )
      v62 = 0;
    if ( v57 >= 0 )
      v63 = 0;
    v65 = 0;
    while ( 1 )
    {
      v66 = __PAIR64__(v105, v98) - __PAIR64__(v62, v59);
      v67 = v64 - (v56 + (__PAIR64__(v105, v98) < __PAIR64__(v62, v59)));
      v68 = v111 - (v51 + !__CFSUB__(v64, v56, __PAIR64__(v105, v98) >= __PAIR64__(v62, v59)));
      if ( v68 > -1 )
      {
        v61 |= v63;
        v65 |= v58;
        if ( !__PAIR64__(v68, v67) )
        {
          LODWORD(v73) = sub_25A4F8(v66, HIDWORD(v66), a4);
          v74 = v73 * a4;
          v30 = HIDWORD(v73) | v65;
          v9 = 0;
          v10 = (unsigned int)v73 | (unsigned __int64)v61;
          v6 = (v66 - v74) >> 32;
          v8 = v66 - v74;
          v38 = 0;
LABEL_52:
          v110 = 0;
          a1 = v95;
          goto LABEL_53;
        }
        v98 -= v59;
        v64 = v67;
        v105 = HIDWORD(v66);
        v111 = v68;
      }
      v28 = v58 & 1;
      v58 >>= 1;
      v63 = (v63 >> 1) | (v28 << 31);
      v59 = (v59 >> 1) | ((v62 & 1) << 31);
      v62 = (v62 >> 1) | (v56 << 31);
      v28 = v51 & 1;
      v51 >>= 1;
      v56 = (v56 >> 1) | (v28 << 31);
    }
  }
  if ( a4 == a3 )
  {
    v71 = HIDWORD(a2);
    LODWORD(v10) = sub_25A4F8(a2, HIDWORD(a2), a3);
    v72 = v71;
    v30 = HIDWORD(v10);
    v38 = 1;
    v9 = 0;
    HIDWORD(v10) = 0;
    v6 = (__PAIR64__(v72, v8) - __PAIR64__(v30, v10) * a3) >> 32;
    v8 -= v10 * a3;
    goto LABEL_51;
  }
  v75 = HIDWORD(a2);
  LODWORD(v10) = sub_25A4F8(a3, HIDWORD(a3), a4);
  v110 = HIDWORD(v10);
  v38 = v10;
  v76 = (a3 - v10 * (unsigned int)a4) >> 32;
  HIDWORD(v10) = a3 - v10 * a4;
  if ( HIDWORD(a4) )
  {
    v6 = v75;
    v102 = v76;
    if ( __CFSUB__(v76, 0, __CFSUB__(HIDWORD(v10), 0, __PAIR64__(v75, v8) >= a4)) )
    {
      v83 = (__int64)HIDWORD(a4) >> 1;
      v106 = v75;
      v96 = a1;
      LODWORD(v10) = (__int64)a4 >> 1;
      v84 = (_DWORD)a4 << 31;
      v85 = 0;
      v86 = 0;
      v87 = 0;
      v88 = 0;
      v100 = v38;
      v108 = 0x80000000;
      while ( 1 )
      {
        v90 = __PAIR64__(v106, v8) - __PAIR64__(v84, v88);
        v91 = HIDWORD(v10) - (v10 + (__PAIR64__(v106, v8) < __PAIR64__(v84, v88)));
        v92 = v102 - (v83 + !__CFSUB__(HIDWORD(v10), (_DWORD)v10, __PAIR64__(v106, v8) >= __PAIR64__(v84, v88)));
        if ( v92 <= -1 )
        {
          v89 = v108;
        }
        else
        {
          v89 = v108;
          v85 |= v87;
          v86 |= v108;
          if ( !__PAIR64__(v92, v91) )
          {
            v93 = sub_25A4F8(v90, HIDWORD(v90), a4);
            v9 = 0;
            LODWORD(v10) = v93 | v85;
            v6 = (v90 - __PAIR64__(v94, v93) * (unsigned int)a4) >> 32;
            v8 = v90 - v93 * a4;
            v30 = v94 | v86;
            HIDWORD(v10) = 0;
            a1 = v96;
            v38 = v100;
            goto LABEL_53;
          }
          v106 = (__PAIR64__(v106, v8) - __PAIR64__(v84, v88)) >> 32;
          v8 -= v88;
          HIDWORD(v10) = v91;
          v102 = v92;
        }
        v87 = (v87 >> 1) | ((v89 & 1) << 31);
        v88 = (v88 >> 1) | ((v84 & 1) << 31);
        v108 = v89 >> 1;
        v84 = (v84 >> 1) | ((_DWORD)v10 << 31);
        v28 = v83 & 1;
        v83 >>= 1;
        LODWORD(v10) = ((unsigned int)v10 >> 1) | (v28 << 31);
      }
    }
    LODWORD(v10) = 0;
    v30 = 0;
    v9 = v76;
  }
  else
  {
    v99 = v10;
    v77 = sub_25A4F8(v75, HIDWORD(v10), (unsigned int)a4);
    v78 = v75 - v77 * a4;
    v79 = v77;
    v81 = v80;
    LODWORD(v10) = sub_25A4F8(v8, v78, (unsigned int)a4);
    v82 = v10 * (unsigned int)a4;
    v9 = 0;
    v30 = v79 | HIDWORD(v10);
    HIDWORD(v10) = 0;
    v6 = (__PAIR64__(v78, v8) - __PAIR64__(HIDWORD(v82), (int)v10 * (int)a4)) >> 32;
    v8 -= v10 * a4;
    v38 = v81 | v99;
  }
LABEL_53:
  *a1 = v10;
  a1[1] = v30;
  a1[2] = v38;
  a1[3] = v110;
  a1[4] = v8;
  a1[5] = v6;
  a1[6] = HIDWORD(v10);
  a1[7] = v9;
  return v110;
}
