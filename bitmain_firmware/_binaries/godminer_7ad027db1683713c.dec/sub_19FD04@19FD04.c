int __fastcall sub_19FD04(_DWORD *a1, _DWORD *a2, size_t *a3, int *a4)
{
  unsigned int v4; // r7
  _DWORD *v5; // r8
  int v6; // r1
  size_t v7; // r4
  int *v9; // r6
  size_t v10; // r0
  void *v11; // r5
  int v12; // r10
  int v13; // r9
  unsigned int v14; // r6
  int v15; // r8
  size_t v16; // r2
  int v17; // r11
  int v18; // r0
  bool v19; // nf
  int v20; // r11
  int v21; // r11
  unsigned int v22; // r5
  _WORD *v23; // r8
  int v24; // r2
  int v25; // r3
  int v26; // r10
  unsigned int v27; // r1
  size_t *v28; // r4
  int v29; // r0
  int v30; // r3
  int v31; // r7
  int v32; // r6
  int result; // r0
  int v34; // r5
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
  int v46; // r3
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
  _DWORD *v59; // r3
  unsigned __int16 *v60; // r1
  size_t v61; // r2
  int v62; // r10
  _DWORD *v63; // r0
  _DWORD *v64; // r3
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
  int v75; // r9
  size_t v76; // r8
  unsigned __int16 *v77; // r0
  unsigned __int16 *v78; // r6
  unsigned __int16 *v79; // r7
  int v80; // r1
  unsigned int v81; // r0
  unsigned __int16 *v82; // r7
  int *v83; // r2
  int v84; // r5
  int *v85; // r2
  int v86; // r3
  int v87; // r2
  int v88; // r5
  size_t v89; // r4
  int v90; // r12
  unsigned int v91; // r7
  int v92; // r0
  unsigned int i; // r2
  int v94; // r0
  int *v95; // r4
  unsigned int v96; // r5
  unsigned int v97; // r9
  int v98; // r1
  int v99; // r2
  int v100; // r1
  int v101; // r2
  unsigned __int16 *v102; // r3
  unsigned __int16 *v103; // r7
  unsigned __int16 *v104; // r1
  size_t v105; // r2
  unsigned __int16 *v106; // r1
  int v107; // r1
  int v108; // r0
  int v109; // r7
  _DWORD *v110; // r0
  int v111; // r4
  int v112; // r5
  unsigned __int16 *v113; // r2
  size_t v114; // r3
  unsigned __int16 *v115; // r1
  size_t v116; // r2
  int v117; // r9
  int v118; // r7
  int v119; // r0
  _WORD *v120; // r2
  unsigned int v121; // r3
  _DWORD *v122; // r2
  int v123; // r12
  size_t v124; // r7
  unsigned int v125; // r9
  unsigned int v126; // r7
  int *v127; // r4
  int v128; // r1
  int v129; // r2
  int *v130; // r4
  int v131; // r1
  int v132; // r2
  int v133; // r1
  int v134; // r2
  int v135; // r8
  unsigned __int16 *v136; // r12
  size_t v137; // lr
  int *v138; // r0
  unsigned __int16 *v139; // r0
  int v140; // r0
  int v141; // r1
  char **v142; // r2
  const char *v143; // r0
  _DWORD *v144; // [sp+10h] [bp-FCh]
  _DWORD *v145; // [sp+10h] [bp-FCh]
  _DWORD *v146; // [sp+10h] [bp-FCh]
  unsigned __int16 *v147; // [sp+14h] [bp-F8h]
  int v148; // [sp+18h] [bp-F4h]
  unsigned __int16 *v149; // [sp+1Ch] [bp-F0h]
  _WORD *n; // [sp+20h] [bp-ECh]
  _DWORD *v151; // [sp+24h] [bp-E8h]
  size_t v152; // [sp+28h] [bp-E4h]
  size_t v153; // [sp+28h] [bp-E4h]
  size_t v154; // [sp+28h] [bp-E4h]
  unsigned __int16 *v156; // [sp+2Ch] [bp-E0h]
  unsigned __int16 *v157; // [sp+2Ch] [bp-E0h]
  int v158; // [sp+30h] [bp-DCh]
  unsigned __int16 *v159; // [sp+30h] [bp-DCh]
  size_t v160; // [sp+40h] [bp-CCh]
  size_t v161; // [sp+44h] [bp-C8h]
  size_t v162; // [sp+48h] [bp-C4h]
  int *v163; // [sp+4Ch] [bp-C0h]
  int v164; // [sp+50h] [bp-BCh]
  int v165; // [sp+54h] [bp-B8h]
  int v166; // [sp+58h] [bp-B4h]
  int v167; // [sp+60h] [bp-ACh]
  unsigned __int16 *v168; // [sp+64h] [bp-A8h]
  size_t v169; // [sp+68h] [bp-A4h]
  int v170; // [sp+78h] [bp-94h] BYREF
  unsigned __int16 *v171; // [sp+7Ch] [bp-90h]
  size_t v172; // [sp+80h] [bp-8Ch]
  int v173; // [sp+84h] [bp-88h]
  unsigned __int16 *v174; // [sp+88h] [bp-84h]
  int v175; // [sp+8Ch] [bp-80h]
  unsigned __int16 *v176; // [sp+90h] [bp-7Ch]
  size_t v177; // [sp+94h] [bp-78h]
  size_t v178; // [sp+98h] [bp-74h]
  unsigned __int16 *v179; // [sp+9Ch] [bp-70h]
  int v180; // [sp+A0h] [bp-6Ch]
  unsigned __int16 *v181; // [sp+A4h] [bp-68h]
  size_t v182; // [sp+A8h] [bp-64h]
  int v183; // [sp+ACh] [bp-60h]
  unsigned __int16 *v184; // [sp+B0h] [bp-5Ch]
  size_t v185; // [sp+B4h] [bp-58h]
  int v186; // [sp+B8h] [bp-54h]
  unsigned __int16 *v187; // [sp+BCh] [bp-50h]
  size_t v188; // [sp+C0h] [bp-4Ch]
  int v189; // [sp+C4h] [bp-48h]
  unsigned __int16 *v190; // [sp+C8h] [bp-44h]
  int v191; // [sp+CCh] [bp-40h]
  int v192; // [sp+D0h] [bp-3Ch]
  unsigned __int16 *v193; // [sp+D4h] [bp-38h]
  size_t v194; // [sp+D8h] [bp-34h]
  int v195; // [sp+E0h] [bp-2Ch]
  int v196; // [sp+E4h] [bp-28h]
  int v197; // [sp+E8h] [bp-24h]
  int v198; // [sp+F0h] [bp-1Ch]
  unsigned __int16 *v199; // [sp+F4h] [bp-18h]
  size_t v200; // [sp+F8h] [bp-14h]
  int v201; // [sp+FCh] [bp-10h]
  unsigned __int16 *v202; // [sp+100h] [bp-Ch]
  int v203; // [sp+104h] [bp-8h]

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
  v152 = *a3;
  v144 = a1;
  v151 = v5;
  while ( 1 )
  {
    v13 = v6 + 4;
    v14 = *(unsigned __int16 *)(v6 + 270);
    v4 = -1;
    v158 = v6;
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
      a1 = v144;
      if ( v152 )
        _rust_dealloc(v11);
      v21 = v158;
      v9 = a4;
LABEL_62:
      v108 = 3 * v4;
      v109 = *v9;
      v110 = (_DWORD *)(v21 + 4 * v108);
      v111 = v9[1];
      v112 = v9[2];
      v113 = (unsigned __int16 *)v110[35];
      v114 = v110[36];
      v170 = v110[34];
      v171 = v113;
      v172 = v114;
      v110[34] = v109;
      v110[35] = v111;
      v110[36] = v112;
      result = v170;
      v115 = v171;
      v116 = v172;
      *a1 = v170;
      a1[1] = v115;
      a1[2] = v116;
      return result;
    }
LABEL_15:
    v21 = v158;
    if ( !v12 )
      break;
    --v12;
    v6 = *(_DWORD *)(v158 + 4 * v4 + 272);
  }
  a1 = v144;
  v9 = a4;
  v5 = v151;
  v10 = v152;
  if ( !v11 )
    goto LABEL_62;
