char **__fastcall std::thread::available_parallelism(_DWORD *a1)
{
  int v1; // r11
  void *v3; // r0
  void **v4; // r5
  unsigned int v5; // r2
  _BYTE *v6; // r10
  int v7; // r4
  char v8; // r9
  _BYTE *v9; // r0
  int v10; // r1
  int v11; // r8
  int v12; // r7
  int v13; // r2
  _BYTE *v14; // r0
  _BOOL4 v15; // lr
  int v16; // r5
  int v17; // r11
  int v18; // r7
  char v19; // r12
  int v20; // r2
  int v21; // r0
  int v22; // r6
  int v23; // r3
  int v24; // r2
  _BOOL4 v25; // r9
  int v26; // r7
  const void *i; // r0
  int v28; // r1
  void **v29; // r5
  void *v30; // r0
  int v31; // r10
  void *v32; // r0
  _BOOL4 v33; // r4
  size_t v34; // r6
  _BYTE *v35; // r8
  size_t v36; // r11
  size_t v37; // r5
  _BYTE *v38; // r7
  size_t v39; // r3
  int v40; // r1
  int v41; // r9
  void *v42; // r4
  int v43; // r5
  _BOOL4 v44; // r7
  size_t v45; // r4
  char **result; // r0
  size_t v48; // r12
  size_t v49; // lr
  size_t v50; // r4
  size_t v51; // r2
  size_t v52; // r1
  size_t v53; // r3
  size_t v54; // r8
  size_t v55; // r9
  size_t v56; // r10
  unsigned int v57; // r4
  unsigned int v58; // r0
  unsigned int v59; // r12
  unsigned int v60; // r0
  unsigned int v61; // r1
  unsigned int v62; // r0
  unsigned int v63; // r1
  unsigned int v64; // r0
  unsigned int v65; // r1
  unsigned int v66; // r0
  unsigned int v67; // r1
  unsigned int v68; // r0
  unsigned int v69; // r1
  unsigned int v70; // r0
  unsigned int v71; // r1
  unsigned int v72; // r0
  unsigned int v73; // r1
  unsigned int v74; // r0
  unsigned int v75; // r1
  unsigned int v76; // r0
  unsigned int v77; // r1
  unsigned int v78; // r0
  unsigned int v79; // r1
  unsigned int v80; // r0
  unsigned int v81; // r1
  int v82; // r0
  unsigned int v83; // r1
  int v84; // r0
  unsigned int v85; // r1
  int v86; // r0
  unsigned int v87; // r1
  int v88; // r0
  unsigned int v89; // r1
  int v90; // r0
  unsigned int v91; // r1
  int v92; // r0
  unsigned int v93; // r1
  int v94; // r0
  unsigned int v95; // r1
  int v96; // r0
  unsigned int v97; // r1
  int v98; // r0
  unsigned int v99; // r1
  int v100; // r0
  unsigned int v101; // r1
  int v102; // r0
  unsigned int v103; // r1
  int v104; // r12
  unsigned int v105; // r1
  unsigned int v106; // r2
  unsigned int v107; // lr
  unsigned int v108; // r0
  unsigned int v109; // r8
  unsigned int v110; // r1
  unsigned int v111; // r2
  size_t v112; // r3
  unsigned int v113; // r0
  unsigned int v114; // r1
  unsigned int v115; // r0
  _BYTE *v116; // r0
  _BYTE *v117; // r4
  void *v118; // r0
  int v119; // r5
  int v120; // r5
  _BYTE *v121; // r9
  unsigned int v122; // r4
  int v123; // r8
  _BOOL4 v124; // r6
  bool v125; // r0
  int v126; // r7
  int v127; // r1
  int v128; // r4
  int v129; // r0
  int v130; // r1
  bool v131; // zf
  unsigned int v132; // r0
  size_t v133; // r1
  size_t v134; // r4
  bool v135; // r1
  size_t v142; // r1
  bool v143; // zf
  void *v144; // r0
  unsigned int v148; // r1
  int v149; // r8
  size_t v150; // r5
  size_t v151; // r1
  int v152; // r0
  size_t v153; // r0
  size_t v154; // r1
  unsigned int v155; // r2
  void **v156; // r6
  _BYTE *v157; // r11
  int v158; // r1
  size_t v159; // r6
  int v160; // r7
  size_t v161; // r0
  _BYTE *v162; // r1
  size_t v163; // r5
  _BYTE *v164; // r10
  bool v165; // zf
  unsigned int v166; // r0
  size_t v167; // r1
  bool v168; // r0
  unsigned int v172; // r1
  bool v173; // r0
  size_t v177; // r1
  size_t v178; // [sp+4h] [bp-258h]
  size_t v179; // [sp+8h] [bp-254h]
  size_t v180; // [sp+Ch] [bp-250h]
  size_t v181; // [sp+10h] [bp-24Ch]
  size_t v182; // [sp+14h] [bp-248h]
  size_t v183; // [sp+18h] [bp-244h]
  size_t v184; // [sp+1Ch] [bp-240h]
  size_t v185; // [sp+20h] [bp-23Ch]
  size_t v186; // [sp+24h] [bp-238h]
  size_t v187; // [sp+28h] [bp-234h]
  size_t v188; // [sp+2Ch] [bp-230h]
  size_t v189; // [sp+30h] [bp-22Ch]
  size_t v190; // [sp+34h] [bp-228h]
  size_t v191; // [sp+38h] [bp-224h]
  size_t v192; // [sp+3Ch] [bp-220h]
  size_t v193; // [sp+40h] [bp-21Ch]
  size_t v194; // [sp+44h] [bp-218h]
  size_t v195; // [sp+48h] [bp-214h]
  void *v196; // [sp+4Ch] [bp-210h]
  size_t v197; // [sp+4Ch] [bp-210h]
  char v198; // [sp+50h] [bp-20Ch]
  size_t v199; // [sp+50h] [bp-20Ch]
  size_t v200; // [sp+50h] [bp-20Ch]
  _DWORD *v201; // [sp+54h] [bp-208h]
  void *src; // [sp+58h] [bp-204h]
  size_t srca; // [sp+58h] [bp-204h]
  size_t n; // [sp+5Ch] [bp-200h]
  size_t na; // [sp+5Ch] [bp-200h]
  size_t nb; // [sp+5Ch] [bp-200h]
  int v207; // [sp+60h] [bp-1FCh]
  size_t v208; // [sp+60h] [bp-1FCh]
  _BYTE *ptr; // [sp+64h] [bp-1F8h]
  size_t ptra; // [sp+64h] [bp-1F8h]
  size_t v211; // [sp+68h] [bp-1F4h] BYREF
  void *v212; // [sp+6Ch] [bp-1F0h]
  int v213; // [sp+70h] [bp-1ECh]
  int fd; // [sp+74h] [bp-1E8h] BYREF
  _BYTE *v215; // [sp+78h] [bp-1E4h]
  int v216; // [sp+7Ch] [bp-1E0h]
  size_t v217; // [sp+80h] [bp-1DCh] BYREF
  size_t v218; // [sp+84h] [bp-1D8h]
  size_t v219; // [sp+88h] [bp-1D4h]
  size_t v220; // [sp+8Ch] [bp-1D0h]
  size_t v221; // [sp+90h] [bp-1CCh] BYREF
  void *v222; // [sp+94h] [bp-1C8h]
  size_t v223; // [sp+98h] [bp-1C4h]
  int v224; // [sp+A0h] [bp-1BCh] BYREF
  void *v225; // [sp+A4h] [bp-1B8h]
  int v226; // [sp+A8h] [bp-1B4h]
  int v227; // [sp+B0h] [bp-1ACh] BYREF
  void **v228; // [sp+B4h] [bp-1A8h]
  int v229; // [sp+B8h] [bp-1A4h] BYREF
  void **v230; // [sp+BCh] [bp-1A0h]
  size_t s[80]; // [sp+C0h] [bp-19Ch] BYREF
  int v232; // [sp+240h] [bp-1Ch] BYREF
  int v233; // [sp+244h] [bp-18h]
  int v234; // [sp+248h] [bp-14h]
  _BYTE v235[3]; // [sp+24Ch] [bp-10h]
  char v236; // [sp+24Fh] [bp-Dh]
  _BYTE *v237; // [sp+250h] [bp-Ch]
  int v238; // [sp+254h] [bp-8h]

  v3 = (void *)_rust_alloc(0x80u);
  if ( !v3 )
    alloc::alloc::handle_alloc_error();
  v212 = v3;
  v233 = 438;
  v213 = 0;
  v211 = 128;
  *(_WORD *)v235 = 0;
  v232 = 0;
  v234 = 1;
  strcpy((char *)s, "/proc/self/cgroup");
  core::ffi::c_str::CStr::from_bytes_with_nul(&v217, s, 18);
  if ( !v217 )
  {
    sub_1DA3E8(&v224, v218, v219, &v232);
    v201 = a1;
    if ( (unsigned __int8)v224 == 4 )
      goto LABEL_4;
LABEL_6:
    v4 = (void **)v225;
    if ( (unsigned __int8)v224 != 4 )
    {
      if ( (unsigned __int8)v224 == 3 )
      {
        (**((void (__fastcall ***)(_DWORD))v225 + 1))(*(_DWORD *)v225);
        if ( *((_DWORD *)v4[1] + 1) )
          _rust_dealloc(*v4);
        _rust_dealloc(v4);
      }
      goto LABEL_105;
    }
    if ( v225 == (void *)-1 )
    {
LABEL_105:
      if ( v211 )
        _rust_dealloc(v212);
      nb = -1;
      goto LABEL_108;
    }
    goto LABEL_8;
  }
  v225 = &off_2CB14C;
  v224 = dword_2CB158;
  v201 = a1;
  if ( (unsigned __int8)dword_2CB158 != 4 )
    goto LABEL_6;
LABEL_4:
  v4 = (void **)v225;
LABEL_8:
  fd = (int)v4;
  v5 = sub_1BC46C(&fd);
  if ( v5 >= 0x81 )
    sub_77EE0(&v211, 0, v5);
  sub_1C4B88((int)&v221, fd);
  if ( (unsigned __int8)v221 != 4 )
  {
    if ( (unsigned __int8)v221 == 3 )
    {
      v29 = (void **)v222;
      (**((void (__fastcall ***)(_DWORD))v222 + 1))(*(_DWORD *)v222);
      if ( *((_DWORD *)v29[1] + 1) )
        _rust_dealloc(*v29);
      _rust_dealloc(v29);
    }
    close(fd);
    goto LABEL_105;
  }
  close(fd);
  v6 = v212;
  v7 = v213;
  v8 = 2;
  do
  {
    v9 = v6;
    if ( v7 )
    {
      v10 = 0;
      while ( v6[v10] != 10 )
      {
        if ( v7 == ++v10 )
        {
          v11 = 0;
          v10 = v7;
          goto LABEL_22;
        }
      }
      v7 += ~v10;
      v11 = 1;
      v6 += v10 + 1;
    }
    else
    {
      v11 = 0;
      v7 = 0;
      v10 = 0;
    }
LABEL_22:
    v236 = BYTE2(v224);
    v233 = (int)ptr;
    *(_WORD *)&v235[1] = v224;
    v235[0] = v8;
    v234 = v1;
    v232 = v207;
    v238 = v10;
    v237 = v9;
    if ( !v10 )
      goto LABEL_13;
    v12 = v10 - 2;
    v13 = 0;
    while ( v9[v13] != 58 )
    {
      ++v13;
      --v12;
      if ( v10 == v13 )
        goto LABEL_13;
    }
    v14 = &v9[v13];
    v15 = 1;
    v16 = 0;
    n = v1;
    if ( v10 - 1 != v13 )
    {
      v16 = v10 - 1 - v13;
      v10 = v13 - v10 + 1;
      v24 = 0;
      while ( v14[v24 + 1] != 58 )
      {
        ++v24;
        if ( !(v10 + v24) )
        {
          v18 = 1;
          v17 = (int)(v14 + 1);
          if ( !v16 )
            goto LABEL_29;
          goto LABEL_47;
        }
      }
      v16 = v12 - v24;
      v17 = (int)&v14[v24 + 2];
      v18 = 0;
      if ( !v24 )
        goto LABEL_29;
LABEL_47:
      core::str::converts::from_utf8(&v217, v14 + 1);
      if ( !v217 )
      {
        LOWORD(s[9]) = 1;
        s[5] = v219;
        s[6] = 1;
        s[7] = 44;
        s[8] = 44;
        s[2] = v218;
        s[3] = v219;
        s[4] = 0;
        s[1] = v219;
        s[0] = 0;
        for ( i = (const void *)sub_19E888(s); i; i = (const void *)sub_19E888(s) )
        {
          if ( v28 == 3 && !bcmp(i, aCpu, 3u) )
          {
            v19 = 0;
            v15 = v8 == 2;
            goto LABEL_30;
          }
        }
      }
LABEL_12:
      v1 = n;
LABEL_13:
      BYTE2(s[0]) = BYTE2(v224);
      LOWORD(s[0]) = v224;
      goto LABEL_14;
    }
    v17 = (int)(v14 + 1);
    v18 = 1;
LABEL_29:
    v19 = 1;
    if ( v8 != 2 )
      goto LABEL_12;
LABEL_30:
    v20 = 0;
    v21 = 1;
    do
    {
      v22 = v20;
      v23 = v10;
      if ( v21 != 1 )
        break;
      _ZF = v18 == 0;
      v21 = 0;
      v18 = 1;
      v10 = v16;
      v20 = v17;
    }
    while ( _ZF );
    if ( v22 )
    {
      if ( !v23 )
        core::slice::index::slice_start_index_len_fail();
      v1 = v23 - 1;
      v198 = v19;
      if ( v23 == 1 )
      {
        v25 = v15;
        v26 = 1;
      }
      else
      {
        if ( v1 <= -1 )
          alloc::raw_vec::capacity_overflow(v21, v10);
        v25 = v15;
        v26 = _rust_alloc(v23 - 1);
        if ( !v26 )
          alloc::alloc::handle_alloc_error();
      }
      memcpy((void *)v26, (const void *)(v22 + 1), v1);
      if ( !v25 && v207 != 0 )
        _rust_dealloc(ptr);
      v8 = v198;
      ptr = (_BYTE *)v26;
      v207 = v1;
    }
    else
    {
      v8 = 2;
      if ( !v15 && v207 != 0 )
        _rust_dealloc(ptr);
      v1 = n;
    }
LABEL_14:
    LOWORD(v224) = s[0];
    BYTE2(v224) = BYTE2(s[0]);
  }
  while ( v11 );
  if ( v8 == 2 )
    goto LABEL_105;
  na = v1;
  if ( (v8 & 1) == 0 )
  {
    v215 = ptr;
    fd = v207;
    v216 = v1;
    v30 = (void *)_rust_alloc(0x80u);
    if ( !v30 )
      alloc::alloc::handle_alloc_error();
    v31 = 0;
    v222 = v30;
    v221 = 128;
    v223 = 0;
    v32 = (void *)_rust_alloc(0x14u);
    if ( !v32 )
      alloc::alloc::handle_alloc_error();
    v226 = 0;
    v225 = v32;
    v224 = 20;
    while ( 2 )
    {
      ((void (__fastcall *)(size_t *, _BYTE *, int))off_2CBB4C[v31])(s, ptr, v1);
      if ( s[0] == 2 )
        goto LABEL_72;
      v33 = 0;
      v34 = s[3];
      v35 = (_BYTE *)s[4];
      v36 = s[5];
      v37 = 0;
      v38 = v222;
      v39 = s[1];
      v220 = s[3];
      if ( !s[0] )
        v34 = s[2];
      v218 = s[1];
      if ( s[0] )
        v39 = s[2];
      v219 = s[2];
      v217 = s[0];
      v223 = 0;
      v199 = s[0];
      v196 = (void *)s[2];
      src = (void *)v39;
      if ( v221 < v34 )
      {
        sub_77EE0(&v221, 0, v34);
        v38 = v222;
        v37 = v223;
      }
      memcpy(&v38[v37], src, v34);
      v40 = v37 + v34;
      v223 = v37 + v34;
      if ( v37 + v34 )
        v33 = v38[v40 - 1] != 47;
      if ( v36 && (v41 = 0, *v35 == 47) )
      {
LABEL_88:
        v223 = v41;
        if ( v221 - v41 >= v36 )
          goto LABEL_91;
      }
      else
      {
        if ( v33 )
        {
          if ( v221 == v40 )
          {
            sub_77EE0(&v221, v40, 1);
            v38 = v222;
            v40 = v223;
          }
          v41 = v40 + 1;
          v38[v40] = 47;
          goto LABEL_88;
        }
        v41 = v37 + v34;
        if ( v221 - v40 >= v36 )
        {
LABEL_91:
          v42 = v222;
LABEL_92:
          memcpy(&v38[v41], v35, v36);
          v223 = v41 + v36;
          std::sys_common::fs::try_exists(s, v42, v41 + v36);
          v43 = BYTE1(s[0]);
          v44 = LOBYTE(s[0]) != 4;
          if ( LOBYTE(s[0]) == 3 )
          {
            v45 = s[1];
            (**(void (__fastcall ***)(_DWORD))(s[1] + 4))(*(_DWORD *)s[1]);
            if ( *(_DWORD *)(*(_DWORD *)(v45 + 4) + 4) )
              _rust_dealloc(*(void **)v45);
            _rust_dealloc((void *)v45);
          }
          if ( !v44 && v43 != 0 )
          {
            nb = -1;
            while ( std::path::Path::_starts_with(v222, v223, src, v34) )
            {
              v126 = sub_1E1AB4((int)&v221, (int)&v224, &unk_291B6C, 0x10u);
              v128 = v127;
              v129 = sub_1E1AB4((int)&v221, (int)&v224, aCpuCfsPeriodUs, 0x11u);
              v131 = v126 == 1;
              if ( v126 == 1 )
                v131 = v129 == 1;
              if ( v131 && v130 )
              {
                v132 = sub_25BD18(v128, v130);
                v133 = nb;
                if ( nb >= v132 )
                  v133 = v132;
                nb = v133;
              }
              v134 = v223;
              if ( v223 )
                v135 = *(_BYTE *)v222 == 47;
              else
                v135 = 0;
              BYTE2(s[7]) = v135;
              LOBYTE(s[2]) = 6;
              s[1] = v223;
              s[0] = (size_t)v222;
              LOWORD(s[7]) = 512;
              <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v232, s);
              _R0 = (unsigned __int8)v234;
              if ( (unsigned __int8)v234 != 10 )
              {
                _R1 = 5;
                __asm { UQSUB8          R0, R0, R1 }
                if ( (unsigned int)(unsigned __int8)_R0 - 2 < 3 && std::path::Components::as_path(s) && v134 >= v142 )
                  v223 = v142;
              }
            }
            v143 = v199 == 0;
            if ( v199 )
              v143 = v218 == 0;
            if ( !v143 )
              _rust_dealloc(v196);
LABEL_171:
            if ( v224 )
              _rust_dealloc(v225);
            if ( v221 )
            {
              v144 = v222;
              goto LABEL_251;
            }
            goto LABEL_252;
          }
          _ZF = v199 == 0;
          if ( v199 )
            _ZF = v218 == 0;
          if ( !_ZF )
            _rust_dealloc(v196);
          v1 = na;
LABEL_72:
          if ( ++v31 == 3 )
          {
            nb = -1;
            goto LABEL_171;
          }
          continue;
        }
      }
      break;
    }
    sub_77EE0(&v221, v41, v36);
    v42 = v222;
    v41 = v223;
    v38 = v222;
    goto LABEL_92;
  }
  v215 = ptr;
  fd = v207;
  v216 = v1;
  v116 = (_BYTE *)_rust_alloc(0x80u);
  if ( !v116 )
    alloc::alloc::handle_alloc_error();
  v117 = v116;
  v222 = v116;
  v221 = 128;
  v223 = 0;
  v118 = (void *)_rust_alloc(0x14u);
  if ( !v118 )
    alloc::alloc::handle_alloc_error();
  v225 = v118;
  qmemcpy(v117, "/sys/fs/cgroup", 14);
  v226 = 0;
  v224 = 20;
  if ( !v1 || (v119 = 0, *ptr != 47) )
  {
    v119 = 15;
    v117[14] = 47;
  }
  v223 = v119;
  if ( 128 - v119 < (unsigned int)v1 )
  {
    sub_77EE0(&v221, v119, v1);
    v117 = v222;
    v119 = v223;
  }
  memcpy(&v117[v119], ptr, v1);
  v120 = v119 + v1;
  v223 = v120;
  if ( v120 )
  {
    if ( v117[v120 - 1] != 47 )
    {
      if ( v221 == v120 )
      {
        sub_77EE0(&v221, v120, 1);
        v117 = v222;
        v120 = v223;
      }
      v117[v120++] = 47;
      v223 = v120;
    }
    if ( v221 - v120 < 0x12 )
    {
LABEL_132:
      sub_77EE0(&v221, v120, 18);
      v121 = v222;
      v120 = v223;
      v117 = v222;
      goto LABEL_136;
    }
  }
  else
  {
    v120 = 0;
    if ( v221 < 0x12 )
      goto LABEL_132;
  }
  v121 = v222;
