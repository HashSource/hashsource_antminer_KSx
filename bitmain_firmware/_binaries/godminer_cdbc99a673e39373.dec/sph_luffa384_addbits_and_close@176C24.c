void *__fastcall sph_luffa384_addbits_and_close(unsigned int *a1, char a2, char a3, _BYTE *a4)
{
  unsigned int v4; // lr
  int v6; // r9
  int v7; // r8
  int v8; // r6
  int v9; // r12
  int v10; // r2
  unsigned int v11; // r10
  int v12; // r4
  int v13; // r6
  unsigned int v14; // r8
  int v15; // r3
  int v16; // r1
  int v17; // r2
  unsigned int v18; // r7
  int v19; // r0
  int v20; // r12
  int v21; // r4
  int v22; // r9
  int v23; // r5
  int v24; // r6
  int v25; // r0
  int v26; // r1
  int v27; // r0
  int v28; // r11
  int v29; // r12
  int v30; // r6
  unsigned int v31; // r9
  int v32; // lr
  unsigned int v33; // r0
  int v34; // r11
  unsigned int v35; // lr
  int v36; // r8
  int v37; // r7
  int v38; // r11
  int v39; // r1
  int v40; // r2
  int v41; // r3
  int v42; // r6
  int v43; // r4
  int v44; // r4
  int v45; // r9
  int v46; // r3
  int v47; // r6
  int v48; // r3
  int v49; // r8
  int v50; // r12
  int v51; // lr
  int v52; // r5
  int v53; // r1
  int v54; // r7
  int v55; // r3
  int v56; // r1
  int v57; // r10
  int v58; // r0
  int v59; // r2
  int v60; // r7
  int v61; // r9
  int v62; // r11
  int v63; // lr
  int v64; // r7
  int v65; // r3
  int v66; // r4
  int v67; // r1
  int v68; // lr
  int v69; // r10
  int v70; // r3
  int v71; // r11
  int v72; // r0
  int v73; // r7
  int v74; // r12
  int v75; // lr
  int v76; // r2
  int v77; // r11
  int v78; // r3
  int v79; // r4
  int v80; // r10
  int v81; // r12
  int v82; // lr
  int v83; // r7
  int v84; // r2
  int v85; // r8
  int v86; // r7
  unsigned int v87; // r12
  int v88; // r3
  unsigned int v89; // lr
  int v90; // r5
  unsigned int v91; // r1
  int v92; // r4
  int v93; // r6
  int v94; // r9
  int v95; // r3
  int v96; // r1
  int v97; // r10
  int v98; // r0
  int v99; // r2
  int v100; // r6
  int v101; // r9
  int v102; // r11
  int v103; // lr
  int v104; // r6
  int v105; // r3
  int v106; // r4
  int v107; // r1
  int v108; // lr
  int v109; // r10
  int v110; // r3
  int v111; // r11
  int v112; // r0
  int v113; // r6
  int v114; // r12
  int v115; // lr
  int v116; // r2
  int v117; // r11
  int v118; // r3
  int v119; // r4
  int v120; // r10
  int v121; // r12
  int v122; // lr
  int v123; // r6
  int v124; // r2
  int v125; // r7
  unsigned int v126; // r12
  int v127; // r3
  unsigned int v128; // lr
  int v129; // r5
  unsigned int v130; // r1
  int v131; // r4
  int v132; // r6
  int v133; // r8
  int v134; // r3
  int v135; // r1
  int v136; // r9
  int v137; // r0
  int v138; // r2
  int v139; // r6
  int v140; // r8
  int v141; // r11
  int v142; // lr
  int v143; // r6
  int v144; // r3
  int v145; // r4
  int v146; // r1
  int v147; // lr
  int v148; // r9
  int v149; // r3
  int v150; // r11
  int v151; // r0
  int v152; // r6
  int v153; // r4
  int v154; // r12
  int v155; // lr
  int v156; // r2
  int v157; // r6
  int v158; // r11
  int v159; // r3
  int v160; // r9
  int v161; // r12
  int v162; // lr
  int v163; // r2
  int v164; // r7
  unsigned int v165; // r12
  int v166; // r3
  unsigned int v167; // lr
  int v168; // r5
  unsigned int v169; // r1
  int v170; // r4
  int v171; // r6
  int v172; // r8
  int v173; // r3
  int v174; // r1
  int v175; // r9
  int v176; // r0
  int v177; // r2
  int v178; // r6
  int v179; // r8
  int v180; // r11
  int v181; // lr
  int v182; // r6
  int v183; // r3
  int v184; // r4
  int v185; // r1
  int v186; // lr
  int v187; // r9
  int v188; // r3
  int v189; // r11
  int v190; // r0
  int v191; // r6
  int v192; // r4
  int v193; // r12
  int v194; // lr
  int v195; // r2
  int v196; // r6
  int v197; // r11
  int v198; // r3
  int v199; // r9
  int v200; // r12
  int v201; // lr
  int v202; // r2
  __int16 v203; // r5
  int v204; // r2
  int v205; // r3
  int v206; // r4
  void *result; // r0
  int v208; // r1
  int v209; // lr
  int v210; // r4
  int v211; // r5
  int v212; // r3
  int v213; // r0
  int v214; // r3
  int v215; // r1
  unsigned int v216; // [sp+0h] [bp-D4h]
  int v217; // [sp+0h] [bp-D4h]
  int v218; // [sp+0h] [bp-D4h]
  int v219; // [sp+0h] [bp-D4h]
  int v220; // [sp+0h] [bp-D4h]
  unsigned int v221; // [sp+4h] [bp-D0h]
  int i; // [sp+4h] [bp-D0h]
  int j; // [sp+4h] [bp-D0h]
  int v224; // [sp+10h] [bp-C4h]
  int v225; // [sp+10h] [bp-C4h]
  int v226; // [sp+10h] [bp-C4h]
  int v227; // [sp+14h] [bp-C0h]
  int v228; // [sp+14h] [bp-C0h]
  int v229; // [sp+14h] [bp-C0h]
  int v230; // [sp+18h] [bp-BCh]
  int v231; // [sp+18h] [bp-BCh]
  int v232; // [sp+18h] [bp-BCh]
  int v233; // [sp+1Ch] [bp-B8h]
  int v234; // [sp+1Ch] [bp-B8h]
  int v235; // [sp+20h] [bp-B4h]
  int v236; // [sp+20h] [bp-B4h]
  int v237; // [sp+20h] [bp-B4h]
  int v238; // [sp+20h] [bp-B4h]
  int v239; // [sp+24h] [bp-B0h]
  int v240; // [sp+24h] [bp-B0h]
  int v241; // [sp+24h] [bp-B0h]
  int v242; // [sp+28h] [bp-ACh]
  int v243; // [sp+28h] [bp-ACh]
  int v244; // [sp+28h] [bp-ACh]
  int v245; // [sp+2Ch] [bp-A8h]
  int v246; // [sp+2Ch] [bp-A8h]
  int v247; // [sp+2Ch] [bp-A8h]
  int v248; // [sp+30h] [bp-A4h]
  int v249; // [sp+30h] [bp-A4h]
  int v250; // [sp+30h] [bp-A4h]
  unsigned int v251; // [sp+34h] [bp-A0h]
  int v252; // [sp+34h] [bp-A0h]
  int v253; // [sp+34h] [bp-A0h]
  int v254; // [sp+34h] [bp-A0h]
  unsigned int v255; // [sp+38h] [bp-9Ch]
  int v256; // [sp+38h] [bp-9Ch]
  int v257; // [sp+38h] [bp-9Ch]
  unsigned int v258; // [sp+3Ch] [bp-98h]
  int v259; // [sp+3Ch] [bp-98h]
  int v260; // [sp+3Ch] [bp-98h]
  unsigned int v261; // [sp+40h] [bp-94h]
  int v262; // [sp+40h] [bp-94h]
  int v263; // [sp+40h] [bp-94h]
  unsigned int v264; // [sp+40h] [bp-94h]
  unsigned int v265; // [sp+44h] [bp-90h]
  int v266; // [sp+44h] [bp-90h]
  unsigned int v267; // [sp+44h] [bp-90h]
  unsigned int v268; // [sp+48h] [bp-8Ch]
  int v269; // [sp+48h] [bp-8Ch]
  unsigned int v270; // [sp+48h] [bp-8Ch]
  unsigned int v271; // [sp+4Ch] [bp-88h]
  int v272; // [sp+4Ch] [bp-88h]
  unsigned int v273; // [sp+4Ch] [bp-88h]
  unsigned int v274; // [sp+50h] [bp-84h]
  int v275; // [sp+50h] [bp-84h]
  unsigned int v276; // [sp+50h] [bp-84h]
  int v277; // [sp+54h] [bp-80h]
  int v278; // [sp+54h] [bp-80h]
  int v279; // [sp+54h] [bp-80h]
  int v280; // [sp+54h] [bp-80h]
  unsigned int v281; // [sp+58h] [bp-7Ch]
  int v282; // [sp+58h] [bp-7Ch]
  unsigned int v283; // [sp+58h] [bp-7Ch]
  unsigned int v284; // [sp+5Ch] [bp-78h]
  int v285; // [sp+5Ch] [bp-78h]
  int v286; // [sp+5Ch] [bp-78h]
  unsigned int v287; // [sp+5Ch] [bp-78h]
  unsigned int v288; // [sp+60h] [bp-74h]
  int v289; // [sp+60h] [bp-74h]
  unsigned int v290; // [sp+60h] [bp-74h]
  int v291; // [sp+64h] [bp-70h]
  int v292; // [sp+64h] [bp-70h]
  int v293; // [sp+68h] [bp-6Ch]
  int v294; // [sp+68h] [bp-6Ch]
  int v295; // [sp+68h] [bp-6Ch]
  int v296; // [sp+6Ch] [bp-68h]
  int v297; // [sp+6Ch] [bp-68h]
  int v298; // [sp+6Ch] [bp-68h]
  int v299; // [sp+70h] [bp-64h]
  int v300; // [sp+70h] [bp-64h]
  int v301; // [sp+70h] [bp-64h]
  int v302; // [sp+74h] [bp-60h]
  int v303; // [sp+74h] [bp-60h]
  int v304; // [sp+74h] [bp-60h]
  int v305; // [sp+78h] [bp-5Ch]
  int v306; // [sp+78h] [bp-5Ch]
  int v307; // [sp+7Ch] [bp-58h]
  int v308; // [sp+7Ch] [bp-58h]
  int v309; // [sp+7Ch] [bp-58h]
  unsigned int v310; // [sp+80h] [bp-54h]
  int v311; // [sp+80h] [bp-54h]
  unsigned int v312; // [sp+80h] [bp-54h]
  unsigned int v313; // [sp+84h] [bp-50h]
  int v314; // [sp+84h] [bp-50h]
  int v315; // [sp+88h] [bp-4Ch]
  int v316; // [sp+88h] [bp-4Ch]
  int v317; // [sp+8Ch] [bp-48h]
  int v318; // [sp+8Ch] [bp-48h]
  unsigned int v319; // [sp+90h] [bp-44h]
  unsigned int v320; // [sp+94h] [bp-40h]
  unsigned int v321; // [sp+98h] [bp-3Ch]
  int v322; // [sp+98h] [bp-3Ch]
  int v323; // [sp+9Ch] [bp-38h]
  int v324; // [sp+9Ch] [bp-38h]
  int v325; // [sp+A0h] [bp-34h]
  int v326; // [sp+A4h] [bp-30h]
  int v327; // [sp+A4h] [bp-30h]
  int v328; // [sp+A8h] [bp-2Ch]
  int v329; // [sp+A8h] [bp-2Ch]
  int v330; // [sp+ACh] [bp-28h]
  int v331; // [sp+ACh] [bp-28h]
  int v332; // [sp+B0h] [bp-24h]
  int v333; // [sp+B0h] [bp-24h]
  int v334; // [sp+B4h] [bp-20h]
  int v335; // [sp+B8h] [bp-1Ch]

  v4 = a1[8];
  *((_BYTE *)a1 + v4) = (128 >> a3) | a2 & -(128 >> a3);
  memset((char *)a1 + v4 + 1, 0, 31 - v4);
  v6 = a1[10] ^ a1[18];
  v315 = a1[10];
  v326 = a1[9];
  v7 = a1[11] ^ a1[19];
  v296 = a1[18];
  v317 = a1[11];
  v299 = a1[19];
  v293 = a1[12];
  v251 = a1[14];
  v8 = a1[13] ^ a1[21];
  v305 = a1[13];
  v9 = v293 ^ a1[20];
  v255 = a1[15];
  v258 = a1[16];
  v261 = a1[22];
  v302 = a1[20];
  v224 = a1[17];
  v307 = a1[21];
  v265 = a1[23];
  v310 = a1[24];
  v235 = a1[25];
  v325 = 0;
  v227 = a1[26];
  v230 = a1[27];
  v233 = a1[28];
  v277 = a1[29];
  v268 = a1[30];
  v271 = a1[31];
  v274 = a1[32];
  v248 = a1[33];
  v239 = a1[34];
  v242 = a1[35];
  v245 = a1[36];
  v291 = a1[37];
  v281 = a1[38];
  v284 = a1[39];
  v288 = a1[40];
  while ( 1 )
  {
    v313 = bswap32(a1[1]);
    v320 = bswap32(a1[2]);
    v221 = bswap32(a1[7]);
    v10 = v7 ^ v230;
    v216 = bswap32(a1[6]);
    v11 = bswap32(a1[5]);
    v12 = v271 ^ v284 ^ v255 ^ v265;
    v13 = v8 ^ v277 ^ v291;
    v14 = v310;
    v321 = bswap32(a1[3]);
    v15 = v274 ^ v288 ^ v258 ^ v310;
    v16 = v9 ^ v233 ^ v245 ^ v15;
    v311 = v12 ^ v274;
    v17 = v10 ^ v242 ^ v15;
    v323 = v12 ^ v14;
    v319 = bswap32(*a1);
    v18 = bswap32(a1[4]);
    v19 = v281 ^ v251 ^ v261 ^ v268;
    v278 = v16 ^ v277;
    v20 = v6 ^ v227 ^ v239;
    v275 = v12 ^ v288;
    v21 = v12 ^ v258;
    v289 = v305 ^ v16;
    v330 = v13 ^ v261;
    v328 = v307 ^ v16;
    v332 = v19 ^ v271;
    v308 = v13 ^ v251;
    v252 = v19 ^ v255;
    v22 = v19 ^ v265;
    v285 = v19 ^ v284;
    v23 = v13 ^ v268;
    v259 = v13 ^ v281;
    v269 = v299 ^ v20;
    v262 = v317 ^ v20;
    v231 = v20 ^ v230;
    v300 = v16 ^ v291;
    v256 = v20 ^ v242;
    v24 = v216 ^ v320 ^ v221;
    v25 = v224 ^ v235 ^ v248;
    v26 = v302 ^ v17;
    v243 = v17 ^ v233;
    v246 = v17 ^ v245;
    v266 = v15 ^ v224;
    v272 = v15 ^ v235;
    v249 = v15 ^ v248;
    v236 = v15 ^ v326;
    v27 = v25 ^ v326 ^ v15;
    v225 = v293 ^ v17;
    v292 = __ROR4__(v11 ^ v313 ^ v216 ^ v275 ^ v278 ^ v246, 29);
    v28 = v328;
    v282 = v323 ^ v321 ^ v221 ^ v289 ^ v302 ^ v17;
    v327 = v311 ^ v24 ^ v328 ^ v17 ^ v233;
    v329 = v18 ^ v23 ^ v22;
    v303 = v216 ^ v22 ^ v21;
    v335 = v320 ^ v256;
    v334 = v24 ^ v23 ^ v300;
    v316 = v315 ^ v27;
    v234 = v231 ^ v311 ^ v313 ^ v216 ^ v26;
    v228 = v27 ^ v227;
    v318 = v296 ^ v27;
    v29 = v27 ^ v239;
    v279 = v330 ^ v321 ^ v221 ^ v278;
    v30 = v323;
    v31 = __ROR4__(v252 ^ v330 ^ v11, 31);
    v294 = v262 ^ v21 ^ v321;
    v331 = v313 ^ v262;
    v32 = v18 ^ v308 ^ v28;
    v297 = v332 ^ v259 ^ v321 ^ v221;
    v33 = __ROR4__(v323 ^ v332 ^ v11, 30);
    v34 = v285;
    v286 = v252 ^ v275;
    v263 = v32;
    v253 = v11 ^ v259;
    v322 = v18 ^ v21 ^ v225;
    v35 = __ROR4__(v311 ^ v34 ^ v18, 29);
    v324 = v308 ^ v34;
    v36 = v11 ^ v319 ^ v221 ^ v256 ^ v275;
    v314 = v21 ^ v236 ^ v313;
    v240 = v236 ^ v30;
    v333 = v11 ^ v216 ^ v249 ^ v275;
    v37 = v266 ^ v30;
    v38 = v275 ^ v272;
    v237 = v266 ^ v311;
    v267 = v31;
    v39 = v269 ^ v30 ^ v320 ^ v221;
    v276 = v33;
    v40 = v269 ^ v319 ^ v221;
    v41 = v272 ^ v311 ^ v216 ^ v221;
    v42 = v216 ^ v221 ^ v231;
    v309 = __ROR4__(v282, 31);
    v295 = v294 ^ v246;
    v270 = __ROR4__(v279, 30);
    v260 = v286 ^ v221;
    v254 = v253 ^ v289;
    v280 = __ROR4__(v327, 30);
    v287 = __ROR4__(v297, 29);
    v283 = __ROR4__(v334, 29);
    v312 = __ROR4__(v303, 31);
    v273 = __ROR4__(v329, 30);
    v290 = v35;
    v264 = __ROR4__(v263, 31);
    v306 = v322 ^ v300;
    v257 = v324 ^ v216;
    v43 = v21 ^ v249;
    v304 = v39 ^ v225;
    v247 = v36 ^ v243;
    v226 = v221 ^ v240;
    v238 = v216 ^ v237;
    v250 = v11 ^ v38;
    v44 = v43 ^ v319;
    v232 = v40 ^ v228;
    v45 = v314 ^ v29;
    v298 = v319 ^ v221 ^ v37 ^ v316;
    v241 = v333 ^ v228;
    v229 = v41 ^ v318;
    v46 = v42 ^ v29;
    v301 = v331 ^ v318;
    v47 = 0;
    v244 = v46;
    v48 = v335 ^ v316;
    v49 = -533497832;
    v50 = v254;
    v217 = 809079974;
    v51 = v257;
    v52 = v295;
    v53 = v260;
    v54 = v306;
    while ( 1 )
    {
      v55 = v48 ^ v52;
      v56 = v53 ^ v54;
      v57 = v55 ^ v44 & v52;
      v58 = (v44 | v45) ^ v52;
      v59 = (v50 | v51) ^ v54;
      v60 = v54 & v50;
      v61 = ~v45 ^ v44 & v52;
      v62 = v61 | v57;
      v63 = ~v51 ^ v60;
      v64 = v60 ^ v56;
      v65 = v55 & v58 ^ v61;
      v66 = v44 ^ (v61 | v57);
      v67 = v56 & v59 ^ v63;
      v68 = v63 | v64;
      v69 = v57 ^ v65;
      v70 = v65 & v62;
      v71 = v62 ^ ~v58;
      v72 = v67 & v68;
      v73 = v64 ^ v67 ^ v66;
      v74 = v50 ^ v68 ^ v71;
      v75 = v68 ^ ~v59 ^ v70;
      v76 = v69 ^ v72;
      v77 = v74 ^ __ROR4__(v71, 30);
      v78 = v75 ^ __ROR4__(v70, 30);
      v79 = v73 ^ __ROR4__(v66, 30);
      v80 = v69 ^ v72 ^ __ROR4__(v69, 30);
      ++v47;
      v81 = v77 ^ __ROR4__(v74, 18);
      v82 = v78 ^ __ROR4__(v75, 18);
      v83 = v79 ^ __ROR4__(v73, 18);
      v84 = v80 ^ __ROR4__(v76, 18);
      v45 = v81 ^ __ROR4__(v77, 22);
      v48 = v82 ^ __ROR4__(v78, 22);
      v44 = v83 ^ __ROR4__(v79, 22) ^ v217;
      v50 = __ROR4__(v81, 31);
      v51 = __ROR4__(v82, 31);
      v54 = v49 ^ __ROR4__(v83, 31);
      v52 = v84 ^ __ROR4__(v80, 22);
      v53 = __ROR4__(v84, 31);
      if ( v47 == 8 )
        break;
      v217 = dword_28E8E0[v47];
      v49 = dword_28E900[v47];
    }
    v315 = v45;
    v85 = 23617341;
    v251 = v50;
    v317 = v48;
    v255 = v51;
    v293 = v52;
    v258 = v53;
    v326 = v44;
    v305 = v54;
    v86 = 0;
    v218 = -1226960659;
    v87 = v264;
    v88 = v301;
    v89 = v267;
    v90 = v304;
    v91 = v312;
    v92 = v226;
    v93 = v309;
    v94 = v298;
    while ( 1 )
    {
      v95 = v88 ^ v90;
      v96 = v91 ^ v93;
      v97 = v95 ^ v92 & v90;
      v98 = (v92 | v94) ^ v90;
      v99 = (v87 | v89) ^ v93;
      v100 = v93 & v87;
      v101 = ~v94 ^ v92 & v90;
      v102 = v101 | v97;
      v103 = ~v89 ^ v100;
      v104 = v100 ^ v96;
      v105 = v95 & v98 ^ v101;
      v106 = v92 ^ (v101 | v97);
      v107 = v96 & v99 ^ v103;
      v108 = v103 | v104;
      v109 = v97 ^ v105;
      v110 = v105 & v102;
      v111 = v102 ^ ~v98;
      v112 = v107 & v108;
      v113 = v104 ^ v107 ^ v106;
      v114 = v87 ^ v108 ^ v111;
      v115 = v108 ^ ~v99 ^ v110;
      v116 = v109 ^ v112;
      v117 = v114 ^ __ROR4__(v111, 30);
      v118 = v115 ^ __ROR4__(v110, 30);
      v119 = v113 ^ __ROR4__(v106, 30);
      v120 = v109 ^ v112 ^ __ROR4__(v109, 30);
      ++v86;
      v121 = v117 ^ __ROR4__(v114, 18);
      v122 = v118 ^ __ROR4__(v115, 18);
      v123 = v119 ^ __ROR4__(v113, 18);
      v124 = v120 ^ __ROR4__(v116, 18);
      v94 = v121 ^ __ROR4__(v117, 22);
      v88 = v122 ^ __ROR4__(v118, 22);
      v92 = v123 ^ __ROR4__(v119, 22) ^ v218;
      v87 = __ROR4__(v121, 31);
      v89 = __ROR4__(v122, 31);
      v93 = v85 ^ __ROR4__(v123, 31);
      v90 = v124 ^ __ROR4__(v120, 22);
      v91 = __ROR4__(v124, 31);
      if ( v86 == 8 )
        break;
      v218 = dword_28E920[v86];
      v85 = dword_28E940[v86];
    }
    v296 = v94;
    v261 = v87;
    v299 = v88;
    v265 = v89;
    v302 = v90;
    v125 = 0;
    v310 = v91;
    v224 = v92;
    v307 = v93;
    v219 = -64955950;
    v126 = v270;
    v127 = v232;
    v128 = v273;
    v129 = v234;
    v130 = v276;
    v131 = v238;
    v132 = v280;
    v133 = v229;
    for ( i = -497126719; ; i = dword_28E980[v125] )
    {
      v134 = v127 ^ v129;
      v135 = v130 ^ v132;
      v136 = v134 ^ v131 & v129;
      v137 = (v131 | v133) ^ v129;
      v138 = (v126 | v128) ^ v132;
      v139 = v132 & v126;
      v140 = ~v133 ^ v131 & v129;
      v141 = v140 | v136;
      v142 = ~v128 ^ v139;
      v143 = v139 ^ v135;
      v144 = v134 & v137 ^ v140;
      v145 = v131 ^ (v140 | v136);
      v146 = v135 & v138 ^ v142;
      v147 = v142 | v143;
      v148 = v136 ^ v144;
      v149 = v144 & v141;
      v150 = v141 ^ ~v137;
      v151 = v146 & v147;
      v152 = v143 ^ v146 ^ v145;
      v153 = v152 ^ __ROR4__(v145, 30);
      v154 = v126 ^ v147 ^ v150;
      v155 = v147 ^ ~v138 ^ v149;
      v156 = v148 ^ v151;
      v157 = v153 ^ __ROR4__(v152, 18);
      v158 = v154 ^ __ROR4__(v150, 30);
      v159 = v155 ^ __ROR4__(v149, 30);
      v160 = v148 ^ v151 ^ __ROR4__(v148, 30);
      ++v125;
      v161 = v158 ^ __ROR4__(v154, 18);
      v162 = v159 ^ __ROR4__(v155, 18);
      v163 = v160 ^ __ROR4__(v156, 18);
      v131 = v157 ^ __ROR4__(v153, 22) ^ v219;
      v133 = v161 ^ __ROR4__(v158, 22);
      v127 = v162 ^ __ROR4__(v159, 22);
      v132 = i ^ __ROR4__(v157, 31);
      v126 = __ROR4__(v161, 31);
      v128 = __ROR4__(v162, 31);
      v129 = v163 ^ __ROR4__(v160, 22);
      v130 = __ROR4__(v163, 31);
      if ( v125 == 8 )
        break;
      v219 = dword_28E960[v125];
    }
    v227 = v133;
    v268 = v126;
    v230 = v127;
    v271 = v128;
    v233 = v129;
    v164 = 0;
    v274 = v130;
    v235 = v131;
    v277 = v132;
    v220 = -1307332699;
    v165 = v283;
    v166 = v244;
    v167 = v287;
    v168 = v247;
    v169 = v290;
    v170 = v250;
    v171 = v292;
    v172 = v241;
    for ( j = -534197825; ; j = dword_28EA60[v164] )
    {
      v173 = v166 ^ v168;
      v174 = v169 ^ v171;
      v175 = v173 ^ v170 & v168;
      v176 = (v170 | v172) ^ v168;
      v177 = (v165 | v167) ^ v171;
      v178 = v171 & v165;
      v179 = ~v172 ^ v170 & v168;
      v180 = v179 | v175;
      v181 = ~v167 ^ v178;
      v182 = v178 ^ v174;
      v183 = v173 & v176 ^ v179;
      v184 = v170 ^ (v179 | v175);
      v185 = v174 & v177 ^ v181;
      v186 = v181 | v182;
      v187 = v175 ^ v183;
      v188 = v183 & v180;
      v189 = v180 ^ ~v176;
      v190 = v185 & v186;
      v191 = v182 ^ v185 ^ v184;
      v192 = v191 ^ __ROR4__(v184, 30);
      v193 = v165 ^ v186 ^ v189;
      v194 = v186 ^ ~v177 ^ v188;
      v195 = v187 ^ v190;
      v196 = v192 ^ __ROR4__(v191, 18);
      v197 = v193 ^ __ROR4__(v189, 30);
      v198 = v194 ^ __ROR4__(v188, 30);
      v199 = v187 ^ v190 ^ __ROR4__(v187, 30);
      ++v164;
      v200 = v197 ^ __ROR4__(v193, 18);
      v201 = v198 ^ __ROR4__(v194, 18);
      v202 = v199 ^ __ROR4__(v195, 18);
      v170 = v196 ^ __ROR4__(v192, 22) ^ v220;
      v172 = v200 ^ __ROR4__(v197, 22);
      v166 = v201 ^ __ROR4__(v198, 22);
      v171 = j ^ __ROR4__(v196, 31);
      v165 = __ROR4__(v200, 31);
      v167 = __ROR4__(v201, 31);
      v168 = v202 ^ __ROR4__(v199, 22);
      v169 = __ROR4__(v202, 31);
      if ( v164 == 8 )
        break;
      v220 = dword_28EA40[v164];
    }
    v242 = v166;
    v239 = v172;
    v281 = v165;
    v284 = v167;
    v245 = v168;
    v288 = v169;
    v248 = v170;
    v291 = v171;
    if ( v325 != 1 )
      break;
    v6 = v315 ^ v296;
    v7 = v317 ^ v299;
    v9 = v293 ^ v302;
    v8 = v307 ^ v305;
    v208 = v326 ^ v224 ^ v235 ^ v170;
    a4[3] = v208;
    v209 = v251 ^ v261 ^ v268 ^ v281;
    v210 = v255 ^ v265 ^ v271 ^ v284;
    a4[23] = v209;
    v211 = v258 ^ v310 ^ v274 ^ v288;
    *a4 = HIBYTE(v208);
    a4[1] = BYTE2(v208);
    v212 = v315 ^ v296 ^ v227 ^ v239;
    a4[2] = BYTE1(v208);
    v213 = v317 ^ v299 ^ v230 ^ v242;
    a4[7] = v212;
    a4[4] = HIBYTE(v212);
    a4[6] = BYTE1(v212);
    a4[11] = v213;
    a4[5] = BYTE2(v212);
    a4[27] = v210;
    a4[8] = HIBYTE(v213);
    v214 = v293 ^ v302 ^ v233 ^ v245;
    a4[9] = BYTE2(v213);
    a4[10] = (unsigned __int16)(v317 ^ v299 ^ v230 ^ v242) >> 8;
    v215 = v307 ^ v305 ^ v277 ^ v291;
    a4[15] = v214;
    a4[19] = v215;
    a4[12] = HIBYTE(v214);
    a4[31] = v211;
    a4[13] = BYTE2(v214);
    a4[14] = BYTE1(v214);
    a4[22] = BYTE1(v209);
    a4[16] = HIBYTE(v215);
    a4[25] = BYTE2(v210);
    a4[17] = BYTE2(v215);
    a4[18] = BYTE1(v215);
    a4[20] = HIBYTE(v209);
    a4[29] = BYTE2(v211);
    a4[21] = BYTE2(v209);
    a4[24] = HIBYTE(v210);
    a4[26] = BYTE1(v210);
    a4[28] = HIBYTE(v211);
    a4[30] = BYTE1(v211);
LABEL_18:
    ++v325;
  }
  if ( v325 != 2 )
  {
    v6 = v315 ^ v296;
    v8 = v307 ^ v305;
    *(_QWORD *)a1 = 0;
    *((_QWORD *)a1 + 1) = 0;
    v9 = v293 ^ v302;
    *((_QWORD *)a1 + 2) = 0;
    *((_QWORD *)a1 + 3) = 0;
    v7 = v317 ^ v299;
    goto LABEL_18;
  }
  v203 = v235 ^ v326 ^ v224 ^ v170;
  v204 = v172 ^ v315 ^ v296 ^ v227;
  v205 = v230 ^ v317 ^ v299 ^ v166;
  v206 = v233 ^ v293 ^ v302 ^ v245;
  a4[35] = v203;
  a4[34] = HIBYTE(v203);
  a4[39] = v204;
  a4[43] = v205;
  a4[47] = v206;
  a4[32] = (v235 ^ v326 ^ v224 ^ (unsigned int)v248) >> 24;
  a4[33] = (v235 ^ v326 ^ v224 ^ (unsigned int)v248) >> 16;
  a4[36] = HIBYTE(v204);
  a4[37] = BYTE2(v204);
  a4[38] = BYTE1(v204);
  a4[40] = (v230 ^ v317 ^ v299 ^ (unsigned int)v242) >> 24;
  a4[42] = BYTE1(v205);
  a4[44] = HIBYTE(v206);
  a4[41] = BYTE2(v205);
  a4[45] = BYTE2(v206);
  a4[46] = BYTE1(v206);
  result = memcpy(a1 + 9, &unk_28E9A0, 0x80u);
  a1[8] = 0;
  return result;
}
