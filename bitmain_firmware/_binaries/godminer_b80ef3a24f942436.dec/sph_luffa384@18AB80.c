unsigned int __fastcall sph_luffa384(unsigned int result, char *a2, size_t a3)
{
  unsigned int v3; // r4
  unsigned int *v4; // r10
  size_t v5; // r3
  char *v6; // r0
  char *v7; // r1
  int v8; // r5
  int v9; // r7
  int v10; // r3
  int v11; // r0
  unsigned int v12; // r8
  int v13; // r1
  unsigned int v14; // r11
  int v15; // lr
  int v16; // r12
  int v17; // r2
  int v18; // r8
  int v19; // r4
  int v20; // r8
  unsigned int v21; // r10
  int v22; // r0
  int v23; // r6
  int v24; // r9
  int v25; // lr
  int v26; // r3
  int v27; // r7
  int v28; // r7
  int v29; // r5
  int v30; // r6
  int v31; // r8
  int v32; // r3
  int v33; // lr
  int v34; // r6
  int v35; // r0
  int v36; // r1
  int v37; // r3
  int v38; // r8
  int v39; // r7
  int v40; // r5
  int v41; // r1
  unsigned int v42; // r12
  int v43; // r8
  int v44; // r6
  int v45; // r4
  int v46; // r7
  int v47; // r4
  int v48; // r8
  int v49; // r12
  int v50; // r3
  int v51; // lr
  int v52; // r5
  int v53; // r1
  int v54; // r3
  int v55; // r1
  int v56; // r9
  int v57; // r0
  int v58; // r2
  int v59; // r6
  int v60; // r8
  int v61; // r11
  int v62; // lr
  int v63; // r6
  int v64; // r3
  int v65; // r4
  int v66; // r1
  int v67; // lr
  int v68; // r9
  int v69; // r3
  int v70; // r11
  int v71; // r0
  int v72; // r6
  int v73; // r4
  int v74; // r12
  int v75; // lr
  int v76; // r2
  int v77; // r6
  int v78; // r11
  int v79; // r3
  int v80; // r9
  int v81; // r12
  int v82; // lr
  int v83; // r2
  int v84; // r7
  unsigned int v85; // r12
  int v86; // r3
  unsigned int v87; // lr
  int v88; // r5
  unsigned int v89; // r1
  int v90; // r4
  int v91; // r6
  int v92; // r8
  int v93; // r3
  int v94; // r1
  int v95; // r9
  int v96; // r0
  int v97; // r2
  int v98; // r6
  int v99; // r8
  int v100; // r11
  int v101; // lr
  int v102; // r6
  int v103; // r3
  int v104; // r4
  int v105; // r1
  int v106; // lr
  int v107; // r9
  int v108; // r3
  int v109; // r11
  int v110; // r0
  int v111; // r6
  int v112; // r4
  int v113; // r12
  int v114; // lr
  int v115; // r2
  int v116; // r6
  int v117; // r11
  int v118; // r3
  int v119; // r9
  int v120; // r12
  int v121; // lr
  int v122; // r2
  int v123; // r7
  unsigned int v124; // r12
  int v125; // r3
  unsigned int v126; // lr
  int v127; // r5
  unsigned int v128; // r1
  int v129; // r4
  int v130; // r6
  int v131; // r8
  int v132; // r3
  int v133; // r1
  int v134; // r9
  int v135; // r0
  int v136; // r2
  int v137; // r6
  int v138; // r8
  int v139; // r11
  int v140; // lr
  int v141; // r6
  int v142; // r3
  int v143; // r4
  int v144; // r1
  int v145; // lr
  int v146; // r9
  int v147; // r3
  int v148; // r11
  int v149; // r0
  int v150; // r6
  int v151; // r4
  int v152; // r12
  int v153; // lr
  int v154; // r2
  int v155; // r6
  int v156; // r11
  int v157; // r3
  int v158; // r9
  int v159; // r12
  int v160; // lr
  int v161; // r2
  int v162; // r7
  unsigned int v163; // r12
  int v164; // r3
  unsigned int v165; // lr
  int v166; // r5
  unsigned int v167; // r1
  int v168; // r4
  int v169; // r6
  int v170; // r8
  int v171; // r3
  int v172; // r1
  int v173; // r9
  int v174; // r0
  int v175; // r2
  int v176; // r6
  int v177; // r8
  int v178; // r11
  int v179; // lr
  int v180; // r6
  int v181; // r3
  int v182; // r4
  int v183; // r1
  int v184; // lr
  int v185; // r9
  int v186; // r3
  int v187; // r11
  int v188; // r6
  int v189; // r4
  int v190; // r12
  int v191; // lr
  unsigned int v192; // r2
  int v193; // r6
  int v194; // r11
  int v195; // r3
  unsigned int v196; // r9
  int v197; // r12
  int v198; // lr
  int v199; // r2
  size_t n; // [sp+4h] [bp-E8h]
  unsigned int v201; // [sp+8h] [bp-E4h]
  int v202; // [sp+8h] [bp-E4h]
  int v203; // [sp+8h] [bp-E4h]
  int v204; // [sp+8h] [bp-E4h]
  int v205; // [sp+8h] [bp-E4h]
  int v206; // [sp+Ch] [bp-E0h]
  int i; // [sp+Ch] [bp-E0h]
  int v208; // [sp+Ch] [bp-E0h]
  int j; // [sp+Ch] [bp-E0h]
  int v210; // [sp+Ch] [bp-E0h]
  char *src; // [sp+10h] [bp-DCh]
  unsigned int *v212; // [sp+14h] [bp-D8h]
  int v213; // [sp+18h] [bp-D4h]
  int v214; // [sp+18h] [bp-D4h]
  int v215; // [sp+1Ch] [bp-D0h]
  int v216; // [sp+1Ch] [bp-D0h]
  int v217; // [sp+20h] [bp-CCh]
  int v218; // [sp+20h] [bp-CCh]
  int v219; // [sp+20h] [bp-CCh]
  int v220; // [sp+24h] [bp-C8h]
  int v221; // [sp+24h] [bp-C8h]
  int v222; // [sp+28h] [bp-C4h]
  int v223; // [sp+28h] [bp-C4h]
  int v224; // [sp+28h] [bp-C4h]
  int v225; // [sp+2Ch] [bp-C0h]
  int v226; // [sp+2Ch] [bp-C0h]
  int v227; // [sp+2Ch] [bp-C0h]
  int v228; // [sp+30h] [bp-BCh]
  int v229; // [sp+30h] [bp-BCh]
  int v230; // [sp+30h] [bp-BCh]
  unsigned int v231; // [sp+34h] [bp-B8h]
  unsigned int v232; // [sp+34h] [bp-B8h]
  unsigned int v233; // [sp+34h] [bp-B8h]
  int v234; // [sp+38h] [bp-B4h]
  int v235; // [sp+38h] [bp-B4h]
  unsigned int v236; // [sp+3Ch] [bp-B0h]
  int v237; // [sp+3Ch] [bp-B0h]
  unsigned int v238; // [sp+3Ch] [bp-B0h]
  unsigned int v239; // [sp+40h] [bp-ACh]
  unsigned int v240; // [sp+40h] [bp-ACh]
  unsigned int v241; // [sp+40h] [bp-ACh]
  int v242; // [sp+44h] [bp-A8h]
  int v243; // [sp+44h] [bp-A8h]
  int v244; // [sp+44h] [bp-A8h]
  int v245; // [sp+48h] [bp-A4h]
  int v246; // [sp+48h] [bp-A4h]
  int v247; // [sp+48h] [bp-A4h]
  int v248; // [sp+4Ch] [bp-A0h]
  int v249; // [sp+4Ch] [bp-A0h]
  int v250; // [sp+4Ch] [bp-A0h]
  unsigned int v251; // [sp+50h] [bp-9Ch]
  int v252; // [sp+50h] [bp-9Ch]
  unsigned int v253; // [sp+50h] [bp-9Ch]
  int v254; // [sp+54h] [bp-98h]
  int v255; // [sp+54h] [bp-98h]
  int v256; // [sp+54h] [bp-98h]
  int v257; // [sp+54h] [bp-98h]
  unsigned int v258; // [sp+58h] [bp-94h]
  int v259; // [sp+58h] [bp-94h]
  unsigned int v260; // [sp+58h] [bp-94h]
  int v261; // [sp+5Ch] [bp-90h]
  int v262; // [sp+5Ch] [bp-90h]
  int v263; // [sp+5Ch] [bp-90h]
  unsigned int v264; // [sp+60h] [bp-8Ch]
  int v265; // [sp+60h] [bp-8Ch]
  unsigned int v266; // [sp+60h] [bp-8Ch]
  int v267; // [sp+64h] [bp-88h]
  int v268; // [sp+64h] [bp-88h]
  int v269; // [sp+68h] [bp-84h]
  int v270; // [sp+68h] [bp-84h]
  int v271; // [sp+68h] [bp-84h]
  int v272; // [sp+6Ch] [bp-80h]
  int v273; // [sp+6Ch] [bp-80h]
  int v274; // [sp+6Ch] [bp-80h]
  unsigned int v275; // [sp+70h] [bp-7Ch]
  int v276; // [sp+70h] [bp-7Ch]
  int v277; // [sp+70h] [bp-7Ch]
  unsigned int v278; // [sp+70h] [bp-7Ch]
  int v279; // [sp+74h] [bp-78h]
  unsigned int v280; // [sp+74h] [bp-78h]
  int v281; // [sp+74h] [bp-78h]
  unsigned int v282; // [sp+78h] [bp-74h]
  int v283; // [sp+78h] [bp-74h]
  unsigned int v284; // [sp+78h] [bp-74h]
  unsigned int v285; // [sp+7Ch] [bp-70h]
  unsigned int v286; // [sp+7Ch] [bp-70h]
  unsigned int v287; // [sp+7Ch] [bp-70h]
  int v288; // [sp+80h] [bp-6Ch]
  int v289; // [sp+80h] [bp-6Ch]
  int v290; // [sp+80h] [bp-6Ch]
  int v291; // [sp+84h] [bp-68h]
  int v292; // [sp+84h] [bp-68h]
  int v293; // [sp+84h] [bp-68h]
  int v294; // [sp+88h] [bp-64h]
  int v295; // [sp+88h] [bp-64h]
  int v296; // [sp+88h] [bp-64h]
  int v297; // [sp+88h] [bp-64h]
  int v298; // [sp+8Ch] [bp-60h]
  int v299; // [sp+8Ch] [bp-60h]
  int v300; // [sp+8Ch] [bp-60h]
  int v301; // [sp+8Ch] [bp-60h]
  int v302; // [sp+90h] [bp-5Ch]
  unsigned int v303; // [sp+90h] [bp-5Ch]
  int v304; // [sp+94h] [bp-58h]
  int v305; // [sp+94h] [bp-58h]
  int v306; // [sp+98h] [bp-54h]
  int v307; // [sp+98h] [bp-54h]
  int v308; // [sp+9Ch] [bp-50h]
  int v309; // [sp+A0h] [bp-4Ch]
  int v310; // [sp+A0h] [bp-4Ch]
  int v311; // [sp+A4h] [bp-48h]
  int v312; // [sp+A4h] [bp-48h]
  int v313; // [sp+A8h] [bp-44h]
  int v314; // [sp+B0h] [bp-3Ch]
  int v315; // [sp+B4h] [bp-38h]
  int v316; // [sp+BCh] [bp-30h]
  int v317; // [sp+C0h] [bp-2Ch]
  int v318; // [sp+C4h] [bp-28h]
  int v319; // [sp+C8h] [bp-24h]
  int v320; // [sp+CCh] [bp-20h]

  v3 = *(_DWORD *)(result + 32);
  v4 = (unsigned int *)result;
  n = a3;
  v5 = 32 - v3;
  src = a2;
  if ( a3 < 32 - v3 )
  {
    result = (unsigned int)memcpy((void *)(result + v3), a2, a3);
    v4[8] = n + v3;
    return result;
  }
  v304 = *(_DWORD *)(result + 36);
  v302 = *(_DWORD *)(result + 40);
  v217 = *(_DWORD *)(result + 44);
  v222 = *(_DWORD *)(result + 48);
  v213 = *(_DWORD *)(result + 52);
  v215 = *(_DWORD *)(result + 56);
  v220 = *(_DWORD *)(result + 60);
  v225 = *(_DWORD *)(result + 64);
  v242 = *(_DWORD *)(result + 68);
  v228 = *(_DWORD *)(result + 72);
  v234 = *(_DWORD *)(result + 76);
  v294 = *(_DWORD *)(result + 80);
  v245 = *(_DWORD *)(result + 84);
  v231 = *(_DWORD *)(result + 88);
  v236 = *(_DWORD *)(result + 92);
  v239 = *(_DWORD *)(result + 96);
  v267 = *(_DWORD *)(result + 100);
  v248 = *(_DWORD *)(result + 104);
  v254 = *(_DWORD *)(result + 108);
  v261 = *(_DWORD *)(result + 112);
  v269 = *(_DWORD *)(result + 116);
  v251 = *(_DWORD *)(result + 120);
  v258 = *(_DWORD *)(result + 124);
  v264 = *(_DWORD *)(result + 128);
  v288 = *(_DWORD *)(result + 132);
  v272 = *(_DWORD *)(result + 136);
  v279 = *(_DWORD *)(result + 140);
  v298 = *(_DWORD *)(result + 144);
  v291 = *(_DWORD *)(result + 148);
  v275 = *(_DWORD *)(result + 152);
  v282 = *(_DWORD *)(result + 156);
  v285 = *(_DWORD *)(result + 160);
  if ( !a3 )
    goto LABEL_23;
  v212 = (unsigned int *)result;
  while ( 1 )
  {
    if ( v5 >= n )
      v5 = n;
    v6 = (char *)v212 + v3;
    v3 += v5;
    n -= v5;
    v7 = src;
    src += v5;
    result = (unsigned int)memcpy(v6, v7, v5);
    if ( v3 == 32 )
      break;
    if ( !n )
      goto LABEL_22;
LABEL_5:
    v5 = 32 - v3;
  }
  v8 = v264 ^ v239 ^ v225 ^ v285;
  v9 = v279 ^ v254 ^ v217 ^ v234 ^ v8;
  v308 = v9 ^ v298;
  v10 = v222 ^ v294 ^ v298 ^ v261 ^ v8;
  v11 = v282 ^ v258 ^ v220 ^ v236;
  v306 = v10 ^ v269;
  v295 = v9 ^ v294;
  v299 = v9 ^ v261;
  v12 = v285;
  v286 = bswap32(v212[2]);
  v13 = v275 ^ v251 ^ v231 ^ v215;
  v14 = bswap32(v212[6]);
  v15 = v245 ^ v213 ^ v291 ^ v269;
  v309 = v11 ^ v12;
  v226 = v11 ^ v225;
  v201 = bswap32(v212[7]);
  v16 = v10 ^ v269 ^ v308 ^ v11 ^ v12;
  v17 = v248 ^ v272 ^ v302 ^ v228;
  v18 = v213;
  v214 = v11 ^ v264;
  v262 = v10 ^ v18;
  v206 = v11 ^ v239;
  v19 = v288 ^ v304 ^ v242 ^ v267 ^ v8;
  v265 = v17 ^ v279;
  v20 = v10 ^ v245;
  v21 = bswap32(v212[5]);
  v280 = bswap32(v212[1]);
  v22 = v291;
  v292 = v15 ^ v251;
  v311 = v10 ^ v22;
  v313 = v15 ^ v275;
  v240 = bswap32(v212[3]);
  v23 = v15 ^ v231;
  v246 = v15 ^ v215;
  v252 = v13 ^ v220;
  v270 = v13 ^ v236;
  v24 = v13 ^ v258;
  v283 = v13 ^ v282;
  v237 = v8 ^ v288;
  v221 = v9 ^ v222;
  v216 = v17 ^ v217;
  v218 = v17 ^ v254;
  v25 = v20 ^ v299 ^ v214;
  v26 = v23 ^ v306;
  v27 = v19 ^ v248;
  v289 = v21 ^ v23 ^ v252;
  v249 = v8 ^ v304;
  v243 = v8 ^ v242;
  v276 = v27;
  v28 = v19 ^ v302;
  v255 = v8 ^ v267;
  v232 = bswap32(v212[4]);
  v29 = v19 ^ v228;
  v223 = v19 ^ v272;
  v30 = v14 ^ v286 ^ v201;
  v273 = v262 ^ v295 ^ v206 ^ v240 ^ v201;
  v307 = v26 ^ v240 ^ v201;
  v305 = v20 ^ v246 ^ v232;
  v303 = bswap32(*v212);
  v31 = v309;
  v319 = v218 ^ v214 ^ v295;
  v32 = v299;
  v300 = v25 ^ v30;
  v320 = v265 ^ v309 ^ v32 ^ v21;
  v316 = v262 ^ v313;
  v314 = v232 ^ v214 ^ v283;
  v317 = v246 ^ v283;
  v310 = v292 ^ v311 ^ v30;
  v33 = v221 ^ v311 ^ v226;
  v34 = v31;
  v35 = v270 ^ v292 ^ v232;
  v315 = v28 ^ v265;
  v36 = v17 ^ v234 ^ v276;
  v296 = v14 ^ v226 ^ v270;
  v37 = v237 ^ v31 ^ v276;
  v277 = v252 ^ v31;
  v38 = v255;
  v256 = v216 ^ v19 ^ v228;
  v318 = v36;
  v259 = v218 ^ v223;
  v39 = v28 ^ v243 ^ v206;
  v229 = v38 ^ v34;
  v40 = v29 ^ v38 ^ v214;
  v312 = v226 ^ v237;
  v41 = v249 ^ v226 ^ v223;
  v263 = v319 ^ v280 ^ v14;
  v293 = __ROR4__(v16 ^ v21 ^ v280 ^ v14, 29);
  v224 = v216 ^ v226 ^ v308 ^ v240;
  v247 = __ROR4__(v273, 31);
  v271 = __ROR4__(v300, 30);
  v253 = __ROR4__(v307, 30);
  v238 = __ROR4__(v289, 31);
  v266 = __ROR4__(v24 ^ v206 ^ v21, 30);
  v284 = __ROR4__(v240 ^ v201 ^ v24 ^ v313, 29);
  v227 = v277 ^ v201;
  v274 = v37 ^ v21 ^ v14;
  v278 = __ROR4__(v310, 29);
  v241 = __ROR4__(v296, 31);
  v297 = v17 ^ v234 ^ v206 ^ v221 ^ v286 ^ v201;
  v42 = v280;
  v219 = v315 ^ v286;
  v235 = v256 ^ v280;
  v43 = v243 ^ v214;
  v244 = v201 ^ v249 ^ v206;
  v281 = v259 ^ v14 ^ v201;
  v44 = v33 ^ v232;
  v250 = v40 ^ v14 ^ v201;
  v290 = v21 ^ v229;
  v233 = __ROR4__(v305, 31);
  v268 = v14 ^ v43;
  v260 = __ROR4__(v35, 30);
  v287 = __ROR4__(v314, 29);
  v301 = v320 ^ v201 ^ v303;
  v45 = v39 ^ v201 ^ v303;
  v46 = 0;
  v230 = v45;
  v257 = v318 ^ v201 ^ v303;
  v47 = v303 ^ v312;
  v202 = 809079974;
  v48 = v41 ^ v42;
  v49 = v316 ^ v21;
  v50 = v219;
  v51 = v317 ^ v14;
  v52 = v224;
  v53 = v227;
  for ( i = -533497832; ; i = dword_2AD900[v46] )
  {
    v54 = v50 ^ v52;
    v55 = v53 ^ v44;
    v56 = v54 ^ v47 & v52;
    v57 = (v47 | v48) ^ v52;
    v58 = (v49 | v51) ^ v44;
    v59 = v44 & v49;
    v60 = ~v48 ^ v47 & v52;
    v61 = v60 | v56;
    v62 = ~v51 ^ v59;
    v63 = v59 ^ v55;
    v64 = v54 & v57 ^ v60;
    v65 = v47 ^ (v60 | v56);
    v66 = v55 & v58 ^ v62;
    v67 = v62 | v63;
    v68 = v56 ^ v64;
    v69 = v64 & v61;
    v70 = v61 ^ ~v57;
    v71 = v66 & v67;
    v72 = v63 ^ v66 ^ v65;
    v73 = v72 ^ __ROR4__(v65, 30);
    v74 = v49 ^ v67 ^ v70;
    v75 = v67 ^ ~v58 ^ v69;
    v76 = v68 ^ v71;
    v77 = v73 ^ __ROR4__(v72, 18);
    v78 = v74 ^ __ROR4__(v70, 30);
    v79 = v75 ^ __ROR4__(v69, 30);
    v80 = v68 ^ v71 ^ __ROR4__(v68, 30);
    ++v46;
    v81 = v78 ^ __ROR4__(v74, 18);
    v82 = v79 ^ __ROR4__(v75, 18);
    v83 = v80 ^ __ROR4__(v76, 18);
    v47 = v77 ^ __ROR4__(v73, 22) ^ v202;
    v48 = v81 ^ __ROR4__(v78, 22);
    v50 = v82 ^ __ROR4__(v79, 22);
    v44 = i ^ __ROR4__(v77, 31);
    v49 = __ROR4__(v81, 31);
    v51 = __ROR4__(v82, 31);
    v52 = v83 ^ __ROR4__(v80, 22);
    v53 = __ROR4__(v83, 31);
    if ( v46 == 8 )
      break;
    v202 = dword_2AD8E0[v46];
  }
  v84 = 0;
  v225 = v53;
  v302 = v48;
  v215 = v49;
  v217 = v50;
  v220 = v51;
  v222 = v52;
  v304 = v47;
  v213 = v44;
  v208 = 23617341;
  v85 = v233;
  v86 = v235;
  v87 = v238;
  v88 = v297;
  v89 = v241;
  v90 = v244;
  v91 = v247;
  v203 = -1226960659;
  v92 = v230;
  while ( 1 )
  {
    v93 = v86 ^ v88;
    v94 = v89 ^ v91;
    v95 = v93 ^ v90 & v88;
    v96 = (v90 | v92) ^ v88;
    v97 = (v85 | v87) ^ v91;
    v98 = v91 & v85;
    v99 = ~v92 ^ v90 & v88;
    v100 = v99 | v95;
    v101 = ~v87 ^ v98;
    v102 = v98 ^ v94;
    v103 = v93 & v96 ^ v99;
    v104 = v90 ^ (v99 | v95);
    v105 = v94 & v97 ^ v101;
    v106 = v101 | v102;
    v107 = v95 ^ v103;
    v108 = v103 & v100;
    v109 = v100 ^ ~v96;
    v110 = v105 & v106;
    v111 = v102 ^ v105 ^ v104;
    v112 = v111 ^ __ROR4__(v104, 30);
    v113 = v85 ^ v106 ^ v109;
    v114 = v106 ^ ~v97 ^ v108;
    v115 = v107 ^ v110;
    v116 = v112 ^ __ROR4__(v111, 18);
    v117 = v113 ^ __ROR4__(v109, 30);
    v118 = v114 ^ __ROR4__(v108, 30);
    v119 = v107 ^ v110 ^ __ROR4__(v107, 30);
    ++v84;
    v120 = v117 ^ __ROR4__(v113, 18);
    v121 = v118 ^ __ROR4__(v114, 18);
    v122 = v119 ^ __ROR4__(v115, 18);
    v90 = v116 ^ __ROR4__(v112, 22) ^ v203;
    v92 = v120 ^ __ROR4__(v117, 22);
    v86 = v121 ^ __ROR4__(v118, 22);
    v91 = v208 ^ __ROR4__(v116, 31);
    v85 = __ROR4__(v120, 31);
    v87 = __ROR4__(v121, 31);
    v88 = v122 ^ __ROR4__(v119, 22);
    v89 = __ROR4__(v122, 31);
    if ( v84 == 8 )
      break;
    v203 = dword_2AD920[v84];
    v208 = dword_2AD940[v84];
  }
  v228 = v92;
  v123 = 0;
  v239 = v89;
  v231 = v85;
  v234 = v86;
  v236 = v87;
  v294 = v88;
  v242 = v90;
  v245 = v91;
  v204 = -64955950;
  v124 = v253;
  v125 = v257;
  v126 = v260;
  v127 = v263;
  v128 = v266;
  v129 = v268;
  v130 = v271;
  v131 = v250;
  for ( j = -497126719; ; j = dword_2AD980[v123] )
  {
    v132 = v125 ^ v127;
    v133 = v128 ^ v130;
    v134 = v132 ^ v129 & v127;
    v135 = (v129 | v131) ^ v127;
    v136 = (v124 | v126) ^ v130;
    v137 = v130 & v124;
    v138 = ~v131 ^ v129 & v127;
    v139 = v138 | v134;
    v140 = ~v126 ^ v137;
    v141 = v137 ^ v133;
    v142 = v132 & v135 ^ v138;
    v143 = v129 ^ (v138 | v134);
    v144 = v133 & v136 ^ v140;
    v145 = v140 | v141;
    v146 = v134 ^ v142;
    v147 = v142 & v139;
    v148 = v139 ^ ~v135;
    v149 = v144 & v145;
    v150 = v141 ^ v144 ^ v143;
    v151 = v150 ^ __ROR4__(v143, 30);
    v152 = v124 ^ v145 ^ v148;
    v153 = v145 ^ ~v136 ^ v147;
    v154 = v146 ^ v149;
    v155 = v151 ^ __ROR4__(v150, 18);
    v156 = v152 ^ __ROR4__(v148, 30);
    v157 = v153 ^ __ROR4__(v147, 30);
    v158 = v146 ^ v149 ^ __ROR4__(v146, 30);
    ++v123;
    v159 = v156 ^ __ROR4__(v152, 18);
    v160 = v157 ^ __ROR4__(v153, 18);
    v161 = v158 ^ __ROR4__(v154, 18);
    v129 = v155 ^ __ROR4__(v151, 22) ^ v204;
    v131 = v159 ^ __ROR4__(v156, 22);
    v125 = v160 ^ __ROR4__(v157, 22);
    v130 = j ^ __ROR4__(v155, 31);
    v124 = __ROR4__(v159, 31);
    v126 = __ROR4__(v160, 31);
    v127 = v161 ^ __ROR4__(v158, 22);
    v128 = __ROR4__(v161, 31);
    if ( v123 == 8 )
      break;
    v204 = dword_2AD960[v123];
  }
  v162 = 0;
  v264 = v128;
  v248 = v131;
  v251 = v124;
  v254 = v125;
  v258 = v126;
  v261 = v127;
  v267 = v129;
  v269 = v130;
  v210 = -534197825;
  v163 = v278;
  v164 = v281;
  v165 = v284;
  v166 = v301;
  v167 = v287;
  v168 = v290;
  v169 = v293;
  v205 = -1307332699;
  v170 = v274;
  while ( 1 )
  {
    v171 = v164 ^ v166;
    v172 = v167 ^ v169;
    v173 = v171 ^ v168 & v166;
    v174 = (v168 | v170) ^ v166;
    v175 = (v163 | v165) ^ v169;
    v176 = v169 & v163;
    v177 = ~v170 ^ v168 & v166;
    v178 = v177 | v173;
    v179 = ~v165 ^ v176;
    v180 = v176 ^ v172;
    v181 = v171 & v174 ^ v177;
    v182 = v168 ^ (v177 | v173);
    v183 = v172 & v175 ^ v179;
    v184 = v179 | v180;
    v185 = v173 ^ v181;
    v186 = v181 & v178;
    v187 = v178 ^ ~v174;
    result = v183 & v184;
    v188 = v180 ^ v183 ^ v182;
    v189 = v188 ^ __ROR4__(v182, 30);
    v190 = v163 ^ v184 ^ v187;
    v191 = v184 ^ ~v175 ^ v186;
    v192 = v185 ^ result;
    v193 = v189 ^ __ROR4__(v188, 18);
    v194 = v190 ^ __ROR4__(v187, 30);
    v195 = v191 ^ __ROR4__(v186, 30);
    v196 = v185 ^ result ^ __ROR4__(v185, 30);
    ++v162;
    v197 = v194 ^ __ROR4__(v190, 18);
    v198 = v195 ^ __ROR4__(v191, 18);
    v199 = v196 ^ __ROR4__(v192, 18);
    v168 = v193 ^ __ROR4__(v189, 22) ^ v205;
    v170 = v197 ^ __ROR4__(v194, 22);
    v164 = v198 ^ __ROR4__(v195, 22);
    v169 = v210 ^ __ROR4__(v193, 31);
    v163 = __ROR4__(v197, 31);
    v165 = __ROR4__(v198, 31);
    v166 = v199 ^ __ROR4__(v196, 22);
    v167 = __ROR4__(v199, 31);
    if ( v162 == 8 )
      break;
    v205 = dword_2ADA40[v162];
    v210 = dword_2ADA60[v162];
  }
  v279 = v164;
  v288 = v168;
  v3 = 0;
  v272 = v170;
  v275 = v163;
  v282 = v165;
  v298 = v166;
  v285 = v167;
  v291 = v169;
  if ( n )
    goto LABEL_5;
LABEL_22:
  v4 = v212;
LABEL_23:
  v4[9] = v304;
  v4[10] = v302;
  v4[11] = v217;
  v4[12] = v222;
  v4[13] = v213;
  v4[14] = v215;
  v4[15] = v220;
  v4[16] = v225;
  v4[17] = v242;
  v4[18] = v228;
  v4[19] = v234;
  v4[20] = v294;
  v4[21] = v245;
  v4[22] = v231;
  v4[23] = v236;
  v4[24] = v239;
  v4[25] = v267;
  v4[26] = v248;
  v4[27] = v254;
  v4[28] = v261;
  v4[29] = v269;
  v4[30] = v251;
  v4[31] = v258;
  v4[32] = v264;
  v4[33] = v288;
  v4[34] = v272;
  v4[35] = v279;
  v4[36] = v298;
  v4[37] = v291;
  v4[38] = v275;
  v4[39] = v282;
  v4[40] = v285;
  v4[8] = v3;
  return result;
}