LABEL_136:
  memcpy(&v117[v120], aCgroupControll, 0x12u);
  v122 = v120 + 18;
  v223 = v120 + 18;
  std::sys_common::fs::try_exists(s, v121, v120 + 18);
  v123 = BYTE1(s[0]);
  v124 = LOBYTE(s[0]) != 4;
  if ( LOBYTE(s[0]) == 3 )
  {
    v120 = s[1];
    (**(void (__fastcall ***)(_DWORD))(s[1] + 4))(*(_DWORD *)s[1]);
    if ( *(_DWORD *)(*(_DWORD *)(v120 + 4) + 4) )
      _rust_dealloc(*(void **)v120);
    _rust_dealloc((void *)v120);
  }
  if ( v124 || v123 == 0 )
  {
    if ( v224 )
      _rust_dealloc(v225);
    if ( v221 )
      _rust_dealloc(v121);
    nb = -1;
    goto LABEL_252;
  }
  if ( v122 )
    v125 = *v121 == 47;
  else
    v125 = 0;
  BYTE2(s[7]) = v125;
  LOBYTE(s[2]) = 6;
  s[1] = v122;
  s[0] = (size_t)v121;
  LOWORD(s[7]) = 512;
  <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v232, s);
  _R0 = (unsigned __int8)v234;
  if ( (unsigned __int8)v234 != 10 )
  {
    _R1 = 5;
    __asm { UQSUB8          R0, R0, R1 }
    if ( (unsigned int)(unsigned __int8)_R0 - 2 < 3 && std::path::Components::as_path(s) && v122 >= v148 )
    {
      v122 = v148;
      v223 = v148;
    }
  }
  nb = -1;
  while ( std::path::Path::_starts_with(v121, v122, aSysFsCgroup, 14) )
  {
    if ( v122 )
    {
      if ( v121[v122 - 1] != 47 )
      {
        if ( v221 == v122 )
        {
          sub_77EE0(&v221, v122, 1);
          v121 = v222;
          v122 = v223;
        }
        v121[v122++] = 47;
        v223 = v122;
      }
      if ( v221 - v122 <= 6 )
      {
LABEL_191:
        sub_77EE0(&v221, v122, 7);
        v149 = v120;
        v121 = v222;
        v150 = v223;
        goto LABEL_194;
      }
    }
    else
    {
      v122 = 0;
      if ( v221 <= 6 )
        goto LABEL_191;
    }
    v149 = v120;
    v150 = v122;
LABEL_194:
    v122 = v150 + 7;
    *(_DWORD *)&v121[v150] = 779448419;
    *(_DWORD *)&v121[v150 + 3] = 2019650862;
    v121 = v222;
    v223 = v150 + 7;
    *(_WORD *)v235 = 0;
    v234 = 1;
    v233 = 438;
    v226 = 0;
    v232 = 0;
    if ( (v150 + 7) >> 7 <= 2 )
    {
      memcpy(s, v222, v150 + 7);
      *((_BYTE *)s + v122) = 0;
      core::ffi::c_str::CStr::from_bytes_with_nul(&v217, s, v150 + 8);
      if ( v217 )
      {
        v229 = dword_2CB158;
        v230 = (void **)&off_2CB14C;
        if ( (unsigned __int8)dword_2CB158 == 4 )
          goto LABEL_207;
        goto LABEL_198;
      }
      sub_1DA3E8(&v229, v218, v219, &v232);
    }
    else
    {
      sub_79B68(&v229, (int)v222, v150 + 7, (int)&v232);
    }
    if ( (unsigned __int8)v229 == 4 )
    {
LABEL_207:
      v151 = (size_t)v230;
      goto LABEL_208;
    }
LABEL_198:
    v151 = (size_t)v230;
    if ( (unsigned __int8)v229 != 4 )
    {
      v227 = v229;
      v228 = v230;
      v152 = v229 & 7;
      if ( v152 == 4 )
        goto LABEL_200;
      goto LABEL_211;
    }
LABEL_208:
    s[0] = v151;
    v155 = sub_1BC46C(s);
    if ( v224 - v226 < v155 )
      sub_77EE0((size_t *)&v224, v226, v155);
    sub_1C4FE0(&v227, s[0], &v224);
    close(s[0]);
    v152 = v227 & 7;
    if ( v152 == 4 )
    {
LABEL_200:
      s[8] = 10;
      s[7] = 10;
      s[6] = 1;
      LOWORD(s[9]) = 0;
      s[5] = v226;
      s[2] = (size_t)v225;
      s[3] = v226;
      s[4] = 0;
      s[1] = v226;
      s[0] = 0;
      v153 = sub_19E888(s);
      if ( !v153 )
        break;
      if ( v154 )
      {
        if ( *(_BYTE *)(v153 + v154 - 1) == 13 )
          --v154;
      }
      else
      {
        v154 = 0;
      }
      LOWORD(s[9]) = 1;
      s[5] = v154;
      s[6] = 1;
      s[7] = 32;
      s[8] = 32;
      s[2] = v153;
      s[3] = v154;
      s[4] = 0;
      s[1] = v154;
      s[0] = 0;
      v159 = sub_19E888(s);
      v149 = v158;
      if ( !v159 )
        break;
      v160 = v158;
      v161 = sub_19E888(s);
      v163 = v161;
      v157 = v162;
      if ( !v161 )
        break;
      v164 = v162;
      core::num::<impl core::str::traits::FromStr for usize>::from_str(&v217, v159, v160);
      core::num::<impl core::str::traits::FromStr for usize>::from_str(&v232, v163, v164);
      v165 = (v217 & 1) == 0;
      if ( (v217 & 1) == 0 )
        v165 = (v232 & 1) == 0;
      if ( v165 && v233 )
      {
        v166 = sub_25BD18(v218, v233);
        v167 = nb;
        if ( nb >= v166 )
          v167 = v166;
        nb = v167;
      }
      goto LABEL_231;
    }
LABEL_211:
    if ( v152 == 3 )
    {
      v156 = v228;
      (*(void (__fastcall **)(void *))v228[1])(*v228);
      if ( *((_DWORD *)v156[1] + 1) )
        _rust_dealloc(*v156);
      _rust_dealloc(v156);
    }
    v157 = v6;
LABEL_231:
    if ( v122 )
      v168 = *v121 == 47;
    else
      v168 = 0;
    BYTE2(s[7]) = v168;
    LOBYTE(s[2]) = 6;
    s[1] = v122;
    s[0] = (size_t)v121;
    LOWORD(s[7]) = 512;
    <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v232, s);
    _R0 = (unsigned __int8)v234;
    if ( (unsigned __int8)v234 != 10 )
    {
      _R1 = 5;
      __asm { UQSUB8          R0, R0, R1 }
      if ( (unsigned int)(unsigned __int8)_R0 - 2 < 3 && std::path::Components::as_path(s) && v122 >= v172 )
      {
        v122 = v172;
        v223 = v172;
      }
    }
    if ( v122 )
      v173 = *v121 == 47;
    else
      v173 = 0;
    BYTE2(s[7]) = v173;
    LOBYTE(s[2]) = 6;
    s[1] = v122;
    s[0] = (size_t)v121;
    LOWORD(s[7]) = 512;
    <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v232, s);
    _R0 = (unsigned __int8)v234;
    if ( (unsigned __int8)v234 == 10 )
      goto LABEL_183;
    _R1 = 5;
    __asm { UQSUB8          R0, R0, R1 }
    if ( (unsigned int)(unsigned __int8)_R0 - 2 >= 3 )
      goto LABEL_183;
    v120 = v149;
    v6 = v157;
    if ( std::path::Components::as_path(s) )
    {
      v120 = v149;
      v6 = v157;
      if ( v122 >= v177 )
      {
        v223 = v177;
        v122 = v177;
LABEL_183:
        v120 = v149;
        v6 = v157;
        continue;
      }
    }
  }
  if ( v224 )
    _rust_dealloc(v225);
  if ( v221 )
  {
    v144 = v121;
LABEL_251:
    _rust_dealloc(v144);
  }
