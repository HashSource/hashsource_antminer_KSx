_DWORD *__fastcall sub_1DE000(_DWORD *result, int a2)
{
  int v2; // r2
  int v3; // r10
  bool v4; // zf
  char *v5; // r6
  char *v6; // r11
  int v7; // r8
  unsigned int v8; // r7
  char *v9; // r9
  int v10; // r1
  int v11; // r4
  void *v12; // r5
  bool v13; // zf
  char *v14; // r6
  char *v15; // r5
  int v16; // r0
  int v17; // r1
  unsigned int v18; // r0
  int v19; // r1
  int v20; // r6
  signed int v21; // r7
  int v22; // r4
  const void *v23; // r8
  int v24; // r5
  const void *v25; // r5
  signed int v26; // r6
  bool v27; // zf
  unsigned int v28; // r6
  unsigned __int16 *v29; // r7
  const void *v30; // r4
  size_t v31; // r10
  unsigned __int16 *v32; // r9
  int v33; // r5
  int v34; // r8
  size_t v35; // r2
  int v36; // r11
  int v37; // r0
  bool v38; // nf
  int v39; // r11
  int v40; // r0
  unsigned __int16 *v41; // r0
  int i; // r1
  int v43; // r1
  int *v44; // r2
  unsigned int v45; // r1
  int *v46; // r0
  void *v47; // r3
  unsigned int v48; // r7
  int *v49; // r0
  int v50; // r12
  void *v51; // lr
  int v52; // r5
  void *v53; // r1
  void *v54; // r4
  unsigned int v55; // r6
  int v56; // r2
  unsigned int v57; // r3
  _DWORD *v58; // r2
  void *v59; // r4
  void *v60; // r5
  bool v61; // zf
  int v62; // r6
  _BOOL4 v63; // r0
  int v64; // r5
  int v65; // r0
  _DWORD *v66; // r0
  _DWORD *v67; // r4
  char *v68; // r0
  _DWORD *v69; // r2
  _DWORD *v70; // r0
  bool v71; // zf
  char *v72; // r1
  int v73; // r9
  size_t v74; // r4
  int v75; // r3
  void *v76; // r10
  size_t v77; // r2
  signed int v78; // r6
  _BOOL4 v79; // r0
  unsigned int v80; // r6
  int v81; // r11
  void *v82; // r7
  unsigned int v83; // r4
  int v84; // r0
  int v85; // r0
  void *v86; // r1
  void *v87; // r7
  int v88; // r1
  int v89; // r4
  int v90; // r0
  int v91; // r3
  int v92; // r0
  int v93; // r2
  char *j; // r0
  void **v95; // r6
  char *v96; // r6
  void *v97; // t1
  char *v98; // r1
  int v99; // r2
  unsigned int v100; // r3
  int v101; // r6
  int v102; // r7
  _DWORD *v103; // [sp+Ch] [bp-D8h]
  unsigned int v104; // [sp+18h] [bp-CCh]
  _DWORD *v106; // [sp+20h] [bp-C4h]
  int v107; // [sp+24h] [bp-C0h]
  _DWORD *v108; // [sp+38h] [bp-ACh] BYREF
  char *v109; // [sp+3Ch] [bp-A8h]
  int v110; // [sp+40h] [bp-A4h]
  void *v111; // [sp+44h] [bp-A0h] BYREF
  int v112; // [sp+48h] [bp-9Ch]
  int v113; // [sp+4Ch] [bp-98h]
  int v114; // [sp+50h] [bp-94h]
  int v115; // [sp+58h] [bp-8Ch]
  int v116; // [sp+60h] [bp-84h] BYREF
  void *v117; // [sp+64h] [bp-80h]
  unsigned int v118; // [sp+68h] [bp-7Ch]
  void *v119; // [sp+6Ch] [bp-78h]
  int v120; // [sp+70h] [bp-74h]
  unsigned int v121; // [sp+74h] [bp-70h]
  int v122; // [sp+78h] [bp-6Ch] BYREF
  void *v123; // [sp+7Ch] [bp-68h]
  int v124; // [sp+80h] [bp-64h]
  void *v125; // [sp+84h] [bp-60h]
  void *v126; // [sp+88h] [bp-5Ch]
  unsigned int v127; // [sp+8Ch] [bp-58h]
  unsigned int v128; // [sp+90h] [bp-54h]
  _DWORD *v129; // [sp+94h] [bp-50h]
  unsigned int v130; // [sp+98h] [bp-4Ch]
  _DWORD *v131; // [sp+A0h] [bp-44h] BYREF
  char *v132; // [sp+A4h] [bp-40h]
  char *v133; // [sp+A8h] [bp-3Ch]
  void *v134; // [sp+ACh] [bp-38h]
  void *v135; // [sp+B0h] [bp-34h]
  unsigned int v136; // [sp+B4h] [bp-30h]
  _DWORD *v137; // [sp+B8h] [bp-2Ch]
  int *v138; // [sp+BCh] [bp-28h]
  unsigned int v139; // [sp+C0h] [bp-24h]
  char *v140; // [sp+C8h] [bp-1Ch] BYREF
  _DWORD *v141; // [sp+CCh] [bp-18h]
  unsigned int v142; // [sp+D0h] [bp-14h]
  int v143; // [sp+D8h] [bp-Ch] BYREF
  void *ptr; // [sp+DCh] [bp-8h]
  size_t v145; // [sp+E0h] [bp-4h]

  v2 = *(unsigned __int8 *)(a2 + 12);
  v3 = *(_DWORD *)(a2 + 8);
  v4 = v2 == 0;
  if ( !*(_BYTE *)(a2 + 12) )
    v4 = v3 == 0;
  if ( v4 )
  {
    result[1] = 0;
    return result;
  }
  v103 = result;
  v142 = 0;
  v141 = 0;
  if ( !v2 )
  {
    std::env::vars_os((unsigned int *)&v131);
    v111 = v134;
    v5 = v132;
    v6 = v133;
    v108 = v131;
    v109 = v132;
    v110 = (int)v133;
    if ( v132 != v133 )
    {
      v7 = 0;
      v8 = v133 - v132 - 24;
      while ( 1 )
      {
        v9 = &v5[v7];
        if ( !*(_DWORD *)&v5[v7 + 4] )
          break;
        v117 = *(void **)&v5[v7 + 4];
        v116 = *(_DWORD *)&v5[v7];
        v10 = *(_DWORD *)&v5[v7 + 20];
        v11 = *(_DWORD *)&v5[v7 + 12];
        v12 = *(void **)&v5[v7 + 16];
        v118 = *(_DWORD *)&v5[v7 + 8];
        v124 = v10;
        v123 = v12;
        v122 = v11;
        sub_19FD04(&v143, &v140, (size_t *)&v116, &v122);
        v13 = ptr == 0;
        if ( ptr )
          v13 = v143 == 0;
        if ( !v13 )
          _rust_dealloc(ptr);
        v7 += 24;
        v8 -= 24;
        if ( &v5[v7] == v6 )
          goto LABEL_21;
      }
      v14 = v9 + 24;
      v132 = v9 + 24;
      if ( v9 + 24 != v6 )
      {
        v15 = &v14[24 * (v8 / 0x18)];
        do
        {
          if ( *(_DWORD *)v14 )
            _rust_dealloc(*((void **)v14 + 1));
          if ( *((_DWORD *)v14 + 3) )
            _rust_dealloc(*((void **)v14 + 4));
          v14 += 24;
        }
        while ( v15 != v14 );
      }
    }
LABEL_21:
    if ( v131 )
      _rust_dealloc(v134);
  }
  v16 = *(_DWORD *)a2;
  v17 = *(_DWORD *)(a2 + 4);
  if ( !v17 )
    v3 = 0;
  v113 = *(_DWORD *)a2;
  v109 = (char *)v16;
  v114 = v17;
  v110 = v17;
  v115 = v3;
  v112 = 2 * (v17 == 0);
  v108 = (_DWORD *)v112;
LABEL_26:
  while ( 1 )
  {
    v18 = sub_198E14((int *)&v108);
    if ( !v18 )
      break;
    v20 = v19;
    if ( *(_DWORD *)(v19 + 4) )
    {
      v21 = *(_DWORD *)(v18 + 8);
      v22 = 1;
      v23 = *(const void **)(v18 + 4);
      v24 = 1;
      if ( v21 )
      {
        if ( v21 <= -1 )
          alloc::raw_vec::capacity_overflow();
        v24 = _rust_alloc(*(_DWORD *)(v18 + 8));
        if ( !v24 )
          alloc::alloc::handle_alloc_error();
      }
      memcpy((void *)v24, v23, v21);
      v124 = v21;
      v123 = (void *)v24;
      v122 = v21;
      v25 = *(const void **)(v20 + 4);
      v26 = *(_DWORD *)(v20 + 8);
      if ( v26 )
      {
        if ( v26 <= -1 )
          alloc::raw_vec::capacity_overflow();
        v22 = _rust_alloc(v26);
        if ( !v22 )
          alloc::alloc::handle_alloc_error();
      }
      memcpy((void *)v22, v25, v26);
      v133 = (char *)v26;
      v132 = (char *)v22;
      v131 = (_DWORD *)v26;
      sub_19FD04(&v116, &v140, (size_t *)&v122, (int *)&v131);
      v27 = v117 == 0;
      if ( v117 )
        v27 = v116 == 0;
      if ( !v27 )
        _rust_dealloc(v117);
    }
    else
    {
      v106 = v141;
      if ( v141 )
      {
        v28 = (unsigned int)v140;
        v29 = (unsigned __int16 *)v141;
        v30 = *(const void **)(v18 + 4);
        v31 = *(_DWORD *)(v18 + 8);
        v104 = (unsigned int)v140;
LABEL_40:
        v32 = v29 + 2;
        v107 = v29[135];
        v33 = 67;
        v34 = 12 * v107;
        do
        {
          if ( !v34 )
          {
            v40 = v107;
            if ( !v28 )
              goto LABEL_26;
            goto LABEL_53;
          }
          v35 = *((_DWORD *)v32 + 2);
          v36 = v31 - v35;
          if ( v31 < v35 )
            v35 = v31;
          v37 = memcmp(v30, *((const void **)v32 + 1), v35);
          ++v33;
          if ( v37 )
            v36 = v37;
          v38 = v36 < 0;
          v39 = v36 != 0;
          v34 -= 12;
          v32 += 6;
          if ( v38 )
            v39 = -1;
        }
        while ( v39 == 1 );
        if ( (_BYTE)v39 )
        {
          v40 = v33 - 68;
          if ( !v28 )
            continue;
LABEL_53:
          --v28;
          v29 = *(unsigned __int16 **)&v29[2 * v40 + 136];
          goto LABEL_40;
        }
        LOBYTE(v143) = 0;
        if ( v28 )
        {
          v41 = *(unsigned __int16 **)&v29[2 * v33];
          if ( v28 != 1 )
          {
            for ( i = 1; i != v28; ++i )
              v41 = *(unsigned __int16 **)&v41[2 * v41[135] + 136];
          }
          v43 = v41[135];
          v123 = v41;
          v124 = v43 - 1;
          v122 = 0;
          sub_1A30E4((int *)&v131, &v122, &v143);
          v116 = (int)v131;
          v117 = v132;
          v118 = (unsigned int)v133;
          v119 = v134;
          v120 = (int)v135;
          v121 = v136;
          v44 = v138;
          v45 = v139;
          v46 = v138;
          if ( v139 >= *((unsigned __int16 *)v138 + 135) )
          {
            while ( 1 )
            {
              v46 = (int *)*v44;
              if ( !*v44 )
                break;
              v45 = *((unsigned __int16 *)v44 + 134);
              v44 = (int *)*v44;
              if ( v45 < *((unsigned __int16 *)v46 + 135) )
                goto LABEL_64;
            }
            v46 = 0;
          }
LABEL_64:
          v47 = v117;
          v48 = v118;
          v49 = &v46[3 * v45];
          v50 = v49[1];
          v51 = (void *)v49[2];
          v52 = v49[3];
          v49[1] = v116;
          v49[2] = (int)v47;
          v49[3] = v48;
          v53 = (void *)v49[35];
          v54 = (void *)v49[34];
          v55 = v49[36];
          v49 += 34;
          v125 = v54;
          v126 = v53;
          v127 = v55;
          v56 = v120;
          v57 = v121;
          v124 = v52;
          *v49 = (int)v119;
          v49[1] = v56;
          v49[2] = v57;
          v123 = v51;
          v122 = v50;
          v131 = (_DWORD *)v50;
          v132 = (char *)v51;
          v133 = (char *)v124;
          v134 = v125;
          v135 = v126;
          v136 = v127;
        }
        else
        {
          v124 = v33 - 68;
          v123 = v29;
          v122 = 0;
          sub_1A30E4((int *)&v131, &v122, &v143);
        }
        v122 = (int)v131;
        v123 = v132;
        v124 = (int)v133;
        v125 = v134;
        v126 = v135;
        v127 = v136;
        --v142;
        if ( (_BYTE)v143 )
        {
          if ( !v104 )
            core::panicking::panic((int)aAssertionFaile_5, 33, (int)&off_2C9438);
          v58 = (_DWORD *)v106[68];
          *v58 = 0;
          v140 = (char *)(v104 - 1);
          v141 = v58;
          _rust_dealloc(v106);
        }
        if ( v123 )
        {
          v59 = v125;
          v60 = v126;
          if ( v122 )
            _rust_dealloc(v123);
          v61 = v60 == 0;
          if ( v60 )
            v61 = v59 == 0;
          if ( !v61 )
            _rust_dealloc(v60);
        }
      }
    }
  }
  v62 = v142;
  v128 = (unsigned int)v140;
  v129 = v141;
  v130 = v142;
  if ( v142 )
  {
    v63 = v142 < 0x10000000;
    if ( v142 > 0xFFFFFFF || (int)(8 * v142) <= -1 )
      alloc::raw_vec::capacity_overflow();
    v64 = 4 * v63;
    if ( 8 * v142 )
    {
      v65 = _rust_alloc(8 * v142);
      if ( !v65 )
LABEL_139:
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v65 = 4 * v63;
      if ( !v64 )
        goto LABEL_139;
    }
  }
  else
  {
    v65 = 4;
  }
  v132 = (char *)v65;
  v133 = 0;
  v131 = (_DWORD *)v62;
  v66 = (_DWORD *)_rust_alloc(4 * (v62 + 1));
  if ( !v66 )
    alloc::alloc::handle_alloc_error();
  v67 = v129;
  *v66 = 0;
  v112 = (int)v66;
  v113 = 1;
  v108 = v131;
  v109 = v132;
  v110 = (int)v133;
  v111 = (void *)(v62 + 1);
  if ( !v67 )
    v62 = 0;
  v135 = (void *)(2 * (v67 == 0));
  v131 = v135;
  v139 = v62;
  v137 = v67;
  v136 = v128;
  v133 = (char *)v67;
  v132 = (char *)v128;
  while ( 1 )
  {
    sub_1A1934(&v122, (int *)&v131);
    v70 = v123;
    v71 = v123 == 0;
    if ( v123 )
    {
      v69 = (char *)v123 + 12 * v124;
      v70 = (_DWORD *)v69[2];
      v71 = v70 == 0;
    }
    if ( v71 )
      break;
    v72 = (char *)v69[1];
    v73 = v69[3];
    v142 = v73;
    v141 = v70;
    v140 = v72;
    v74 = v69[36];
    v75 = v69[34];
    v76 = (void *)v69[35];
    v77 = v74 + 2;
    v143 = v75;
    v145 = v74;
    ptr = v76;
    if ( (unsigned int)&v72[-v73] >= v74 + 2 )
    {
      if ( v72 != (char *)v73 )
        goto LABEL_102;
    }
    else
    {
      v78 = v73 + v77;
      if ( __CFADD__(v73, v77) )
        goto LABEL_134;
      if ( v72 )
      {
        v122 = (int)v70;
        v79 = (int)v72 >= 0;
        v123 = v72;
      }
      else
      {
        v79 = 0;
      }
      v124 = v79;
      sub_1A3DFC(&v116, v78, v78 >= 0, (int)&v122);
      if ( v116 )
      {
        if ( v118 )
          alloc::alloc::handle_alloc_error();
LABEL_134:
        alloc::raw_vec::capacity_overflow();
      }
      v70 = v117;
      v141 = v117;
      v140 = (char *)v78;
      if ( v78 != v73 )
        goto LABEL_102;
    }
    sub_77DD8((unsigned int *)&v140, v73, 1);
    v70 = v141;
    v73 = v142;
LABEL_102:
    v80 = v73 + 1;
    *((_BYTE *)v70 + v73) = 61;
    v81 = (int)v140;
    v142 = v73 + 1;
    if ( (unsigned int)&v140[-v73 - 1] < v74 )
    {
      sub_77DD8((unsigned int *)&v140, v73 + 1, v74);
      v81 = (int)v140;
      v80 = v142;
    }
    v82 = v141;
    memcpy((char *)v141 + v80, v76, v74);
    v83 = v80 + v74;
    v142 = v83;
    v118 = v83;
    v117 = v82;
    v116 = v81;
    if ( v83 >= 8 )
    {
      if ( !core::slice::memchr::memchr_aligned(0, (int)v82, v83) )
        goto LABEL_109;
LABEL_116:
      *(_BYTE *)(a2 + 125) = 1;
      if ( v81 )
        _rust_dealloc(v82);
      if ( v143 )
LABEL_88:
        _rust_dealloc(ptr);
    }
    else
    {
      if ( v83 )
      {
        v84 = 0;
        while ( *((_BYTE *)v82 + v84) )
        {
          if ( v83 == ++v84 )
            goto LABEL_109;
        }
        goto LABEL_116;
      }
LABEL_109:
      v124 = v83;
      v123 = v82;
      v122 = v81;
      v85 = alloc::ffi::c_str::CString::_from_vec_unchecked((unsigned int *)&v122);
      v87 = v86;
      v88 = v113;
      v89 = v85;
      v116 = v85;
      v90 = v113 - 1;
      v117 = v87;
      if ( !v113 )
        core::panicking::panic_bounds_check(v90, 0, (int)&off_2CA938);
      v91 = v112;
      v4 = v113 == (_DWORD)v111;
      *(_DWORD *)(v112 + 4 * v90) = v89;
      if ( v4 )
      {
        sub_1A40E4((unsigned int *)&v111, v88);
        v91 = v112;
        v88 = v113;
      }
      v92 = (int)v108;
      v93 = v110;
      *(_DWORD *)(v91 + 4 * v88) = 0;
      v113 = v88 + 1;
      v123 = v87;
      v122 = v89;
      if ( v93 == v92 )
      {
        sub_1A3EC4((unsigned int *)&v108, v93);
        v93 = v110;
      }
      v68 = v109;
      *(_DWORD *)&v109[8 * v93] = v89;
      *(_DWORD *)&v68[8 * v93 + 4] = v87;
      v110 = v93 + 1;
      if ( v143 )
        goto LABEL_88;
    }
  }
  sub_1A1934(&v122, (int *)&v131);
  for ( j = (char *)v123; v123; j = (char *)v123 )
  {
    v95 = (void **)&j[12 * v124];
    if ( v95[1] )
      _rust_dealloc(v95[2]);
    v97 = v95[34];
    v96 = (char *)(v95 + 34);
    if ( v97 )
      _rust_dealloc(*((void **)v96 + 1));
    sub_1A1934(&v122, (int *)&v131);
  }
  result = v108;
  v98 = v109;
  v99 = v110;
  v100 = (unsigned int)v111;
  v101 = v112;
  v102 = v113;
  *v103 = v108;
  v103[1] = v98;
  v103[2] = v99;
  v103[3] = v100;
  v103[4] = v101;
  v103[5] = v102;
  return result;
}
