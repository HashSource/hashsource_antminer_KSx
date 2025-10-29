int __fastcall sub_1B37D4(_DWORD *a1, int *a2, size_t *a3, size_t *a4)
{
  int v4; // r6
  size_t v6; // r0
  void *v7; // r4
  size_t v8; // r7
  int v9; // r2
  int v10; // r10
  int v11; // r5
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
  size_t v22; // r2
  size_t v23; // r3
  int v24; // r9
  int v25; // r1
  size_t *v26; // r4
  int v27; // r0
  size_t v28; // r3
  size_t v29; // r7
  size_t v30; // r6
  size_t v32; // r9
  size_t v33; // r8
  _DWORD *v34; // r0
  _WORD *v35; // r1
  int v36; // r2
  unsigned int v37; // r0
  size_t *v38; // r1
  size_t v39; // r5
  void *v40; // r4
  int v41; // r1
  size_t v42; // r4
  size_t v43; // r1
  size_t v44; // r3
  int v45; // r5
  size_t v46; // r4
  size_t v47; // r6
  size_t v48; // r5
  _DWORD *v49; // r5
  size_t *v50; // r4
  unsigned int v51; // r11
  size_t v52; // r1
  int v53; // r11
  size_t v54; // r6
  size_t *v55; // r3
  _DWORD *v56; // r9
  size_t v57; // r1
  size_t v58; // r2
  int v59; // r7
  size_t *v60; // r3
  size_t v61; // r1
  size_t v62; // r2
  _DWORD *v63; // r12
  int v64; // r0
  unsigned __int16 *v65; // r9
  _DWORD *v66; // r1
  unsigned __int16 *v67; // r11
  _DWORD *v68; // r10
  unsigned int v69; // r4
  unsigned __int16 *v70; // r6
  unsigned int v71; // r11
  size_t v72; // r11
  size_t v73; // r4
  size_t v74; // r8
  int v75; // r5
  unsigned __int16 *v76; // r0
  unsigned __int16 *v77; // r7
  unsigned __int16 *v78; // r5
  int v79; // r1
  unsigned int v80; // r0
  unsigned __int16 *v81; // r5
  size_t *v82; // r2
  size_t *v83; // r2
  size_t v84; // r3
  size_t v85; // r9
  size_t v86; // r4
  size_t v87; // r1
  size_t v88; // r12
  unsigned int v89; // r5
  unsigned int j; // r2
  int v91; // r0
  unsigned __int16 *v92; // r4
  unsigned int v93; // r5
  unsigned int v94; // r10
  void *v95; // r1
  size_t v96; // r2
  void *v97; // r1
  size_t v98; // r2
  unsigned __int16 *v99; // r3
  unsigned __int16 *v100; // r6
  size_t v101; // r1
  size_t v102; // r2
  unsigned __int16 *v103; // r1
  int v104; // r1
  _DWORD *v105; // r0
  size_t v106; // r7
  size_t v107; // r6
  size_t v108; // r2
  size_t v109; // r3
  size_t v110; // r5
  size_t v111; // r1
  size_t v112; // r2
  size_t v113; // r3
  int v114; // r9
  int v115; // r6
  int v116; // r0
  _WORD *v117; // r2
  unsigned int v118; // r3
  _DWORD *v119; // r2
  size_t v120; // r12
  size_t v121; // r7
  unsigned int v122; // r6
  unsigned int v123; // r7
  size_t *v124; // r5
  size_t v125; // r1
  size_t v126; // r2
  size_t *v127; // r5
  size_t v128; // r1
  size_t v129; // r2
  size_t v130; // r1
  size_t v131; // r2
  size_t v132; // r8
  size_t v133; // r12
  size_t v134; // lr
  size_t *v135; // r0
  _DWORD *v136; // r0
  int v137; // r0
  int v138; // r1
  char **v139; // r2
  const char *v140; // r0
  _DWORD *v141; // [sp+8h] [bp-FCh]
  _DWORD *v142; // [sp+8h] [bp-FCh]
  size_t v143; // [sp+Ch] [bp-F8h]
  int v144; // [sp+10h] [bp-F4h]
  unsigned __int16 *v145; // [sp+14h] [bp-F0h]
  _WORD *n; // [sp+18h] [bp-ECh]
  size_t v147; // [sp+1Ch] [bp-E8h]
  size_t v149; // [sp+20h] [bp-E4h]
  size_t v150; // [sp+20h] [bp-E4h]
  _DWORD *v152; // [sp+24h] [bp-E0h]
  unsigned __int16 *v153; // [sp+24h] [bp-E0h]
  int i; // [sp+28h] [bp-DCh]
  _DWORD *v155; // [sp+28h] [bp-DCh]
  _DWORD *v156; // [sp+28h] [bp-DCh]
  size_t v157; // [sp+38h] [bp-CCh]
  size_t v158; // [sp+3Ch] [bp-C8h]
  size_t v159; // [sp+40h] [bp-C4h]
  int *v160; // [sp+44h] [bp-C0h]
  size_t v161; // [sp+48h] [bp-BCh]
  size_t v162; // [sp+4Ch] [bp-B8h]
  size_t v163; // [sp+50h] [bp-B4h]
  size_t v164; // [sp+58h] [bp-ACh]
  size_t v165; // [sp+5Ch] [bp-A8h]
  size_t v166; // [sp+60h] [bp-A4h]
  size_t v167; // [sp+70h] [bp-94h] BYREF
  size_t v168; // [sp+74h] [bp-90h]
  size_t v169; // [sp+78h] [bp-8Ch]
  size_t v170; // [sp+7Ch] [bp-88h]
  size_t v171; // [sp+80h] [bp-84h]
  size_t v172; // [sp+84h] [bp-80h]
  size_t v173; // [sp+88h] [bp-7Ch]
  size_t v174; // [sp+8Ch] [bp-78h]
  size_t v175; // [sp+90h] [bp-74h]
  unsigned __int16 *v176; // [sp+94h] [bp-70h]
  size_t v177; // [sp+98h] [bp-6Ch]
  void *v178; // [sp+9Ch] [bp-68h]
  size_t v179; // [sp+A0h] [bp-64h]
  size_t v180; // [sp+A4h] [bp-60h]
  size_t v181; // [sp+A8h] [bp-5Ch]
  size_t v182; // [sp+ACh] [bp-58h]
  size_t v183; // [sp+B0h] [bp-54h]
  size_t v184; // [sp+B4h] [bp-50h]
  size_t v185; // [sp+B8h] [bp-4Ch]
  size_t v186; // [sp+BCh] [bp-48h]
  size_t v187; // [sp+C0h] [bp-44h]
  size_t v188; // [sp+C4h] [bp-40h]
  size_t v189; // [sp+C8h] [bp-3Ch]
  void *v190; // [sp+CCh] [bp-38h]
  size_t v191; // [sp+D0h] [bp-34h]
  size_t v192; // [sp+D8h] [bp-2Ch]
  size_t v193; // [sp+DCh] [bp-28h]
  size_t v194; // [sp+E0h] [bp-24h]
  size_t v195; // [sp+E8h] [bp-1Ch]
  size_t v196; // [sp+ECh] [bp-18h]
  size_t v197; // [sp+F0h] [bp-14h]
  size_t v198; // [sp+F4h] [bp-10h]
  size_t v199; // [sp+F8h] [bp-Ch]
  size_t v200; // [sp+FCh] [bp-8h]

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
  v147 = v6;
  v141 = a1;
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
      if ( v147 )
        _rust_dealloc(v7);
      a1 = v141;
LABEL_63:
      v105 = (_DWORD *)(v19 + 12 * v4);
      v106 = *a4;
      v107 = a4[1];
      v108 = v105[35];
      v109 = v105[36];
      v110 = a4[2];
      v167 = v105[34];
      v168 = v108;
      v169 = v109;
      v105[34] = v106;
      v105[35] = v107;
      v105[36] = v110;
      v111 = v167;
      v112 = v168;
      v113 = v169;
      *a1 = 1;
      a1[1] = v111;
      a1[2] = v112;
      a1[3] = v113;
      return 1;
    }