LABEL_252:
  if ( v207 )
    _rust_dealloc(ptr);
  if ( v211 )
    _rust_dealloc(v212);
LABEL_108:
  memset(s, 0, 0x80u);
  if ( sched_getaffinity(0, 128, s) )
  {
    result = (char **)sysconf(84);
    if ( result == (char **)-1 )
    {
      result = (char **)*_errno_location();
      *v201 = 0;
      v201[1] = result;
    }
    else if ( result )
    {
      *(_BYTE *)v201 = 4;
      v201[1] = result;
    }
    else
    {
      *v201 = 2;
      v201[1] = &off_2CBB30;
      return &off_2CBB30;
    }
  }
  else
  {
    ptra = s[26];
    v208 = s[27];
    srca = s[28];
    v200 = s[29];
    v197 = s[30];
    v195 = s[31];
    v194 = s[25];
    v193 = s[24];
    v192 = s[23];
    v191 = s[22];
    v190 = s[21];
    v189 = s[20];
    v188 = s[19];
    v187 = s[18];
    v186 = s[17];
    v185 = s[16];
    v184 = s[15];
    v183 = s[14];
    v182 = s[13];
    v181 = s[12];
    v180 = s[11];
    v179 = s[10];
    v48 = s[2];
    v49 = s[3];
    v178 = s[9];
    v50 = s[0];
    v51 = s[1] - ((s[1] >> 1) & 0x55555555);
    v52 = s[4];
    v53 = s[5];
    v54 = s[6];
    v55 = s[7];
    v56 = s[8];
    *(_BYTE *)v201 = 4;
    v57 = ((v50 - ((v50 >> 1) & 0x55555555)) & 0x33333333) + (((v50 - ((v50 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v58 = ((v48 - ((v48 >> 1) & 0x55555555)) & 0x33333333) + (((v48 - ((v48 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v59 = ((16843009
          * (((v51 & 0x33333333) + ((v51 >> 2) & 0x33333333) + (((v51 & 0x33333333) + ((v51 >> 2) & 0x33333333)) >> 4))
           & 0xF0F0F0F)) >> 24)
        + ((16843009 * ((v57 + (v57 >> 4)) & 0xF0F0F0F)) >> 24)
        + ((16843009 * ((v58 + (v58 >> 4)) & 0xF0F0F0F)) >> 24);
    v60 = ((v49 - ((v49 >> 1) & 0x55555555)) & 0x33333333) + (((v49 - ((v49 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v61 = ((v52 - ((v52 >> 1) & 0x55555555)) & 0x33333333) + (((v52 - ((v52 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v62 = v59
        + ((16843009 * ((v60 + (v60 >> 4)) & 0xF0F0F0F)) >> 24)
        + ((16843009 * ((v61 + (v61 >> 4)) & 0xF0F0F0F)) >> 24);
    v63 = ((v53 - ((v53 >> 1) & 0x55555555)) & 0x33333333) + (((v53 - ((v53 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v64 = v62 + ((16843009 * ((v63 + (v63 >> 4)) & 0xF0F0F0F)) >> 24);
    v65 = ((v54 - ((v54 >> 1) & 0x55555555)) & 0x33333333) + (((v54 - ((v54 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v66 = v64 + ((16843009 * ((v65 + (v65 >> 4)) & 0xF0F0F0F)) >> 24);
    v67 = ((v55 - ((v55 >> 1) & 0x55555555)) & 0x33333333) + (((v55 - ((v55 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v68 = v66 + ((16843009 * ((v67 + (v67 >> 4)) & 0xF0F0F0F)) >> 24);
    v69 = ((v56 - ((v56 >> 1) & 0x55555555)) & 0x33333333) + (((v56 - ((v56 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v70 = v68 + ((16843009 * ((v69 + (v69 >> 4)) & 0xF0F0F0F)) >> 24);
    v71 = ((v178 - ((v178 >> 1) & 0x55555555)) & 0x33333333) + (((v178 - ((v178 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v72 = v70 + ((16843009 * ((v71 + (v71 >> 4)) & 0xF0F0F0F)) >> 24);
    v73 = ((v179 - ((v179 >> 1) & 0x55555555)) & 0x33333333) + (((v179 - ((v179 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v74 = v72 + ((16843009 * ((v73 + (v73 >> 4)) & 0xF0F0F0F)) >> 24);
    v75 = ((v180 - ((v180 >> 1) & 0x55555555)) & 0x33333333) + (((v180 - ((v180 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v76 = v74 + ((16843009 * ((v75 + (v75 >> 4)) & 0xF0F0F0F)) >> 24);
    v77 = ((v181 - ((v181 >> 1) & 0x55555555)) & 0x33333333) + (((v181 - ((v181 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v78 = v76 + ((16843009 * ((v77 + (v77 >> 4)) & 0xF0F0F0F)) >> 24);
    v79 = ((v182 - ((v182 >> 1) & 0x55555555)) & 0x33333333) + (((v182 - ((v182 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v80 = v78 + ((16843009 * ((v79 + (v79 >> 4)) & 0xF0F0F0F)) >> 24);
    v81 = ((v183 - ((v183 >> 1) & 0x55555555)) & 0x33333333) + (((v183 - ((v183 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v82 = v80 + ((16843009 * ((v81 + (v81 >> 4)) & 0xF0F0F0F)) >> 24);
    v83 = ((v184 - ((v184 >> 1) & 0x55555555)) & 0x33333333) + (((v184 - ((v184 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v84 = v82 + ((16843009 * ((v83 + (v83 >> 4)) & 0xF0F0F0F)) >> 24);
    v85 = ((v185 - ((v185 >> 1) & 0x55555555)) & 0x33333333) + (((v185 - ((v185 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v86 = v84 + ((16843009 * ((v85 + (v85 >> 4)) & 0xF0F0F0F)) >> 24);
    v87 = ((v186 - ((v186 >> 1) & 0x55555555)) & 0x33333333) + (((v186 - ((v186 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v88 = v86 + ((16843009 * ((v87 + (v87 >> 4)) & 0xF0F0F0F)) >> 24);
    v89 = ((v187 - ((v187 >> 1) & 0x55555555)) & 0x33333333) + (((v187 - ((v187 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v90 = v88 + ((16843009 * ((v89 + (v89 >> 4)) & 0xF0F0F0F)) >> 24);
    v91 = ((v188 - ((v188 >> 1) & 0x55555555)) & 0x33333333) + (((v188 - ((v188 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v92 = v90 + ((16843009 * ((v91 + (v91 >> 4)) & 0xF0F0F0F)) >> 24);
    v93 = ((v189 - ((v189 >> 1) & 0x55555555)) & 0x33333333) + (((v189 - ((v189 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v94 = v92 + ((16843009 * ((v93 + (v93 >> 4)) & 0xF0F0F0F)) >> 24);
    v95 = ((v190 - ((v190 >> 1) & 0x55555555)) & 0x33333333) + (((v190 - ((v190 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v96 = v94 + ((16843009 * ((v95 + (v95 >> 4)) & 0xF0F0F0F)) >> 24);
    v97 = ((v191 - ((v191 >> 1) & 0x55555555)) & 0x33333333) + (((v191 - ((v191 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v98 = v96 + ((16843009 * ((v97 + (v97 >> 4)) & 0xF0F0F0F)) >> 24);
    v99 = ((v192 - ((v192 >> 1) & 0x55555555)) & 0x33333333) + (((v192 - ((v192 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v100 = v98 + ((16843009 * ((v99 + (v99 >> 4)) & 0xF0F0F0F)) >> 24);
    v101 = ((v193 - ((v193 >> 1) & 0x55555555)) & 0x33333333)
         + (((v193 - ((v193 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v102 = v100 + ((16843009 * ((v101 + (v101 >> 4)) & 0xF0F0F0F)) >> 24);
    v103 = ((v194 - ((v194 >> 1) & 0x55555555)) & 0x33333333)
         + (((v194 - ((v194 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v104 = v102 + ((16843009 * ((v103 + (v103 >> 4)) & 0xF0F0F0F)) >> 24);
    v105 = ((v195 - ((v195 >> 1) & 0x55555555)) & 0x33333333)
         + (((v195 - ((v195 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v106 = ((v197 - ((v197 >> 1) & 0x55555555)) & 0x33333333)
         + (((v197 - ((v197 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v107 = 16843009 * ((v105 + (v105 >> 4)) & 0xF0F0F0F);
    v108 = ((v200 - ((v200 >> 1) & 0x55555555)) & 0x33333333)
         + (((v200 - ((v200 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v109 = 16843009 * ((v106 + (v106 >> 4)) & 0xF0F0F0F);
    v110 = ((srca - ((srca >> 1) & 0x55555555)) & 0x33333333)
         + (((srca - ((srca >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v111 = ((v208 - ((v208 >> 1) & 0x55555555)) & 0x33333333)
         + (((v208 - ((v208 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v112 = ptra - ((ptra >> 1) & 0x55555555);
    v113 = v104
         + ((16843009
           * (((v112 & 0x33333333)
             + ((v112 >> 2) & 0x33333333)
             + (((v112 & 0x33333333) + ((v112 >> 2) & 0x33333333)) >> 4))
            & 0xF0F0F0F)) >> 24)
         + ((16843009 * ((v111 + (v111 >> 4)) & 0xF0F0F0F)) >> 24)
         + ((16843009 * ((v110 + (v110 >> 4)) & 0xF0F0F0F)) >> 24)
         + ((16843009 * ((v108 + (v108 >> 4)) & 0xF0F0F0F)) >> 24);
    v114 = nb;
    v115 = v113 + HIBYTE(v109) + HIBYTE(v107);
    if ( nb <= 1 )
      v114 = 1;
    if ( v115 < v114 )
      v114 = v115;
    v201[1] = v114;
    return (char **)v201;
  }
  return result;
}
