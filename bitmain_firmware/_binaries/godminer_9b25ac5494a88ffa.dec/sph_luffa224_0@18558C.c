unsigned int __fastcall sph_luffa224_0(unsigned int result, char *a2, size_t a3)
{
  unsigned int v3; // r4
  unsigned int *v4; // r10
  size_t v5; // r3
  char *v6; // r0
  const void *v7; // r1
  int v8; // r0
  int v9; // r9
  int v10; // lr
  unsigned int v11; // r10
  int v12; // r7
  int v13; // r4
  int v14; // r6
  unsigned int v15; // r8
  int v16; // r11
  unsigned int v17; // r6
  int v18; // r2
  int v19; // r3
  int v20; // lr
  int v21; // r11
  unsigned int v22; // r12
  int v23; // r5
  int v24; // r1
  unsigned int v25; // r0
  int v26; // r12
  int v27; // r3
  int v28; // r5
  int v29; // lr
  int v30; // r4
  int v31; // r8
  int v32; // r10
  int v33; // r7
  unsigned int v34; // r2
  int v35; // r1
  int v36; // lr
  int v37; // r6
  int v38; // r3
  int v39; // r4
  int v40; // r3
  int v41; // r1
  int v42; // r11
  int v43; // r0
  int v44; // r2
  int v45; // r5
  int v46; // r6
  int v47; // r9
  int v48; // lr
  int v49; // r5
  int v50; // r3
  int v51; // r4
  int v52; // r1
  int v53; // lr
  int v54; // r11
  int v55; // r3
  int v56; // r9
  int v57; // r0
  int v58; // r5
  int v59; // r12
  int v60; // lr
  int v61; // r2
  int v62; // r9
  int v63; // r3
  int v64; // r4
  int v65; // r11
  int v66; // r12
  int v67; // lr
  int v68; // r5
  int v69; // r2
  int v70; // r7
  int v71; // r9
  unsigned int v72; // r12
  int v73; // r3
  unsigned int v74; // lr
  int v75; // r5
  unsigned int v76; // r1
  int v77; // r4
  int v78; // r6
  int v79; // r8
  int v80; // r3
  int v81; // r1
  int v82; // r10
  int v83; // r0
  int v84; // r2
  int v85; // r6
  int v86; // r8
  int v87; // r11
  int v88; // lr
  int v89; // r6
  int v90; // r3
  int v91; // r4
  int v92; // r1
  int v93; // lr
  int v94; // r10
  int v95; // r3
  int v96; // r11
  int v97; // r0
  int v98; // r6
  int v99; // r12
  int v100; // lr
  int v101; // r2
  int v102; // r11
  int v103; // r3
  int v104; // r4
  int v105; // r10
  int v106; // r12
  int v107; // lr
  int v108; // r6
  int v109; // r2
  int v110; // r4
  int v111; // r8
  unsigned int v112; // r12
  int v113; // r3
  unsigned int v114; // lr
  unsigned int v115; // r1
  int v116; // r5
  int v117; // r6
  int v118; // r7
  int v119; // r3
  int v120; // r1
  int v121; // r9
  int v122; // r0
  int v123; // r2
  int v124; // r5
  int v125; // r8
  int v126; // r10
  int v127; // lr
  int v128; // r5
  int v129; // r3
  int v130; // r6
  int v131; // r1
  int v132; // lr
  int v133; // r9
  int v134; // r3
  int v135; // r10
  int v136; // r5
  int v137; // r6
  int v138; // r12
  int v139; // lr
  int v140; // r2
  int v141; // r5
  int v142; // r10
  int v143; // r3
  int v144; // r9
  int v145; // r12
  int v146; // lr
  int v147; // r2
  size_t n; // [sp+0h] [bp-9Ch]
  int v149; // [sp+4h] [bp-98h]
  int v150; // [sp+4h] [bp-98h]
  int v151; // [sp+4h] [bp-98h]
  int v152; // [sp+4h] [bp-98h]
  unsigned int v153; // [sp+8h] [bp-94h]
  int v154; // [sp+8h] [bp-94h]
  char *src; // [sp+Ch] [bp-90h]
  unsigned int *v156; // [sp+10h] [bp-8Ch]
  int v157; // [sp+14h] [bp-88h]
  int v158; // [sp+18h] [bp-84h]
  int v159; // [sp+18h] [bp-84h]
  unsigned int v160; // [sp+1Ch] [bp-80h]
  unsigned int v161; // [sp+1Ch] [bp-80h]
  unsigned int v162; // [sp+1Ch] [bp-80h]
  unsigned int v163; // [sp+20h] [bp-7Ch]
  int v164; // [sp+20h] [bp-7Ch]
  unsigned int v165; // [sp+20h] [bp-7Ch]
  int v166; // [sp+24h] [bp-78h]
  int v167; // [sp+24h] [bp-78h]
  int v168; // [sp+28h] [bp-74h]
  int v169; // [sp+28h] [bp-74h]
  int v170; // [sp+2Ch] [bp-70h]
  int v171; // [sp+2Ch] [bp-70h]
  unsigned int v172; // [sp+30h] [bp-6Ch]
  unsigned int v173; // [sp+30h] [bp-6Ch]
  int v174; // [sp+34h] [bp-68h]
  int v175; // [sp+34h] [bp-68h]
  int v176; // [sp+38h] [bp-64h]
  int v177; // [sp+38h] [bp-64h]
  int v178; // [sp+3Ch] [bp-60h]
  int v179; // [sp+40h] [bp-5Ch]
  int v180; // [sp+40h] [bp-5Ch]
  int v181; // [sp+44h] [bp-58h]
  unsigned int v182; // [sp+44h] [bp-58h]
  int v183; // [sp+48h] [bp-54h]
  int v184; // [sp+48h] [bp-54h]
  unsigned int v185; // [sp+4Ch] [bp-50h]
  unsigned int v186; // [sp+4Ch] [bp-50h]
  int v187; // [sp+50h] [bp-4Ch]
  int v188; // [sp+50h] [bp-4Ch]
  int v189; // [sp+50h] [bp-4Ch]
  int v190; // [sp+54h] [bp-48h]
  int v191; // [sp+54h] [bp-48h]
  int v192; // [sp+54h] [bp-48h]
  unsigned int v193; // [sp+58h] [bp-44h]
  int v194; // [sp+58h] [bp-44h]
  unsigned int v195; // [sp+58h] [bp-44h]
  unsigned int v196; // [sp+5Ch] [bp-40h]
  int v197; // [sp+5Ch] [bp-40h]
  unsigned int v198; // [sp+5Ch] [bp-40h]
  int v199; // [sp+60h] [bp-3Ch]
  int v200; // [sp+60h] [bp-3Ch]
  int v201; // [sp+60h] [bp-3Ch]
  int v202; // [sp+64h] [bp-38h]
  int v203; // [sp+68h] [bp-34h]
  int v204; // [sp+68h] [bp-34h]
  int v205; // [sp+6Ch] [bp-30h]
  int v206; // [sp+70h] [bp-2Ch]
  int v207; // [sp+70h] [bp-2Ch]
  int v208; // [sp+74h] [bp-28h]
  int v209; // [sp+78h] [bp-24h]

  v3 = *(_DWORD *)(result + 32);
  v4 = (unsigned int *)result;
  n = a3;
  v5 = 32 - v3;
  src = a2;
  if ( 32 - v3 > a3 )
  {
    result = (unsigned int)memcpy((void *)(result + v3), a2, a3);
    v4[8] = v3 + n;
    return result;
  }
  v179 = *(_DWORD *)(result + 36);
  v157 = *(_DWORD *)(result + 40);
  v178 = *(_DWORD *)(result + 44);
  v181 = *(_DWORD *)(result + 48);
  v206 = *(_DWORD *)(result + 52);
  v203 = *(_DWORD *)(result + 56);
  v205 = *(_DWORD *)(result + 60);
  v202 = *(_DWORD *)(result + 64);
  v174 = *(_DWORD *)(result + 68);
  v168 = *(_DWORD *)(result + 72);
  v170 = *(_DWORD *)(result + 76);
  v199 = *(_DWORD *)(result + 80);
  v176 = *(_DWORD *)(result + 84);
  v193 = *(_DWORD *)(result + 88);
  v196 = *(_DWORD *)(result + 92);
  v172 = *(_DWORD *)(result + 96);
  v166 = *(_DWORD *)(result + 100);
  v183 = *(_DWORD *)(result + 104);
  v158 = *(_DWORD *)(result + 108);
  v187 = *(_DWORD *)(result + 112);
  v190 = *(_DWORD *)(result + 116);
  v185 = *(_DWORD *)(result + 120);
  v160 = *(_DWORD *)(result + 124);
  v163 = *(_DWORD *)(result + 128);
  if ( !a3 )
    goto LABEL_20;
  v156 = (unsigned int *)result;
  while ( 1 )
  {
    if ( v5 >= n )
      v5 = n;
    v6 = (char *)v156 + v3;
    v3 += v5;
    n -= v5;
    v7 = src;
    src += v5;
    result = (unsigned int)memcpy(v6, v7, v5);
    if ( v3 == 32 )
      break;
    if ( !n )
      goto LABEL_19;
LABEL_5:
    v5 = 32 - v3;
  }
  v8 = v181;
  v9 = v163 ^ v172 ^ v202;
  v10 = v181 ^ v199 ^ v187 ^ v9;
  v153 = bswap32(v156[2]);
  v11 = bswap32(v156[6]);
  v12 = v206 ^ v176 ^ v190;
  v182 = bswap32(v156[3]);
  v13 = v178 ^ v170 ^ v158 ^ v9;
  v14 = v13 ^ v187;
  v15 = bswap32(v156[7]);
  v16 = v13 ^ v199;
  v209 = v10 ^ v176;
  v149 = v166 ^ v174 ^ v179 ^ v9;
  v188 = v10 ^ v190 ^ v11 ^ v15 ^ v153;
  v200 = v14;
  v17 = bswap32(v156[4]);
  v191 = v16;
  v208 = v13 ^ v8;
  v18 = v196 ^ v205 ^ v160;
  v207 = v206 ^ v10;
  v19 = v203 ^ v193 ^ v185;
  v20 = v196 ^ v19;
  v21 = v193 ^ v12 ^ v17;
  v197 = v160 ^ v19 ^ v17;
  v22 = bswap32(v156[5]);
  v194 = v205 ^ v19;
  v23 = v20 ^ v22;
  v24 = v163 ^ v18 ^ v22;
  v161 = bswap32(*v156);
  v25 = bswap32(v156[1]);
  v26 = v22 ^ v12 ^ v203;
  v164 = v23;
  v204 = v200 ^ v25;
  v201 = v15 ^ v153 ^ v191;
  v27 = v183 ^ v157 ^ v168;
  v192 = __ROR4__(v188, 30);
  v177 = __ROR4__(v15 ^ v182 ^ v209, 31);
  v189 = v11 ^ v204;
  v184 = v15 ^ v183 ^ v149 ^ v11;
  v171 = v25 ^ v27 ^ v170;
  v175 = v15 ^ v174 ^ v9;
  v28 = v17 ^ v207;
  v169 = v15 ^ v161 ^ v149 ^ v168;
  v167 = v11 ^ v166 ^ v9;
  v159 = v15 ^ v161 ^ v27 ^ v158;
  v29 = v15 ^ v18 ^ v202;
  v180 = v161 ^ v9 ^ v179;
  v30 = v11 ^ v194;
  v186 = __ROR4__(v15 ^ v182 ^ v12 ^ v185, 30);
  v195 = __ROR4__(v21, 31);
  v162 = __ROR4__(v197, 30);
  v173 = __ROR4__(v172 ^ v18 ^ v11, 31);
  v31 = 0;
  v32 = -533497832;
  v33 = v182 ^ v208;
  v198 = __ROR4__(v164, 31);
  v34 = __ROR4__(v24, 30);
  v35 = v29;
  v165 = v34;
  v36 = v30;
  v37 = v25 ^ v149 ^ v157;
  v38 = v153 ^ v27 ^ v178;
  v39 = v180;
  v150 = 809079974;
  while ( 1 )
  {
    v40 = v38 ^ v33;
    v41 = v35 ^ v28;
    v42 = v40 ^ v39 & v33;
    v43 = (v39 | v37) ^ v33;
    v44 = (v26 | v36) ^ v28;
    v45 = v28 & v26;
    v46 = ~v37 ^ v39 & v33;
    v47 = v46 | v42;
    v48 = ~v36 ^ v45;
    v49 = v45 ^ v41;
    v50 = v40 & v43 ^ v46;
    v51 = v39 ^ (v46 | v42);
    v52 = v41 & v44 ^ v48;
    v53 = v48 | v49;
    v54 = v42 ^ v50;
    v55 = v50 & v47;
    v56 = v47 ^ ~v43;
    v57 = v52 & v53;
    v58 = v49 ^ v52 ^ v51;
    v59 = v26 ^ v53 ^ v56;
    v60 = v53 ^ ~v44 ^ v55;
    v61 = v54 ^ v57;
    v62 = v59 ^ __ROR4__(v56, 30);
    v63 = v60 ^ __ROR4__(v55, 30);
    v64 = v58 ^ __ROR4__(v51, 30);
    v65 = v54 ^ v57 ^ __ROR4__(v54, 30);
    ++v31;
    v66 = v62 ^ __ROR4__(v59, 18);
    v67 = v63 ^ __ROR4__(v60, 18);
    v68 = v64 ^ __ROR4__(v58, 18);
    v69 = v65 ^ __ROR4__(v61, 18);
    v37 = v66 ^ __ROR4__(v62, 22);
    v38 = v67 ^ __ROR4__(v63, 22);
    v39 = v68 ^ __ROR4__(v64, 22) ^ v150;
    v26 = __ROR4__(v66, 31);
    v36 = __ROR4__(v67, 31);
    v28 = v32 ^ __ROR4__(v68, 31);
    v33 = v69 ^ __ROR4__(v65, 22);
    v35 = __ROR4__(v69, 31);
    if ( v31 == 8 )
      break;
    v150 = dword_2A1B48[v31];
    v32 = dword_2A1B68[v31];
  }
  v202 = v35;
  v203 = v26;
  v181 = v33;
  v70 = 0;
  v157 = v37;
  v178 = v38;
  v205 = v36;
  v179 = v39;
  v206 = v28;
  v151 = -1226960659;
  v71 = 23617341;
  v72 = v195;
  v73 = v171;
  v74 = v198;
  v75 = v201;
  v76 = v173;
  v77 = v175;
  v78 = v177;
  v79 = v169;
  while ( 1 )
  {
    v80 = v73 ^ v75;
    v81 = v76 ^ v78;
    v82 = v80 ^ v77 & v75;
    v83 = (v77 | v79) ^ v75;
    v84 = (v72 | v74) ^ v78;
    v85 = v78 & v72;
    v86 = ~v79 ^ v77 & v75;
    v87 = v86 | v82;
    v88 = ~v74 ^ v85;
    v89 = v85 ^ v81;
    v90 = v80 & v83 ^ v86;
    v91 = v77 ^ (v86 | v82);
    v92 = v81 & v84 ^ v88;
    v93 = v88 | v89;
    v94 = v82 ^ v90;
    v95 = v90 & v87;
    v96 = v87 ^ ~v83;
    v97 = v92 & v93;
    v98 = v89 ^ v92 ^ v91;
    v99 = v72 ^ v93 ^ v96;
    v100 = v93 ^ ~v84 ^ v95;
    v101 = v94 ^ v97;
    v102 = v99 ^ __ROR4__(v96, 30);
    v103 = v100 ^ __ROR4__(v95, 30);
    v104 = v98 ^ __ROR4__(v91, 30);
    v105 = v94 ^ v97 ^ __ROR4__(v94, 30);
    ++v70;
    v106 = v102 ^ __ROR4__(v99, 18);
    v107 = v103 ^ __ROR4__(v100, 18);
    v108 = v104 ^ __ROR4__(v98, 18);
    v109 = v105 ^ __ROR4__(v101, 18);
    v79 = v106 ^ __ROR4__(v102, 22);
    v73 = v107 ^ __ROR4__(v103, 22);
    v77 = v108 ^ __ROR4__(v104, 22) ^ v151;
    v72 = __ROR4__(v106, 31);
    v74 = __ROR4__(v107, 31);
    v78 = v71 ^ __ROR4__(v108, 31);
    v75 = v109 ^ __ROR4__(v105, 22);
    v76 = __ROR4__(v109, 31);
    if ( v70 == 8 )
      break;
    v151 = dword_2A1B88[v70];
    v71 = dword_2A1BA8[v70];
  }
  v176 = v78;
  v168 = v79;
  v193 = v72;
  v170 = v73;
  v196 = v74;
  v199 = v75;
  v172 = v76;
  v174 = v77;
  v110 = 0;
  v152 = -64955950;
  v154 = -497126719;
  v111 = v184;
  v112 = v186;
  v113 = v159;
  v114 = v162;
  v115 = v165;
  v116 = v192;
  v117 = v167;
  v118 = v189;
  while ( 1 )
  {
    v119 = v113 ^ v118;
    v120 = v115 ^ v116;
    v121 = v119 ^ v117 & v118;
    v122 = (v117 | v111) ^ v118;
    v123 = (v112 | v114) ^ v116;
    v124 = v116 & v112;
    v125 = ~v111 ^ v117 & v118;
    v126 = v125 | v121;
    v127 = ~v114 ^ v124;
    v128 = v124 ^ v120;
    v129 = v119 & v122 ^ v125;
    v130 = v117 ^ (v125 | v121);
    v131 = v120 & v123 ^ v127;
    v132 = v127 | v128;
    v133 = v121 ^ v129;
    v134 = v129 & v126;
    v135 = v126 ^ ~v122;
    result = v131 & v132;
    v136 = v128 ^ v131 ^ v130;
    v137 = v136 ^ __ROR4__(v130, 30);
    v138 = v112 ^ v132 ^ v135;
    v139 = v132 ^ ~v123 ^ v134;
    v140 = v133 ^ result;
    v141 = v137 ^ __ROR4__(v136, 18);
    v142 = v138 ^ __ROR4__(v135, 30);
    v143 = v139 ^ __ROR4__(v134, 30);
    v144 = v133 ^ result ^ __ROR4__(v133, 30);
    ++v110;
    v145 = v142 ^ __ROR4__(v138, 18);
    v146 = v143 ^ __ROR4__(v139, 18);
    v147 = v144 ^ __ROR4__(v140, 18);
    v117 = v141 ^ __ROR4__(v137, 22) ^ v152;
    v111 = v145 ^ __ROR4__(v142, 22);
    v113 = v146 ^ __ROR4__(v143, 22);
    v116 = v154 ^ __ROR4__(v141, 31);
    v112 = __ROR4__(v145, 31);
    v114 = __ROR4__(v146, 31);
    v118 = v147 ^ __ROR4__(v144, 22);
    v115 = __ROR4__(v147, 31);
    if ( v110 == 8 )
      break;
    v152 = dword_2A1BC8[v110];
    v154 = dword_2A1BE8[v110];
  }
  v158 = v113;
  v3 = 0;
  v183 = v111;
  v185 = v112;
  v160 = v114;
  v187 = v118;
  v163 = v115;
  v166 = v117;
  v190 = v116;
  if ( n )
    goto LABEL_5;
LABEL_19:
  v4 = v156;
LABEL_20:
  v4[9] = v179;
  v4[10] = v157;
  v4[11] = v178;
  v4[12] = v181;
  v4[13] = v206;
  v4[14] = v203;
  v4[15] = v205;
  v4[16] = v202;
  v4[17] = v174;
  v4[18] = v168;
  v4[19] = v170;
  v4[20] = v199;
  v4[21] = v176;
  v4[22] = v193;
  v4[23] = v196;
  v4[24] = v172;
  v4[8] = v3;
  v4[25] = v166;
  v4[26] = v183;
  v4[27] = v158;
  v4[28] = v187;
  v4[29] = v190;
  v4[30] = v185;
  v4[31] = v160;
  v4[32] = v163;
  return result;
}
