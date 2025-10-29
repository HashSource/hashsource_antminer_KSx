int *__fastcall keccak::f1600(int *a1)
{
  int v1; // r3
  int *v2; // r1
  int v3; // r6
  int v4; // r4
  int v5; // lr
  int v6; // r2
  int v7; // r0
  unsigned int v8; // r11
  unsigned int v9; // r3
  unsigned int v10; // r8
  int v11; // r10
  unsigned int v12; // r12
  int v13; // r6
  unsigned int v14; // r1
  int v15; // r9
  __int64 v16; // r4
  unsigned int v17; // r2
  unsigned int v18; // r10
  unsigned int v19; // r0
  int v20; // lr
  unsigned int v21; // r3
  unsigned int v22; // r6
  unsigned int v23; // r12
  unsigned int v24; // r2
  unsigned int v25; // r3
  unsigned int v26; // r11
  unsigned int v27; // r8
  unsigned int v28; // r10
  unsigned int v29; // r1
  unsigned int v30; // lr
  unsigned int v31; // r0
  int v32; // r2
  unsigned int v33; // r3
  unsigned int v34; // r10
  unsigned int v35; // r11
  unsigned int v36; // lr
  unsigned int v37; // r9
  unsigned int v38; // r2
  unsigned int v39; // r8
  unsigned int v40; // r0
  unsigned int v41; // r1
  unsigned int v42; // r3
  unsigned int v43; // r1
  unsigned int v44; // lr
  unsigned int v45; // r8
  unsigned int v46; // r12
  unsigned int v47; // r7
  unsigned int v48; // r0
  unsigned int v49; // r2
  unsigned int v50; // r6
  unsigned int v51; // r2
  unsigned int v52; // r0
  unsigned int v53; // r6
  int v54; // r1
  int *v56; // [sp+0h] [bp-1A8h]
  int *v57; // [sp+4h] [bp-1A4h]
  unsigned int *v58; // [sp+8h] [bp-1A0h]
  int *v59; // [sp+Ch] [bp-19Ch]
  int *v60; // [sp+10h] [bp-198h]
  int *v61; // [sp+14h] [bp-194h]
  int *v62; // [sp+18h] [bp-190h]
  unsigned int *v63; // [sp+1Ch] [bp-18Ch]
  int *v64; // [sp+20h] [bp-188h]
  int *v65; // [sp+24h] [bp-184h]
  int *v67; // [sp+2Ch] [bp-17Ch]
  int *v68; // [sp+30h] [bp-178h]
  int *v69; // [sp+34h] [bp-174h]
  int *v70; // [sp+38h] [bp-170h]
  unsigned int *v71; // [sp+3Ch] [bp-16Ch]
  int *v72; // [sp+40h] [bp-168h]
  int *v73; // [sp+44h] [bp-164h]
  int *v74; // [sp+48h] [bp-160h]
  int *v75; // [sp+4Ch] [bp-15Ch]
  int *v76; // [sp+50h] [bp-158h]
  int *v77; // [sp+54h] [bp-154h]
  _DWORD *v78; // [sp+58h] [bp-150h]
  int *v79; // [sp+5Ch] [bp-14Ch]
  int *v80; // [sp+60h] [bp-148h]
  int v81; // [sp+64h] [bp-144h]
  int v82; // [sp+68h] [bp-140h]
  int v83; // [sp+6Ch] [bp-13Ch]
  int v84; // [sp+70h] [bp-138h]
  int v85; // [sp+74h] [bp-134h]
  int v86; // [sp+78h] [bp-130h]
  int v87; // [sp+7Ch] [bp-12Ch]
  int v88; // [sp+80h] [bp-128h]
  int v89; // [sp+84h] [bp-124h]
  int v90; // [sp+88h] [bp-120h]
  int v91; // [sp+8Ch] [bp-11Ch]
  int v92; // [sp+90h] [bp-118h]
  int v93; // [sp+94h] [bp-114h]
  int v94; // [sp+98h] [bp-110h]
  int v95; // [sp+9Ch] [bp-10Ch]
  unsigned int v96; // [sp+A0h] [bp-108h]
  int v97; // [sp+A4h] [bp-104h]
  unsigned int v98; // [sp+A8h] [bp-100h]
  int v99; // [sp+ACh] [bp-FCh]
  int v100; // [sp+B0h] [bp-F8h]
  unsigned int v101; // [sp+B4h] [bp-F4h]
  int v102; // [sp+B4h] [bp-F4h]
  int v103; // [sp+B8h] [bp-F0h]
  unsigned int v104; // [sp+BCh] [bp-ECh]
  int v105; // [sp+BCh] [bp-ECh]
  int v106; // [sp+C0h] [bp-E8h]
  unsigned int v107; // [sp+C4h] [bp-E4h]
  int v108; // [sp+C8h] [bp-E0h]
  unsigned int v109; // [sp+CCh] [bp-DCh]
  int v110; // [sp+CCh] [bp-DCh]
  int v111; // [sp+D0h] [bp-D8h]
  int v112; // [sp+D4h] [bp-D4h]
  unsigned int v113; // [sp+D4h] [bp-D4h]
  int v114; // [sp+D8h] [bp-D0h]
  int v115; // [sp+DCh] [bp-CCh]
  int v116; // [sp+E0h] [bp-C8h]
  unsigned int v117; // [sp+E4h] [bp-C4h]
  int v118; // [sp+E4h] [bp-C4h]
  unsigned int v119; // [sp+E8h] [bp-C0h]
  int v120; // [sp+E8h] [bp-C0h]
  unsigned int v121; // [sp+ECh] [bp-BCh]
  int v122; // [sp+ECh] [bp-BCh]
  int v123; // [sp+F0h] [bp-B8h]
  int v124; // [sp+F4h] [bp-B4h]
  int v125; // [sp+F8h] [bp-B0h]
  unsigned __int64 v126; // [sp+FCh] [bp-ACh]
  int v127; // [sp+104h] [bp-A4h]
  int v128; // [sp+108h] [bp-A0h]
  int v129; // [sp+10Ch] [bp-9Ch]
  unsigned int v130; // [sp+110h] [bp-98h]
  int v131; // [sp+114h] [bp-94h]
  int v132; // [sp+118h] [bp-90h]
  int v133; // [sp+11Ch] [bp-8Ch]
  int v134; // [sp+120h] [bp-88h]
  int v135; // [sp+124h] [bp-84h]
  int v136; // [sp+128h] [bp-80h]
  int v137; // [sp+12Ch] [bp-7Ch]
  int v138; // [sp+130h] [bp-78h]
  int v139; // [sp+134h] [bp-74h]
  int v140; // [sp+138h] [bp-70h]
  int v141; // [sp+13Ch] [bp-6Ch]
  int v142; // [sp+140h] [bp-68h]
  int v143; // [sp+144h] [bp-64h]
  int v144; // [sp+148h] [bp-60h]
  int v145; // [sp+14Ch] [bp-5Ch]
  int v146; // [sp+150h] [bp-58h]
  int v147; // [sp+154h] [bp-54h]
  unsigned int v148; // [sp+158h] [bp-50h]
  int v149; // [sp+15Ch] [bp-4Ch]
  int v150; // [sp+160h] [bp-48h]
  int v151; // [sp+164h] [bp-44h]
  int v152; // [sp+168h] [bp-40h]
  int v153; // [sp+16Ch] [bp-3Ch]
  int v154; // [sp+170h] [bp-38h]
  int v155; // [sp+174h] [bp-34h]
  unsigned int v156; // [sp+178h] [bp-30h]
  int v157; // [sp+17Ch] [bp-2Ch]
  int v158; // [sp+180h] [bp-28h]
  int v159; // [sp+184h] [bp-24h]
  int v160; // [sp+188h] [bp-20h]
  int v161; // [sp+18Ch] [bp-1Ch]
  int v162; // [sp+190h] [bp-18h]
  int v163; // [sp+190h] [bp-18h]
  int v164; // [sp+194h] [bp-14h]
  __int64 v165; // [sp+194h] [bp-14h]
  int v166; // [sp+198h] [bp-10h]
  int v167; // [sp+19Ch] [bp-Ch]
  int v168; // [sp+1A0h] [bp-8h]
  int v169; // [sp+1A4h] [bp-4h]
  unsigned int v170; // [sp+1A4h] [bp-4h]

  v149 = *a1;
  v153 = a1[3];
  v166 = a1[5];
  v134 = a1[49];
  v146 = a1[1];
  v65 = a1 + 48;
  v135 = a1[39];
  v136 = a1[48];
  v64 = a1 + 38;
  v157 = a1[29];
  v129 = a1[38];
  v62 = a1 + 28;
  v161 = a1[19];
  v114 = a1[28];
  v80 = a1 + 18;
  v147 = a1[9];
  v159 = a1[18];
  v59 = a1 + 8;
  v128 = a1[47];
  v145 = a1[8];
  v63 = (unsigned int *)(a1 + 46);
  LODWORD(v126) = a1[37];
  v130 = a1[46];
  v61 = a1 + 36;
  v133 = a1[27];
  HIDWORD(v126) = a1[36];
  v79 = a1 + 26;
  v144 = a1[17];
  v131 = a1[26];
  v77 = a1 + 16;
  v155 = a1[7];
  v141 = a1[16];
  v76 = a1 + 6;
  v60 = a1 + 44;
  v160 = a1[35];
  v142 = a1[6];
  v78 = a1 + 34;
  v112 = a1[25];
  v57 = a1 + 24;
  v139 = a1[15];
  v111 = a1[24];
  v74 = a1 + 14;
  v150 = a1[14];
  v72 = a1 + 4;
  v115 = a1[43];
  v164 = a1[4];
  v58 = (unsigned int *)(a1 + 42);
  v132 = a1[33];
  v156 = a1[42];
  v75 = a1 + 32;
  v154 = a1[23];
  v127 = a1[32];
  v1 = a1[22];
  v73 = a1 + 22;
  v162 = a1[13];
  v158 = a1[34];
  v70 = a1 + 12;
  v69 = a1 + 2;
  v124 = a1[41];
  v169 = a1[12];
  v56 = a1 + 40;
  v151 = a1[31];
  v140 = a1[2];
  v71 = (unsigned int *)(a1 + 30);
  v125 = a1[21];
  v148 = a1[30];
  v2 = a1 + 20;
  v3 = a1[20];
  v4 = a1[11];
  v5 = a1[45];
  v123 = a1[40];
  v6 = a1[10];
  v67 = a1 + 10;
  v137 = 0;
  v7 = a1[44];
  v152 = v1;
  v68 = v2;
  v143 = v4;
  v138 = v6;
  do
  {
    v95 = v5;
    v97 = v7;
    v109 = v158 ^ v7 ^ v111 ^ v150 ^ v164;
    v99 = v3;
    v119 = v160 ^ v5 ^ v112 ^ v139 ^ v166;
    v117 = v151 ^ v124 ^ v125 ^ v143 ^ v146;
    v8 = v117 ^ ((2 * v119) | (v109 >> 31)) ^ v162;
    v167 = v117 ^ ((2 * v119) | (v109 >> 31));
    v104 = v148 ^ v123 ^ v3 ^ v138 ^ v149;
    v168 = v104 ^ ((2 * v109) | (v119 >> 31));
    v121 = v168 ^ v169;
    v93 = ((v168 ^ v169) << 12) | (v8 >> 20);
    v101 = HIDWORD(v126) ^ v130 ^ v131 ^ v141 ^ v142;
    v9 = v127 ^ v156 ^ v152 ^ v169 ^ v140;
    v170 = v9 ^ ((2 * v101) | (((unsigned int)v126 ^ v128 ^ v133 ^ v144 ^ v155) >> 31));
    v10 = v132 ^ v115 ^ v154 ^ v162 ^ v153;
    v11 = v10 ^ ((2 * (v126 ^ v128 ^ v133 ^ v144 ^ v155)) | (v101 >> 31));
    v116 = v11;
    v98 = ((v170 ^ v111) << 11) | ((v11 ^ (unsigned int)v112) >> 21);
    v12 = v135 ^ v134 ^ v157 ^ v161 ^ v147;
    v163 = ((2 * v10) | (v9 >> 31)) ^ v12;
    v94 = v146 ^ v163;
    v146 ^= *(_DWORD *)&byte_2A4D48[-v137 + 4] ^ v163 ^ v98 & ~v93;
    v13 = (v8 << 12) | (v121 >> 20);
    v96 = ((v11 ^ v112) << 11) | ((v170 ^ v111) >> 21);
    v90 = v13;
    v14 = v129 ^ v136 ^ v114 ^ v159 ^ v145;
    v15 = ((2 * v9) | (v10 >> 31)) ^ v14;
    v91 = v149 ^ v15;
    v122 = v15;
    v149 ^= *(_DWORD *)&byte_2A4D48[-v137] ^ v15 ^ v96 & ~v13;
    LODWORD(v16) = v170 ^ v164;
    HIDWORD(v16) = v11 ^ v166;
    v17 = (4 * (v167 ^ v115)) | ((v168 ^ v156) >> 30);
    v113 = ((v170 ^ v164) << 30) | ((v11 ^ (unsigned int)v166) >> 2);
    HIDWORD(v165) = v109 ^ ((2 * v14) | (v12 >> 31));
    LODWORD(v165) = v119 ^ ((2 * v12) | (v14 >> 31));
    v18 = ((HIDWORD(v165) ^ v141) << 23) | (((unsigned int)v165 ^ v144) >> 9);
    v19 = (4 * (v168 ^ v156)) | ((v167 ^ (unsigned int)v115) >> 30);
    v20 = v16 >> 2;
    v21 = (((unsigned int)v165 ^ v144) << 23) | ((HIDWORD(v165) ^ (unsigned int)v141) >> 9);
    v108 = v17 ^ v18 & ~v113;
    v110 = v19 ^ v21 & ~v20;
    v22 = ((v15 ^ v148) << 9) | ((v163 ^ (unsigned int)v151) >> 23);
    LODWORD(v16) = ((v163 ^ v151) << 9) | ((v15 ^ v148) >> 23);
    v106 = v113 & ~v17 ^ v22;
    v107 = v20 & ~v19 ^ v16;
    v120 = ((2 * v104) | (v117 >> 31)) ^ v101;
    v118 = ((2 * v117) | (v104 >> 31)) ^ v126 ^ v128 ^ v133 ^ v144 ^ v155;
    v23 = ((v120 ^ v114) << 7) | ((v118 ^ (unsigned int)v157) >> 25);
    v103 = v17 & ~v22 ^ v23;
    v24 = ((v118 ^ v157) << 7) | ((v120 ^ (unsigned int)v114) >> 25);
    v102 = v19 & ~(_DWORD)v16 ^ v24;
    v115 = v22 & ~v23 ^ v18;
    v156 = v16 & ~v24 ^ v21;
    v92 = v23 & ~v18 ^ v113;
    v89 = v24 & ~v21 ^ v20;
    v25 = ((HIDWORD(v165) ^ v130) << 24) | (((unsigned int)v165 ^ v128) >> 8);
    v26 = ((v118 ^ v147) << 27) | ((v120 ^ (unsigned int)v145) >> 5);
    v27 = (16 * (v138 ^ v15)) | ((v143 ^ (unsigned int)v163) >> 28);
    v28 = (16 * (v143 ^ v163)) | ((v138 ^ (unsigned int)v15) >> 28);
    v105 = v27 & ~v26 ^ v25;
    v29 = (((unsigned int)v165 ^ v128) << 24) | ((HIDWORD(v165) ^ v130) >> 8);
    v30 = ((v120 ^ v145) << 27) | ((v118 ^ (unsigned int)v147) >> 5);
    v87 = v28 & ~v30 ^ v29;
    HIDWORD(v16) = ((v116 ^ v160) << 15) | ((v170 ^ v158) >> 17);
    v31 = ((v170 ^ v158) << 15) | ((v116 ^ (unsigned int)v160) >> 17);
    v100 = v26 & ~v25 ^ HIDWORD(v16);
    v86 = v30 & ~v29 ^ v31;
    v32 = v25 & ~HIDWORD(v16);
    v33 = ((v167 ^ v154) << 10) | ((v168 ^ (unsigned int)v152) >> 22);
    LODWORD(v16) = ((v168 ^ v152) << 10) | ((v167 ^ (unsigned int)v154) >> 22);
    v85 = v31 & ~(_DWORD)v16 ^ v28;
    v158 = v16 ^ v29 & ~v31;
    v151 = v33 & ~v27 ^ v26;
    v88 = HIDWORD(v16) & ~v33 ^ v27;
    v148 = v16 & ~v28 ^ v30;
    v160 = v33 ^ v32;
    v34 = ((v163 ^ v124) << 18) | ((v15 ^ (unsigned int)v123) >> 14);
    v35 = (2 * (v167 ^ v153)) | ((v168 ^ (unsigned int)v140) >> 31);
    v36 = ((v116 ^ v139) << 6) | ((v170 ^ v150) >> 26);
    v37 = ((v170 ^ v150) << 6) | ((v116 ^ (unsigned int)v139) >> 26);
    v157 = v36 & ~v35 ^ v34;
    v38 = ((v122 ^ v123) << 18) | ((v163 ^ (unsigned int)v124) >> 14);
    v39 = (2 * (v168 ^ v140)) | ((v167 ^ (unsigned int)v153) >> 31);
    v114 = v37 & ~v39 ^ v38;
    HIDWORD(v16) = ((v118 ^ v135) << 8) | ((v120 ^ (unsigned int)v129) >> 24);
    v40 = ((v120 ^ v129) << 8) | ((v118 ^ (unsigned int)v135) >> 24);
    v81 = v39 & ~v38 ^ v40;
    v82 = v35 & ~v34 ^ HIDWORD(v16);
    LODWORD(v16) = (((unsigned int)v165 ^ v133) << 25) | ((HIDWORD(v165) ^ (unsigned int)v131) >> 7);
    v41 = ((HIDWORD(v165) ^ v131) << 25) | (((unsigned int)v165 ^ v133) >> 7);
    v152 = v40 & ~v41 ^ v37;
    v111 = v38 & ~v40 ^ v41;
    v84 = v35 ^ v16 & ~v36;
    v83 = v39 ^ v41 & ~v37;
    v154 = HIDWORD(v16) & ~(_DWORD)v16 ^ v36;
    v112 = v34 & ~HIDWORD(v16) ^ v16;
    v42 = ((v170 ^ v97) << 29) | ((v116 ^ (unsigned int)v95) >> 3);
    v43 = ((v116 ^ v95) << 29) | ((v170 ^ v97) >> 3);
    v44 = (((unsigned int)v165 ^ v155) << 28) | ((HIDWORD(v165) ^ (unsigned int)v142) >> 4);
    v45 = ((HIDWORD(v165) ^ v142) << 28) | (((unsigned int)v165 ^ v155) >> 4);
    v46 = ((v118 ^ v161) << 20) | ((v120 ^ (unsigned int)v159) >> 12);
    HIDWORD(v16) = ((v120 ^ v159) << 20) | ((v118 ^ (unsigned int)v161) >> 12);
    v161 = v46 & ~v44 ^ v42;
    v159 = HIDWORD(v16) & ~v45 ^ v43;
    v47 = ((v168 ^ v127) << 13) | ((v167 ^ (unsigned int)v132) >> 19);
    v144 = v47 ^ v44 & ~v42;
    v48 = ((v167 ^ v132) << 13) | ((v168 ^ (unsigned int)v127) >> 19);
    v141 = v48 ^ v45 & ~v43;
    v49 = (8 * (v163 ^ v125)) | ((v122 ^ (unsigned int)v99) >> 29);
    v50 = (8 * (v122 ^ v99)) | ((v163 ^ (unsigned int)v125) >> 29);
    v169 = v48 & ~v50 ^ HIDWORD(v16);
    v150 = v43 & ~v48 ^ v50;
    v143 = v49 & ~v46 ^ v44;
    v162 = v47 & ~v49 ^ v46;
    v138 = v50 & ~HIDWORD(v16) ^ v45;
    v139 = v42 & ~v47 ^ v49;
    v51 = ((v118 ^ v134) << 14) | ((v120 ^ (unsigned int)v136) >> 18);
    v52 = ((v120 ^ v136) << 14) | ((v118 ^ (unsigned int)v134) >> 18);
    v147 = v93 & ~v94 ^ v51;
    v145 = v90 & ~v91 ^ v52;
    v5 = v103;
    v53 = (((unsigned int)v165 ^ (unsigned int)v126) << 21) | ((unsigned int)(HIDWORD(v165) ^ HIDWORD(v126)) >> 11);
    v54 = (__int64)(v165 ^ v126) >> 11;
    v142 = v91 & ~v52 ^ v54;
    v166 = v51 & ~v53 ^ v98;
    v155 = v94 & ~v51 ^ v53;
    v164 = v52 & ~v54 ^ v96;
    v153 = v93 ^ v53 & ~v98;
    v140 = v90 ^ v54 & ~v96;
    v127 = v85;
    v137 -= 8;
    v136 = v110;
    v134 = v108;
    v129 = v87;
    v135 = v105;
    v130 = v107;
    v128 = v106;
    v132 = v88;
    v126 = __PAIR64__(v86, v100);
    v131 = v81;
    v124 = v92;
    v133 = v82;
    v7 = v102;
    v3 = v83;
    v123 = v89;
    v125 = v84;
  }
  while ( v137 != -192 );
  *v72 = v164;
  *v69 = v140;
  *v76 = v142;
  *v59 = v145;
  *v67 = v138;
  *v70 = v169;
  *v74 = v150;
  *v77 = v141;
  *v80 = v159;
  *v68 = v83;
  *v73 = v152;
  *v57 = v111;
  *v79 = v81;
  *v62 = v114;
  *v71 = v148;
  *v75 = v85;
  *v78 = v158;
  v72[1] = v166;
  *v61 = v86;
  v69[1] = v153;
  *v64 = v87;
  v76[1] = v155;
  v59[1] = v147;
  v67[1] = v143;
  v70[1] = v162;
  v74[1] = v139;
  v77[1] = v144;
  v80[1] = v161;
  v68[1] = v84;
  v73[1] = v154;
  v57[1] = v112;
  v62[1] = v157;
  v79[1] = v82;
  v71[1] = v151;
  v75[1] = v88;
  v78[1] = v160;
  v61[1] = v100;
  v64[1] = v105;
  *v56 = v89;
  v56[1] = v92;
  *v58 = v156;
  v58[1] = v115;
  *v60 = v102;
  v60[1] = v103;
  *v63 = v107;
  v63[1] = v106;
  *v65 = v110;
  v65[1] = v108;
  *a1 = v149;
  a1[1] = v146;
  return a1;
}
