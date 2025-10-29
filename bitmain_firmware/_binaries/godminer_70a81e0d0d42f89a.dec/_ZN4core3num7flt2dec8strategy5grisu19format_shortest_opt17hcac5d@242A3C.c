unsigned int __fastcall core::num::flt2dec::strategy::grisu::format_shortest_opt(
        int a1,
        int a2,
        int a3,
        unsigned int a4)
{
  unsigned __int64 v4; // r4
  unsigned int v5; // r8
  unsigned int v6; // lr
  __int64 v7; // r10
  unsigned int v8; // r12
  bool v9; // cf
  unsigned int v10; // lr
  unsigned int v11; // r7
  unsigned int v12; // r8
  int v13; // r11
  unsigned int v14; // r1
  unsigned int v15; // r2
  unsigned int v16; // r3
  unsigned int v17; // r4
  unsigned int v18; // r1
  unsigned int v19; // r6
  unsigned int v20; // r3
  int v21; // r1
  unsigned int v22; // r10
  int v23; // r3
  char v24; // r9
  unsigned __int8 v25; // r6
  int v26; // r8
  unsigned int v27; // r3
  int v28; // lr
  int v29; // r5
  unsigned int v30; // r0
  unsigned int v31; // r7
  int v32; // r3
  unsigned int v33; // r4
  unsigned int v34; // r0
  int v35; // r11
  __int64 v36; // kr30_8
  unsigned int v37; // r10
  unsigned int v38; // r7
  unsigned int v39; // kr38_4
  unsigned __int64 v40; // kr40_8
  int v41; // r11
  int v42; // r12
  unsigned int v43; // r7
  unsigned int v44; // r5
  int v45; // r2
  unsigned __int64 v46; // kr48_8
  unsigned int v47; // r9
  int v48; // r2
  int v49; // r6
  unsigned __int64 v50; // kr68_8
  unsigned __int64 v51; // kr70_8
  unsigned __int64 v52; // kr80_8
  unsigned __int64 v53; // r2
  int v54; // r3
  unsigned int v55; // r6
  unsigned __int64 v56; // kr88_8
  int v57; // r5
  int v58; // lr
  unsigned int v59; // r4
  unsigned int v60; // r11
  int v61; // r6
  unsigned __int64 v62; // kr90_8
  int v63; // r11
  __int64 v64; // r6
  unsigned __int64 v65; // kr98_8
  unsigned int v66; // r8
  unsigned int v67; // r5
  unsigned int v68; // r10
  unsigned int v69; // r9
  int v70; // r0
  char v71; // r3
  unsigned int v72; // r0
  unsigned int v73; // r1
  unsigned __int64 v74; // krA0_8
  unsigned int v75; // r10
  unsigned int v76; // r7
  _BOOL4 v77; // r8
  unsigned int v78; // r11
  unsigned __int64 v79; // krB0_8
  int v80; // r12
  unsigned __int64 v81; // krB8_8
  unsigned int result; // r0
  unsigned int v83; // r2
  int v84; // lr
  unsigned int v85; // r3
  unsigned int v86; // kr20_4
  int v88; // r12
  int v89; // r9
  int v90; // r11
  unsigned __int64 v91; // r4
  int v92; // r2
  int v93; // r1
  _BOOL4 v94; // r3
  unsigned __int64 v95; // krD0_8
  unsigned int v96; // r9
  unsigned int v97; // lr
  unsigned __int64 v98; // krE0_8
  unsigned __int64 v99; // r2
  const char *v100; // r0
  char **v101; // r2
  const char *v102; // r0
  char **v103; // r2
  const char *v104; // r0
  char **v105; // r2
  unsigned int v106; // [sp+0h] [bp-7Ch]
  int v107; // [sp+4h] [bp-78h]
  __int64 v108; // [sp+8h] [bp-74h]
  __int16 v110; // [sp+14h] [bp-68h]
  unsigned int v111; // [sp+20h] [bp-5Ch]
  unsigned int v112; // [sp+24h] [bp-58h]
  int v113; // [sp+24h] [bp-58h]
  int v114; // [sp+28h] [bp-54h]
  char *v116; // [sp+30h] [bp-4Ch]
  char v117; // [sp+34h] [bp-48h]
  int v118; // [sp+34h] [bp-48h]
  unsigned int v119; // [sp+34h] [bp-48h]
  int v120; // [sp+38h] [bp-44h]
  char v121; // [sp+38h] [bp-44h]
  unsigned int v122; // [sp+3Ch] [bp-40h]
  int v123; // [sp+3Ch] [bp-40h]
  unsigned int v124; // [sp+40h] [bp-3Ch]
  char v125; // [sp+40h] [bp-3Ch]
  unsigned int v126; // [sp+40h] [bp-3Ch]
  int v127; // [sp+40h] [bp-3Ch]
  unsigned int v129; // [sp+48h] [bp-34h] BYREF
  unsigned int v130; // [sp+4Ch] [bp-30h]
  __int16 v131; // [sp+50h] [bp-2Ch]
  int v132; // [sp+58h] [bp-24h] BYREF
  int v133; // [sp+5Ch] [bp-20h]
  _DWORD v134[6]; // [sp+64h] [bp-18h] BYREF

  v4 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
  {
    v100 = aAssertionFaile_32;
    v101 = &off_2E5CA4;
    goto LABEL_142;
  }
  v5 = *(_DWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 12);
  if ( !*(_QWORD *)(a2 + 8) )
  {
    v102 = aAssertionFaile_33;
    v103 = &off_2E5CB4;
    goto LABEL_148;
  }
  v7 = *(_QWORD *)(a2 + 16);
  if ( !v7 )
  {
    v100 = aAssertionFaile_34;
    v101 = &off_2E5CC4;
LABEL_142:
    core::panicking::panic((int)v100, 28, (int)v101);
  }
  if ( __CFADD__(__CFADD__((_DWORD)v4, (_DWORD)v7), HIDWORD(v4))
     | __CFADD__(HIDWORD(v7), __CFADD__((_DWORD)v4, (_DWORD)v7) + HIDWORD(v4)) )
  {
    core::panicking::panic((int)aAssertionFaile_35, 54, (int)&off_2E5CD4);
  }
  v8 = v4 - v5;
  v9 = v4 >= __PAIR64__(v6, v5);
  v10 = (v4 - __PAIR64__(v6, v5)) >> 32;
  if ( !v9 )
    core::panicking::panic((int)aAssertionFaile_36, 55, (int)&off_2E5CE4);
  if ( a4 < 0x11 )
  {
    v104 = aAssertionFaile_37;
    v105 = &off_2E5CF4;
    goto LABEL_146;
  }
  v12 = (v4 + v7) >> 32;
  v11 = v4 + v7;
  if ( v12 > 0x1FFFFFFF )
  {
    v104 = aAssertionFaile_38;
    v105 = &off_2E5D04;
LABEL_146:
    core::panicking::panic((int)v104, 45, (int)v105);
  }
  v13 = *(unsigned __int16 *)(a2 + 24);
  v14 = v12;
  v124 = v4;
  if ( v12 )
  {
    v14 = v4 + v7;
    v11 = v12;
  }
  v15 = v11;
  if ( v11 < 0x10000 )
    v15 = (v11 << 16) | HIWORD(v14);
  v16 = v14;
  v122 = HIDWORD(v4);
  if ( v11 < 0x10000 )
    v16 = v14 << 16;
  v17 = v15;
  if ( v15 < 0x1000000 )
    v17 = (v15 << 8) | HIBYTE(v16);
  v18 = v16;
  if ( v15 < 0x1000000 )
    v18 = v16 << 8;
  v19 = v17;
  if ( v17 < 0x10000000 )
    v19 = (16 * v17) | (v18 >> 28);
  v20 = v18;
  if ( v17 < 0x10000000 )
    v20 = 16 * v18;
  v21 = v19;
  v22 = v20;
  if ( v19 < 0x40000000 )
  {
    v21 = (4 * v19) | (v20 >> 30);
    v22 = 4 * v20;
  }
  v23 = v13;
  v24 = v21 > -1;
  if ( !v12 )
    v23 = v13 - 32;
  if ( v11 < 0x10000 )
    v23 -= 16;
  if ( v15 < 0x1000000 )
    v23 -= 8;
  if ( v17 < 0x10000000 )
    v23 -= 4;
  if ( v19 < 0x40000000 )
    v23 -= 2;
  v130 = v10;
  v120 = v23 + ~(v21 >> 31);
  v129 = v8;
  v131 = v13;
  if ( (__int16)(v13 - v120) < 0 )
  {
    v102 = aAssertionFaile_31;
    v103 = &off_2E5B34;
LABEL_148:
    core::panicking::panic((int)v102, 29, (int)v103);
  }
  v25 = (v13 - v120) & 0x3F;
  v26 = v25 - 32;
  LODWORD(v4) = 0xFFFFFFFF >> v25;
  if ( v26 >= 0 )
    LODWORD(v4) = 0;
  v133 = v4 & v10;
  v27 = __ROR4__(-1, v25);
  if ( v26 >= 0 )
    v27 = 0xFFFFFFFF >> v26;
  v132 = v27 & v8;
  if ( __PAIR64__(v4, v27) < __PAIR64__(v10, v8) )
    goto LABEL_138;
  v133 = v4 & HIDWORD(v4);
  v132 = v27 & v124;
  v28 = (v8 >> (32 - v25)) | (v10 << v25);
  v117 = 32 - ((v13 - v120) & 0x3F);
  v29 = v8 << v25;
  if ( v26 >= 0 )
  {
    v28 = v8 << v26;
    v29 = 0;
  }
  v130 = v122;
  v129 = v124;
  v131 = v13;
  if ( __PAIR64__(v4, v27) < __PAIR64__(v122, v124) )
  {
LABEL_138:
    v134[2] = 0;
    sub_7DDA0((int)&v132, (int)&v129, v134);
  }
  v30 = (int)&elf_hash_chain[20 * (__int16)(-96 - v120) + 1138] / 2126;
  if ( v30 >= 0x51 )
    core::panicking::panic_bounds_check(v30, 81, (int)&off_2E5C94);
  v31 = v22 << v24;
  v32 = (v21 << v24) | (v22 >> 1 >> (v24 ^ 0x1F));
  v112 = v29;
  v33 = core::num::flt2dec::strategy::grisu::CACHED_POW10[4 * v30];
  v116 = (char *)&core::num::flt2dec::strategy::grisu::CACHED_POW10[4 * v30];
  v34 = *((_DWORD *)v116 + 1);
  v35 = v34 * (v22 << v24);
  v36 = (int)v34 * (__int64)v32
      + (int)((v33 * (unsigned __int64)(unsigned int)v32) >> 32)
      + (int)((v34 * (unsigned __int64)(v22 << v24)) >> 32);
  v37 = v122;
  v39 = (__PAIR64__(v32, v31) * v33) >> 32;
  v38 = (v33 * v32 + ((v33 * (unsigned __int64)v31) >> 32)) >> 32;
  v40 = __PAIR64__(
          (unsigned int)(__CFADD__(__CFADD__(v39 + v35, 0x80000000), (_DWORD)v36)
                       | __CFADD__(
                           (__PAIR64__(v38, v39) + (unsigned int)v35) >> 32,
                           __CFADD__(v39 + v35, 0x80000000) + (_DWORD)v36))
        + HIDWORD(v36),
          ((__PAIR64__(v38, v39) + (unsigned int)v35) >> 32) + __CFADD__(v39 + v35, 0x80000000) + (_DWORD)v36)
      + 1;
  v41 = -(v120 + *((unsigned __int16 *)v116 + 4)) & 0x3F;
  v42 = v41 - 32;
  v123 = v41 - 32;
  v43 = ((unsigned int)v40 >> v41) | (HIDWORD(v40) << (32 - v41));
  v121 = 32 - v41;
  if ( v41 - 32 >= 0 )
    v43 = HIDWORD(v40) >> v42;
  v44 = v124;
  v125 = v41;
  v45 = v44 << v25;
  if ( v26 >= 0 )
    v45 = 0;
  v46 = v34 * (unsigned __int64)(unsigned int)v45;
  v47 = (v33 * (unsigned __int64)(unsigned int)v45) >> 32;
  v48 = (v44 >> v117) | (v37 << v25);
  if ( v26 >= 0 )
    v48 = v44 << v26;
  v49 = v34 * v48 + ((v33 * (unsigned __int64)(unsigned int)v48) >> 32) + HIDWORD(v46);
  v50 = v33 * v48 + (unsigned __int64)v47 + (unsigned int)v46;
  LODWORD(v108) = HIDWORD(v50) + __CFADD__((_DWORD)v50, 0x80000000) + v49;
  HIDWORD(v108) = (__CFADD__(__CFADD__((_DWORD)v50, 0x80000000), v49)
                 | __CFADD__(HIDWORD(v50), __CFADD__((_DWORD)v50, 0x80000000) + v49))
                + ((unsigned __int64)((int)v34 * (__int64)v48
                                    + (int)((v33 * (unsigned __int64)(unsigned int)v48) >> 32)
                                    + SHIDWORD(v46)) >> 32);
  v51 = v34 * (unsigned __int64)v112;
  v52 = v33 * (unsigned __int64)(unsigned int)v28;
  v53 = (unsigned int)v52 + ((v33 * (unsigned __int64)v112) >> 32) + (unsigned int)v51;
  v54 = __CFADD__((_DWORD)v53, 0x80000000) + HIDWORD(v53);
  v55 = 1u >> (32 - v41);
  if ( v42 >= 0 )
    v55 = 1 << v42;
  v56 = v34 * (unsigned __int64)(unsigned int)v28;
  v57 = 1 << v41;
  if ( v42 >= 0 )
    v57 = 0;
  v106 = v55;
  v114 = v57 - 1;
  v113 = v57 - 1;
  v107 = v57;
  if ( v43 >= 0x2710 )
  {
    v61 = 1000000;
    if ( v43 >= 0xF4240 )
    {
      v59 = 100000000;
      v60 = HIDWORD(v51);
      if ( v43 >= 0x5F5E100 )
      {
        v58 = 9;
        if ( v43 >= 0x3B9ACA00 )
          v59 = 1000000000;
        else
          v58 = 8;
      }
      else
      {
        v58 = 7;
        if ( v43 < 0x989680 )
          v58 = 6;
        else
          v61 = 10000000;
        v59 = v61;
      }
    }
    else
    {
      v59 = (unsigned int)&elf_hash_chain[4398];
      v58 = 5;
      if ( v43 < (unsigned int)&elf_hash_chain[4398] )
      {
        v58 = 4;
        v59 = 10000;
      }
      v60 = HIDWORD(v51);
    }
  }
  else if ( v43 >= 0x64 )
  {
    v58 = 3;
    v59 = 1000;
    if ( v43 < 0x3E8 )
    {
      v58 = 2;
      v59 = 100;
    }
    v60 = HIDWORD(v51);
  }
  else
  {
    v58 = v43 > 9;
    v59 = 10;
    v60 = HIDWORD(v51);
    if ( v43 < 0xA )
      v59 = 1;
  }
  v62 = v56 + HIDWORD(v52) + v60;
  v63 = v58;
  LODWORD(v64) = v40 & v114;
  v65 = v40 - (v62 + (unsigned int)v54) + 1;
  v66 = HIDWORD(v40) & v113;
  v67 = a4;
  v68 = v65 & v114;
  v69 = 0;
  v110 = v58 - *((_WORD *)v116 + 5) + 1;
  while ( 1 )
  {
    v70 = sub_26F0D0(v43, v59);
    if ( a4 == v69 )
      core::panicking::panic_bounds_check(a4, a4, (int)&off_2E5D24);
    v43 -= v70 * v59;
    v71 = v70 + 48;
    *(_BYTE *)(a3 + v69) = v70 + 48;
    v72 = v43 >> v121;
    if ( v123 >= 0 )
      v72 = v43 << v123;
    v73 = v43 << v125;
    if ( v123 >= 0 )
      v73 = 0;
    v74 = __PAIR64__(v72, v73) + __PAIR64__(v66, v64);
    if ( __PAIR64__(v72, v73) + __PAIR64__(v66, v64) < v65 )
    {
      v75 = v59 >> v121;
      if ( v123 >= 0 )
        v75 = v59 << v123;
      v76 = v59 << v125;
      if ( v123 >= 0 )
        v76 = 0;
      if ( v69 >= a4 )
        core::slice::index::slice_end_index_len_fail();
      v77 = v65 - v74 >= __PAIR64__(v75, v76);
      v78 = v40 - v108 + 1;
      v79 = v40 - v108 - 1;
      v126 = (v40 - v108 + 1) >> 32;
      if ( v74 < v79 && v65 - v74 >= __PAIR64__(v75, v76) )
      {
        v80 = a3;
        while ( 1 )
        {
          v81 = v74 + __PAIR64__(v75, v76);
          if ( v74 + __PAIR64__(v75, v76) >= v79 )
            break;
          *(_BYTE *)(a3 + v69) = --v71;
          v74 += __PAIR64__(v75, v76);
          if ( v65 - v81 < __PAIR64__(v75, v76) )
            goto LABEL_120;
        }
        v77 = 1;
        if ( v79 - v74 >= v81 - v79 )
        {
          *(_BYTE *)(a3 + v69) = v71 - 1;
          v77 = v65 - v81 >= __PAIR64__(v75, v76);
          v74 += __PAIR64__(v75, v76);
        }
      }
      if ( v74 < __PAIR64__(v126, v78) && v77 )
      {
        v80 = a3;
        if ( v74 + __PAIR64__(v75, v76) < __PAIR64__(v126, v78) )
          goto LABEL_133;
        v81 = v74;
        if ( __PAIR64__(v126, v78) - v74 >= v74 + __PAIR64__(v75, v76) - __PAIR64__(v126, v78) )
          goto LABEL_133;
      }
      else
      {
        v80 = a3;
        v81 = v74;
      }
LABEL_120:
      if ( v81 >= 2 && v65 - 4 >= v81 )
      {
        *(_WORD *)(a1 + 8) = v110;
        *(_DWORD *)a1 = v80;
        *(_DWORD *)(a1 + 4) = v69 + 1;
        return a1;
      }
      goto LABEL_133;
    }
    if ( v63 == v69 )
      break;
    ++v69;
    v9 = v59 >= 0xA;
    v59 /= 0xAu;
    if ( !v9 )
      core::panicking::panic((int)aAttemptToDivid, 25, (int)&off_2E5D14);
  }
  result = v69 + 1;
  HIDWORD(v64) = HIDWORD(v65) & v113;
  v83 = 0;
  if ( v69 + 1 > a4 )
    v67 = v69 + 1;
  v84 = 1;
  v118 = v67;
  do
  {
    if ( v118 == result )
      core::panicking::panic_bounds_check(v118, a4, (int)&off_2E5D44);
    v85 = v83;
    v86 = v64;
    LODWORD(v64) = 10 * v64;
    HIDWORD(v64) *= 5;
    v88 = v84;
    v89 = (10 * (unsigned __int64)(unsigned int)v84) >> 32;
    v84 *= 10;
    v90 = 5 * v83;
    v91 = 10 * __PAIR64__(v66, v86);
    v92 = ((10 * v86) >> v125) | ((10 * __PAIR64__(v66, v86)) >> 32 << v121);
    if ( v123 >= 0 )
      v92 = HIDWORD(v91) >> v123;
    LOBYTE(v91) = v92 + 48;
    v83 = v89 + 2 * v90;
    *(_BYTE *)(a3 + result) = v91;
    v93 = (10 * (unsigned __int64)v68) >> 32;
    v68 *= 10;
    ++result;
    HIDWORD(v64) = v93 + 2 * HIDWORD(v64);
    v66 = HIDWORD(v91) & v113;
    LODWORD(v64) = v64 & v114;
  }
  while ( __PAIR64__(HIDWORD(v91) & (unsigned int)v113, v64) >= __PAIR64__(HIDWORD(v64), v68) );
  v111 = HIDWORD(v64);
  v119 = v85;
  if ( result - 1 >= a4 )
    core::slice::index::slice_end_index_len_fail();
  v94 = 0;
  v95 = __PAIR64__(v83, v84) * (v40 - v108) - __PAIR64__(v83, v84);
  v96 = (__PAIR64__(v83, v84) * (v40 - v108) + __PAIR64__(v83, v84)) >> 32;
  v97 = v84 * (v40 - v108) + v84;
  HIDWORD(v64) = v106;
  if ( __PAIR64__(v111, v68) - __PAIR64__(v66, v64) >= __PAIR64__(v106, v107) )
  {
    v94 = 1;
    if ( __PAIR64__(v66, v64) < v95 )
    {
      v127 = a3 + result;
      while ( 1 )
      {
        v98 = v64 + __PAIR64__(v66, v107);
        if ( v64 + __PAIR64__(v66, v107) >= v95 )
          break;
        LOBYTE(v91) = v91 - 1;
        v66 = (v64 + __PAIR64__(v66, v107)) >> 32;
        *(_BYTE *)(v127 - 1) = v91;
        LODWORD(v64) = v98;
        if ( __PAIR64__(v111, v68) - v98 < __PAIR64__(v106, v107) )
          goto LABEL_131;
      }
      v94 = 1;
      HIDWORD(v64) = v106;
      if ( v95 - __PAIR64__(v66, v64) >= v98 - v95 )
      {
        v66 = HIDWORD(v98);
        LODWORD(v64) = v98;
        *(_BYTE *)(v127 - 1) = v91 - 1;
        v94 = __PAIR64__(v111, v68) - v98 >= __PAIR64__(v106, v107);
      }
    }
  }
  if ( __PAIR64__(v66, v64) < __PAIR64__(v96, v97) && v94 )
  {
    if ( v64 + __PAIR64__(v66, v107) < __PAIR64__(v96, v97) )
      goto LABEL_133;
    v98 = __PAIR64__(v66, v64);
    if ( __PAIR64__(v96, v97) - __PAIR64__(v66, v64) >= v64 + __PAIR64__(v66, v107) - __PAIR64__(v96, v97) )
      goto LABEL_133;
  }
  else
  {
    v98 = __PAIR64__(v66, v64);
  }
LABEL_131:
  v99 = 20LL * (unsigned int)v88;
  HIDWORD(v99) += 4 * v90;
  if ( v98 < v99 || -40LL * __PAIR64__(v119, v88) + __PAIR64__(v111, v68) < v98 )
  {
LABEL_133:
    *(_DWORD *)a1 = 0;
    return 0;
  }
  *(_WORD *)(a1 + 8) = v110;
  *(_DWORD *)a1 = a3;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
