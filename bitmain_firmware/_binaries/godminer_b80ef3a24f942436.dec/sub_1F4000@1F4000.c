int __fastcall sub_1F4000(int result, int a2)
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
  int v78; // r3
  void *v79; // r10
  size_t v80; // r2
  signed int v81; // r6
  _BOOL4 v82; // r0
  unsigned int v83; // r6
  int v84; // r11
  void *v85; // r7
  unsigned int v86; // r4
  int v87; // r0
  int v88; // r0
  void *v89; // r1
  void *v90; // r7
  int v91; // r1
  int v92; // r4
  int v93; // r0
  int v94; // r3
  int v95; // r0
  int v96; // r2
  char *j; // r0
  void **v98; // r6
  char *v99; // r6
  void *v100; // t1
  char *v101; // r1
  int v102; // r2
  unsigned int v103; // r3
  int v104; // r6
  int v105; // r7
  int *v106; // [sp+Ch] [bp-D8h]
  size_t v107; // [sp+18h] [bp-CCh]
  _DWORD *v109; // [sp+20h] [bp-C4h]
  int v110; // [sp+24h] [bp-C0h]
  int v111; // [sp+38h] [bp-ACh] BYREF
  char *v112; // [sp+3Ch] [bp-A8h]
  int v113; // [sp+40h] [bp-A4h]
  void *v114; // [sp+44h] [bp-A0h] BYREF
  int v115; // [sp+48h] [bp-9Ch]
  int v116; // [sp+4Ch] [bp-98h]
  int v117; // [sp+50h] [bp-94h]
  int v118; // [sp+58h] [bp-8Ch]
  int v119; // [sp+60h] [bp-84h] BYREF
  void *v120; // [sp+64h] [bp-80h]
  char *v121; // [sp+68h] [bp-7Ch]
  void *v122; // [sp+6Ch] [bp-78h]
  int v123; // [sp+70h] [bp-74h]
  size_t v124; // [sp+74h] [bp-70h]
  int v125; // [sp+78h] [bp-6Ch] BYREF
  void *v126; // [sp+7Ch] [bp-68h]
  int v127; // [sp+80h] [bp-64h]
  void *v128; // [sp+84h] [bp-60h]
  void *v129; // [sp+88h] [bp-5Ch]
  size_t v130; // [sp+8Ch] [bp-58h]
  size_t v131; // [sp+90h] [bp-54h]
  _DWORD *v132; // [sp+94h] [bp-50h]
  unsigned int v133; // [sp+98h] [bp-4Ch]
  signed int v134; // [sp+A0h] [bp-44h] BYREF
  char *v135; // [sp+A4h] [bp-40h]
  char *v136; // [sp+A8h] [bp-3Ch]
  void *v137; // [sp+ACh] [bp-38h]
  void *v138; // [sp+B0h] [bp-34h]
  size_t v139; // [sp+B4h] [bp-30h]
  _DWORD *v140; // [sp+B8h] [bp-2Ch]
  int *v141; // [sp+BCh] [bp-28h]
  unsigned int v142; // [sp+C0h] [bp-24h]
  char *v143; // [sp+C8h] [bp-1Ch] BYREF
  _DWORD *v144; // [sp+CCh] [bp-18h]
  unsigned int v145; // [sp+D0h] [bp-14h]
  int v146; // [sp+D8h] [bp-Ch] BYREF
  void *ptr; // [sp+DCh] [bp-8h]
  size_t v148; // [sp+E0h] [bp-4h]

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
  v106 = (int *)result;
  v145 = 0;
  v144 = 0;
  if ( !v2 )
  {
    std::env::vars_os((unsigned int *)&v134);
    v114 = v137;
    v5 = v135;
    v6 = v136;
    v111 = v134;
    v112 = v135;
    v113 = (int)v136;
    if ( v135 != v136 )
    {
      v7 = 0;
      v8 = v136 - v135 - 24;
      while ( 1 )
      {
        v9 = &v5[v7];
        if ( !*(_DWORD *)&v5[v7 + 4] )
          break;
        v120 = *(void **)&v5[v7 + 4];
        v119 = *(_DWORD *)&v5[v7];
        v10 = *(_DWORD *)&v5[v7 + 20];
        v11 = *(_DWORD *)&v5[v7 + 12];
        v12 = *(void **)&v5[v7 + 16];
        v121 = *(char **)&v5[v7 + 8];
        v127 = v10;
        v126 = v12;
        v125 = v11;
        sub_1B5D04(&v146, &v143, (size_t *)&v119, &v125);
        v13 = ptr == 0;
        if ( ptr )
          v13 = v146 == 0;
        if ( !v13 )
          _rust_dealloc(ptr);
        v7 += 24;
        v8 -= 24;
        if ( &v5[v7] == v6 )
          goto LABEL_21;
      }
      v14 = v9 + 24;
      v135 = v9 + 24;
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
    if ( v134 )
      _rust_dealloc(v137);
  }
  v16 = *(_DWORD *)a2;
  v17 = *(_DWORD *)(a2 + 4);
  if ( !v17 )
    v3 = 0;
  v116 = *(_DWORD *)a2;
  v112 = (char *)v16;
  v117 = v17;
  v113 = v17;
  v118 = v3;
  v115 = 2 * (v17 == 0);
  v111 = v115;
LABEL_26:
  while ( 1 )
  {
    v18 = sub_1AEE14(&v111);
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
      v127 = v22;
      v126 = (void *)v25;
      v125 = v22;
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
      v136 = (char *)v29;
      v135 = (char *)v23;
      v134 = v29;
      sub_1B5D04(&v119, &v143, (size_t *)&v125, &v134);
      v30 = v120 == 0;
      if ( v120 )
        v30 = v119 == 0;
      if ( !v30 )
        _rust_dealloc(v120);
    }
    else
    {
      v109 = v144;
      if ( v144 )
      {
        v31 = (size_t)v143;
        v32 = (unsigned __int16 *)v144;
        v33 = *(const void **)(v18 + 4);
        v34 = *(_DWORD *)(v18 + 8);
        v107 = (size_t)v143;
LABEL_40:
        v35 = v32 + 2;
        v110 = v32[135];
        v36 = 67;
        v37 = 12 * v110;
        do
        {
          if ( !v37 )
          {
            v43 = v110;
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
        LOBYTE(v146) = 0;
        if ( v31 )
        {
          v44 = *(unsigned __int16 **)&v32[2 * v36];
          if ( v31 != 1 )
          {
            for ( i = 1; i != v31; ++i )
              v44 = *(unsigned __int16 **)&v44[2 * v44[135] + 136];
          }
          v46 = v44[135];
          v126 = v44;
          v127 = v46 - 1;
          v125 = 0;
          sub_1B90E4(&v134, &v125, &v146);
          v119 = v134;
          v120 = v135;
          v121 = v136;
          v122 = v137;
          v123 = (int)v138;
          v124 = v139;
          v47 = v141;
          v48 = v142;
          v49 = v141;
          if ( v142 >= *((unsigned __int16 *)v141 + 135) )
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
          v50 = v120;
          v51 = v121;
          v52 = &v49[3 * v48];
          v53 = v52[1];
          v54 = (void *)v52[2];
          v55 = v52[3];
          v52[1] = v119;
          v52[2] = (int)v50;
          v52[3] = (int)v51;
          v56 = (void *)v52[35];
          v57 = (void *)v52[34];
          v58 = v52[36];
          v52 += 34;
          v128 = v57;
          v129 = v56;
          v130 = v58;
          v59 = v123;
          v60 = v124;
          v127 = v55;
          *v52 = (int)v122;
          v52[1] = v59;
          v52[2] = v60;
          v126 = v54;
          v125 = v53;
          v134 = v53;
          v135 = (char *)v54;
          v136 = (char *)v127;
          v137 = v128;
          v138 = v129;
          v139 = v130;
        }
        else
        {
          v127 = v36 - 68;
          v126 = v32;
          v125 = 0;
          sub_1B90E4(&v134, &v125, &v146);
        }
        v125 = v134;
        v126 = v135;
        v127 = (int)v136;
        v128 = v137;
        v129 = v138;
        v130 = v139;
        --v145;
        if ( (_BYTE)v146 )
        {
          if ( !v107 )
            core::panicking::panic((int)aAssertionFaile_5, 33, (int)&off_2E9438);
          v61 = (_DWORD *)v109[68];
          *v61 = 0;
          v143 = (char *)(v107 - 1);
          v144 = v61;
          _rust_dealloc(v109);
        }
        if ( v126 )
        {
          v62 = v128;
          v63 = v129;
          if ( v125 )
            _rust_dealloc(v126);
          v64 = v63 == 0;
          if ( v63 )
            v64 = v62 == 0;
          if ( !v64 )
            _rust_dealloc(v63);
        }
      }
    }
  }
  v65 = v145;
  v131 = (size_t)v143;
  v132 = v144;
  v133 = v145;
  if ( v145 )
  {
    v66 = v145 < 0x10000000;
    if ( v145 > 0xFFFFFFF || (int)(8 * v145) <= -1 )
      alloc::raw_vec::capacity_overflow(v66, v144);
    v67 = 4 * v66;
    if ( 8 * v145 )
    {
      v68 = _rust_alloc(8 * v145);
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
  v135 = (char *)v68;
  v136 = 0;
  v134 = v65;
  v69 = (_DWORD *)_rust_alloc(4 * (v65 + 1));
  if ( !v69 )
    alloc::alloc::handle_alloc_error();
  v70 = v132;
  *v69 = 0;
  v115 = (int)v69;
  v116 = 1;
  v111 = v134;
  v112 = v135;
  v113 = (int)v136;
  v114 = (void *)(v65 + 1);
  if ( !v70 )
    v65 = 0;
  v138 = (void *)(2 * (v70 == 0));
  v134 = (signed int)v138;
  v142 = v65;
  v140 = v70;
  v139 = v131;
  v136 = (char *)v70;
  v135 = (char *)v131;
  while ( 1 )
  {
    sub_1B7934(&v125, &v134);
    v73 = v126;
    v74 = v126 == 0;
    if ( v126 )
    {
      v72 = (char *)v126 + 12 * v127;
      v73 = (_DWORD *)v72[2];
      v74 = v73 == 0;
    }
    if ( v74 )
      break;
    v75 = (char *)v72[1];
    v76 = v72[3];
    v145 = v76;
    v144 = v73;
    v143 = v75;
    v77 = v72[36];
    v78 = v72[34];
    v79 = (void *)v72[35];
    v80 = v77 + 2;
    v146 = v78;
    v148 = v77;
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
        v125 = (int)v73;
        v82 = (int)v75 >= 0;
        v126 = v75;
      }
      else
      {
        v82 = 0;
      }
      v127 = v82;
      sub_1B9DFC(&v119, v81, v81 >= 0, (int)&v125);
      v73 = (_DWORD *)v119;
      if ( v119 )
      {
        v75 = v121;
        if ( v121 )
          alloc::alloc::handle_alloc_error();
LABEL_134:
        alloc::raw_vec::capacity_overflow(v73, v75);
      }
      v73 = v120;
      v144 = v120;
      v143 = (char *)v81;
      if ( v81 != v76 )
        goto LABEL_102;
    }
    sub_79590((size_t *)&v143, v76, 1);
    v73 = v144;
    v76 = v145;
LABEL_102:
    v83 = v76 + 1;
    *((_BYTE *)v73 + v76) = 61;
    v84 = (int)v143;
    v145 = v76 + 1;
    if ( (unsigned int)&v143[-v76 - 1] < v77 )
    {
      sub_79590((size_t *)&v143, v76 + 1, v77);
      v84 = (int)v143;
      v83 = v145;
    }
    v85 = v144;
    memcpy((char *)v144 + v83, v79, v77);
    v86 = v83 + v77;
    v145 = v86;
    v121 = (char *)v86;
    v120 = v85;
    v119 = v84;
    if ( v86 >= 8 )
    {
      if ( !core::slice::memchr::memchr_aligned(0, (int)v85, v86) )
        goto LABEL_109;
LABEL_116:
      *(_BYTE *)(a2 + 125) = 1;
      if ( v84 )
        _rust_dealloc(v85);
      if ( v146 )
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
      v127 = v86;
      v126 = v85;
      v125 = v84;
      v88 = alloc::ffi::c_str::CString::_from_vec_unchecked((unsigned int *)&v125);
      v90 = v89;
      v91 = v116;
      v92 = v88;
      v119 = v88;
      v93 = v116 - 1;
      v120 = v90;
      if ( !v116 )
        core::panicking::panic_bounds_check(v93, 0, (int)&off_2EA938);
      v94 = v115;
      v4 = v116 == (_DWORD)v114;
      *(_DWORD *)(v115 + 4 * v93) = v92;
      if ( v4 )
      {
        sub_1BA0E4((unsigned int *)&v114, v91);
        v94 = v115;
        v91 = v116;
      }
      v95 = v111;
      v96 = v113;
      *(_DWORD *)(v94 + 4 * v91) = 0;
      v116 = v91 + 1;
      v126 = v90;
      v125 = v92;
      if ( v96 == v95 )
      {
        sub_1B9EC4((unsigned int *)&v111, v96);
        v96 = v113;
      }
      v71 = v112;
      *(_DWORD *)&v112[8 * v96] = v92;
      *(_DWORD *)&v71[8 * v96 + 4] = v90;
      v113 = v96 + 1;
      if ( v146 )
        goto LABEL_88;
    }
  }
  sub_1B7934(&v125, &v134);
  for ( j = (char *)v126; v126; j = (char *)v126 )
  {
    v98 = (void **)&j[12 * v127];
    if ( v98[1] )
      _rust_dealloc(v98[2]);
    v100 = v98[34];
    v99 = (char *)(v98 + 34);
    if ( v100 )
      _rust_dealloc(*((void **)v99 + 1));
    sub_1B7934(&v125, &v134);
  }
  result = v111;
  v101 = v112;
  v102 = v113;
  v103 = (unsigned int)v114;
  v104 = v115;
  v105 = v116;
  *v106 = v111;
  v106[1] = (int)v101;
  v106[2] = v102;
  v106[3] = v103;
  v106[4] = v104;
  v106[5] = v105;
  return result;
}
