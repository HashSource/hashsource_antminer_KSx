size_t __fastcall sub_1B1BE8(size_t *a1, _DWORD *a2, size_t *a3, size_t *a4)
{
  int v4; // r7
  _DWORD *v5; // r8
  int v6; // r1
  size_t v7; // r4
  size_t *v9; // r6
  size_t v10; // r0
  void *v11; // r5
  int v12; // r10
  int v13; // r9
  int v14; // r6
  int v15; // r8
  size_t v16; // r2
  int v17; // r11
  int v18; // r0
  bool v19; // nf
  int v20; // r11
  int v21; // r11
  unsigned int v22; // r5
  _WORD *v23; // r8
  unsigned __int16 *v24; // r2
  size_t v25; // r3
  int v26; // r10
  int v27; // r1
  size_t *v28; // r4
  int v29; // r0
  size_t v30; // r3
  size_t v31; // r7
  size_t v32; // r6
  size_t result; // r0
  size_t v34; // r5
  unsigned __int16 *v35; // r9
  unsigned __int16 *v36; // r0
  _WORD *v37; // r1
  int v38; // r2
  unsigned int v39; // r0
  int v40; // r1
  unsigned __int16 *v41; // r6
  size_t v42; // r1
  int v43; // r1
  unsigned __int16 *v44; // r6
  size_t v45; // r1
  size_t v46; // r3
  unsigned __int16 *v47; // r10
  int v48; // r6
  size_t v49; // r4
  unsigned __int16 *v50; // r7
  size_t v51; // r6
  _DWORD *v52; // r6
  unsigned int v53; // r11
  size_t v54; // r1
  size_t *v55; // r4
  int v56; // r9
  size_t v57; // r7
  void *v58; // r0
  size_t *v59; // r3
  unsigned __int16 *v60; // r1
  size_t v61; // r2
  int v62; // r10
  _DWORD *v63; // r0
  size_t *v64; // r3
  unsigned __int16 *v65; // r1
  size_t v66; // r2
  unsigned __int16 *v67; // r12
  unsigned __int16 *v68; // r0
  unsigned __int16 *v69; // r7
  unsigned __int16 *v70; // r1
  unsigned __int16 *v71; // r11
  unsigned int v72; // r5
  unsigned __int16 *v73; // r4
  unsigned int v74; // r6
  size_t v75; // r9
  size_t v76; // r8
  unsigned __int16 *v77; // r0
  unsigned __int16 *v78; // r6
  unsigned __int16 *v79; // r7
  int v80; // r1
  unsigned int v81; // r0
  unsigned __int16 *v82; // r7
  size_t *v83; // r2
  unsigned __int16 *v84; // r5
  unsigned __int16 *v85; // r2
  unsigned __int16 *v86; // r3
  size_t v87; // r2
  size_t v88; // r5
  size_t v89; // r4
  size_t v90; // r12
  unsigned int v91; // r7
  unsigned int i; // r2
  int v93; // r0
  unsigned __int16 *v94; // r4
  unsigned int v95; // r5
  unsigned int v96; // r9
  unsigned __int16 *v97; // r1
  size_t v98; // r2
  unsigned __int16 *v99; // r1
  size_t v100; // r2
  unsigned __int16 *v101; // r3
  unsigned __int16 *v102; // r7
  unsigned __int16 *v103; // r1
  size_t v104; // r2
  unsigned __int16 *v105; // r1
  int v106; // r1
  int v107; // r0
  size_t v108; // r7
  _DWORD *v109; // r0
  size_t v110; // r4
  size_t v111; // r5
  unsigned __int16 *v112; // r2
  size_t v113; // r3
  unsigned __int16 *v114; // r1
  size_t v115; // r2
  int v116; // r9
  int v117; // r7
  int v118; // r0
  _WORD *v119; // r2
  unsigned int v120; // r3
  _DWORD *v121; // r2
  size_t v122; // r12
  size_t v123; // r7
  unsigned int v124; // r9
  unsigned int v125; // r7
  size_t *v126; // r4
  size_t v127; // r1
  size_t v128; // r2
  unsigned __int16 *v129; // r4
  unsigned __int16 *v130; // r1
  size_t v131; // r2
  size_t v132; // r1
  size_t v133; // r2
  size_t v134; // r8
  unsigned __int16 *v135; // r12
  size_t v136; // lr
  unsigned __int16 *v137; // r0
  unsigned __int16 *v138; // r0
  int v139; // r0
  int v140; // r1
  char **v141; // r2
  const char *v142; // r0
  size_t *v143; // [sp+10h] [bp-FCh]
  size_t *v144; // [sp+10h] [bp-FCh]
  size_t *v145; // [sp+10h] [bp-FCh]
  unsigned __int16 *v146; // [sp+14h] [bp-F8h]
  int v147; // [sp+18h] [bp-F4h]
  unsigned __int16 *v148; // [sp+1Ch] [bp-F0h]
  _WORD *n; // [sp+20h] [bp-ECh]
  _DWORD *v150; // [sp+24h] [bp-E8h]
  size_t v151; // [sp+28h] [bp-E4h]
  size_t v152; // [sp+28h] [bp-E4h]
  size_t v153; // [sp+28h] [bp-E4h]
  unsigned __int16 *v155; // [sp+2Ch] [bp-E0h]
  unsigned __int16 *v156; // [sp+2Ch] [bp-E0h]
  int v157; // [sp+30h] [bp-DCh]
  unsigned __int16 *v158; // [sp+30h] [bp-DCh]
  size_t v159; // [sp+40h] [bp-CCh]
  size_t v160; // [sp+44h] [bp-C8h]
  size_t v161; // [sp+48h] [bp-C4h]
  int *v162; // [sp+4Ch] [bp-C0h]
  size_t v163; // [sp+50h] [bp-BCh]
  unsigned __int16 *v164; // [sp+54h] [bp-B8h]
  size_t v165; // [sp+58h] [bp-B4h]
  size_t v166; // [sp+60h] [bp-ACh]
  unsigned __int16 *v167; // [sp+64h] [bp-A8h]
  size_t v168; // [sp+68h] [bp-A4h]
  size_t v169; // [sp+78h] [bp-94h] BYREF
  unsigned __int16 *v170; // [sp+7Ch] [bp-90h]
  size_t v171; // [sp+80h] [bp-8Ch]
  size_t v172; // [sp+84h] [bp-88h]
  unsigned __int16 *v173; // [sp+88h] [bp-84h]
  size_t v174; // [sp+8Ch] [bp-80h]
  unsigned __int16 *v175; // [sp+90h] [bp-7Ch]
  size_t v176; // [sp+94h] [bp-78h]
  size_t v177; // [sp+98h] [bp-74h]
  unsigned __int16 *v178; // [sp+9Ch] [bp-70h]
  size_t v179; // [sp+A0h] [bp-6Ch]
  unsigned __int16 *v180; // [sp+A4h] [bp-68h]
  size_t v181; // [sp+A8h] [bp-64h]
  size_t v182; // [sp+ACh] [bp-60h]
  unsigned __int16 *v183; // [sp+B0h] [bp-5Ch]
  size_t v184; // [sp+B4h] [bp-58h]
  size_t v185; // [sp+B8h] [bp-54h]
  unsigned __int16 *v186; // [sp+BCh] [bp-50h]
  size_t v187; // [sp+C0h] [bp-4Ch]
  size_t v188; // [sp+C4h] [bp-48h]
  unsigned __int16 *v189; // [sp+C8h] [bp-44h]
  size_t v190; // [sp+CCh] [bp-40h]
  size_t v191; // [sp+D0h] [bp-3Ch]
  unsigned __int16 *v192; // [sp+D4h] [bp-38h]
  size_t v193; // [sp+D8h] [bp-34h]
  size_t v194; // [sp+E0h] [bp-2Ch]
  unsigned __int16 *v195; // [sp+E4h] [bp-28h]
  size_t v196; // [sp+E8h] [bp-24h]
  size_t v197; // [sp+F0h] [bp-1Ch]
  unsigned __int16 *v198; // [sp+F4h] [bp-18h]
  size_t v199; // [sp+F8h] [bp-14h]
  size_t v200; // [sp+FCh] [bp-10h]
  unsigned __int16 *v201; // [sp+100h] [bp-Ch]
  size_t v202; // [sp+104h] [bp-8h]

  v5 = a2;
  v6 = a2[1];
  v7 = a3[2];
  v9 = a4;
  v10 = *a3;
  v11 = (void *)a3[1];
  if ( !v6 )
  {
    v21 = 0;
    if ( !v11 )
      goto LABEL_62;
    goto LABEL_21;
  }
  v12 = *v5;
  v151 = *a3;
  v143 = a1;
  v150 = v5;
  while ( 1 )
  {
    v13 = v6 + 4;
    v14 = *(unsigned __int16 *)(v6 + 270);
    v4 = -1;
    v157 = v6;
    v15 = 12 * v14;
    do
    {
      if ( !v15 )
      {
        v4 = v14;
        goto LABEL_15;
      }
      v16 = *(_DWORD *)(v13 + 8);
      v17 = v7 - v16;
      if ( v7 < v16 )
        v16 = v7;
      v18 = memcmp(v11, *(const void **)(v13 + 4), v16);
      ++v4;
      if ( v18 )
        v17 = v18;
      v19 = v17 < 0;
      v20 = v17 != 0;
      v15 -= 12;
      v13 += 12;
      if ( v19 )
        v20 = -1;
    }
    while ( v20 == 1 );
    if ( !(_BYTE)v20 )
    {
      a1 = v143;
      if ( v151 )
        _rust_dealloc(v11);
      v21 = v157;
      v9 = a4;
LABEL_62:
      v107 = 3 * v4;
      v108 = *v9;
      v109 = (_DWORD *)(v21 + 4 * v107);
      v110 = v9[1];
      v111 = v9[2];
      v112 = (unsigned __int16 *)v109[35];
      v113 = v109[36];
      v169 = v109[34];
      v170 = v112;
      v171 = v113;
      v109[34] = v108;
      v109[35] = v110;
      v109[36] = v111;
      result = v169;
      v114 = v170;
      v115 = v171;
      *a1 = v169;
      a1[1] = (size_t)v114;
      a1[2] = v115;
      return result;
    }
LABEL_15:
    v21 = v157;
    if ( !v12 )
      break;
    --v12;
    v6 = *(_DWORD *)(v157 + 4 * v4 + 272);
  }
  a1 = v143;
  v9 = a4;
  v5 = v150;
  v10 = v151;
  if ( !v11 )
    goto LABEL_62;
LABEL_21:
  v159 = v10;
  v161 = v7;
  v163 = *v9;
  v164 = (unsigned __int16 *)v9[1];
  v165 = v9[2];
  v162 = v5;
  v160 = (size_t)v11;
  if ( v21 )
  {
    v191 = v10;
    v192 = (unsigned __int16 *)v11;
    v193 = v7;
    v23 = (_WORD *)(v21 + 270);
    v22 = *(unsigned __int16 *)(v21 + 270);
    v24 = (unsigned __int16 *)v9[1];
    v25 = v9[2];
    v194 = *v9;
    v195 = v24;
    v196 = v25;
    if ( v22 < 0xB )
    {
      v26 = 3 * v4;
      v27 = v4 + 1;
      v28 = (size_t *)(v21 + 4 + 12 * v4);
      if ( v4 + 1 <= v22 )
      {
        v145 = a1;
        v56 = 3 * v27;
        v57 = 12 * (v22 - v4);
        memmove((void *)(v21 + 4 + 12 * v27), v28, v57);
        *v28 = v159;
        v28[1] = v160;
        v28[2] = v161;
        v169 = v163;
        v170 = v164;
        v171 = v165;
        v58 = (void *)(v21 + 136 + 4 * v56);
        a1 = v145;
        memmove(v58, (const void *)(v21 + 136 + 4 * v26), v57);
      }
      else
      {
        *v28 = v10;
        v28[1] = v160;
        v28[2] = v161;
        v169 = v163;
        v170 = v164;
        v171 = v165;
      }
      v59 = (size_t *)(v21 + 4 * v26 + 136);
      v60 = v170;
      v61 = v171;
      *v59 = v169;
      v59[1] = (size_t)v60;
      v59[2] = v61;
      *v23 = v22 + 1;
      goto LABEL_77;
    }
    v144 = a1;
    alloc::collections::btree::node::splitpoint(&v169, v4);
    v152 = v171;
    v34 = v169;
    v35 = v170;
    v36 = (unsigned __int16 *)_rust_alloc(0x110u);
    if ( !v36 )
      alloc::alloc::handle_alloc_error();
    v155 = v36;
    *(_DWORD *)v36 = 0;
    v37 = v36 + 135;
    v38 = (unsigned __int16)*v23;
    v39 = v38 + ~v34;
    *v37 = v39;
    v40 = v21 + 4 + 12 * v34;
    v41 = *(unsigned __int16 **)(v40 + 4);
    v42 = *(_DWORD *)(v40 + 8);
    v179 = *(_DWORD *)(v21 + 4 + 12 * v34);
    v181 = v42;
    v180 = v41;
    v43 = v21 + 136 + 12 * v34;
    v44 = *(unsigned __int16 **)(v43 + 4);
    v45 = *(_DWORD *)(v43 + 8);
    v197 = *(_DWORD *)(v21 + 136 + 12 * v34);
    v199 = v45;
    v198 = v44;
    if ( v39 > 0xB )
      core::slice::index::slice_end_index_len_fail();
    v46 = v34 + 1;
    if ( v38 - (v34 + 1) != v39 )
      core::panicking::panic((int)aAssertionFaile_6, 40, (int)&off_2DD448);
    v47 = v155;
    v48 = 3 * v46;
    v49 = 12 * v39;
    memcpy(v155 + 2, (const void *)(v21 + 4 + 12 * v46), 12 * v39);
    memcpy(v155 + 68, (const void *)(v21 + 136 + 4 * v48), v49);
    v169 = v179;
    v50 = v180;
    v172 = v197;
    v173 = v198;
    v174 = v199;
    v51 = v181;
    *v23 = v34;
    v170 = v50;
    v171 = v51;
    v197 = v169;
    v198 = v50;
    v199 = v51;
    v200 = v172;
    v201 = v173;
    v202 = v174;
    v52 = v155;
    if ( !v35 )
      v52 = (_DWORD *)v21;
    v158 = (unsigned __int16 *)v21;
    v53 = *((unsigned __int16 *)v52 + 135);
    v54 = v152 + 1;
    v55 = &v52[3 * v152 + 1];
    if ( v152 + 1 <= v53 )
    {
      v62 = 3 * v54;
      memmove(&v52[3 * v54 + 1], &v52[3 * v152 + 1], 12 * (v53 - v152));
      *v55 = v159;
      v55[1] = v160;
      v55[2] = v161;
      v169 = v163;
      v170 = v164;
      v171 = v165;
      v63 = &v52[v62 + 34];
      v47 = v155;
      memmove(v63, &v52[3 * v152 + 34], 12 * (v53 - v152));
    }
    else
    {
      *v55 = v159;
      v55[1] = v160;
      v55[2] = v161;
      v169 = v163;
      v170 = v164;
      v171 = v165;
    }
    v64 = &v52[3 * v152 + 34];
    v65 = v170;
    v66 = v171;
    *v64 = v169;
    v64[1] = (size_t)v65;
    v64[2] = v66;
    *((_WORD *)v52 + 135) = v53 + 1;
    v185 = v197;
    v186 = v198;
    v187 = v199;
    v188 = v200;
    v189 = v201;
    v190 = v202;
    v179 = v197;
    v180 = v198;
    v181 = v199;
    v182 = v200;
    v183 = v201;
    v184 = v202;
    v67 = v158;
    v68 = *(unsigned __int16 **)v158;
    if ( !*(_DWORD *)v158 )
    {
      v153 = 0;
LABEL_64:
      v166 = v179;
      v167 = v180;
      v168 = v181;
      v170 = v67;
      v169 = v153;
      v171 = v179;
      v172 = (size_t)v180;
      v173 = (unsigned __int16 *)v181;
      v174 = v182;
      v175 = v183;
      v176 = v184;
      v178 = v47;
      v177 = v153;
      if ( !v162[1] )
        core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2DD3E8);
      v116 = *v162;
      v117 = v162[1];
      v118 = _rust_alloc(0x140u);
      if ( !v118 )
        alloc::alloc::handle_alloc_error();
      *(_DWORD *)v118 = 0;
      *v162 = v116 + 1;
      v162[1] = v118;
      *(_WORD *)(v118 + 270) = 0;
      v119 = (_WORD *)(v118 + 270);
      *(_DWORD *)(v118 + 272) = v117;
      *(_DWORD *)v117 = v118;
      *(_WORD *)(v117 + 268) = 0;
      v197 = v174;
      v187 = v168;
      v186 = v167;
      v185 = v166;
      v199 = v176;
      v198 = v175;
      if ( v116 == v153 )
      {
        v120 = (unsigned __int16)*v119;
        if ( v120 <= 0xA )
        {
          *v119 = v120 + 1;
          v121 = (_DWORD *)(v118 + 12 * v120);
          v122 = v174;
          v123 = v176;
          v121[35] = v175;
          v121[36] = v123;
          v121[1] = v166;
          v121[2] = v167;
          v121[3] = v168;
          *(_DWORD *)(v118 + 272 + 4 * (v120 + 1)) = v47;
          *(_DWORD *)v47 = v118;
          v121[34] = v122;
          v47[134] = v120 + 1;
          ++v162[2];
          v144[1] = 0;
          return 0;
        }
        v140 = 32;
        v141 = &off_2DD408;
        v142 = aAssertionFaile_0;
      }
      else
      {
        v140 = 48;
        v141 = &off_2DD3F8;
        v142 = aAssertionFaile_4;
      }
      core::panicking::panic((int)v142, v140, (int)v141);
    }
    v69 = v47;
    v153 = 0;
    v70 = v158;
    while ( 1 )
    {
      v71 = v68;
      v72 = v70[134];
      v148 = v69;
      v191 = v179;
      v192 = v180;
      v193 = v181;
      v73 = v68 + 135;
      v74 = v68[135];
      n = v68 + 135;
      v194 = v182;
      v195 = v183;
      v196 = v184;
      if ( v74 < 0xB )
        break;
      alloc::collections::btree::node::splitpoint(&v169, v72);
      v146 = v170;
      v147 = *v73;
      v75 = v169;
      v76 = v171;
      v77 = (unsigned __int16 *)_rust_alloc(0x140u);
      if ( !v77 )
        alloc::alloc::handle_alloc_error();
      v78 = v77;
      v79 = v77;
      *(_DWORD *)v77 = 0;
      v80 = *v73;
      v156 = v77;
      v81 = v80 + ~v75;
      v79[135] = v81;
      v82 = v79 + 135;
      v83 = (size_t *)&v71[6 * v75 + 2];
      v185 = *v83;
      v84 = (unsigned __int16 *)v83[1];
      v187 = v83[2];
      v85 = &v71[6 * v75 + 68];
      v197 = *(_DWORD *)v85;
      v86 = (unsigned __int16 *)*((_DWORD *)v85 + 1);
      v87 = *((_DWORD *)v85 + 2);
      v186 = v84;
      v199 = v87;
      v198 = v86;
      if ( v81 > 0xB )
        core::slice::index::slice_end_index_len_fail();
      v88 = v75 + 1;
      if ( v80 - (v75 + 1) != v81 )
        core::panicking::panic((int)aAssertionFaile_6, 40, (int)&off_2DD448);
      v89 = 12 * v81;
      memcpy(v78 + 2, &v71[6 * v88 + 2], 12 * v81);
      memcpy(v78 + 68, &v71[6 * v88 + 68], v89);
      v90 = v197;
      *n = v75;
      v91 = *v82;
      v171 = v187;
      v172 = v90;
      v173 = v198;
      v174 = v199;
      v169 = v185;
      v170 = v186;
      if ( v91 >= 0xC )
        core::slice::index::slice_end_index_len_fail();
      v47 = v156;
      if ( v147 - v75 != v91 + 1 )
        core::panicking::panic((int)aAssertionFaile_6, 40, (int)&off_2DD448);
      ++v153;
      memcpy(v78 + 136, &v71[2 * v88 + 136], 4 * (v147 - v75));
      for ( i = 0; i <= v91; ++i )
      {
        v93 = *(_DWORD *)&v78[2 * i + 136];
        *(_DWORD *)v93 = v156;
        *(_WORD *)(v93 + 268) = i;
        if ( i >= v91 )
          break;
      }
      v197 = v169;
      v198 = v170;
      v199 = v171;
      v200 = v172;
      v201 = v173;
      v202 = v174;
      if ( !v146 )
        v78 = v71;
      v94 = &v78[6 * v76 + 2];
      v95 = v78[135];
      v96 = v76 + 1;
      if ( v76 + 1 <= v95 )
      {
        memmove(&v78[6 * v96 + 2], &v78[6 * v76 + 2], 12 * (v95 - v76));
        v99 = v180;
        v100 = v181;
        *(_DWORD *)v94 = v179;
        *((_DWORD *)v94 + 1) = v99;
        *((_DWORD *)v94 + 2) = v100;
        v169 = v182;
        v170 = v183;
        v171 = v184;
        v47 = v156;
        memmove(&v78[6 * v96 + 68], &v78[6 * v76 + 68], 12 * (v95 - v76));
      }
      else
      {
        v97 = v180;
        v98 = v181;
        *(_DWORD *)v94 = v179;
        *((_DWORD *)v94 + 1) = v97;
        *((_DWORD *)v94 + 2) = v98;
        v169 = v182;
        v170 = v183;
        v171 = v184;
      }
      v101 = &v78[6 * v76 + 68];
      v102 = v78 + 136;
      v103 = v170;
      v104 = v171;
      *(_DWORD *)v101 = v169;
      *((_DWORD *)v101 + 1) = v103;
      *((_DWORD *)v101 + 2) = v104;
      if ( v76 + 2 < v95 + 2 )
        memmove(&v102[2 * v76 + 4], &v102[2 * v96], 4 * (v95 - v76));
      *(_DWORD *)&v102[2 * v96] = v148;
      v78[135] = v95 + 1;
      if ( v96 < v95 + 2 )
      {
        do
        {
          v105 = &v78[2 * v76++];
          v106 = *((_DWORD *)v105 + 69);
          *(_DWORD *)v106 = v78;
          *(_WORD *)(v106 + 268) = v76;
        }
        while ( v95 + 1 != v76 );
      }
      v179 = v197;
      v180 = v198;
      v181 = v199;
      v182 = v200;
      v183 = v201;
      v184 = v202;
      v69 = v47;
      v67 = v71;
      v68 = *(unsigned __int16 **)v71;
      v70 = v71;
      if ( !*(_DWORD *)v71 )
        goto LABEL_64;
    }
    v124 = v72 + 1;
    v125 = v74 + 1;
    v126 = (size_t *)&v68[6 * v72 + 2];
    if ( v74 <= v72 )
    {
      v132 = (size_t)v180;
      v133 = v181;
      v134 = v182;
      v135 = v183;
      v136 = v184;
      *v126 = v179;
      v126[1] = v132;
      v126[2] = v133;
      v137 = &v68[6 * v72 + 68];
      *(_DWORD *)v137 = v134;
      *((_DWORD *)v137 + 1) = v135;
      *((_DWORD *)v137 + 2) = v136;
    }
    else
    {
      memmove(&v68[6 * v124 + 2], &v68[6 * v72 + 2], 12 * (v74 - v72));
      v127 = (size_t)v180;
      v128 = v181;
      *v126 = v179;
      v126[1] = v127;
      v126[2] = v128;
      v129 = &v71[6 * v72 + 68];
      memmove(&v71[6 * v124 + 68], v129, 12 * (v74 - v72));
      v130 = v183;
      v131 = v184;
      *(_DWORD *)v129 = v182;
      *((_DWORD *)v129 + 1) = v130;
      *((_DWORD *)v129 + 2) = v131;
      memmove(&v71[2 * v72 + 140], &v71[2 * v124 + 136], 4 * (v74 - v72));
    }
    *n = v125;
    *(_DWORD *)&v71[2 * v124 + 136] = v148;
    if ( v124 < v74 + 2 )
    {
      do
      {
        v138 = &v71[2 * v72++];
        v139 = *((_DWORD *)v138 + 69);
        *(_DWORD *)v139 = v71;
        *(_WORD *)(v139 + 268) = v72;
      }
      while ( v125 != v72 );
    }
    a1 = v144;
LABEL_77:
    ++v162[2];
    a1[1] = 0;
    return 0;
  }
  else
  {
    v29 = _rust_alloc(0x110u);
    if ( !v29 )
      alloc::alloc::handle_alloc_error();
    *(_WORD *)(v29 + 270) = 1;
    v30 = *v9;
    v31 = v9[1];
    v32 = v9[2];
    *v5 = 0;
    v5[1] = v29;
    v5[2] = 1;
    *(_DWORD *)v29 = 0;
    *(_DWORD *)(v29 + 4) = v159;
    *(_DWORD *)(v29 + 8) = v11;
    *(_DWORD *)(v29 + 12) = v7;
    *(_DWORD *)(v29 + 136) = v30;
    *(_DWORD *)(v29 + 140) = v31;
    *(_DWORD *)(v29 + 144) = v32;
    a1[1] = 0;
    return 0;
  }
}
