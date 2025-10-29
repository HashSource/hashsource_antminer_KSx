int __fastcall sub_1A0A00(_DWORD *a1, int *a2, int *a3, int *a4)
{
  unsigned int v4; // r6
  int v6; // r0
  void *v7; // r4
  unsigned int v8; // r7
  int v9; // r2
  int v10; // r10
  unsigned int v11; // r5
  int v12; // r9
  int v13; // r8
  size_t v14; // r2
  int v15; // r11
  int v16; // r0
  bool v17; // nf
  int v18; // r11
  int v19; // r8
  unsigned int v20; // r5
  _WORD *v21; // r7
  int v22; // r2
  int v23; // r3
  int v24; // r9
  unsigned int v25; // r1
  int *v26; // r4
  int v27; // r0
  int v28; // r3
  int v29; // r7
  int v30; // r6
  int v32; // r9
  int v33; // r8
  _DWORD *v34; // r0
  _WORD *v35; // r1
  int v36; // r2
  unsigned int v37; // r0
  int *v38; // r1
  int v39; // r5
  int v40; // r4
  int v41; // r1
  size_t v42; // r4
  int v43; // r1
  int v44; // r3
  int v45; // r5
  size_t v46; // r4
  size_t v47; // r6
  int v48; // r5
  _DWORD *v49; // r5
  int *v50; // r4
  unsigned int v51; // r11
  int v52; // r1
  int v53; // r11
  size_t v54; // r6
  _DWORD *v55; // r3
  _DWORD *v56; // r9
  size_t v57; // r1
  int v58; // r2
  int v59; // r7
  _DWORD *v60; // r3
  size_t v61; // r1
  int v62; // r2
  _DWORD *v63; // r12
  int v64; // r0
  unsigned __int16 *v65; // r9
  _DWORD *v66; // r1
  unsigned __int16 *v67; // r11
  _DWORD *v68; // r10
  unsigned int v69; // r4
  unsigned __int16 *v70; // r6
  unsigned int v71; // r11
  int v72; // r11
  size_t v73; // r4
  int v74; // r8
  int v75; // r5
  unsigned __int16 *v76; // r0
  unsigned __int16 *v77; // r7
  unsigned __int16 *v78; // r5
  int v79; // r1
  unsigned int v80; // r0
  unsigned __int16 *v81; // r5
  int *v82; // r2
  int *v83; // r2
  int v84; // r3
  int v85; // r9
  size_t v86; // r4
  size_t v87; // r1
  int v88; // r12
  unsigned int v89; // r5
  int v90; // r0
  unsigned int j; // r2
  int v92; // r0
  int *v93; // r4
  unsigned int v94; // r5
  unsigned int v95; // r10
  int v96; // r1
  int v97; // r2
  int v98; // r1
  int v99; // r2
  unsigned __int16 *v100; // r3
  unsigned __int16 *v101; // r6
  size_t v102; // r1
  int v103; // r2
  unsigned __int16 *v104; // r1
  int v105; // r1
  _DWORD *v106; // r0
  int v107; // r7
  int v108; // r6
  size_t v109; // r2
  int v110; // r3
  int v111; // r5
  int v112; // r1
  size_t v113; // r2
  int v114; // r3
  int v115; // r9
  int v116; // r6
  int v117; // r0
  _WORD *v118; // r2
  unsigned int v119; // r3
  _DWORD *v120; // r2
  int v121; // r12
  int v122; // r7
  unsigned int v123; // r6
  unsigned int v124; // r7
  int *v125; // r5
  int v126; // r1
  int v127; // r2
  int *v128; // r5
  int v129; // r1
  int v130; // r2
  int v131; // r1
  int v132; // r2
  int v133; // r8
  size_t v134; // r12
  int v135; // lr
  int *v136; // r0
  _DWORD *v137; // r0
  int v138; // r0
  int v139; // r1
  char **v140; // r2
  const char *v141; // r0
  _DWORD *v142; // [sp+8h] [bp-FCh]
  _DWORD *v143; // [sp+8h] [bp-FCh]
  size_t v144; // [sp+Ch] [bp-F8h]
  int v145; // [sp+10h] [bp-F4h]
  unsigned __int16 *v146; // [sp+14h] [bp-F0h]
  _WORD *n; // [sp+18h] [bp-ECh]
  int v148; // [sp+1Ch] [bp-E8h]
  size_t v150; // [sp+20h] [bp-E4h]
  size_t v151; // [sp+20h] [bp-E4h]
  _DWORD *v153; // [sp+24h] [bp-E0h]
  unsigned __int16 *v154; // [sp+24h] [bp-E0h]
  int i; // [sp+28h] [bp-DCh]
  _DWORD *v156; // [sp+28h] [bp-DCh]
  _DWORD *v157; // [sp+28h] [bp-DCh]
  int v158; // [sp+38h] [bp-CCh]
  int v159; // [sp+3Ch] [bp-C8h]
  unsigned int v160; // [sp+40h] [bp-C4h]
  int *v161; // [sp+44h] [bp-C0h]
  int v162; // [sp+48h] [bp-BCh]
  int v163; // [sp+4Ch] [bp-B8h]
  int v164; // [sp+50h] [bp-B4h]
  int v165; // [sp+58h] [bp-ACh]
  size_t v166; // [sp+5Ch] [bp-A8h]
  unsigned int v167; // [sp+60h] [bp-A4h]
  int v168; // [sp+70h] [bp-94h] BYREF
  size_t v169; // [sp+74h] [bp-90h]
  int v170; // [sp+78h] [bp-8Ch]
  int v171; // [sp+7Ch] [bp-88h]
  size_t v172; // [sp+80h] [bp-84h]
  int v173; // [sp+84h] [bp-80h]
  size_t v174; // [sp+88h] [bp-7Ch]
  int v175; // [sp+8Ch] [bp-78h]
  size_t v176; // [sp+90h] [bp-74h]
  unsigned __int16 *v177; // [sp+94h] [bp-70h]
  int v178; // [sp+98h] [bp-6Ch]
  void *v179; // [sp+9Ch] [bp-68h]
  unsigned int v180; // [sp+A0h] [bp-64h]
  int v181; // [sp+A4h] [bp-60h]
  size_t v182; // [sp+A8h] [bp-5Ch]
  int v183; // [sp+ACh] [bp-58h]
  int v184; // [sp+B0h] [bp-54h]
  size_t v185; // [sp+B4h] [bp-50h]
  int v186; // [sp+B8h] [bp-4Ch]
  int v187; // [sp+BCh] [bp-48h]
  size_t v188; // [sp+C0h] [bp-44h]
  int v189; // [sp+C4h] [bp-40h]
  int v190; // [sp+C8h] [bp-3Ch]
  void *v191; // [sp+CCh] [bp-38h]
  unsigned int v192; // [sp+D0h] [bp-34h]
  int v193; // [sp+D8h] [bp-2Ch]
  int v194; // [sp+DCh] [bp-28h]
  int v195; // [sp+E0h] [bp-24h]
  int v196; // [sp+E8h] [bp-1Ch]
  size_t v197; // [sp+ECh] [bp-18h]
  int v198; // [sp+F0h] [bp-14h]
  int v199; // [sp+F4h] [bp-10h]
  size_t v200; // [sp+F8h] [bp-Ch]
  int v201; // [sp+FCh] [bp-8h]

  v6 = *a3;
  v7 = (void *)a3[1];
  v8 = a3[2];
  v9 = a2[1];
  if ( !v9 )
  {
    v19 = 0;
    if ( !v7 )
      goto LABEL_63;
    goto LABEL_21;
  }
  v148 = v6;
  v142 = a1;
  for ( i = *a2; ; --i )
  {
    v10 = v9 + 4;
    v11 = *(unsigned __int16 *)(v9 + 270);
    v12 = v9;
    v4 = -1;
    v13 = 12 * v11;
    do
    {
      if ( !v13 )
      {
        v4 = v11;
        goto LABEL_15;
      }
      v14 = *(_DWORD *)(v10 + 8);
      v15 = v8 - v14;
      if ( v8 < v14 )
        v14 = v8;
      v16 = memcmp(v7, *(const void **)(v10 + 4), v14);
      ++v4;
      if ( v16 )
        v15 = v16;
      v17 = v15 < 0;
      v18 = v15 != 0;
      v13 -= 12;
      v10 += 12;
      if ( v17 )
        v18 = -1;
    }
    while ( v18 == 1 );
    if ( !(_BYTE)v18 )
    {
      v19 = v12;
      if ( v148 )
        _rust_dealloc(v7);
      a1 = v142;
LABEL_63:
      v106 = (_DWORD *)(v19 + 12 * v4);
      v107 = *a4;
      v108 = a4[1];
      v109 = v106[35];
      v110 = v106[36];
      v111 = a4[2];
      v168 = v106[34];
      v169 = v109;
      v170 = v110;
      v106[34] = v107;
      v106[35] = v108;
      v106[36] = v111;
      v112 = v168;
      v113 = v169;
      v114 = v170;
      *a1 = 1;
      a1[1] = v112;
      a1[2] = v113;
      a1[3] = v114;
      return 1;
    }
LABEL_15:
    v19 = v12;
    if ( !i )
      break;
    v9 = *(_DWORD *)(v12 + 4 * v4 + 272);
  }
  a1 = v142;
  v6 = v148;
  if ( !v7 )
    goto LABEL_63;
LABEL_21:
  v158 = v6;
  v159 = (int)v7;
  v160 = v8;
  v161 = a2;
  v162 = *a4;
  v163 = a4[1];
  v164 = a4[2];
  if ( v19 )
  {
    v143 = a1;
    v190 = v6;
    v191 = v7;
    v192 = v8;
    v21 = (_WORD *)(v19 + 270);
    v20 = *(unsigned __int16 *)(v19 + 270);
    v22 = a4[1];
    v23 = a4[2];
    v193 = *a4;
    v194 = v22;
    v195 = v23;
    if ( v20 < 0xB )
    {
      v24 = 3 * v4;
      v25 = v4 + 1;
      v26 = (int *)(v19 + 4 + 12 * v4);
      if ( v4 + 1 <= v20 )
      {
        v53 = 3 * v25;
        v54 = 12 * (v20 - v4);
        memmove((void *)(v19 + 4 + 12 * v25), v26, v54);
        *v26 = v158;
        v26[1] = v159;
        v26[2] = v160;
        v168 = v162;
        v169 = v163;
        v170 = v164;
        memmove((void *)(v19 + 136 + 4 * v53), (const void *)(v19 + 136 + 4 * v24), v54);
      }
      else
      {
        *v26 = v6;
        v26[1] = v159;
        v26[2] = v160;
        v168 = v162;
        v169 = v163;
        v170 = v164;
      }
      v55 = (_DWORD *)(v19 + 4 * v24);
      v56 = v143;
      v55 += 34;
      v57 = v169;
      v58 = v170;
      *v55 = v168;
      v55[1] = v57;
      v55[2] = v58;
      *v21 = v20 + 1;
      goto LABEL_36;
    }
    v156 = (_DWORD *)v19;
    alloc::collections::btree::node::splitpoint(&v168, v4);
    v150 = v169;
    v32 = v168;
    v33 = v170;
    v34 = (_DWORD *)_rust_alloc(0x110u);
    if ( !v34 )
      alloc::alloc::handle_alloc_error();
    v153 = v34;
    *v34 = 0;
    v35 = (_WORD *)v34 + 135;
    v36 = (unsigned __int16)*v21;
    v37 = v36 + ~v32;
    *v35 = v37;
    v38 = &v156[3 * v32 + 1];
    v39 = *v38;
    v40 = v38[1];
    v180 = v38[2];
    v178 = v39;
    v179 = (void *)v40;
    v41 = (int)&v156[3 * v32 + 34];
    v42 = *(_DWORD *)(v41 + 4);
    v43 = *(_DWORD *)(v41 + 8);
    v196 = v156[3 * v32 + 34];
    v198 = v43;
    v197 = v42;
    if ( v37 > 0xB )
      core::slice::index::slice_end_index_len_fail(v37, 11, (int)&off_2C9458);
    v44 = v32 + 1;
    if ( v36 - (v32 + 1) != v37 )
      core::panicking::panic((int)aAssertionFaile_6, 40, (int)&off_2C9448);
    v45 = 3 * v44;
    v46 = 12 * v37;
    memcpy(v153 + 1, &v156[3 * v44 + 1], 12 * v37);
    memcpy(v153 + 34, &v156[v45 + 34], v46);
    v168 = v178;
    v171 = v196;
    v172 = v197;
    v173 = v198;
    v47 = (size_t)v179;
    v48 = v180;
    *v21 = v32;
    v169 = v47;
    v170 = v48;
    v196 = v168;
    v197 = v47;
    v198 = v48;
    v199 = v171;
    v200 = v172;
    v201 = v173;
    v49 = v153;
    if ( !v150 )
      v49 = v156;
    v50 = &v49[3 * v33 + 1];
    v51 = *((unsigned __int16 *)v49 + 135);
    v52 = v33 + 1;
    if ( v33 + 1 <= v51 )
    {
      v59 = 3 * v52;
      memmove(&v49[3 * v52 + 1], &v49[3 * v33 + 1], 12 * (v51 - v33));
      *v50 = v158;
      v50[1] = v159;
      v50[2] = v160;
      v168 = v162;
      v169 = v163;
      v170 = v164;
      memmove(&v49[v59 + 34], &v49[3 * v33 + 34], 12 * (v51 - v33));
    }
    else
    {
      *v50 = v158;
      v50[1] = v159;
      v50[2] = v160;
      v168 = v162;
      v169 = v163;
      v170 = v164;
    }
    v60 = &v49[3 * v33 + 34];
    v61 = v169;
    v62 = v170;
    *v60 = v168;
    v60[1] = v61;
    v60[2] = v62;
    *((_WORD *)v49 + 135) = v51 + 1;
    v184 = v196;
    v185 = v197;
    v186 = v198;
    v187 = v199;
    v188 = v200;
    v189 = v201;
    v178 = v196;
    v179 = (void *)v197;
    v180 = v198;
    v181 = v199;
    v182 = v200;
    v183 = v201;
    v63 = v156;
    v64 = *v156;
    if ( !*v156 )
    {
      v67 = (unsigned __int16 *)v153;
      v151 = 0;
LABEL_65:
      v165 = v178;
      v166 = (size_t)v179;
      v167 = v180;
      v169 = (size_t)v63;
      v168 = v151;
      v170 = v178;
      v171 = (int)v179;
      v172 = v180;
      v173 = v181;
      v174 = v182;
      v175 = v183;
      v177 = v67;
      v176 = v151;
      if ( !v161[1] )
        core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2C93E8);
      v115 = *v161;
      v116 = v161[1];
      v117 = _rust_alloc(0x140u);
      if ( !v117 )
        alloc::alloc::handle_alloc_error();
      *(_DWORD *)v117 = 0;
      *v161 = v115 + 1;
      v161[1] = v117;
      *(_WORD *)(v117 + 270) = 0;
      v118 = (_WORD *)(v117 + 270);
      *(_DWORD *)(v117 + 272) = v116;
      *(_DWORD *)v116 = v117;
      *(_WORD *)(v116 + 268) = 0;
      v196 = v173;
      v186 = v167;
      v185 = v166;
      v184 = v165;
      v198 = v175;
      v197 = v174;
      if ( v115 == v151 )
      {
        v119 = (unsigned __int16)*v118;
        if ( v119 <= 0xA )
        {
          *v118 = v119 + 1;
          v120 = (_DWORD *)(v117 + 12 * v119);
          v121 = v173;
          v122 = v175;
          v120[35] = v174;
          v120[36] = v122;
          v120[1] = v165;
          v120[2] = v166;
          v120[3] = v167;
          *(_DWORD *)(v117 + 272 + 4 * (v119 + 1)) = v67;
          *(_DWORD *)v67 = v117;
          v120[34] = v121;
          v67[134] = v119 + 1;
          ++v161[2];
          *v143 = 0;
          return 0;
        }
        v139 = 32;
        v140 = &off_2C9408;
        v141 = aAssertionFaile_0;
      }
      else
      {
        v139 = 48;
        v140 = &off_2C93F8;
        v141 = aAssertionFaile_4;
      }
      core::panicking::panic((int)v141, v139, (int)v140);
    }
    v65 = (unsigned __int16 *)v153;
    v151 = 0;
    v66 = v156;
    while ( 1 )
    {
      v68 = (_DWORD *)v64;
      v69 = *((unsigned __int16 *)v66 + 134);
      v146 = v65;
      v190 = v178;
      v191 = v179;
      v192 = v180;
      v70 = (unsigned __int16 *)(v64 + 270);
      v71 = *(unsigned __int16 *)(v64 + 270);
      n = (_WORD *)(v64 + 270);
      v193 = v181;
      v194 = v182;
      v195 = v183;
      if ( v71 < 0xB )
        break;
      alloc::collections::btree::node::splitpoint(&v168, v69);
      v72 = v168;
      v73 = v169;
      v74 = v170;
      v75 = *v70;
      v76 = (unsigned __int16 *)_rust_alloc(0x140u);
      if ( !v76 )
        alloc::alloc::handle_alloc_error();
      v77 = v76;
      v145 = v75;
      v78 = v76;
      *(_DWORD *)v76 = 0;
      v144 = v73;
      v79 = *v70;
      v154 = v76;
      v80 = v79 + ~v72;
      v78[135] = v80;
      v81 = v78 + 135;
      v82 = &v68[3 * v72 + 1];
      v184 = *v82;
      v185 = v82[1];
      v186 = v82[2];
      v83 = &v68[3 * v72 + 34];
      v196 = *v83;
      v84 = v83[1];
      v198 = v83[2];
      v197 = v84;
      if ( v80 > 0xB )
        core::slice::index::slice_end_index_len_fail(v80, 11, (int)&off_2C9458);
      v85 = v72 + 1;
      v157 = v68;
      if ( v79 - (v72 + 1) != v80 )
        core::panicking::panic((int)aAssertionFaile_6, 40, (int)&off_2C9448);
      v86 = 12 * v80;
      memcpy(v77 + 2, &v68[3 * v85 + 1], 12 * v80);
      memcpy(v77 + 68, &v68[3 * v85 + 34], v86);
      v87 = v197;
      v88 = v196;
      *n = v72;
      v89 = *v81;
      v171 = v88;
      v172 = v87;
      v173 = v198;
      v90 = v89 + 1;
      v168 = v184;
      v169 = v185;
      v170 = v186;
      if ( v89 >= 0xC )
        core::slice::index::slice_end_index_len_fail(v90, 12, (int)&off_2C9468);
      if ( v145 - v72 != v90 )
        core::panicking::panic((int)aAssertionFaile_6, 40, (int)&off_2C9448);
      ++v151;
      memcpy(v77 + 136, &v68[v85 + 68], 4 * (v145 - v72));
      for ( j = 0; j <= v89; ++j )
      {
        v92 = *(_DWORD *)&v77[2 * j + 136];
        *(_DWORD *)v92 = v154;
        *(_WORD *)(v92 + 268) = j;
        if ( j >= v89 )
          break;
      }
      v196 = v168;
      v197 = v169;
      v198 = v170;
      v199 = v171;
      v200 = v172;
      v201 = v173;
      if ( !v144 )
        v77 = (unsigned __int16 *)v68;
      v93 = (int *)&v77[6 * v74 + 2];
      v94 = v77[135];
      v95 = v74 + 1;
      if ( v74 + 1 <= v94 )
      {
        memmove(&v77[6 * v95 + 2], &v77[6 * v74 + 2], 12 * (v94 - v74));
        v98 = (int)v179;
        v99 = v180;
        *v93 = v178;
        v93[1] = v98;
        v93[2] = v99;
        v168 = v181;
        v169 = v182;
        v170 = v183;
        memmove(&v77[6 * v95 + 68], &v77[6 * v74 + 68], 12 * (v94 - v74));
      }
      else
      {
        v96 = (int)v179;
        v97 = v180;
        *v93 = v178;
        v93[1] = v96;
        v93[2] = v97;
        v168 = v181;
        v169 = v182;
        v170 = v183;
      }
      v100 = &v77[6 * v74 + 68];
      v101 = v77 + 136;
      v102 = v169;
      v103 = v170;
      *(_DWORD *)v100 = v168;
      *((_DWORD *)v100 + 1) = v102;
      *((_DWORD *)v100 + 2) = v103;
      if ( v74 + 2 < v94 + 2 )
        memmove(&v101[2 * v74 + 4], &v101[2 * v95], 4 * (v94 - v74));
      *(_DWORD *)&v101[2 * v95] = v146;
      v77[135] = v94 + 1;
      if ( v95 < v94 + 2 )
      {
        do
        {
          v104 = &v77[2 * v74++];
          v105 = *((_DWORD *)v104 + 69);
          *(_DWORD *)v105 = v77;
          *(_WORD *)(v105 + 268) = v74;
        }
        while ( v94 + 1 != v74 );
      }
      v178 = v196;
      v179 = (void *)v197;
      v180 = v198;
      v181 = v199;
      v182 = v200;
      v183 = v201;
      v63 = v157;
      v67 = v154;
      v64 = *v157;
      v66 = v157;
      v65 = v154;
      if ( !*v157 )
        goto LABEL_65;
    }
    v123 = v69 + 1;
    v124 = v71 + 1;
    v125 = (int *)(v64 + 4 + 12 * v69);
    if ( v71 <= v69 )
    {
      v131 = (int)v179;
      v132 = v180;
      v133 = v181;
      v134 = v182;
      v135 = v183;
      *v125 = v178;
      v125[1] = v131;
      v125[2] = v132;
      v136 = (int *)(v64 + 12 * v69 + 136);
      *v136 = v133;
      v136[1] = v134;
      v136[2] = v135;
    }
    else
    {
      memmove((void *)(v64 + 4 + 12 * v123), (const void *)(v64 + 4 + 12 * v69), 12 * (v71 - v69));
      v126 = (int)v179;
      v127 = v180;
      *v125 = v178;
      v125[1] = v126;
      v125[2] = v127;
      v128 = &v68[3 * v69 + 34];
      memmove(&v68[3 * v123 + 34], v128, 12 * (v71 - v69));
      v129 = v182;
      v130 = v183;
      *v128 = v181;
      v128[1] = v129;
      v128[2] = v130;
      memmove(&v68[v69 + 70], &v68[v123 + 68], 4 * (v71 - v69));
    }
    v56 = v143;
    *n = v124;
    v68[v123 + 68] = v146;
    if ( v123 < v71 + 2 )
    {
      do
      {
        v137 = &v68[v69++];
        v138 = v137[69];
        *(_DWORD *)v138 = v68;
        *(_WORD *)(v138 + 268) = v69;
      }
      while ( v124 != v69 );
    }
LABEL_36:
    ++v161[2];
    *v56 = 0;
    return 0;
  }
  else
  {
    v27 = _rust_alloc(0x110u);
    if ( !v27 )
      alloc::alloc::handle_alloc_error();
    *(_WORD *)(v27 + 270) = 1;
    v28 = *a4;
    v29 = a4[1];
    v30 = a4[2];
    *a2 = 0;
    a2[1] = v27;
    a2[2] = 1;
    *(_DWORD *)v27 = 0;
    *(_DWORD *)(v27 + 4) = v158;
    *(_DWORD *)(v27 + 8) = v7;
    *(_DWORD *)(v27 + 12) = v160;
    *(_DWORD *)(v27 + 136) = v28;
    *(_DWORD *)(v27 + 140) = v29;
    *(_DWORD *)(v27 + 144) = v30;
    *a1 = 0;
    return 0;
  }
}
