unsigned int __fastcall sub_186350(unsigned int *a1, char a2, char a3, _BYTE *a4, int a5)
{
  unsigned int v5; // lr
  int v7; // r6
  unsigned int v8; // r8
  unsigned int v9; // r3
  unsigned int v10; // r9
  unsigned int v11; // r7
  int v12; // r1
  unsigned int v13; // r5
  unsigned int v14; // r4
  unsigned int v15; // r0
  int v16; // lr
  int v17; // r5
  unsigned int v18; // r2
  int v19; // r10
  int v20; // r7
  int v21; // r6
  int v22; // r5
  int v23; // r2
  int v24; // lr
  int v25; // r2
  int v26; // r1
  int v27; // r0
  int v28; // r3
  int v29; // r8
  int v30; // r12
  int v31; // r4
  int v32; // r7
  int v33; // r3
  int v34; // r8
  int v35; // r10
  int v36; // r5
  int v37; // lr
  int v38; // r1
  int v39; // r6
  int v40; // r3
  int v41; // r1
  int v42; // r9
  int v43; // r0
  int v44; // r2
  int v45; // r6
  int v46; // r7
  int v47; // r11
  int v48; // lr
  int v49; // r6
  int v50; // r3
  int v51; // r4
  int v52; // r1
  int v53; // lr
  int v54; // r9
  int v55; // r3
  int v56; // r11
  int v57; // r0
  int v58; // r6
  int v59; // r12
  int v60; // lr
  int v61; // r2
  int v62; // r11
  int v63; // r3
  int v64; // r4
  int v65; // r9
  int v66; // r12
  int v67; // lr
  int v68; // r6
  int v69; // r2
  int v70; // r7
  int v71; // r5
  int v72; // r9
  unsigned int v73; // r12
  int v74; // r3
  unsigned int v75; // lr
  int v76; // r6
  unsigned int v77; // r1
  int v78; // r4
  int v79; // r8
  int v80; // r3
  int v81; // r1
  int v82; // r10
  int v83; // r0
  int v84; // r2
  int v85; // r8
  int v86; // r9
  int v87; // r11
  int v88; // lr
  int v89; // r8
  int v90; // r3
  int v91; // r4
  int v92; // r1
  int v93; // lr
  int v94; // r10
  int v95; // r3
  int v96; // r11
  int v97; // r0
  int v98; // r8
  int v99; // r12
  int v100; // lr
  int v101; // r2
  int v102; // r11
  int v103; // r3
  int v104; // r4
  int v105; // r10
  int v106; // r12
  int v107; // lr
  int v108; // r8
  int v109; // r2
  int v110; // r5
  int v111; // r8
  int v112; // r9
  unsigned int v113; // r12
  int v114; // r3
  unsigned int v115; // lr
  unsigned int v116; // r1
  int v117; // r4
  int v118; // r7
  int v119; // r3
  int v120; // r1
  int v121; // r10
  int v122; // r0
  int v123; // r2
  int v124; // r7
  int v125; // r9
  int v126; // r11
  int v127; // lr
  int v128; // r7
  int v129; // r3
  int v130; // r4
  int v131; // r1
  int v132; // lr
  int v133; // r10
  int v134; // r3
  int v135; // r11
  int v136; // r0
  int v137; // r7
  int v138; // r12
  int v139; // lr
  int v140; // r2
  int v141; // r11
  int v142; // r3
  int v143; // r4
  int v144; // r10
  int v145; // r12
  int v146; // lr
  int v147; // r7
  int v148; // r2
  int v149; // r7
  int v150; // r11
  unsigned int v151; // r0
  int v152; // r5
  int v153; // r2
  int v154; // r6
  int v155; // r3
  unsigned int v156; // r7
  unsigned int v157; // r4
  unsigned int result; // r0
  int v159; // r4
  int v160; // [sp+4h] [bp-A0h]
  int v161; // [sp+4h] [bp-A0h]
  int v162; // [sp+4h] [bp-A0h]
  int v163; // [sp+4h] [bp-A0h]
  unsigned int v164; // [sp+10h] [bp-94h]
  unsigned int v165; // [sp+10h] [bp-94h]
  int v166; // [sp+14h] [bp-90h]
  int v167; // [sp+14h] [bp-90h]
  int v168; // [sp+14h] [bp-90h]
  int v169; // [sp+18h] [bp-8Ch]
  int v170; // [sp+18h] [bp-8Ch]
  int v171; // [sp+1Ch] [bp-88h]
  int v172; // [sp+1Ch] [bp-88h]
  unsigned int v173; // [sp+20h] [bp-84h]
  int v174; // [sp+20h] [bp-84h]
  int v175; // [sp+24h] [bp-80h]
  int v176; // [sp+24h] [bp-80h]
  unsigned int v177; // [sp+28h] [bp-7Ch]
  int v178; // [sp+28h] [bp-7Ch]
  unsigned int v179; // [sp+28h] [bp-7Ch]
  unsigned int v180; // [sp+2Ch] [bp-78h]
  int v181; // [sp+2Ch] [bp-78h]
  int v182; // [sp+30h] [bp-74h]
  int v183; // [sp+30h] [bp-74h]
  unsigned int v184; // [sp+34h] [bp-70h]
  unsigned int v185; // [sp+34h] [bp-70h]
  int v186; // [sp+38h] [bp-6Ch]
  int v187; // [sp+38h] [bp-6Ch]
  int v188; // [sp+38h] [bp-6Ch]
  unsigned int v189; // [sp+3Ch] [bp-68h]
  unsigned int v190; // [sp+3Ch] [bp-68h]
  int v191; // [sp+40h] [bp-64h]
  int v192; // [sp+40h] [bp-64h]
  int v193; // [sp+44h] [bp-60h]
  int v194; // [sp+44h] [bp-60h]
  int v195; // [sp+48h] [bp-5Ch]
  int v196; // [sp+48h] [bp-5Ch]
  unsigned int v197; // [sp+4Ch] [bp-58h]
  unsigned int v198; // [sp+4Ch] [bp-58h]
  int v199; // [sp+50h] [bp-54h]
  int v200; // [sp+50h] [bp-54h]
  int v201; // [sp+50h] [bp-54h]
  unsigned int v202; // [sp+54h] [bp-50h]
  unsigned int v203; // [sp+54h] [bp-50h]
  int v204; // [sp+58h] [bp-4Ch]
  int v205; // [sp+58h] [bp-4Ch]
  int v206; // [sp+5Ch] [bp-48h]
  int v207; // [sp+5Ch] [bp-48h]
  int v208; // [sp+60h] [bp-44h]
  int v209; // [sp+64h] [bp-40h]
  int v210; // [sp+64h] [bp-40h]
  int v211; // [sp+68h] [bp-3Ch]
  int v212; // [sp+6Ch] [bp-38h]
  int v214; // [sp+74h] [bp-30h]
  int v215; // [sp+78h] [bp-2Ch]
  int v216; // [sp+7Ch] [bp-28h]
  int v217; // [sp+80h] [bp-24h]
  int v218; // [sp+84h] [bp-20h]
  _QWORD *v219; // [sp+8Ch] [bp-18h]

  v5 = a1[8];
  *((_BYTE *)a1 + v5) = (128 >> a3) | a2 & -(128 >> a3);
  memset((char *)a1 + v5 + 1, 0, 31 - v5);
  v211 = a1[10];
  v212 = a1[9];
  v208 = a1[11];
  v219 = a1 + 4;
  v175 = a1[13];
  v209 = a1[12];
  v173 = a1[15];
  v206 = a1[14];
  v169 = a1[17];
  v180 = a1[16];
  v195 = a1[18];
  v214 = 2;
  v199 = a1[19];
  v166 = a1[20];
  v171 = a1[21];
  v7 = a1[28];
  v197 = a1[22];
  v177 = a1[32];
  v164 = a1[23];
  v202 = a1[24];
  v191 = a1[25];
  v182 = a1[26];
  v186 = a1[27];
  v193 = a1[29];
  v184 = a1[30];
  v189 = a1[31];
  while ( 1 )
  {
    v8 = bswap32(a1[6]);
    v9 = bswap32(a1[2]);
    v160 = v180 ^ v177 ^ v202;
    v10 = bswap32(a1[7]);
    v204 = v175 ^ v193 ^ v171;
    v11 = bswap32(a1[5]);
    v12 = v209 ^ v7 ^ v166 ^ v160;
    v13 = bswap32(a1[3]);
    v14 = bswap32(a1[4]);
    v216 = v9 ^ v208;
    v215 = v10 ^ v9 ^ v166;
    v15 = bswap32(a1[1]);
    v178 = v177 ^ v11;
    v16 = v209 ^ v13;
    v17 = v13 ^ v10;
    v210 = v16;
    v18 = bswap32(*a1);
    v218 = v7 ^ v15 ^ v8;
    v19 = v206 ^ v184 ^ v197;
    v172 = __ROR4__(v17 ^ v171 ^ v12, 31);
    v194 = __ROR4__(v193 ^ v8 ^ v10 ^ v9 ^ v12, 30);
    v167 = v173 ^ v189 ^ v164;
    v217 = v19 ^ v11 ^ v164;
    v185 = __ROR4__(v17 ^ v184 ^ v204, 30);
    v20 = v11 ^ v206;
    v176 = v175 ^ v14 ^ v12;
    v21 = v186 ^ v199 ^ v208 ^ v160;
    v200 = v15 ^ v199;
    v22 = v18 ^ v212;
    v23 = v18 ^ v10;
    v187 = v186 ^ v23;
    v207 = v15 ^ v211;
    v24 = v195 ^ v23;
    v190 = __ROR4__(v14 ^ v189 ^ v19, 30);
    v25 = v195 ^ v182 ^ v211;
    v26 = v182 ^ v8 ^ v10;
    v27 = v191 ^ v8;
    v198 = __ROR4__(v14 ^ v197 ^ v204, 31);
    v28 = v191 ^ v169 ^ v212 ^ v160;
    v174 = v19 ^ v173 ^ v8;
    v29 = v167 ^ v8 ^ v202;
    v181 = v167 ^ v180 ^ v10;
    v30 = v204 ^ v20;
    v165 = __ROR4__(v217, 31);
    v179 = __ROR4__(v167 ^ v178, 30);
    v168 = v215 ^ v21;
    v203 = __ROR4__(v29, 31);
    v170 = v10 ^ v169 ^ v160;
    v192 = v160 ^ v27;
    v31 = v160 ^ v22;
    v32 = v207 ^ v28;
    v196 = v24 ^ v28;
    v183 = v28 ^ v26;
    v33 = v216 ^ v25;
    v188 = v25 ^ v187;
    v205 = v21 ^ v218;
    v201 = v200 ^ v25;
    v34 = 0;
    v35 = -533497832;
    v36 = v210 ^ v21;
    v37 = v174;
    v38 = v181;
    v39 = v176;
    v161 = 809079974;
    while ( 1 )
    {
      v40 = v33 ^ v36;
      v41 = v38 ^ v39;
      v42 = v40 ^ v31 & v36;
      v43 = (v31 | v32) ^ v36;
      v44 = (v30 | v37) ^ v39;
      v45 = v39 & v30;
      v46 = ~v32 ^ v31 & v36;
      v47 = v46 | v42;
      v48 = ~v37 ^ v45;
      v49 = v45 ^ v41;
      v50 = v40 & v43 ^ v46;
      v51 = v31 ^ (v46 | v42);
      v52 = v41 & v44 ^ v48;
      v53 = v48 | v49;
      v54 = v42 ^ v50;
      v55 = v50 & v47;
      v56 = v47 ^ ~v43;
      v57 = v52 & v53;
      v58 = v49 ^ v52 ^ v51;
      v59 = v30 ^ v53 ^ v56;
      v60 = v53 ^ ~v44 ^ v55;
      v61 = v54 ^ v57;
      v62 = v59 ^ __ROR4__(v56, 30);
      v63 = v60 ^ __ROR4__(v55, 30);
      v64 = v58 ^ __ROR4__(v51, 30);
      v65 = v54 ^ v57 ^ __ROR4__(v54, 30);
      ++v34;
      v66 = v62 ^ __ROR4__(v59, 18);
      v67 = v63 ^ __ROR4__(v60, 18);
      v68 = v64 ^ __ROR4__(v58, 18);
      v69 = v65 ^ __ROR4__(v61, 18);
      v32 = v66 ^ __ROR4__(v62, 22);
      v33 = v67 ^ __ROR4__(v63, 22);
      v31 = v68 ^ __ROR4__(v64, 22) ^ v161;
      v30 = __ROR4__(v66, 31);
      v37 = __ROR4__(v67, 31);
      v39 = v35 ^ __ROR4__(v68, 31);
      v36 = v69 ^ __ROR4__(v65, 22);
      v38 = __ROR4__(v69, 31);
      if ( v34 == 8 )
        break;
      v161 = dword_2A1FE8[v34];
      v35 = dword_2A2008[v34];
    }
    v211 = v32;
    v70 = 23617341;
    v206 = v30;
    v208 = v33;
    v173 = v37;
    v209 = v36;
    v71 = 0;
    v180 = v38;
    v212 = v31;
    v175 = v39;
    v162 = -1226960659;
    v72 = v196;
    v73 = v198;
    v74 = v201;
    v75 = v165;
    v76 = v168;
    v77 = v203;
    v78 = v170;
    v79 = v172;
    while ( 1 )
    {
      v80 = v74 ^ v76;
      v81 = v77 ^ v79;
      v82 = v80 ^ v78 & v76;
      v83 = (v78 | v72) ^ v76;
      v84 = (v73 | v75) ^ v79;
      v85 = v79 & v73;
      v86 = ~v72 ^ v78 & v76;
      v87 = v86 | v82;
      v88 = ~v75 ^ v85;
      v89 = v85 ^ v81;
      v90 = v80 & v83 ^ v86;
      v91 = v78 ^ (v86 | v82);
      v92 = v81 & v84 ^ v88;
      v93 = v88 | v89;
      v94 = v82 ^ v90;
      v95 = v90 & v87;
      v96 = v87 ^ ~v83;
      v97 = v92 & v93;
      v98 = v89 ^ v92 ^ v91;
      v99 = v73 ^ v93 ^ v96;
      v100 = v93 ^ ~v84 ^ v95;
      v101 = v94 ^ v97;
      v102 = v99 ^ __ROR4__(v96, 30);
      v103 = v100 ^ __ROR4__(v95, 30);
      v104 = v98 ^ __ROR4__(v91, 30);
      v105 = v94 ^ v97 ^ __ROR4__(v94, 30);
      ++v71;
      v106 = v102 ^ __ROR4__(v99, 18);
      v107 = v103 ^ __ROR4__(v100, 18);
      v108 = v104 ^ __ROR4__(v98, 18);
      v109 = v105 ^ __ROR4__(v101, 18);
      v72 = v106 ^ __ROR4__(v102, 22);
      v74 = v107 ^ __ROR4__(v103, 22);
      v78 = v108 ^ __ROR4__(v104, 22) ^ v162;
      v73 = __ROR4__(v106, 31);
      v75 = __ROR4__(v107, 31);
      v79 = v70 ^ __ROR4__(v108, 31);
      v76 = v109 ^ __ROR4__(v105, 22);
      v77 = __ROR4__(v109, 31);
      if ( v71 == 8 )
        break;
      v162 = dword_2A2028[v71];
      v70 = dword_2A2048[v71];
    }
    v195 = v72;
    v197 = v73;
    v199 = v74;
    v110 = 0;
    v164 = v75;
    v166 = v76;
    v202 = v77;
    v169 = v78;
    v171 = v79;
    v111 = -497126719;
    v163 = -64955950;
    v7 = v205;
    v112 = v183;
    v113 = v185;
    v114 = v188;
    v115 = v190;
    v116 = v179;
    v117 = v192;
    v118 = v194;
    while ( 1 )
    {
      v119 = v114 ^ v7;
      v120 = v116 ^ v118;
      v121 = v119 ^ v117 & v7;
      v122 = (v117 | v112) ^ v7;
      v123 = (v113 | v115) ^ v118;
      v124 = v118 & v113;
      v125 = ~v112 ^ v117 & v7;
      v126 = v125 | v121;
      v127 = ~v115 ^ v124;
      v128 = v124 ^ v120;
      v129 = v119 & v122 ^ v125;
      v130 = v117 ^ (v125 | v121);
      v131 = v120 & v123 ^ v127;
      v132 = v127 | v128;
      v133 = v121 ^ v129;
      v134 = v129 & v126;
      v135 = v126 ^ ~v122;
      v136 = v131 & v132;
      v137 = v128 ^ v131 ^ v130;
      v138 = v113 ^ v132 ^ v135;
      v139 = v132 ^ ~v123 ^ v134;
      v140 = v133 ^ v136;
      v141 = v138 ^ __ROR4__(v135, 30);
      v142 = v139 ^ __ROR4__(v134, 30);
      v143 = v137 ^ __ROR4__(v130, 30);
      v144 = v133 ^ v136 ^ __ROR4__(v133, 30);
      ++v110;
      v145 = v141 ^ __ROR4__(v138, 18);
      v146 = v142 ^ __ROR4__(v139, 18);
      v147 = v143 ^ __ROR4__(v137, 18);
      v148 = v144 ^ __ROR4__(v140, 18);
      v112 = v145 ^ __ROR4__(v141, 22);
      v114 = v146 ^ __ROR4__(v142, 22);
      v117 = v147 ^ __ROR4__(v143, 22) ^ v163;
      v113 = __ROR4__(v145, 31);
      v115 = __ROR4__(v146, 31);
      v118 = v111 ^ __ROR4__(v147, 31);
      v7 = v148 ^ __ROR4__(v144, 22);
      v116 = __ROR4__(v148, 31);
      if ( v110 == 8 )
        break;
      v163 = dword_2A2068[v110];
      v111 = dword_2A2088[v110];
    }
    v186 = v114;
    v182 = v112;
    v184 = v113;
    v189 = v115;
    *(_QWORD *)a1 = 0;
    *((_QWORD *)a1 + 1) = 0;
    v177 = v116;
    v191 = v117;
    v193 = v118;
    *v219 = 0;
    v219[1] = 0;
    if ( v214 == 1 )
      break;
    v214 = 1;
  }
  v149 = v195 ^ v211 ^ v112;
  v150 = v197 ^ v206 ^ v113;
  v151 = v175 ^ v193 ^ v171;
  v152 = v117 ^ v169 ^ v212;
  v153 = v199 ^ v208 ^ v114;
  v154 = v7 ^ v166 ^ v209;
  a4[3] = v152;
  v155 = v115 ^ v164 ^ v173;
  a4[7] = v149;
  a4[11] = v153;
  a4[15] = v154;
  a4[19] = v151;
  a4[23] = v150;
  a4[27] = v155;
  a4[1] = BYTE2(v152);
  a4[2] = BYTE1(v152);
  a4[4] = HIBYTE(v149);
  a4[5] = BYTE2(v149);
  a4[6] = BYTE1(v149);
  *a4 = HIBYTE(v152);
  v156 = HIBYTE(v151);
  a4[8] = (v199 ^ v208 ^ (unsigned int)v186) >> 24;
  a4[9] = BYTE2(v153);
  a4[10] = BYTE1(v153);
  v157 = HIWORD(v151);
  result = v151 >> 8;
  a4[13] = BYTE2(v154);
  a4[12] = HIBYTE(v154);
  a4[14] = BYTE1(v154);
  a4[16] = v156;
  a4[17] = v157;
  a4[18] = result;
  a4[20] = HIBYTE(v150);
  a4[21] = BYTE2(v150);
  a4[22] = BYTE1(v150);
  a4[24] = HIBYTE(v155);
  a4[25] = BYTE2(v155);
  a4[26] = BYTE1(v155);
  if ( a5 == 8 )
  {
    v159 = v180 ^ v116 ^ v202;
    a4[31] = v159;
    a4[28] = HIBYTE(v159);
    a4[29] = BYTE2(v159);
    a4[30] = BYTE1(v159);
  }
  return result;
}