LABEL_15:
    v19 = v12;
    if ( !i )
      break;
    v9 = *(_DWORD *)(v12 + 4 * v4 + 272);
  }
  a1 = v141;
  v6 = v147;
  if ( !v7 )
    goto LABEL_63;
LABEL_21:
  v157 = v6;
  v158 = (size_t)v7;
  v159 = v8;
  v160 = a2;
  v161 = *a4;
  v162 = a4[1];
  v163 = a4[2];
  if ( v19 )
  {
    v142 = a1;
    v189 = v6;
    v190 = v7;
    v191 = v8;
    v21 = (_WORD *)(v19 + 270);
    v20 = *(unsigned __int16 *)(v19 + 270);
    v22 = a4[1];
    v23 = a4[2];
    v192 = *a4;
    v193 = v22;
    v194 = v23;
    if ( v20 < 0xB )
    {
      v24 = 3 * v4;
      v25 = v4 + 1;
      v26 = (size_t *)(v19 + 4 + 12 * v4);
      if ( v4 + 1 <= v20 )
      {
        v53 = 3 * v25;
        v54 = 12 * (v20 - v4);
        memmove((void *)(v19 + 4 + 12 * v25), v26, v54);
        *v26 = v157;
        v26[1] = v158;
        v26[2] = v159;
        v167 = v161;
        v168 = v162;
        v169 = v163;
        memmove((void *)(v19 + 136 + 4 * v53), (const void *)(v19 + 136 + 4 * v24), v54);
      }
      else
      {
        *v26 = v6;
        v26[1] = v158;
        v26[2] = v159;
        v167 = v161;
        v168 = v162;
        v169 = v163;
      }
      v55 = (size_t *)(v19 + 4 * v24);
      v56 = v142;
      v55 += 34;
      v57 = v168;
      v58 = v169;
      *v55 = v167;
      v55[1] = v57;
      v55[2] = v58;
      *v21 = v20 + 1;
      goto LABEL_36;
    }
    v155 = (_DWORD *)v19;
    alloc::collections::btree::node::splitpoint(&v167, v4);
    v149 = v168;
    v32 = v167;
    v33 = v169;
    v34 = (_DWORD *)_rust_alloc(0x110u);
    if ( !v34 )
      alloc::alloc::handle_alloc_error();
    v152 = v34;
    *v34 = 0;
    v35 = (_WORD *)v34 + 135;
    v36 = (unsigned __int16)*v21;
    v37 = v36 + ~v32;
    *v35 = v37;
    v38 = &v155[3 * v32 + 1];
    v39 = *v38;
    v40 = (void *)v38[1];
    v179 = v38[2];
    v177 = v39;
    v178 = v40;
    v41 = (int)&v155[3 * v32 + 34];
    v42 = *(_DWORD *)(v41 + 4);
    v43 = *(_DWORD *)(v41 + 8);
    v195 = v155[3 * v32 + 34];
    v197 = v43;
    v196 = v42;
    if ( v37 > 0xB )
      core::slice::index::slice_end_index_len_fail();
    v44 = v32 + 1;
    if ( v36 - (v32 + 1) != v37 )
      core::panicking::panic((int)aAssertionFaile_6, 40, (int)&off_2DF448);
    v45 = 3 * v44;
    v46 = 12 * v37;
    memcpy(v152 + 1, &v155[3 * v44 + 1], 12 * v37);
    memcpy(v152 + 34, &v155[v45 + 34], v46);
    v167 = v177;
    v170 = v195;
    v171 = v196;
    v172 = v197;
    v47 = (size_t)v178;
    v48 = v179;
    *v21 = v32;
    v168 = v47;
    v169 = v48;
    v195 = v167;
    v196 = v47;
    v197 = v48;
    v198 = v170;
    v199 = v171;
    v200 = v172;
    v49 = v152;
    if ( !v149 )
      v49 = v155;
    v50 = &v49[3 * v33 + 1];
    v51 = *((unsigned __int16 *)v49 + 135);
    v52 = v33 + 1;
    if ( v33 + 1 <= v51 )
    {
      v59 = 3 * v52;
      memmove(&v49[3 * v52 + 1], &v49[3 * v33 + 1], 12 * (v51 - v33));
      *v50 = v157;
      v50[1] = v158;
      v50[2] = v159;
      v167 = v161;
      v168 = v162;
      v169 = v163;
      memmove(&v49[v59 + 34], &v49[3 * v33 + 34], 12 * (v51 - v33));
    }
    else
    {
      *v50 = v157;
      v50[1] = v158;
      v50[2] = v159;
      v167 = v161;
      v168 = v162;
      v169 = v163;
    }
    v60 = &v49[3 * v33 + 34];
    v61 = v168;
    v62 = v169;
    *v60 = v167;
    v60[1] = v61;
    v60[2] = v62;
    *((_WORD *)v49 + 135) = v51 + 1;
    v183 = v195;
    v184 = v196;
    v185 = v197;
    v186 = v198;
    v187 = v199;
    v188 = v200;
    v177 = v195;
    v178 = (void *)v196;
    v179 = v197;
    v180 = v198;
    v181 = v199;
    v182 = v200;
    v63 = v155;
    v64 = *v155;
    if ( !*v155 )
    {
      v67 = (unsigned __int16 *)v152;
      v150 = 0;
LABEL_65:
      v164 = v177;
      v165 = (size_t)v178;
      v166 = v179;
      v168 = (size_t)v63;
      v167 = v150;
      v169 = v177;
      v170 = (size_t)v178;
      v171 = v179;
      v172 = v180;
      v173 = v181;
      v174 = v182;
      v176 = v67;
      v175 = v150;
      if ( !v160[1] )
        core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2DF3E8);
      v114 = *v160;
      v115 = v160[1];
      v116 = _rust_alloc(0x140u);
      if ( !v116 )
        alloc::alloc::handle_alloc_error();
      *(_DWORD *)v116 = 0;
      *v160 = v114 + 1;
      v160[1] = v116;
      *(_WORD *)(v116 + 270) = 0;
      v117 = (_WORD *)(v116 + 270);
      *(_DWORD *)(v116 + 272) = v115;
      *(_DWORD *)v115 = v116;
      *(_WORD *)(v115 + 268) = 0;
      v195 = v172;
      v185 = v166;
      v184 = v165;
      v183 = v164;
      v197 = v174;
      v196 = v173;
      if ( v114 == v150 )
      {
        v118 = (unsigned __int16)*v117;
        if ( v118 <= 0xA )
        {
          *v117 = v118 + 1;
          v119 = (_DWORD *)(v116 + 12 * v118);
          v120 = v172;
          v121 = v174;
          v119[35] = v173;
          v119[36] = v121;
          v119[1] = v164;
          v119[2] = v165;
          v119[3] = v166;
          *(_DWORD *)(v116 + 272 + 4 * (v118 + 1)) = v67;
          *(_DWORD *)v67 = v116;
          v119[34] = v120;
          v67[134] = v118 + 1;
          ++v160[2];
          *v142 = 0;
          return 0;
        }
        v138 = 32;
        v139 = &off_2DF408;
        v140 = aAssertionFaile_0;
      }
      else
      {
        v138 = 48;
        v139 = &off_2DF3F8;
        v140 = aAssertionFaile_4;
      }
      core::panicking::panic((int)v140, v138, (int)v139);
    }
    v65 = (unsigned __int16 *)v152;
    v150 = 0;
    v66 = v155;
    while ( 1 )
    {
      v68 = (_DWORD *)v64;
      v69 = *((unsigned __int16 *)v66 + 134);
      v145 = v65;
      v189 = v177;
      v190 = v178;
      v191 = v179;
      v70 = (unsigned __int16 *)(v64 + 270);
      v71 = *(unsigned __int16 *)(v64 + 270);
      n = (_WORD *)(v64 + 270);
      v192 = v180;
      v193 = v181;
      v194 = v182;
      if ( v71 < 0xB )
        break;
      alloc::collections::btree::node::splitpoint(&v167, v69);
      v72 = v167;
      v73 = v168;
      v74 = v169;
      v75 = *v70;
      v76 = (unsigned __int16 *)_rust_alloc(0x140u);
      if ( !v76 )
        alloc::alloc::handle_alloc_error();
      v77 = v76;
      v144 = v75;
      v78 = v76;
      *(_DWORD *)v76 = 0;
      v143 = v73;
      v79 = *v70;
      v153 = v76;
      v80 = v79 + ~v72;
      v78[135] = v80;
      v81 = v78 + 135;
      v82 = &v68[3 * v72 + 1];
      v183 = *v82;
      v184 = v82[1];
      v185 = v82[2];
      v83 = &v68[3 * v72 + 34];
      v195 = *v83;
      v84 = v83[1];
      v197 = v83[2];
      v196 = v84;
      if ( v80 > 0xB )
        core::slice::index::slice_end_index_len_fail();
      v85 = v72 + 1;
      v156 = v68;
      if ( v79 - (v72 + 1) != v80 )
        core::panicking::panic((int)aAssertionFaile_6, 40, (int)&off_2DF448);
      v86 = 12 * v80;
      memcpy(v77 + 2, &v68[3 * v85 + 1], 12 * v80);
      memcpy(v77 + 68, &v68[3 * v85 + 34], v86);
      v87 = v196;
      v88 = v195;
      *n = v72;
      v89 = *v81;
      v170 = v88;
      v171 = v87;
      v172 = v197;
      v167 = v183;
      v168 = v184;
      v169 = v185;
      if ( v89 >= 0xC )
        core::slice::index::slice_end_index_len_fail();
      if ( v144 - v72 != v89 + 1 )
        core::panicking::panic((int)aAssertionFaile_6, 40, (int)&off_2DF448);
      ++v150;
      memcpy(v77 + 136, &v68[v85 + 68], 4 * (v144 - v72));
      for ( j = 0; j <= v89; ++j )
      {
        v91 = *(_DWORD *)&v77[2 * j + 136];
        *(_DWORD *)v91 = v153;
        *(_WORD *)(v91 + 268) = j;
        if ( j >= v89 )
          break;
      }
      v195 = v167;
      v196 = v168;
      v197 = v169;
      v198 = v170;
      v199 = v171;
      v200 = v172;
      if ( !v143 )
        v77 = (unsigned __int16 *)v68;
      v92 = &v77[6 * v74 + 2];
      v93 = v77[135];
      v94 = v74 + 1;
      if ( v74 + 1 <= v93 )
      {
        memmove(&v77[6 * v94 + 2], &v77[6 * v74 + 2], 12 * (v93 - v74));
        v97 = v178;
        v98 = v179;
        *(_DWORD *)v92 = v177;
        *((_DWORD *)v92 + 1) = v97;
        *((_DWORD *)v92 + 2) = v98;
        v167 = v180;
        v168 = v181;
        v169 = v182;
        memmove(&v77[6 * v94 + 68], &v77[6 * v74 + 68], 12 * (v93 - v74));
      }
      else
      {
        v95 = v178;
        v96 = v179;
        *(_DWORD *)v92 = v177;
        *((_DWORD *)v92 + 1) = v95;
        *((_DWORD *)v92 + 2) = v96;
        v167 = v180;
        v168 = v181;
        v169 = v182;
      }
      v99 = &v77[6 * v74 + 68];
      v100 = v77 + 136;
      v101 = v168;
      v102 = v169;
      *(_DWORD *)v99 = v167;
      *((_DWORD *)v99 + 1) = v101;
      *((_DWORD *)v99 + 2) = v102;
      if ( v74 + 2 < v93 + 2 )
        memmove(&v100[2 * v74 + 4], &v100[2 * v94], 4 * (v93 - v74));
      *(_DWORD *)&v100[2 * v94] = v145;
      v77[135] = v93 + 1;
      if ( v94 < v93 + 2 )
      {
        do
        {
          v103 = &v77[2 * v74++];
          v104 = *((_DWORD *)v103 + 69);
          *(_DWORD *)v104 = v77;
          *(_WORD *)(v104 + 268) = v74;
        }
        while ( v93 + 1 != v74 );
      }
      v177 = v195;
      v178 = (void *)v196;
      v179 = v197;
      v180 = v198;
      v181 = v199;
      v182 = v200;
      v63 = v156;
      v67 = v153;
      v64 = *v156;
      v66 = v156;
      v65 = v153;
      if ( !*v156 )
        goto LABEL_65;
    }
    v122 = v69 + 1;
    v123 = v71 + 1;
    v124 = (size_t *)(v64 + 4 + 12 * v69);
    if ( v71 <= v69 )
    {
      v130 = (size_t)v178;
      v131 = v179;
      v132 = v180;
      v133 = v181;
      v134 = v182;
      *v124 = v177;
      v124[1] = v130;
      v124[2] = v131;
      v135 = (size_t *)(v64 + 12 * v69 + 136);
      *v135 = v132;
      v135[1] = v133;
      v135[2] = v134;
    }
    else
    {
      memmove((void *)(v64 + 4 + 12 * v122), (const void *)(v64 + 4 + 12 * v69), 12 * (v71 - v69));
      v125 = (size_t)v178;
      v126 = v179;
      *v124 = v177;
      v124[1] = v125;
      v124[2] = v126;
      v127 = &v68[3 * v69 + 34];
      memmove(&v68[3 * v122 + 34], v127, 12 * (v71 - v69));
      v128 = v181;
      v129 = v182;
      *v127 = v180;
      v127[1] = v128;
      v127[2] = v129;
      memmove(&v68[v69 + 70], &v68[v122 + 68], 4 * (v71 - v69));
    }
    v56 = v142;
    *n = v123;
    v68[v122 + 68] = v145;
    if ( v122 < v71 + 2 )
    {
      do
      {
        v136 = &v68[v69++];
        v137 = v136[69];
        *(_DWORD *)v137 = v68;
        *(_WORD *)(v137 + 268) = v69;
      }
      while ( v123 != v69 );
    }
LABEL_36:
    ++v160[2];
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
    *(_DWORD *)(v27 + 4) = v157;
    *(_DWORD *)(v27 + 8) = v7;
    *(_DWORD *)(v27 + 12) = v159;
    *(_DWORD *)(v27 + 136) = v28;
    *(_DWORD *)(v27 + 140) = v29;
    *(_DWORD *)(v27 + 144) = v30;
    *a1 = 0;
    return 0;
  }
}
