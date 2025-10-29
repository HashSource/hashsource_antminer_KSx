void __fastcall sub_1FA51C(_DWORD *a1, int a2, const void *a3, int a4)
{
  __int64 v4; // r0
  __int64 v5; // r0
  int v6; // r2
  __int64 v7; // r0
  __int64 v8; // r0
  const char *v9; // r1
  bool v10; // zf
  const char *v11; // r0
  __int64 v12; // r0
  __int64 v13; // r0
  const char *v14; // r1
  bool v15; // zf
  const char *v16; // r0
  __int64 v17; // r0
  __int64 v18; // r0
  const char *v19; // r1
  bool v20; // zf
  const char *v21; // r0
  __int64 v22; // r0
  __int64 v23; // r0
  const char *v24; // r1
  bool v25; // zf
  const char *v26; // r0
  __int64 v27; // r0
  __int64 v28; // r0
  const char *v29; // r1
  bool v30; // zf
  const char *v31; // r0
  __int64 v32; // r0
  __int64 v33; // r0
  const char *v34; // r5
  bool v35; // zf
  const char *v36; // r0
  __int64 v37; // r0
  __int64 v38; // r0
  const char *v39; // r6
  bool v40; // zf
  const char *v41; // r0
  __int64 v42; // r0
  __int64 v43; // r0
  int v44; // r10
  const char *v45; // r9
  int v46; // r1
  __int64 v47; // r0
  __int64 v48; // r0
  int v49; // r4
  const char *v50; // r8
  __int64 v51; // r0
  __int64 v52; // r0
  int v53; // r11
  const char *v54; // r7
  __int64 v55; // r0
  __int64 v56; // r0
  __int64 v57; // r0
  __int64 v58; // r0
  const char *v59; // r1
  bool v60; // zf
  const char *v61; // r0
  __int64 v62; // r0
  __int64 v63; // r0
  const char *v64; // r1
  bool v65; // zf
  const char *v66; // r0
  __int64 v67; // r0
  __int64 v68; // r0
  const char *v69; // r1
  bool v70; // zf
  const char *v71; // r0
  __int64 v72; // r0
  __int64 v73; // r0
  const char *v74; // r1
  bool v75; // zf
  const char *v76; // r0
  __int64 v77; // r0
  __int64 v78; // r0
  const char *v79; // r1
  bool v80; // zf
  const char *v81; // r0
  __int64 v82; // r0
  __int64 v83; // r0
  const char *v84; // r1
  bool v85; // zf
  const char *v86; // r0
  __int64 v87; // r0
  __int64 v88; // r0
  const char *v89; // r1
  bool v90; // zf
  const char *v91; // r0
  __int64 v92; // r0
  __int64 v93; // r0
  const char *v94; // r11
  bool v95; // zf
  const char *v96; // r0
  __int64 v97; // r0
  __int64 v98; // r0
  const char *v99; // r6
  bool v100; // zf
  const char *v101; // r0
  __int64 v102; // r0
  __int64 v103; // r0
  int v104; // r8
  const char *v105; // r4
  __int64 v106; // r0
  __int64 v107; // r0
  int v108; // r10
  const char *v109; // r5
  __int64 v110; // r0
  __int64 v111; // r0
  int v112; // r9
  const char *v113; // r7
  __int64 v114; // r0
  __int64 v115; // r0
  const char *v116; // r1
  void *v117; // r0
  void *v118; // r4
  _DWORD *v119; // r0
  int v120; // r10
  _DWORD *v121; // r5
  unsigned int *v122; // r1
  int v123; // r0
  _DWORD *v124; // r0
  int v125; // r2
  int v126; // r3
  int v127; // r7
  _DWORD *v128; // r9
  _DWORD *v129; // r0
  int v130; // r2
  int v131; // r3
  int v132; // r7
  void *v133; // r5
  const void *v134; // r4
  int v135; // r8
  int v136; // r3
  int v137; // r4
  int v138; // r5
  int v139; // r7
  bool v140; // zf
  const char *v141; // [sp+4h] [bp-1F8h]
  int v142; // [sp+8h] [bp-1F4h]
  const char *v143; // [sp+8h] [bp-1F4h]
  const char *v144; // [sp+Ch] [bp-1F0h]
  const char *v145; // [sp+Ch] [bp-1F0h]
  const char *v146; // [sp+10h] [bp-1ECh]
  const char *v147; // [sp+10h] [bp-1ECh]
  const char *v148; // [sp+14h] [bp-1E8h]
  const char *v149; // [sp+14h] [bp-1E8h]
  const char *v150; // [sp+18h] [bp-1E4h]
  const char *v151; // [sp+18h] [bp-1E4h]
  const char *v152; // [sp+1Ch] [bp-1E0h]
  const char *v153; // [sp+1Ch] [bp-1E0h]
  int v154; // [sp+20h] [bp-1DCh]
  const char *v155; // [sp+20h] [bp-1DCh]
  const char *v157; // [sp+28h] [bp-1D4h]
  const char *v158; // [sp+28h] [bp-1D4h]
  const char *v160; // [sp+30h] [bp-1CCh]
  const char *v161; // [sp+30h] [bp-1CCh]
  const char *v162; // [sp+30h] [bp-1CCh]
  const char *v163; // [sp+34h] [bp-1C8h]
  const char *v164; // [sp+34h] [bp-1C8h]
  const char *v165; // [sp+34h] [bp-1C8h]
  const char *v166; // [sp+38h] [bp-1C4h]
  const char *v167; // [sp+38h] [bp-1C4h]
  const char *v168; // [sp+38h] [bp-1C4h]
  const char *v169; // [sp+38h] [bp-1C4h]
  const char *v170; // [sp+3Ch] [bp-1C0h]
  const char *v171; // [sp+3Ch] [bp-1C0h]
  const char *v172; // [sp+3Ch] [bp-1C0h]
  const char *v173; // [sp+3Ch] [bp-1C0h]
  const char *v174; // [sp+40h] [bp-1BCh]
  const char *v175; // [sp+40h] [bp-1BCh]
  const char *v176; // [sp+40h] [bp-1BCh]
  const char *v177; // [sp+40h] [bp-1BCh]
  const char *v178; // [sp+44h] [bp-1B8h]
  const char *v179; // [sp+44h] [bp-1B8h]
  const char *v180; // [sp+44h] [bp-1B8h]
  const char *v181; // [sp+44h] [bp-1B8h]
  const char *v182; // [sp+48h] [bp-1B4h]
  const char *v183; // [sp+48h] [bp-1B4h]
  const char *v184; // [sp+48h] [bp-1B4h]
  const char *v185; // [sp+48h] [bp-1B4h]
  void *v186; // [sp+48h] [bp-1B4h]
  int v187; // [sp+4Ch] [bp-1B0h]
  int v188; // [sp+4Ch] [bp-1B0h]
  int v191; // [sp+54h] [bp-1A8h]
  _DWORD v192[28]; // [sp+58h] [bp-1A4h] BYREF
  _DWORD dest[32]; // [sp+C8h] [bp-134h] BYREF
  _DWORD *v194; // [sp+148h] [bp-B4h] BYREF
  int v195; // [sp+14Ch] [bp-B0h]
  int v196; // [sp+150h] [bp-ACh]
  int v197; // [sp+154h] [bp-A8h]
  int v198; // [sp+158h] [bp-A4h]
  int v199; // [sp+15Ch] [bp-A0h]
  int v200; // [sp+160h] [bp-9Ch]
  int v201; // [sp+164h] [bp-98h]
  int v202; // [sp+168h] [bp-94h]
  int v203; // [sp+16Ch] [bp-90h]
  int v204; // [sp+170h] [bp-8Ch]
  int v205; // [sp+174h] [bp-88h]
  int v206; // [sp+178h] [bp-84h]
  _DWORD v207[31]; // [sp+180h] [bp-7Ch] BYREF

  v4 = gimli::common::SectionId::name(10);
  v5 = sub_200B78(a3, a2, v4, HIDWORD(v4));
  v6 = HIDWORD(v5);
  if ( !(_DWORD)v5 )
    v6 = 0;
  v187 = v6;
  if ( !(_DWORD)v5 )
    LODWORD(v5) = aRustc9eb3afe9e;
  v154 = v5;
  v7 = gimli::common::SectionId::name(11);
  v8 = sub_200B78(a3, a2, v7, HIDWORD(v7));
  v182 = (const char *)HIDWORD(v8);
  v9 = (const char *)v8;
  v10 = (_DWORD)v8 == 0;
  v11 = v182;
  if ( v10 )
    v11 = v9;
  v183 = v11;
  if ( v10 )
    v9 = aRustc9eb3afe9e;
  v152 = v9;
  v12 = gimli::common::SectionId::name(16);
  v13 = sub_200B78(a3, a2, v12, HIDWORD(v12));
  v178 = (const char *)HIDWORD(v13);
  v14 = (const char *)v13;
  v15 = (_DWORD)v13 == 0;
  v16 = v178;
  if ( v15 )
    v16 = v14;
  v179 = v16;
  if ( v15 )
    v14 = aRustc9eb3afe9e;
  v150 = v14;
  v17 = gimli::common::SectionId::name(17);
  v18 = sub_200B78(a3, a2, v17, HIDWORD(v17));
  v174 = (const char *)HIDWORD(v18);
  v19 = (const char *)v18;
  v20 = (_DWORD)v18 == 0;
  v21 = v174;
  if ( v20 )
    v21 = v19;
  v175 = v21;
  if ( v20 )
    v19 = aRustc9eb3afe9e;
  v148 = v19;
  v22 = gimli::common::SectionId::name(0);
  v23 = sub_200B78(a3, a2, v22, HIDWORD(v22));
  v170 = (const char *)HIDWORD(v23);
  v24 = (const char *)v23;
  v25 = (_DWORD)v23 == 0;
  v26 = v170;
  if ( v25 )
    v26 = v24;
  v171 = v26;
  if ( v25 )
    v24 = aRustc9eb3afe9e;
  v146 = v24;
  v27 = gimli::common::SectionId::name(1);
  v28 = sub_200B78(a3, a2, v27, HIDWORD(v27));
  v166 = (const char *)HIDWORD(v28);
  v29 = (const char *)v28;
  v30 = (_DWORD)v28 == 0;
  v31 = v166;
  if ( v30 )
    v31 = v29;
  v167 = v31;
  if ( v30 )
    v29 = aRustc9eb3afe9e;
  v144 = v29;
  v32 = gimli::common::SectionId::name(2);
  v33 = sub_200B78(a3, a2, v32, HIDWORD(v32));
  v34 = (const char *)v33;
  v35 = (_DWORD)v33 == 0;
  v36 = (const char *)HIDWORD(v33);
  if ( v35 )
    v36 = v34;
  v163 = v36;
  if ( v35 )
    v34 = aRustc9eb3afe9e;
  v37 = gimli::common::SectionId::name(7);
  v38 = sub_200B78(a3, a2, v37, HIDWORD(v37));
  v39 = (const char *)v38;
  v40 = (_DWORD)v38 == 0;
  v41 = (const char *)HIDWORD(v38);
  if ( v40 )
    v41 = v39;
  v160 = v41;
  if ( v40 )
    v39 = aRustc9eb3afe9e;
  v42 = gimli::common::SectionId::name(8);
  v43 = sub_200B78(a3, a2, v42, HIDWORD(v42));
  v44 = HIDWORD(v43);
  v45 = (const char *)v43;
  if ( !(_DWORD)v43 )
  {
    v44 = 0;
    v45 = aRustc9eb3afe9e;
  }
  v157 = sub_1BD314((int)a3, a2);
  v142 = v46;
  if ( v157 )
  {
    v47 = gimli::common::SectionId::name(18);
    v48 = sub_200B78(a3, a2, v47, HIDWORD(v47));
    v49 = HIDWORD(v48);
    v50 = (const char *)v48;
    if ( !(_DWORD)v48 )
    {
      v49 = 0;
      v50 = aRustc9eb3afe9e;
    }
    v51 = gimli::common::SectionId::name(19);
    v52 = sub_200B78(a3, a2, v51, HIDWORD(v51));
    v53 = HIDWORD(v52);
    v54 = (const char *)v52;
    if ( !(_DWORD)v52 )
    {
      v53 = 0;
      v54 = aRustc9eb3afe9e;
    }
    v55 = gimli::common::SectionId::name(21);
    v56 = sub_200B78(a3, a2, v55, HIDWORD(v55));
    LOBYTE(v192[27]) = 0;
    if ( !(_DWORD)v56 )
      v56 = 0;
    v192[26] = 0;
    v192[21] = v49;
    v192[22] = v54;
    v192[23] = v53;
    v192[19] = v142;
    v192[18] = v157;
    v192[15] = v160;
    v192[13] = v163;
    v192[11] = v167;
    v192[10] = v144;
    v192[9] = v171;
    v192[8] = v146;
    v192[7] = v175;
    v192[6] = v148;
    v192[5] = v179;
    v192[4] = v150;
    v192[3] = v183;
    v192[2] = v152;
    v192[1] = v187;
    v192[20] = v50;
    v192[17] = v44;
    v192[16] = v45;
    v192[14] = v39;
    v192[12] = v34;
    v192[0] = v154;
    v192[25] = HIDWORD(v56);
    if ( !(_DWORD)v56 )
      LODWORD(v56) = aRustc9eb3afe9e;
    v192[24] = v56;
    v188 = *(_DWORD *)(a4 + 24);
    if ( v188 )
    {
      memcpy(dest, (const void *)a4, 0x50u);
      v57 = gimli::common::SectionId::name(10);
      v58 = sub_200B78(dest, a2, v57, HIDWORD(v57));
      v184 = (const char *)HIDWORD(v58);
      v59 = (const char *)v58;
      v60 = (_DWORD)v58 == 0;
      v61 = v184;
      if ( v60 )
        v61 = v59;
      v185 = v61;
      if ( v60 )
        v59 = aRustc9eb3afe9e;
      v153 = v59;
      v62 = gimli::common::SectionId::name(11);
      v63 = sub_200B78(dest, a2, v62, HIDWORD(v62));
      v180 = (const char *)HIDWORD(v63);
      v64 = (const char *)v63;
      v65 = (_DWORD)v63 == 0;
      v66 = v180;
      if ( v65 )
        v66 = v64;
      v181 = v66;
      if ( v65 )
        v64 = aRustc9eb3afe9e;
      v151 = v64;
      v67 = gimli::common::SectionId::name(16);
      v68 = sub_200B78(dest, a2, v67, HIDWORD(v67));
      v176 = (const char *)HIDWORD(v68);
      v69 = (const char *)v68;
      v70 = (_DWORD)v68 == 0;
      v71 = v176;
      if ( v70 )
        v71 = v69;
      v177 = v71;
      if ( v70 )
        v69 = aRustc9eb3afe9e;
      v149 = v69;
      v72 = gimli::common::SectionId::name(17);
      v73 = sub_200B78(dest, a2, v72, HIDWORD(v72));
      v172 = (const char *)HIDWORD(v73);
      v74 = (const char *)v73;
      v75 = (_DWORD)v73 == 0;
      v76 = v172;
      if ( v75 )
        v76 = v74;
      v173 = v76;
      if ( v75 )
        v74 = aRustc9eb3afe9e;
      v147 = v74;
      v77 = gimli::common::SectionId::name(0);
      v78 = sub_200B78(dest, a2, v77, HIDWORD(v77));
      v168 = (const char *)HIDWORD(v78);
      v79 = (const char *)v78;
      v80 = (_DWORD)v78 == 0;
      v81 = v168;
      if ( v80 )
        v81 = v79;
      v169 = v81;
      if ( v80 )
        v79 = aRustc9eb3afe9e;
      v145 = v79;
      v82 = gimli::common::SectionId::name(1);
      v83 = sub_200B78(dest, a2, v82, HIDWORD(v82));
      v164 = (const char *)HIDWORD(v83);
      v84 = (const char *)v83;
      v85 = (_DWORD)v83 == 0;
      v86 = v164;
      if ( v85 )
        v86 = v84;
      v165 = v86;
      if ( v85 )
        v84 = aRustc9eb3afe9e;
      v143 = v84;
      v87 = gimli::common::SectionId::name(2);
      v88 = sub_200B78(dest, a2, v87, HIDWORD(v87));
      v161 = (const char *)HIDWORD(v88);
      v89 = (const char *)v88;
      v90 = (_DWORD)v88 == 0;
      v91 = v161;
      if ( v90 )
        v91 = v89;
      v162 = v91;
      if ( v90 )
        v89 = aRustc9eb3afe9e;
      v141 = v89;
      v92 = gimli::common::SectionId::name(7);
      v93 = sub_200B78(dest, a2, v92, HIDWORD(v92));
      v94 = (const char *)v93;
      v95 = (_DWORD)v93 == 0;
      v96 = (const char *)HIDWORD(v93);
      if ( v95 )
        v96 = v94;
      v158 = v96;
      if ( v95 )
        v94 = aRustc9eb3afe9e;
      v97 = gimli::common::SectionId::name(8);
      v98 = sub_200B78(dest, a2, v97, HIDWORD(v97));
      v99 = (const char *)v98;
      v100 = (_DWORD)v98 == 0;
      v101 = (const char *)HIDWORD(v98);
      if ( v100 )
        v101 = v99;
      v155 = v101;
      if ( v100 )
        v99 = aRustc9eb3afe9e;
      v102 = gimli::common::SectionId::name(9);
      v103 = sub_200B78(dest, a2, v102, HIDWORD(v102));
      v104 = HIDWORD(v103);
      v105 = (const char *)v103;
      if ( !(_DWORD)v103 )
      {
        v104 = 0;
        v105 = aRustc9eb3afe9e;
      }
      v106 = gimli::common::SectionId::name(18);
      v107 = sub_200B78(dest, a2, v106, HIDWORD(v106));
      v108 = HIDWORD(v107);
      v109 = (const char *)v107;
      if ( !(_DWORD)v107 )
      {
        v108 = 0;
        v109 = aRustc9eb3afe9e;
      }
      v110 = gimli::common::SectionId::name(19);
      v111 = sub_200B78(dest, a2, v110, HIDWORD(v110));
      v112 = HIDWORD(v111);
      v113 = (const char *)v111;
      if ( !(_DWORD)v111 )
      {
        v112 = 0;
        v113 = aRustc9eb3afe9e;
      }
      v114 = gimli::common::SectionId::name(21);
      v115 = sub_200B78(dest, a2, v114, HIDWORD(v114));
      LOBYTE(v207[29]) = 0;
      if ( !(_DWORD)v115 )
        v115 = 0;
      v207[28] = 0;
      v207[19] = v155;
      v207[17] = v158;
      v207[15] = v162;
      v207[14] = v141;
      v207[13] = v165;
      v207[12] = v143;
      v207[11] = v169;
      v207[10] = v145;
      v207[9] = v173;
      v207[8] = v147;
      v207[7] = v177;
      v207[6] = v149;
      v207[5] = v181;
      v207[4] = v151;
      v207[3] = v185;
      v207[25] = v112;
      v207[24] = v113;
      v207[23] = v108;
      v207[22] = v109;
      v207[21] = v104;
      v207[20] = v105;
      v207[18] = v99;
      v207[16] = v94;
      v207[2] = v153;
      v207[27] = HIDWORD(v115);
      v116 = aRustc9eb3afe9e;
      if ( (_DWORD)v115 )
        v116 = (const char *)v115;
      v207[26] = v116;
      v207[1] = 1;
      v207[0] = 1;
      v117 = (void *)_rust_alloc(0x78u);
      if ( !v117 )
        alloc::alloc::handle_alloc_error();
      v118 = v117;
      memcpy(v117, v207, 0x78u);
      v192[26] = v118;
      if ( dest[16] )
        _rust_dealloc((void *)dest[17]);
    }
    memcpy(&v207[2], v192, 0x70u);
    v207[1] = 1;
    v207[0] = 1;
    v119 = (_DWORD *)_rust_alloc(0x78u);
    v120 = v188;
    if ( v188 )
      v120 = 1;
    if ( !v119 )
      alloc::alloc::handle_alloc_error();
    v121 = v119;
    memcpy(v119, v207, 0x78u);
    sub_1C2A08((int)dest, v121);
    if ( dest[2] )
    {
      v191 = dest[2];
      v202 = dest[3];
      v203 = dest[4];
      v204 = dest[5];
      v205 = dest[6];
      v206 = dest[7];
      v197 = dest[3];
      v198 = dest[4];
      v199 = dest[5];
      v200 = dest[6];
      v201 = dest[7];
      v186 = (void *)dest[0];
      v194 = (_DWORD *)dest[0];
      v196 = dest[2];
      v122 = *(unsigned int **)(dest[7] + 112);
      v195 = dest[1];
      if ( !v122 )
      {
        v128 = 0;
        v133 = (void *)dest[0];
        if ( !dest[0] )
        {
LABEL_108:
          v194 = v128;
          v135 = v195;
          v136 = v198;
          v137 = v199;
          v138 = v200;
          v139 = v201;
          dest[26] = v197;
          dest[27] = v198;
          dest[28] = v199;
          dest[29] = v200;
          dest[30] = v201;
          dest[20] = v197;
          dest[21] = v198;
          dest[22] = v199;
          dest[23] = v200;
          dest[24] = v201;
          a1[3] = v197;
          a1[4] = v136;
          a1[5] = v137;
          a1[6] = v138;
          a1[7] = v139;
          memcpy(a1 + 8, a3, 0x50u);
          *a1 = v128;
          a1[1] = v135;
          a1[2] = v191;
          return;
        }
LABEL_107:
        sub_1AFA08((int)v133);
        _rust_dealloc(v133);
        goto LABEL_108;
      }
      do
        v123 = __ldrex(v122);
      while ( __strex(v123 + 1, v122) );
      if ( v123 <= -1 )
        __und(0xFDEEu);
      sub_1C2A08((int)v207, v122);
      if ( v207[2] )
      {
        v202 = v207[3];
        v203 = v207[4];
        v204 = v207[5];
        v205 = v207[6];
        v206 = v207[7];
        dest[3] = v207[3];
        dest[4] = v207[4];
        dest[5] = v207[5];
        dest[6] = v207[6];
        dest[7] = v207[7];
        dest[2] = v207[2];
        dest[1] = v207[1];
        dest[0] = v207[0];
        v124 = (_DWORD *)_rust_alloc(0x20u);
        if ( !v124 )
          alloc::alloc::handle_alloc_error();
        v125 = dest[1];
        v126 = dest[2];
        v127 = dest[3];
        v128 = v124;
        *v124 = dest[0];
        v124[1] = v125;
        v124[2] = v126;
        v124[3] = v127;
        v129 = v124 + 4;
        v130 = dest[5];
        v131 = dest[6];
        v132 = dest[7];
        *v129 = dest[4];
        v129[1] = v130;
        v129[2] = v131;
        v129[3] = v132;
        v133 = v186;
        if ( !v186 )
          goto LABEL_108;
        goto LABEL_107;
      }
      sub_1AFA08((int)&v194);
    }
    a1[2] = 0;
    v134 = a3;
    if ( v120 )
    {
LABEL_115:
      if ( !*((_DWORD *)v134 + 16) )
        return;
LABEL_116:
      _rust_dealloc(*((void **)v134 + 17));
      return;
    }
  }
  else
  {
    v188 = *(_DWORD *)(a4 + 24);
    a1[2] = 0;
    v134 = a3;
  }
  v140 = v188 == 0;
  if ( v188 )
    v140 = *(_DWORD *)(a4 + 64) == 0;
  if ( v140 )
    goto LABEL_115;
  _rust_dealloc(*(void **)(a4 + 68));
  if ( *((_DWORD *)v134 + 16) )
    goto LABEL_116;
}