LABEL_21:
  v160 = v10;
  v162 = v7;
  v164 = *v9;
  v165 = v9[1];
  v166 = v9[2];
  v163 = v5;
  v161 = (size_t)v11;
  if ( v21 )
  {
    v192 = v10;
    v193 = (unsigned __int16 *)v11;
    v194 = v7;
    v23 = (_WORD *)(v21 + 270);
    v22 = *(unsigned __int16 *)(v21 + 270);
    v24 = v9[1];
    v25 = v9[2];
    v195 = *v9;
    v196 = v24;
    v197 = v25;
    if ( v22 < 0xB )
    {
      v26 = 3 * v4;
      v27 = v4 + 1;
      v28 = (size_t *)(v21 + 4 + 12 * v4);
      if ( v4 + 1 <= v22 )
      {
        v146 = a1;
        v56 = 3 * v27;
        v57 = 12 * (v22 - v4);
        memmove((void *)(v21 + 4 + 12 * v27), v28, v57);
        *v28 = v160;
        v28[1] = v161;
        v28[2] = v162;
        v170 = v164;
        v171 = (unsigned __int16 *)v165;
        v172 = v166;
        v58 = (void *)(v21 + 136 + 4 * v56);
        a1 = v146;
        memmove(v58, (const void *)(v21 + 136 + 4 * v26), v57);
      }
      else
      {
        *v28 = v10;
        v28[1] = v161;
        v28[2] = v162;
        v170 = v164;
        v171 = (unsigned __int16 *)v165;
        v172 = v166;
      }
      v59 = (_DWORD *)(v21 + 4 * v26 + 136);
      v60 = v171;
      v61 = v172;
      *v59 = v170;
      v59[1] = v60;
      v59[2] = v61;
      *v23 = v22 + 1;
      goto LABEL_77;
    }
    v145 = a1;
    alloc::collections::btree::node::splitpoint(&v170, v4);
    v153 = v172;
    v34 = v170;
    v35 = v171;
    v36 = (unsigned __int16 *)_rust_alloc(0x110u);
    if ( !v36 )
      alloc::alloc::handle_alloc_error();
    v156 = v36;
    *(_DWORD *)v36 = 0;
    v37 = v36 + 135;
    v38 = (unsigned __int16)*v23;
    v39 = v38 + ~v34;
    *v37 = v39;
    v40 = v21 + 4 + 12 * v34;
    v41 = *(unsigned __int16 **)(v40 + 4);
    v42 = *(_DWORD *)(v40 + 8);
    v180 = *(_DWORD *)(v21 + 4 + 12 * v34);
    v182 = v42;
    v181 = v41;
    v43 = v21 + 136 + 12 * v34;
    v44 = *(unsigned __int16 **)(v43 + 4);
    v45 = *(_DWORD *)(v43 + 8);
    v198 = *(_DWORD *)(v21 + 136 + 12 * v34);
    v200 = v45;
    v199 = v44;
    if ( v39 > 0xB )
      core::slice::index::slice_end_index_len_fail(v39, 11, (int)&off_2C9458);
    v46 = v34 + 1;
    if ( v38 - (v34 + 1) != v39 )
      core::panicking::panic((int)aAssertionFaile_6, 40, (int)&off_2C9448);
    v47 = v156;
    v48 = 3 * v46;
    v49 = 12 * v39;
    memcpy(v156 + 2, (const void *)(v21 + 4 + 12 * v46), 12 * v39);
    memcpy(v156 + 68, (const void *)(v21 + 136 + 4 * v48), v49);
    v170 = v180;
    v50 = v181;
    v173 = v198;
    v174 = v199;
    v175 = v200;
    v51 = v182;
    *v23 = v34;
    v171 = v50;
    v172 = v51;
    v198 = v170;
    v199 = v50;
    v200 = v51;
    v201 = v173;
    v202 = v174;
    v203 = v175;
    v52 = v156;
    if ( !v35 )
      v52 = (_DWORD *)v21;
    v159 = (unsigned __int16 *)v21;
    v53 = *((unsigned __int16 *)v52 + 135);
    v54 = v153 + 1;
    v55 = &v52[3 * v153 + 1];
    if ( v153 + 1 <= v53 )
    {
      v62 = 3 * v54;
      memmove(&v52[3 * v54 + 1], &v52[3 * v153 + 1], 12 * (v53 - v153));
      *v55 = v160;
      v55[1] = v161;
      v55[2] = v162;
      v170 = v164;
      v171 = (unsigned __int16 *)v165;
      v172 = v166;
      v63 = &v52[v62 + 34];
      v47 = v156;
      memmove(v63, &v52[3 * v153 + 34], 12 * (v53 - v153));
    }
    else
    {
      *v55 = v160;
      v55[1] = v161;
      v55[2] = v162;
      v170 = v164;
      v171 = (unsigned __int16 *)v165;
      v172 = v166;
    }
    v64 = &v52[3 * v153 + 34];
    v65 = v171;
    v66 = v172;
    *v64 = v170;
    v64[1] = v65;
    v64[2] = v66;
    *((_WORD *)v52 + 135) = v53 + 1;
    v186 = v198;
    v187 = v199;
    v188 = v200;
    v189 = v201;
    v190 = v202;
    v191 = v203;
    v180 = v198;
    v181 = v199;
    v182 = v200;
    v183 = v201;
    v184 = v202;
    v185 = v203;
    v67 = v159;
    v68 = *(unsigned __int16 **)v159;
    if ( !*(_DWORD *)v159 )
    {
      v154 = 0;
LABEL_64:
      v167 = v180;
      v168 = v181;
      v169 = v182;
      v171 = v67;
      v170 = v154;
      v172 = v180;
      v173 = (int)v181;
      v174 = (unsigned __int16 *)v182;
      v175 = v183;
      v176 = v184;
      v177 = v185;
      v179 = v47;
      v178 = v154;
      if ( !v163[1] )
        core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2C93E8);
      v117 = *v163;
      v118 = v163[1];
      v119 = _rust_alloc(0x140u);
      if ( !v119 )
        alloc::alloc::handle_alloc_error();
      *(_DWORD *)v119 = 0;
      *v163 = v117 + 1;
      v163[1] = v119;
      *(_WORD *)(v119 + 270) = 0;
      v120 = (_WORD *)(v119 + 270);
      *(_DWORD *)(v119 + 272) = v118;
      *(_DWORD *)v118 = v119;
      *(_WORD *)(v118 + 268) = 0;
      v198 = v175;
      v188 = v169;
      v187 = v168;
      v186 = v167;
      v200 = v177;
      v199 = v176;
      if ( v117 == v154 )
      {
        v121 = (unsigned __int16)*v120;
        if ( v121 <= 0xA )
        {
          *v120 = v121 + 1;
          v122 = (_DWORD *)(v119 + 12 * v121);
          v123 = v175;
          v124 = v177;
          v122[35] = v176;
          v122[36] = v124;
          v122[1] = v167;
          v122[2] = v168;
          v122[3] = v169;
          *(_DWORD *)(v119 + 272 + 4 * (v121 + 1)) = v47;
          *(_DWORD *)v47 = v119;
          v122[34] = v123;
          v47[134] = v121 + 1;
          ++v163[2];
          v145[1] = 0;
          return 0;
        }
        v141 = 32;
        v142 = &off_2C9408;
        v143 = aAssertionFaile_0;
      }
      else
      {
        v141 = 48;
        v142 = &off_2C93F8;
        v143 = aAssertionFaile_4;
      }
      core::panicking::panic((int)v143, v141, (int)v142);
    }
    v69 = v47;
    v154 = 0;
    v70 = v159;
    while ( 1 )
    {
      v71 = v68;
      v72 = v70[134];
      v149 = v69;
      v192 = v180;
      v193 = v181;
      v194 = v182;
      v73 = v68 + 135;
      v74 = v68[135];
      n = v68 + 135;
      v195 = v183;
      v196 = (int)v184;
      v197 = v185;
      if ( v74 < 0xB )
        break;
      alloc::collections::btree::node::splitpoint(&v170, v72);
      v147 = v171;
      v148 = *v73;
      v75 = v170;
      v76 = v172;
      v77 = (unsigned __int16 *)_rust_alloc(0x140u);
      if ( !v77 )
        alloc::alloc::handle_alloc_error();
      v78 = v77;
      v79 = v77;
      *(_DWORD *)v77 = 0;
      v80 = *v73;
      v157 = v77;
      v81 = v80 + ~v75;
      v79[135] = v81;
      v82 = v79 + 135;
      v83 = (int *)&v71[6 * v75 + 2];
      v186 = *v83;
      v84 = v83[1];
      v188 = v83[2];
      v85 = (int *)&v71[6 * v75 + 68];
      v198 = *v85;
      v86 = v85[1];
      v87 = v85[2];
      v187 = (unsigned __int16 *)v84;
      v200 = v87;
      v199 = (unsigned __int16 *)v86;
      if ( v81 > 0xB )
        core::slice::index::slice_end_index_len_fail(v81, 11, (int)&off_2C9458);
      v88 = v75 + 1;
      if ( v80 - (v75 + 1) != v81 )
        core::panicking::panic((int)aAssertionFaile_6, 40, (int)&off_2C9448);
      v89 = 12 * v81;
      memcpy(v78 + 2, &v71[6 * v88 + 2], 12 * v81);
      memcpy(v78 + 68, &v71[6 * v88 + 68], v89);
      v90 = v198;
      *n = v75;
      v91 = *v82;
      v172 = v188;
      v92 = v91 + 1;
      v173 = v90;
      v174 = v199;
      v175 = v200;
      v170 = v186;
      v171 = v187;
      if ( v91 >= 0xC )
        core::slice::index::slice_end_index_len_fail(v92, 12, (int)&off_2C9468);
      v47 = v157;
      if ( v148 - v75 != v92 )
        core::panicking::panic((int)aAssertionFaile_6, 40, (int)&off_2C9448);
      ++v154;
      memcpy(v78 + 136, &v71[2 * v88 + 136], 4 * (v148 - v75));
      for ( i = 0; i <= v91; ++i )
      {
        v94 = *(_DWORD *)&v78[2 * i + 136];
        *(_DWORD *)v94 = v157;
        *(_WORD *)(v94 + 268) = i;
        if ( i >= v91 )
          break;
      }
      v198 = v170;
      v199 = v171;
      v200 = v172;
      v201 = v173;
      v202 = v174;
      v203 = v175;
      if ( !v147 )
        v78 = v71;
      v95 = (int *)&v78[6 * v76 + 2];
      v96 = v78[135];
      v97 = v76 + 1;
      if ( v76 + 1 <= v96 )
      {
        memmove(&v78[6 * v97 + 2], &v78[6 * v76 + 2], 12 * (v96 - v76));
        v100 = (int)v181;
        v101 = v182;
        *v95 = v180;
        v95[1] = v100;
        v95[2] = v101;
        v170 = v183;
        v171 = v184;
        v172 = v185;
        v47 = v157;
        memmove(&v78[6 * v97 + 68], &v78[6 * v76 + 68], 12 * (v96 - v76));
      }
      else
      {
        v98 = (int)v181;
        v99 = v182;
        *v95 = v180;
        v95[1] = v98;
        v95[2] = v99;
        v170 = v183;
        v171 = v184;
        v172 = v185;
      }
      v102 = &v78[6 * v76 + 68];
      v103 = v78 + 136;
      v104 = v171;
      v105 = v172;
      *(_DWORD *)v102 = v170;
      *((_DWORD *)v102 + 1) = v104;
      *((_DWORD *)v102 + 2) = v105;
      if ( v76 + 2 < v96 + 2 )
        memmove(&v103[2 * v76 + 4], &v103[2 * v97], 4 * (v96 - v76));
      *(_DWORD *)&v103[2 * v97] = v149;
      v78[135] = v96 + 1;
      if ( v97 < v96 + 2 )
      {
        do
        {
          v106 = &v78[2 * v76++];
          v107 = *((_DWORD *)v106 + 69);
          *(_DWORD *)v107 = v78;
          *(_WORD *)(v107 + 268) = v76;
        }
        while ( v96 + 1 != v76 );
      }
      v180 = v198;
      v181 = v199;
      v182 = v200;
      v183 = v201;
      v184 = v202;
      v185 = v203;
      v69 = v47;
      v67 = v71;
      v68 = *(unsigned __int16 **)v71;
      v70 = v71;
      if ( !*(_DWORD *)v71 )
        goto LABEL_64;
    }
    v125 = v72 + 1;
    v126 = v74 + 1;
    v127 = (int *)&v68[6 * v72 + 2];
    if ( v74 <= v72 )
    {
      v133 = (int)v181;
      v134 = v182;
      v135 = v183;
      v136 = v184;
      v137 = v185;
      *v127 = v180;
      v127[1] = v133;
      v127[2] = v134;
      v138 = (int *)&v68[6 * v72 + 68];
      *v138 = v135;
      v138[1] = (int)v136;
      v138[2] = v137;
    }
    else
    {
      memmove(&v68[6 * v125 + 2], &v68[6 * v72 + 2], 12 * (v74 - v72));
      v128 = (int)v181;
      v129 = v182;
      *v127 = v180;
      v127[1] = v128;
      v127[2] = v129;
      v130 = (int *)&v71[6 * v72 + 68];
      memmove(&v71[6 * v125 + 68], v130, 12 * (v74 - v72));
      v131 = (int)v184;
      v132 = v185;
      *v130 = v183;
      v130[1] = v131;
      v130[2] = v132;
      memmove(&v71[2 * v72 + 140], &v71[2 * v125 + 136], 4 * (v74 - v72));
    }
    *n = v126;
    *(_DWORD *)&v71[2 * v125 + 136] = v149;
    if ( v125 < v74 + 2 )
    {
      do
      {
        v139 = &v71[2 * v72++];
        v140 = *((_DWORD *)v139 + 69);
        *(_DWORD *)v140 = v71;
        *(_WORD *)(v140 + 268) = v72;
      }
      while ( v126 != v72 );
    }
    a1 = v145;
LABEL_77:
    ++v163[2];
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
    *(_DWORD *)(v29 + 4) = v160;
    *(_DWORD *)(v29 + 8) = v11;
    *(_DWORD *)(v29 + 12) = v7;
    *(_DWORD *)(v29 + 136) = v30;
    *(_DWORD *)(v29 + 140) = v31;
    *(_DWORD *)(v29 + 144) = v32;
    a1[1] = 0;
    return 0;
  }
}
