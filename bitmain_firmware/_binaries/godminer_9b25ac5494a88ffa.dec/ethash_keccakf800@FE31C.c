int __fastcall ethash_keccakf800(int *a1)
{
  int v1; // r7
  int v2; // r4
  int v3; // r9
  int v4; // r12
  int v5; // r8
  int v6; // r2
  int v7; // r1
  int result; // r0
  int v9; // lr
  int v10; // r6
  int v11; // r11
  int v12; // r5
  int v13; // r10
  int v14; // r3
  int v15; // lr
  int v16; // r6
  int v17; // r5
  int v18; // r11
  int v19; // r10
  int v20; // r4
  int v21; // r2
  int v22; // r8
  int v23; // r12
  int v24; // r7
  int v25; // r4
  int v26; // r1
  int v27; // r3
  int v28; // r8
  int v29; // r5
  int v30; // r0
  int v31; // lr
  int v32; // r10
  int v33; // r3
  int v34; // r9
  int v35; // r6
  int v36; // r11
  int v37; // r0
  int v38; // r11
  int v39; // r7
  int v40; // r11
  int v41; // r7
  int v42; // r7
  int v43; // r8
  int v44; // r12
  int v45; // t2
  int v46; // r3
  int v47; // r1
  int v48; // r2
  int v49; // r4
  int v50; // r5
  int v51; // r12
  int v52; // r6
  int v53; // r4
  int v54; // r8
  int v55; // r9
  int v56; // r7
  int v57; // r1
  int v58; // r0
  int v59; // r3
  int v60; // lr
  int v61; // r10
  int v62; // r9
  int v63; // r3
  int v64; // r0
  int v65; // r12
  int v66; // r11
  int v67; // r1
  int v68; // r7
  int v69; // r2
  int v70; // r1
  int v71; // r4
  int v72; // r6
  int v73; // r5
  int v74; // lr
  int v75; // t2
  int v76; // r10
  int v77; // r3
  int v78; // r4
  int v79; // r0
  int v80; // r12
  int v81; // r8
  int v82; // r3
  int v83; // r6
  int v84; // r10
  int v85; // r6
  int v86; // [sp+4h] [bp-70h]
  int v87; // [sp+4h] [bp-70h]
  int v88; // [sp+4h] [bp-70h]
  int v89; // [sp+4h] [bp-70h]
  int v90; // [sp+8h] [bp-6Ch]
  int v91; // [sp+8h] [bp-6Ch]
  int v92; // [sp+8h] [bp-6Ch]
  int v93; // [sp+8h] [bp-6Ch]
  int v94; // [sp+Ch] [bp-68h]
  int v95; // [sp+Ch] [bp-68h]
  int v96; // [sp+Ch] [bp-68h]
  int v97; // [sp+Ch] [bp-68h]
  int v98; // [sp+10h] [bp-64h]
  int v99; // [sp+10h] [bp-64h]
  int v100; // [sp+10h] [bp-64h]
  int v101; // [sp+10h] [bp-64h]
  int v102; // [sp+14h] [bp-60h]
  int v103; // [sp+14h] [bp-60h]
  int v104; // [sp+14h] [bp-60h]
  int v105; // [sp+14h] [bp-60h]
  int v106; // [sp+18h] [bp-5Ch]
  int v107; // [sp+18h] [bp-5Ch]
  int v108; // [sp+18h] [bp-5Ch]
  int v109; // [sp+18h] [bp-5Ch]
  int v110; // [sp+1Ch] [bp-58h]
  int v111; // [sp+1Ch] [bp-58h]
  int v112; // [sp+1Ch] [bp-58h]
  int v113; // [sp+1Ch] [bp-58h]
  int v114; // [sp+20h] [bp-54h]
  int v115; // [sp+20h] [bp-54h]
  int v116; // [sp+20h] [bp-54h]
  int v117; // [sp+24h] [bp-50h]
  int v118; // [sp+24h] [bp-50h]
  int v119; // [sp+28h] [bp-4Ch]
  int v120; // [sp+28h] [bp-4Ch]
  int v121; // [sp+28h] [bp-4Ch]
  int v122; // [sp+28h] [bp-4Ch]
  int v123; // [sp+2Ch] [bp-48h]
  int v124; // [sp+2Ch] [bp-48h]
  int v125; // [sp+2Ch] [bp-48h]
  int v126; // [sp+30h] [bp-44h]
  int v127; // [sp+30h] [bp-44h]
  int v128; // [sp+30h] [bp-44h]
  int v129; // [sp+34h] [bp-40h]
  int v130; // [sp+34h] [bp-40h]
  int v131; // [sp+34h] [bp-40h]
  int v132; // [sp+38h] [bp-3Ch]
  int v133; // [sp+38h] [bp-3Ch]
  int v134; // [sp+38h] [bp-3Ch]
  int v135; // [sp+38h] [bp-3Ch]
  int v136; // [sp+3Ch] [bp-38h]
  int v137; // [sp+3Ch] [bp-38h]
  int v138; // [sp+3Ch] [bp-38h]
  int v139; // [sp+40h] [bp-34h]
  int v140; // [sp+40h] [bp-34h]
  int v141; // [sp+40h] [bp-34h]
  int v142; // [sp+40h] [bp-34h]
  int v143; // [sp+44h] [bp-30h]
  int v144; // [sp+44h] [bp-30h]
  int v145; // [sp+44h] [bp-30h]
  int v146; // [sp+48h] [bp-2Ch]
  int v147; // [sp+48h] [bp-2Ch]
  int v148; // [sp+48h] [bp-2Ch]
  int v149; // [sp+4Ch] [bp-28h]
  int v150; // [sp+4Ch] [bp-28h]
  int v151; // [sp+4Ch] [bp-28h]
  int v152; // [sp+50h] [bp-24h]
  int v153; // [sp+50h] [bp-24h]
  int v154; // [sp+50h] [bp-24h]
  int v155; // [sp+50h] [bp-24h]
  int v156; // [sp+54h] [bp-20h]
  int v157; // [sp+54h] [bp-20h]
  int v158; // [sp+54h] [bp-20h]
  int v159; // [sp+54h] [bp-20h]
  int v160; // [sp+58h] [bp-1Ch]
  int v161; // [sp+58h] [bp-1Ch]
  _DWORD *v162; // [sp+5Ch] [bp-18h]
  int v163; // [sp+60h] [bp-14h]
  int v164; // [sp+64h] [bp-10h]
  int v165; // [sp+64h] [bp-10h]
  int v166; // [sp+64h] [bp-10h]

  v162 = &unk_293048;
  v129 = *a1;
  v163 = 32898;
  v132 = a1[1];
  v136 = a1[2];
  v119 = 1;
  v139 = a1[3];
  v143 = a1[4];
  v146 = a1[5];
  v86 = a1[7];
  v149 = a1[8];
  v152 = a1[9];
  v90 = a1[10];
  v156 = a1[11];
  v94 = a1[13];
  v160 = a1[14];
  v98 = a1[15];
  v1 = a1[16];
  v2 = a1[6];
  v3 = a1[23];
  v4 = a1[18];
  v102 = a1[17];
  v5 = a1[24];
  v106 = a1[19];
  v110 = a1[21];
  v6 = a1[12];
  v7 = a1[22];
  result = a1[20];
  while ( 1 )
  {
    v10 = v129 ^ v146 ^ v90 ^ v98 ^ result;
    v11 = v136 ^ v86 ^ v6 ^ v102 ^ v7;
    v12 = v139 ^ v149 ^ v94 ^ v4 ^ v3;
    v13 = v143 ^ v152 ^ v160 ^ v106 ^ v5;
    v14 = v132 ^ v2 ^ v156 ^ v1 ^ v110;
    v15 = v10 ^ __ROR4__(v11, 31);
    v16 = v12 ^ __ROR4__(v10, 31);
    v114 = v15 ^ v2;
    v17 = v14 ^ __ROR4__(v12, 31);
    v18 = v11 ^ __ROR4__(v13, 31);
    v19 = v13 ^ __ROR4__(v14, 31);
    v117 = v16 ^ v5;
    v123 = v152 ^ v16;
    v20 = v139;
    v126 = v19 ^ v90;
    v21 = __ROR4__(v6 ^ v17, 21);
    v153 = v19 ^ result;
    v140 = v106 ^ v16;
    v22 = v17 ^ v86;
    v23 = __ROR4__(v4 ^ v18, 11);
    v91 = __ROR4__(v7 ^ v17, 3);
    v164 = v17 ^ v102;
    v107 = v19 ^ v129;
    v24 = __ROR4__(v1 ^ v15, 19);
    v25 = __ROR4__(v18 ^ v20, 4);
    v87 = __ROR4__(v117, 18);
    v26 = __ROR4__(v18 ^ v94, 7);
    v133 = __ROR4__(v15 ^ v132, 31);
    v130 = v15 ^ v156;
    v27 = v110;
    v111 = __ROR4__(v114, 20);
    v157 = v15 ^ v27;
    v95 = __ROR4__(v22, 26);
    v28 = v17 ^ v136;
    v29 = __ROR4__(v123, 12);
    v30 = __ROR4__(v126, 29);
    v31 = __ROR4__(v153, 14);
    v137 = v19 ^ v146;
    v32 = __ROR4__(v19 ^ v98, 23);
    v33 = v21 & ~v111 ^ v107;
    v99 = __ROR4__(v3 ^ v18, 8);
    v154 = __ROR4__(v164, 17);
    v165 = v18 ^ v149;
    v147 = __ROR4__(v143 ^ v16, 5);
    v34 = v30 & ~v29 ^ v25;
    v115 = v87 & ~v23 ^ v21;
    v35 = __ROR4__(v16 ^ v160, 25);
    v118 = v107 & ~v87 ^ v23;
    v36 = v91 & ~v24 ^ v30;
    v37 = v24 & ~v30;
    v127 = v36;
    v38 = v130;
    v131 = v25 & ~v91 ^ v24;
    v39 = v157;
    v158 = __ROR4__(v28, 2);
    v40 = __ROR4__(v38, 22);
    v103 = __ROR4__(v39, 30);
    v41 = v111;
    v112 = v23 & ~v21 ^ v111;
    v42 = v41 & ~v107;
    v43 = __ROR4__(v140, 24);
    v108 = v119 ^ v33;
    v44 = __ROR4__(v137, 28);
    v120 = v34;
    v124 = v37 ^ v29;
    v144 = v95 & ~v133 ^ v31;
    v92 = v29 & ~v25 ^ v91;
    v141 = v133 & ~v31 ^ v43;
    v138 = v31 & ~v43 ^ v26;
    v45 = __ROR4__(v165, 9);
    v134 = v26 & ~v95 ^ v133;
    v88 = v42 ^ v87;
    v46 = v154;
    v161 = v43 & ~v26 ^ v95;
    v47 = v99 & ~v154 ^ v40;
    v155 = v147 & ~v99 ^ v154;
    v150 = v47;
    v48 = v40 & ~v44 ^ v147;
    v49 = v35 & ~v45;
    v96 = v46 & ~v40 ^ v44;
    v50 = v103 & ~v32 ^ v35;
    v51 = v44 & ~v147 ^ v99;
    v52 = v32 & ~v35 ^ v45;
    v53 = v49 ^ v158;
    v54 = v45 & ~v158 ^ v103;
    v55 = v115 ^ v127 ^ v138 ^ v47 ^ v50;
    v56 = v108 ^ v120 ^ v134 ^ v48 ^ v53;
    v57 = v92 ^ v144 ^ v88 ^ v51 ^ v54;
    v58 = v118 ^ v131 ^ v141 ^ v155 ^ v158 & ~v103 ^ v32;
    v59 = v112 ^ v124 ^ v161 ^ v96 ^ v52;
    v104 = v158 & ~v103 ^ v32;
    v60 = v56 ^ __ROR4__(v55, 31);
    v61 = v59 ^ __ROR4__(v58, 31);
    v62 = v55 ^ __ROR4__(v57, 31);
    v63 = v57 ^ __ROR4__(v59, 31);
    v64 = v58 ^ __ROR4__(v56, 31);
    v65 = v51 ^ v64;
    v100 = v127 ^ v61;
    v151 = v150 ^ v61;
    v66 = __ROR4__(v96 ^ v60, 19);
    v159 = v88 ^ v64;
    v121 = v120 ^ v63;
    v145 = v144 ^ v64;
    v67 = v134;
    v135 = v53 ^ v63;
    v166 = v48 ^ v63;
    v68 = __ROR4__(v155 ^ v62, 11);
    v69 = v141 ^ v62;
    v142 = v104 ^ v62;
    v70 = __ROR4__(v67 ^ v63, 29);
    v89 = __ROR4__(v50 ^ v61, 3);
    v128 = __ROR4__(v52 ^ v60, 30);
    v71 = __ROR4__(v124 ^ v60, 20);
    v72 = __ROR4__(v138 ^ v61, 21);
    v73 = v72 & ~v71;
    v148 = __ROR4__(v112 ^ v60, 31);
    v113 = __ROR4__(v161 ^ v60, 22);
    v74 = __ROR4__(v100, 26);
    v75 = __ROR4__(v61 ^ v115, 2);
    v76 = v71;
    v77 = v63 ^ v108;
    v78 = __ROR4__(v54 ^ v64, 18);
    v79 = __ROR4__(v92 ^ v64, 12);
    v97 = __ROR4__(v65, 24);
    v93 = __ROR4__(v69, 7);
    v105 = __ROR4__(v159, 5);
    v125 = __ROR4__(v145, 25);
    v101 = __ROR4__(v135, 14);
    v109 = __ROR4__(v121, 28);
    v80 = __ROR4__(v118 ^ v62, 4);
    v122 = __ROR4__(v62 ^ v131, 9);
    v116 = __ROR4__(v142, 8);
    v129 = v163 ^ v73 ^ v77;
    v136 = v78 & ~v68 ^ v72;
    v132 = v68 & ~v72 ^ v76;
    v143 = v76 & ~v77 ^ v78;
    v139 = v77 & ~v78 ^ v68;
    v81 = v148 & ~v101;
    v82 = v74 & ~v148;
    v83 = v93 & ~v74 ^ v148;
    v146 = v70 & ~v79 ^ v80;
    v152 = v79 & ~v80 ^ v89;
    v84 = __ROR4__(v151, 17);
    v2 = v66 & ~v70 ^ v79;
    v149 = v80 & ~v89 ^ v66;
    v86 = v89 & ~v66 ^ v70;
    v156 = v97 & ~v93 ^ v74;
    v4 = v105 & ~v116 ^ v84;
    v6 = v93 ^ v101 & ~v97;
    v90 = v83;
    v160 = v82 ^ v101;
    v94 = v81 ^ v97;
    v98 = v113 & ~v109 ^ v105;
    v85 = __ROR4__(v166, 23);
    v3 = v75 & ~v128 ^ v85;
    v1 = v84 & ~v113 ^ v109;
    v106 = v109 & ~v105 ^ v116;
    result = v75 ^ v125 & ~v122;
    v102 = v116 & ~v84 ^ v113;
    v110 = v85 & ~v125 ^ v122;
    v5 = v122 & ~v75 ^ v128;
    v7 = v128 & ~v85 ^ v125;
    if ( &unk_293098 == (_UNKNOWN *)v162 )
      break;
    v119 = v162[2];
    v9 = v162[3];
    v162 += 2;
    v163 = v9;
  }
  a1[6] = v2;
  *a1 = v129;
  a1[12] = v6;
  a1[16] = v1;
  a1[1] = v132;
  a1[2] = v136;
  a1[3] = v139;
  a1[4] = v143;
  a1[5] = v146;
  a1[7] = v86;
  a1[8] = v149;
  a1[9] = v152;
  a1[10] = v90;
  a1[11] = v156;
  a1[13] = v94;
  a1[14] = v160;
  a1[15] = v98;
  a1[18] = v4;
  a1[20] = result;
  a1[17] = v102;
  a1[22] = v7;
  a1[23] = v3;
  a1[19] = v106;
  a1[24] = v5;
  a1[21] = v110;
  return result;
}
