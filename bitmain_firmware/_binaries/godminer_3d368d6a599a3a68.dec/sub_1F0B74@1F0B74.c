int __fastcall sub_1F0B74(int result, int a2)
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
  int v18; // r0
  int v19; // r1
  int v20; // r6
  int v21; // r1
  signed int v22; // r7
  int v23; // r4
  const void *v24; // r8
  int v25; // r5
  void *v26; // r0
  int v27; // r1
  const void *v28; // r5
  signed int v29; // r6
  bool v30; // zf
  size_t v31; // r6
  unsigned __int16 *v32; // r7
  const void *v33; // r4
  size_t v34; // r10
  unsigned __int16 *v35; // r9
  int v36; // r5
  int v37; // r8
  size_t v38; // r2
  int v39; // r11
  int v40; // r0
  bool v41; // nf
  int v42; // r11
  int v43; // r0
  unsigned __int16 *v44; // r0
  int i; // r1
  int v46; // r1
  int *v47; // r2
  unsigned int v48; // r1
  int *v49; // r0
  void *v50; // r3
  char *v51; // r7
  int *v52; // r0
  int v53; // r12
  void *v54; // lr
  int v55; // r5
  void *v56; // r1
  void *v57; // r4
  size_t v58; // r6
  int v59; // r2
  size_t v60; // r3
  _DWORD *v61; // r2
  void *v62; // r4
  void *v63; // r5
  bool v64; // zf
  int v65; // r6
  _BOOL4 v66; // r0
  int v67; // r5
  int v68; // r0
  _DWORD *v69; // r0
  _DWORD *v70; // r4
  char *v71; // r0
  _DWORD *v72; // r2
  _DWORD *v73; // r0
  bool v74; // zf
  char *v75; // r1
  int v76; // r9
  size_t v77; // r4
  size_t v78; // r3
  void *v79; // r10
  size_t v80; // r2
  signed int v81; // r6
  _BOOL4 v82; // r0
  unsigned int v83; // r6
  int v84; // r11
  void *v85; // r7
  unsigned int v86; // r4
  int v87; // r0
  __int64 v88; // r0
  void *v89; // r7
  int v90; // r1
  int v91; // r4
  int v92; // r0
  int v93; // r3
  int v94; // r0
  int v95; // r2
  char *j; // r0
  void **v97; // r6
  char *v98; // r6
  void *v99; // t1
  char *v100; // r1
  int v101; // r2
  unsigned int v102; // r3
  int v103; // r6
  int v104; // r7
  int *v105; // [sp+Ch] [bp-D8h]
  size_t v106; // [sp+18h] [bp-CCh]
  _DWORD *v108; // [sp+20h] [bp-C4h]
  int v109; // [sp+24h] [bp-C0h]
  int v110; // [sp+38h] [bp-ACh] BYREF
  char *v111; // [sp+3Ch] [bp-A8h]
  int v112; // [sp+40h] [bp-A4h]
  void *v113; // [sp+44h] [bp-A0h] BYREF
  int v114; // [sp+48h] [bp-9Ch]
  int v115; // [sp+4Ch] [bp-98h]
  int v116; // [sp+50h] [bp-94h]
  int v117; // [sp+58h] [bp-8Ch]
  int v118; // [sp+60h] [bp-84h] BYREF
  void *v119; // [sp+64h] [bp-80h]
  char *v120; // [sp+68h] [bp-7Ch]
  void *v121; // [sp+6Ch] [bp-78h]
  int v122; // [sp+70h] [bp-74h]
  size_t v123; // [sp+74h] [bp-70h]
  int v124; // [sp+78h] [bp-6Ch] BYREF
  void *v125; // [sp+7Ch] [bp-68h]
  int v126; // [sp+80h] [bp-64h]
  void *v127; // [sp+84h] [bp-60h]
  void *v128; // [sp+88h] [bp-5Ch]
  size_t v129; // [sp+8Ch] [bp-58h]
  size_t v130; // [sp+90h] [bp-54h]
  _DWORD *v131; // [sp+94h] [bp-50h]
  unsigned int v132; // [sp+98h] [bp-4Ch]
  signed int v133; // [sp+A0h] [bp-44h] BYREF
  char *v134; // [sp+A4h] [bp-40h]
  char *v135; // [sp+A8h] [bp-3Ch]
  void *v136; // [sp+ACh] [bp-38h]
  void *v137; // [sp+B0h] [bp-34h]
  size_t v138; // [sp+B4h] [bp-30h]
  _DWORD *v139; // [sp+B8h] [bp-2Ch]
  int *v140; // [sp+BCh] [bp-28h]
  unsigned int v141; // [sp+C0h] [bp-24h]
  char *v142; // [sp+C8h] [bp-1Ch] BYREF
  _DWORD *v143; // [sp+CCh] [bp-18h]
  unsigned int v144; // [sp+D0h] [bp-14h]
  size_t v145; // [sp+D8h] [bp-Ch] BYREF
  void *ptr; // [sp+DCh] [bp-8h]
  size_t v147; // [sp+E0h] [bp-4h]

  v2 = *(unsigned __int8 *)(a2 + 12);
  v3 = *(_DWORD *)(a2 + 8);
  v4 = v2 == 0;
  if ( !*(_BYTE *)(a2 + 12) )
    v4 = v3 == 0;
  if ( v4 )
  {
    *(_DWORD *)(result + 4) = 0;
    return result;
  }
  v105 = (int *)result;
  v144 = 0;
  v143 = 0;
  if ( !v2 )
  {
    std::env::vars_os((unsigned int *)&v133);
    v113 = v136;
    v5 = v134;
    v6 = v135;
    v110 = v133;
    v111 = v134;
    v112 = (int)v135;
    if ( v134 != v135 )
    {
      v7 = 0;
      v8 = v135 - v134 - 24;
      while ( 1 )
      {
        v9 = &v5[v7];
        if ( !*(_DWORD *)&v5[v7 + 4] )
          break;
        v119 = *(void **)&v5[v7 + 4];
        v118 = *(_DWORD *)&v5[v7];
        v10 = *(_DWORD *)&v5[v7 + 20];
        v11 = *(_DWORD *)&v5[v7 + 12];
        v12 = *(void **)&v5[v7 + 16];
        v120 = *(char **)&v5[v7 + 8];
        v126 = v10;
        v125 = v12;
        v124 = v11;
        sub_1B2878(&v145, &v142, (size_t *)&v118, (size_t *)&v124);
        v13 = ptr == 0;
        if ( ptr )
          v13 = v145 == 0;
        if ( !v13 )
          _rust_dealloc(ptr);
        v7 += 24;
        v8 -= 24;
        if ( &v5[v7] == v6 )
          goto LABEL_21;
      }
      v14 = v9 + 24;
      v134 = v9 + 24;
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
    if ( v133 )
      _rust_dealloc(v136);
  }
  v16 = *(_DWORD *)a2;
  v17 = *(_DWORD *)(a2 + 4);
  if ( !v17 )
    v3 = 0;
  v115 = *(_DWORD *)a2;
  v111 = (char *)v16;
  v116 = v17;
  v112 = v17;
  v117 = v3;
  v114 = 2 * (v17 == 0);
  v110 = v114;
LABEL_26:
  while ( 1 )
  {
    v18 = sub_1AB988(&v110);
    if ( !v18 )
      break;
    v20 = v19;
    v21 = *(_DWORD *)(v19 + 4);
    if ( v21 )
    {
      v22 = *(_DWORD *)(v18 + 8);
      v23 = 1;
      v24 = *(const void **)(v18 + 4);
      v25 = 1;
      if ( v22 )
      {
        if ( v22 <= -1 )
          alloc::raw_vec::capacity_overflow(v18, v21);
        v25 = _rust_alloc(*(_DWORD *)(v18 + 8));
        if ( !v25 )
          alloc::alloc::handle_alloc_error();
      }
      v26 = memcpy((void *)v25, v24, v22);
      v126 = v22;
      v125 = (void *)v25;
      v124 = v22;
      v28 = *(const void **)(v20 + 4);
      v29 = *(_DWORD *)(v20 + 8);
      if ( v29 )
      {
        if ( v29 <= -1 )
          alloc::raw_vec::capacity_overflow(v26, v27);
        v23 = _rust_alloc(v29);
        if ( !v23 )
          alloc::alloc::handle_alloc_error();
      }
      memcpy((void *)v23, v28, v29);
      v135 = (char *)v29;
      v134 = (char *)v23;
      v133 = v29;
      sub_1B2878((size_t *)&v118, &v142, (size_t *)&v124, (size_t *)&v133);
      v30 = v119 == 0;
      if ( v119 )
        v30 = v118 == 0;
      if ( !v30 )
        _rust_dealloc(v119);
    }
    else
    {
      v108 = v143;
      if ( v143 )
      {
        v31 = (size_t)v142;
        v32 = (unsigned __int16 *)v143;
        v33 = *(const void **)(v18 + 4);
        v34 = *(_DWORD *)(v18 + 8);
        v106 = (size_t)v142;
LABEL_40:
        v35 = v32 + 2;
        v109 = v32[135];
        v36 = 67;
        v37 = 12 * v109;
        do
        {
          if ( !v37 )
          {
            v43 = v109;
            if ( !v31 )
              goto LABEL_26;
            goto LABEL_53;
          }
          v38 = *((_DWORD *)v35 + 2);
          v39 = v34 - v38;
          if ( v34 < v38 )
            v38 = v34;
          v40 = memcmp(v33, *((const void **)v35 + 1), v38);
          ++v36;
          if ( v40 )
            v39 = v40;
          v41 = v39 < 0;
          v42 = v39 != 0;
          v37 -= 12;
          v35 += 6;
          if ( v41 )
            v42 = -1;
        }
        while ( v42 == 1 );
        if ( (_BYTE)v42 )
        {
          v43 = v36 - 68;
          if ( !v31 )
            continue;
LABEL_53:
          --v31;
          v32 = *(unsigned __int16 **)&v32[2 * v43 + 136];
          goto LABEL_40;
        }
        LOBYTE(v145) = 0;
        if ( v31 )
        {
          v44 = *(unsigned __int16 **)&v32[2 * v36];
          if ( v31 != 1 )
          {
            for ( i = 1; i != v31; ++i )
              v44 = *(unsigned __int16 **)&v44[2 * v44[135] + 136];
          }
          v46 = v44[135];
          v125 = v44;
          v126 = v46 - 1;
          v124 = 0;
          sub_1B5C58(&v133, &v124, &v145);
          v118 = v133;
          v119 = v134;
          v120 = v135;
          v121 = v136;
          v122 = (int)v137;
          v123 = v138;
          v47 = v140;
          v48 = v141;
          v49 = v140;
          if ( v141 >= *((unsigned __int16 *)v140 + 135) )
          {
            while ( 1 )
            {
              v49 = (int *)*v47;
              if ( !*v47 )
                break;
              v48 = *((unsigned __int16 *)v47 + 134);
              v47 = (int *)*v47;
              if ( v48 < *((unsigned __int16 *)v49 + 135) )
                goto LABEL_64;
            }
            v49 = 0;
          }
LABEL_64:
          v50 = v119;
          v51 = v120;
          v52 = &v49[3 * v48];
          v53 = v52[1];
          v54 = (void *)v52[2];
          v55 = v52[3];
          v52[1] = v118;
          v52[2] = (int)v50;
          v52[3] = (int)v51;
          v56 = (void *)v52[35];
          v57 = (void *)v52[34];
          v58 = v52[36];
          v52 += 34;
          v127 = v57;
          v128 = v56;
          v129 = v58;
          v59 = v122;
          v60 = v123;
          v126 = v55;
          *v52 = (int)v121;
          v52[1] = v59;
          v52[2] = v60;
          v125 = v54;
          v124 = v53;
          v133 = v53;
          v134 = (char *)v54;
          v135 = (char *)v126;
          v136 = v127;
          v137 = v128;
          v138 = v129;
        }
        else
        {
          v126 = v36 - 68;
          v125 = v32;
          v124 = 0;
          sub_1B5C58(&v133, &v124, &v145);
        }
        v124 = v133;
        v125 = v134;
        v126 = (int)v135;
        v127 = v136;
        v128 = v137;
        v129 = v138;
        --v144;
        if ( (_BYTE)v145 )
        {
          if ( !v106 )
            core::panicking::panic((int)aAssertionFaile_5, 33, (int)&off_2DE438);
          v61 = (_DWORD *)v108[68];
          *v61 = 0;
          v142 = (char *)(v106 - 1);
          v143 = v61;
          _rust_dealloc(v108);
        }
        if ( v125 )
        {
          v62 = v127;
          v63 = v128;
          if ( v124 )
            _rust_dealloc(v125);
          v64 = v63 == 0;
          if ( v63 )
            v64 = v62 == 0;
          if ( !v64 )
            _rust_dealloc(v63);
        }
      }
    }
  }
  v65 = v144;
  v130 = (size_t)v142;
  v131 = v143;
  v132 = v144;
  if ( v144 )
  {
    v66 = v144 < 0x10000000;
    if ( v144 > 0xFFFFFFF || (int)(8 * v144) <= -1 )
      alloc::raw_vec::capacity_overflow(v66, v143);
    v67 = 4 * v66;
    if ( 8 * v144 )
    {
      v68 = _rust_alloc(8 * v144);
      if ( !v68 )
LABEL_139:
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v68 = 4 * v66;
      if ( !v67 )
        goto LABEL_139;
    }
  }
  else
  {
    v68 = 4;
  }
  v134 = (char *)v68;
  v135 = 0;
  v133 = v65;
  v69 = (_DWORD *)_rust_alloc(4 * (v65 + 1));
  if ( !v69 )
    alloc::alloc::handle_alloc_error();
  v70 = v131;
  *v69 = 0;
  v114 = (int)v69;
  v115 = 1;
  v110 = v133;
  v111 = v134;
  v112 = (int)v135;
  v113 = (void *)(v65 + 1);
  if ( !v70 )
    v65 = 0;
  v137 = (void *)(2 * (v70 == 0));
  v133 = (signed int)v137;
  v141 = v65;
  v139 = v70;
  v138 = v130;
  v135 = (char *)v70;
  v134 = (char *)v130;
  while ( 1 )
  {
    sub_1B44A8(&v124, &v133);
    v73 = v125;
    v74 = v125 == 0;
    if ( v125 )
    {
      v72 = (char *)v125 + 12 * v126;
      v73 = (_DWORD *)v72[2];
      v74 = v73 == 0;
    }
    if ( v74 )
      break;
    v75 = (char *)v72[1];
    v76 = v72[3];
    v144 = v76;
    v143 = v73;
    v142 = v75;
    v77 = v72[36];
    v78 = v72[34];
    v79 = (void *)v72[35];
    v80 = v77 + 2;
    v145 = v78;
    v147 = v77;
    ptr = v79;
    if ( (unsigned int)&v75[-v76] >= v77 + 2 )
    {
      if ( v75 != (char *)v76 )
        goto LABEL_102;
    }
    else
    {
      v81 = v76 + v80;
      if ( __CFADD__(v76, v80) )
        goto LABEL_134;
      if ( v75 )
      {
        v124 = (int)v73;
        v82 = (int)v75 >= 0;
        v125 = v75;
      }
      else
      {
        v82 = 0;
      }
      v126 = v82;
      sub_1B6970(&v118, v81, v81 >= 0, (int)&v124);
      v73 = (_DWORD *)v118;
      if ( v118 )
      {
        v75 = v120;
        if ( v120 )
          alloc::alloc::handle_alloc_error();
LABEL_134:
        alloc::raw_vec::capacity_overflow(v73, v75);
      }
      v73 = v119;
      v143 = v119;
      v142 = (char *)v81;
      if ( v81 != v76 )
        goto LABEL_102;
    }
    sub_798B0((size_t *)&v142, v76, 1);
    v73 = v143;
    v76 = v144;
LABEL_102:
    v83 = v76 + 1;
    *((_BYTE *)v73 + v76) = 61;
    v84 = (int)v142;
    v144 = v76 + 1;
    if ( (unsigned int)&v142[-v76 - 1] < v77 )
    {
      sub_798B0((size_t *)&v142, v76 + 1, v77);
      v84 = (int)v142;
      v83 = v144;
    }
    v85 = v143;
    memcpy((char *)v143 + v83, v79, v77);
    v86 = v83 + v77;
    v144 = v86;
    v120 = (char *)v86;
    v119 = v85;
    v118 = v84;
    if ( v86 >= 8 )
    {
      if ( !core::slice::memchr::memchr_aligned(0, v85) )
        goto LABEL_109;
LABEL_116:
      *(_BYTE *)(a2 + 125) = 1;
      if ( v84 )
        _rust_dealloc(v85);
      if ( v145 )
LABEL_88:
        _rust_dealloc(ptr);
    }
    else
    {
      if ( v86 )
      {
        v87 = 0;
        while ( *((_BYTE *)v85 + v87) )
        {
          if ( v86 == ++v87 )
            goto LABEL_109;
        }
        goto LABEL_116;
      }
LABEL_109:
      v126 = v86;
      v125 = v85;
      v124 = v84;
      v88 = alloc::ffi::c_str::CString::_from_vec_unchecked(&v124);
      v89 = (void *)HIDWORD(v88);
      v90 = v115;
      v91 = v88;
      v118 = v88;
      v92 = v115 - 1;
      v119 = v89;
      if ( !v115 )
        core::panicking::panic_bounds_check(v92, 0, (int)&off_2DF938);
      v93 = v114;
      v4 = v115 == (_DWORD)v113;
      *(_DWORD *)(v114 + 4 * v92) = v91;
      if ( v4 )
      {
        sub_1B6C58((unsigned int *)&v113, v90);
        v93 = v114;
        v90 = v115;
      }
      v94 = v110;
      v95 = v112;
      *(_DWORD *)(v93 + 4 * v90) = 0;
      v115 = v90 + 1;
      v125 = v89;
      v124 = v91;
      if ( v95 == v94 )
      {
        sub_1B6A38((unsigned int *)&v110, v95);
        v95 = v112;
      }
      v71 = v111;
      *(_DWORD *)&v111[8 * v95] = v91;
      *(_DWORD *)&v71[8 * v95 + 4] = v89;
      v112 = v95 + 1;
      if ( v145 )
        goto LABEL_88;
    }
  }
  sub_1B44A8(&v124, &v133);
  for ( j = (char *)v125; v125; j = (char *)v125 )
  {
    v97 = (void **)&j[12 * v126];
    if ( v97[1] )
      _rust_dealloc(v97[2]);
    v99 = v97[34];
    v98 = (char *)(v97 + 34);
    if ( v99 )
      _rust_dealloc(*((void **)v98 + 1));
    sub_1B44A8(&v124, &v133);
  }
  result = v110;
  v100 = v111;
  v101 = v112;
  v102 = (unsigned int)v113;
  v103 = v114;
  v104 = v115;
  *v105 = v110;
  v105[1] = (int)v100;
  v105[2] = v101;
  v105[3] = v102;
  v105[4] = v103;
  v105[5] = v104;
  return result;
}
