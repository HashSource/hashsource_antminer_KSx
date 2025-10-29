unsigned int __fastcall sph_luffa512(unsigned int result, char *a2, size_t a3)
{
  unsigned int v3; // r4
  unsigned int *v4; // r10
  size_t v5; // r3
  char *v6; // r0
  const void *v7; // r1
  int v8; // r7
  int v9; // lr
  int v10; // r11
  int v11; // r5
  int v12; // r10
  int v13; // lr
  int v14; // r4
  int v15; // r12
  int v16; // r0
  int v17; // r11
  int v18; // r8
  int v19; // r2
  int v20; // r1
  int v21; // r5
  int v22; // lr
  int v23; // r10
  int v24; // r9
  int v25; // r6
  int v26; // r11
  int v27; // r2
  int v28; // r1
  int v29; // r12
  int v30; // r3
  int v31; // r11
  int v32; // r10
  int v33; // r7
  int v34; // r0
  int v35; // r4
  int v36; // r9
  int v37; // r6
  int v38; // r5
  int v39; // r11
  int v40; // lr
  int v41; // r6
  int v42; // r2
  int v43; // r3
  int v44; // r2
  int v45; // r5
  int v46; // r3
  int v47; // r8
  int v48; // r12
  int v49; // r6
  int v50; // r10
  int v51; // r1
  int v52; // r2
  int v53; // r7
  int v54; // r8
  int v55; // r9
  int v56; // r5
  int v57; // r4
  int v58; // r3
  int v59; // r1
  unsigned int v60; // r11
  int v61; // r0
  int v62; // r6
  int v63; // r0
  int v64; // r7
  int v65; // r6
  int v66; // r12
  int v67; // r1
  int v68; // r2
  int v69; // lr
  int v70; // r9
  int v71; // r3
  int v72; // r0
  int v73; // r5
  int v74; // r7
  int v75; // r12
  int v76; // lr
  int v77; // r1
  int v78; // r4
  int v79; // r6
  int v80; // r8
  int v81; // r3
  int v82; // r1
  int v83; // r10
  int v84; // r0
  int v85; // r2
  int v86; // r8
  int v87; // r9
  int v88; // r11
  int v89; // lr
  int v90; // r8
  int v91; // r3
  int v92; // r4
  int v93; // r1
  int v94; // lr
  int v95; // r10
  int v96; // r3
  int v97; // r11
  int v98; // r0
  int v99; // r8
  int v100; // r12
  int v101; // lr
  int v102; // r2
  int v103; // r11
  int v104; // r3
  int v105; // r4
  int v106; // r10
  int v107; // r12
  int v108; // lr
  int v109; // r8
  int v110; // r2
  int v111; // r7
  unsigned int v112; // r12
  int v113; // r3
  unsigned int v114; // lr
  int v115; // r5
  unsigned int v116; // r1
  int v117; // r4
  int v118; // r6
  int v119; // r8
  int v120; // r3
  int v121; // r1
  int v122; // r9
  int v123; // r0
  int v124; // r2
  int v125; // r6
  int v126; // r8
  int v127; // r11
  int v128; // lr
  int v129; // r6
  int v130; // r3
  int v131; // r4
  int v132; // r1
  int v133; // lr
  int v134; // r9
  int v135; // r3
  int v136; // r11
  int v137; // r0
  int v138; // r6
  int v139; // r4
  int v140; // r12
  int v141; // lr
  int v142; // r2
  int v143; // r6
  int v144; // r11
  int v145; // r3
  int v146; // r9
  int v147; // r12
  int v148; // lr
  int v149; // r2
  int v150; // r7
  unsigned int v151; // r12
  int v152; // r3
  unsigned int v153; // lr
  int v154; // r5
  unsigned int v155; // r1
  int v156; // r4
  int v157; // r6
  int v158; // r8
  int v159; // r3
  int v160; // r1
  int v161; // r9
  int v162; // r0
  int v163; // r2
  int v164; // r6
  int v165; // r8
  int v166; // r11
  int v167; // lr
  int v168; // r6
  int v169; // r3
  int v170; // r4
  int v171; // r1
  int v172; // lr
  int v173; // r9
  int v174; // r3
  int v175; // r11
  int v176; // r0
  int v177; // r6
  int v178; // r4
  int v179; // r12
  int v180; // lr
  int v181; // r2
  int v182; // r6
  int v183; // r11
  int v184; // r3
  int v185; // r9
  int v186; // r12
  int v187; // lr
  int v188; // r2
  int v189; // r7
  unsigned int v190; // r12
  int v191; // r3
  unsigned int v192; // lr
  int v193; // r5
  unsigned int v194; // r1
  int v195; // r4
  int v196; // r6
  int v197; // r8
  int v198; // r3
  int v199; // r1
  int v200; // r9
  int v201; // r0
  int v202; // r2
  int v203; // r6
  int v204; // r8
  int v205; // r11
  int v206; // lr
  int v207; // r6
  int v208; // r3
  int v209; // r4
  int v210; // r1
  int v211; // lr
  int v212; // r9
  int v213; // r3
  int v214; // r11
  int v215; // r0
  int v216; // r6
  int v217; // r4
  int v218; // r12
  int v219; // lr
  int v220; // r2
  int v221; // r6
  int v222; // r11
  int v223; // r3
  int v224; // r9
  int v225; // r12
  int v226; // lr
  int v227; // r2
  int v228; // r7
  unsigned int v229; // r12
  int v230; // r3
  unsigned int v231; // lr
  int v232; // r5
  unsigned int v233; // r1
  int v234; // r4
  int v235; // r6
  int v236; // r8
  int v237; // r3
  int v238; // r1
  int v239; // r9
  int v240; // r0
  int v241; // r2
  int v242; // r6
  int v243; // r8
  int v244; // r11
  int v245; // lr
  int v246; // r6
  int v247; // r3
  int v248; // r4
  int v249; // r1
  int v250; // lr
  int v251; // r9
  int v252; // r3
  int v253; // r11
  int v254; // r6
  int v255; // r4
  int v256; // r12
  int v257; // lr
  int v258; // r2
  int v259; // r6
  int v260; // r11
  int v261; // r3
  int v262; // r9
  int v263; // r12
  int v264; // lr
  int v265; // r2
  size_t n; // [sp+0h] [bp-10Ch]
  int v267; // [sp+4h] [bp-108h]
  unsigned int v268; // [sp+4h] [bp-108h]
  int v269; // [sp+4h] [bp-108h]
  int v270; // [sp+4h] [bp-108h]
  int v271; // [sp+4h] [bp-108h]
  int v272; // [sp+4h] [bp-108h]
  int v273; // [sp+4h] [bp-108h]
  unsigned int v274; // [sp+8h] [bp-104h]
  int v275; // [sp+8h] [bp-104h]
  int i; // [sp+8h] [bp-104h]
  int v277; // [sp+8h] [bp-104h]
  int j; // [sp+8h] [bp-104h]
  unsigned int *v279; // [sp+Ch] [bp-100h]
  char *src; // [sp+10h] [bp-FCh]
  int v281; // [sp+14h] [bp-F8h]
  int v282; // [sp+14h] [bp-F8h]
  int v283; // [sp+14h] [bp-F8h]
  int v284; // [sp+14h] [bp-F8h]
  int v285; // [sp+14h] [bp-F8h]
  int v286; // [sp+18h] [bp-F4h]
  int v287; // [sp+18h] [bp-F4h]
  int v288; // [sp+18h] [bp-F4h]
  int v289; // [sp+1Ch] [bp-F0h]
  unsigned int v290; // [sp+1Ch] [bp-F0h]
  int v291; // [sp+20h] [bp-ECh]
  unsigned int v292; // [sp+20h] [bp-ECh]
  int v293; // [sp+20h] [bp-ECh]
  int v294; // [sp+24h] [bp-E8h]
  int v295; // [sp+24h] [bp-E8h]
  int v296; // [sp+24h] [bp-E8h]
  int v297; // [sp+28h] [bp-E4h]
  unsigned int v298; // [sp+28h] [bp-E4h]
  int v299; // [sp+28h] [bp-E4h]
  int v300; // [sp+2Ch] [bp-E0h]
  int v301; // [sp+2Ch] [bp-E0h]
  int v302; // [sp+2Ch] [bp-E0h]
  int v303; // [sp+2Ch] [bp-E0h]
  unsigned int v304; // [sp+30h] [bp-DCh]
  int v305; // [sp+30h] [bp-DCh]
  int v306; // [sp+30h] [bp-DCh]
  unsigned int v307; // [sp+30h] [bp-DCh]
  int v308; // [sp+34h] [bp-D8h]
  int v309; // [sp+34h] [bp-D8h]
  int v310; // [sp+34h] [bp-D8h]
  int v311; // [sp+34h] [bp-D8h]
  unsigned int v312; // [sp+38h] [bp-D4h]
  int v313; // [sp+38h] [bp-D4h]
  int v314; // [sp+38h] [bp-D4h]
  unsigned int v315; // [sp+38h] [bp-D4h]
  int v316; // [sp+3Ch] [bp-D0h]
  int v317; // [sp+3Ch] [bp-D0h]
  unsigned int v318; // [sp+3Ch] [bp-D0h]
  int v319; // [sp+3Ch] [bp-D0h]
  int v320; // [sp+40h] [bp-CCh]
  int v321; // [sp+40h] [bp-CCh]
  int v322; // [sp+40h] [bp-CCh]
  int v323; // [sp+40h] [bp-CCh]
  int v324; // [sp+44h] [bp-C8h]
  int v325; // [sp+44h] [bp-C8h]
  int v326; // [sp+44h] [bp-C8h]
  int v327; // [sp+44h] [bp-C8h]
  int v328; // [sp+48h] [bp-C4h]
  int v329; // [sp+48h] [bp-C4h]
  int v330; // [sp+48h] [bp-C4h]
  int v331; // [sp+48h] [bp-C4h]
  unsigned int v332; // [sp+4Ch] [bp-C0h]
  int v333; // [sp+4Ch] [bp-C0h]
  int v334; // [sp+4Ch] [bp-C0h]
  unsigned int v335; // [sp+4Ch] [bp-C0h]
  int v336; // [sp+50h] [bp-BCh]
  int v337; // [sp+50h] [bp-BCh]
  int v338; // [sp+50h] [bp-BCh]
  int v339; // [sp+50h] [bp-BCh]
  unsigned int v340; // [sp+54h] [bp-B8h]
  int v341; // [sp+54h] [bp-B8h]
  unsigned int v342; // [sp+54h] [bp-B8h]
  int v343; // [sp+58h] [bp-B4h]
  unsigned int v344; // [sp+58h] [bp-B4h]
  int v345; // [sp+58h] [bp-B4h]
  int v346; // [sp+5Ch] [bp-B0h]
  int v347; // [sp+5Ch] [bp-B0h]
  int v348; // [sp+5Ch] [bp-B0h]
  int v349; // [sp+5Ch] [bp-B0h]
  int v350; // [sp+60h] [bp-ACh]
  int v351; // [sp+60h] [bp-ACh]
  int v352; // [sp+60h] [bp-ACh]
  int v353; // [sp+60h] [bp-ACh]
  int v354; // [sp+64h] [bp-A8h]
  int v355; // [sp+64h] [bp-A8h]
  int v356; // [sp+64h] [bp-A8h]
  int v357; // [sp+64h] [bp-A8h]
  unsigned int v358; // [sp+68h] [bp-A4h]
  int v359; // [sp+68h] [bp-A4h]
  int v360; // [sp+68h] [bp-A4h]
  unsigned int v361; // [sp+68h] [bp-A4h]
  int v362; // [sp+6Ch] [bp-A0h]
  int v363; // [sp+6Ch] [bp-A0h]
  int v364; // [sp+6Ch] [bp-A0h]
  int v365; // [sp+6Ch] [bp-A0h]
  unsigned int v366; // [sp+70h] [bp-9Ch]
  int v367; // [sp+70h] [bp-9Ch]
  int v368; // [sp+70h] [bp-9Ch]
  int v369; // [sp+70h] [bp-9Ch]
  unsigned int v370; // [sp+70h] [bp-9Ch]
  unsigned int v371; // [sp+74h] [bp-98h]
  int v372; // [sp+74h] [bp-98h]
  unsigned int v373; // [sp+74h] [bp-98h]
  int v374; // [sp+78h] [bp-94h]
  int v375; // [sp+78h] [bp-94h]
  int v376; // [sp+78h] [bp-94h]
  int v377; // [sp+7Ch] [bp-90h]
  unsigned int v378; // [sp+7Ch] [bp-90h]
  int v379; // [sp+7Ch] [bp-90h]
  int v380; // [sp+80h] [bp-8Ch]
  int v381; // [sp+80h] [bp-8Ch]
  int v382; // [sp+80h] [bp-8Ch]
  int v383; // [sp+80h] [bp-8Ch]
  unsigned int v384; // [sp+84h] [bp-88h]
  int v385; // [sp+84h] [bp-88h]
  int v386; // [sp+84h] [bp-88h]
  unsigned int v387; // [sp+84h] [bp-88h]
  unsigned int v388; // [sp+88h] [bp-84h]
  int v389; // [sp+88h] [bp-84h]
  int v390; // [sp+88h] [bp-84h]
  int v391; // [sp+88h] [bp-84h]
  unsigned int v392; // [sp+88h] [bp-84h]
  int v393; // [sp+8Ch] [bp-80h]
  int v394; // [sp+8Ch] [bp-80h]
  int v395; // [sp+8Ch] [bp-80h]
  int v396; // [sp+8Ch] [bp-80h]
  int v397; // [sp+90h] [bp-7Ch]
  int v398; // [sp+90h] [bp-7Ch]
  int v399; // [sp+90h] [bp-7Ch]
  int v400; // [sp+94h] [bp-78h]
  int v401; // [sp+94h] [bp-78h]
  int v402; // [sp+94h] [bp-78h]
  int v403; // [sp+94h] [bp-78h]
  unsigned int v404; // [sp+98h] [bp-74h]
  int v405; // [sp+98h] [bp-74h]
  int v406; // [sp+98h] [bp-74h]
  unsigned int v407; // [sp+98h] [bp-74h]
  unsigned int v408; // [sp+9Ch] [bp-70h]
  int v409; // [sp+9Ch] [bp-70h]
  int v410; // [sp+9Ch] [bp-70h]
  unsigned int v411; // [sp+9Ch] [bp-70h]
  int v412; // [sp+A0h] [bp-6Ch]
  int v413; // [sp+A0h] [bp-6Ch]
  int v414; // [sp+A0h] [bp-6Ch]
  int v415; // [sp+A0h] [bp-6Ch]
  int v416; // [sp+A4h] [bp-68h]
  int v417; // [sp+A4h] [bp-68h]
  int v418; // [sp+A4h] [bp-68h]
  unsigned int v419; // [sp+A8h] [bp-64h]
  int v420; // [sp+A8h] [bp-64h]
  int v421; // [sp+A8h] [bp-64h]
  int v422; // [sp+A8h] [bp-64h]
  unsigned int v423; // [sp+A8h] [bp-64h]
  int v424; // [sp+ACh] [bp-60h]
  int v425; // [sp+ACh] [bp-60h]
  int v426; // [sp+ACh] [bp-60h]
  int v427; // [sp+B0h] [bp-5Ch]
  int v428; // [sp+B4h] [bp-58h]
  int v429; // [sp+B4h] [bp-58h]
  int v430; // [sp+B4h] [bp-58h]
  int v431; // [sp+B8h] [bp-54h]
  int v432; // [sp+B8h] [bp-54h]
  int v433; // [sp+B8h] [bp-54h]
  int v434; // [sp+BCh] [bp-50h]
  int v435; // [sp+BCh] [bp-50h]
  int v436; // [sp+BCh] [bp-50h]
  int v437; // [sp+C0h] [bp-4Ch]
  int v438; // [sp+C0h] [bp-4Ch]
  int v439; // [sp+C4h] [bp-48h]
  int v440; // [sp+C4h] [bp-48h]
  int v441; // [sp+C8h] [bp-44h]
  int v442; // [sp+C8h] [bp-44h]
  int v443; // [sp+CCh] [bp-40h]
  int v444; // [sp+CCh] [bp-40h]
  int v445; // [sp+D0h] [bp-3Ch]
  int v446; // [sp+D0h] [bp-3Ch]
  int v447; // [sp+D0h] [bp-3Ch]
  int v448; // [sp+D4h] [bp-38h]
  int v449; // [sp+D4h] [bp-38h]
  int v450; // [sp+D8h] [bp-34h]
  int v451; // [sp+D8h] [bp-34h]
  int v452; // [sp+DCh] [bp-30h]
  int v453; // [sp+DCh] [bp-30h]
  int v454; // [sp+E0h] [bp-2Ch]
  int v455; // [sp+E4h] [bp-28h]
  int v456; // [sp+E8h] [bp-24h]
  int v457; // [sp+ECh] [bp-20h]

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
  v294 = *(_DWORD *)(result + 36);
  v424 = *(_DWORD *)(result + 40);
  v427 = *(_DWORD *)(result + 44);
  v281 = *(_DWORD *)(result + 48);
  v297 = *(_DWORD *)(result + 52);
  v286 = *(_DWORD *)(result + 56);
  v289 = *(_DWORD *)(result + 60);
  v291 = *(_DWORD *)(result + 64);
  v320 = *(_DWORD *)(result + 68);
  v300 = *(_DWORD *)(result + 72);
  v308 = *(_DWORD *)(result + 76);
  v316 = *(_DWORD *)(result + 80);
  v324 = *(_DWORD *)(result + 84);
  v304 = *(_DWORD *)(result + 88);
  v312 = *(_DWORD *)(result + 92);
  v404 = *(_DWORD *)(result + 96);
  v346 = *(_DWORD *)(result + 100);
  v328 = *(_DWORD *)(result + 104);
  v336 = *(_DWORD *)(result + 108);
  v343 = *(_DWORD *)(result + 112);
  v350 = *(_DWORD *)(result + 116);
  v332 = *(_DWORD *)(result + 120);
  v340 = *(_DWORD *)(result + 124);
  v408 = *(_DWORD *)(result + 128);
  v374 = *(_DWORD *)(result + 132);
  v354 = *(_DWORD *)(result + 136);
  v362 = *(_DWORD *)(result + 140);
  v412 = *(_DWORD *)(result + 144);
  v377 = *(_DWORD *)(result + 148);
  v358 = *(_DWORD *)(result + 152);
  v366 = *(_DWORD *)(result + 156);
  v371 = *(_DWORD *)(result + 160);
  v397 = *(_DWORD *)(result + 164);
  v380 = *(_DWORD *)(result + 168);
  v416 = *(_DWORD *)(result + 172);
  v393 = *(_DWORD *)(result + 176);
  v400 = *(_DWORD *)(result + 180);
  v384 = *(_DWORD *)(result + 184);
  v388 = *(_DWORD *)(result + 188);
  v419 = *(_DWORD *)(result + 192);
  if ( !a3 )
    goto LABEL_26;
  v279 = (unsigned int *)result;
  while ( 1 )
  {
    if ( v5 >= n )
      v5 = n;
    v6 = (char *)v279 + v3;
    v3 += v5;
    n -= v5;
    v7 = src;
    src += v5;
    result = (unsigned int)memcpy(v6, v7, v5);
    if ( v3 == 32 )
      break;
    if ( !n )
      goto LABEL_25;
LABEL_5:
    v5 = 32 - v3;
  }
  v8 = v281;
  v9 = v343 ^ v412 ^ v281 ^ v316 ^ v393;
  v282 = v419 ^ v371 ^ v408 ^ v404 ^ v291;
  v10 = v312 ^ v289 ^ v366 ^ v340 ^ v388;
  v11 = v10 ^ v419;
  v12 = v380 ^ v424 ^ v300 ^ v354 ^ v328;
  v405 = v10 ^ v404;
  v13 = v9 ^ v282;
  v14 = v416 ^ v362 ^ v427 ^ v308 ^ v336 ^ v282;
  v445 = v12 ^ v416;
  v15 = v14 ^ v412;
  v16 = v286 ^ v304 ^ v358 ^ v332 ^ v384;
  v428 = v13 ^ v400;
  v413 = v10 ^ v408;
  v372 = v10 ^ v371;
  v409 = v10 ^ v291;
  v420 = v12 ^ v362;
  v417 = v12 ^ v336;
  v17 = v12 ^ v308;
  v309 = v11;
  v337 = v17;
  v389 = v16 ^ v388;
  v363 = v14 ^ v316;
  v18 = v14 ^ v343;
  v448 = v14 ^ v393;
  v267 = v15 ^ v13 ^ v400;
  v394 = v14 ^ v8 ^ v445 ^ v11;
  v437 = v16 ^ v312;
  v441 = v16 ^ v340;
  v317 = v16 ^ v366;
  v313 = v409 ^ v389;
  v19 = v377 ^ v350 ^ v297 ^ v324 ^ v400;
  v20 = v397 ^ v346 ^ v294 ^ v320 ^ v374 ^ v282;
  v431 = v13 ^ v297;
  v21 = v13 ^ v324;
  v439 = v13 ^ v350;
  v22 = v13 ^ v377;
  v298 = bswap32(*v279);
  v367 = v267 ^ v372;
  v401 = v12 ^ v427;
  v450 = v15 ^ v417 ^ v413;
  v434 = v16 ^ v289;
  v292 = bswap32(v279[7]);
  v443 = v20 ^ v380;
  v381 = v374 ^ v282;
  v325 = v282 ^ v294;
  v23 = v19 ^ v286;
  v295 = v317 ^ v309;
  v24 = v19 ^ v332;
  v25 = v19 ^ v304;
  v26 = v19 ^ v358;
  v27 = v19 ^ v384;
  v290 = bswap32(v279[6]);
  v378 = bswap32(v279[2]);
  v344 = bswap32(v279[1]);
  v359 = v18 ^ v337 ^ v405;
  v268 = bswap32(v279[4]);
  v305 = v20 ^ v424;
  v301 = v20 ^ v300;
  v274 = bswap32(v279[5]);
  v333 = v20 ^ v354;
  v329 = v20 ^ v328;
  v28 = v282 ^ v320;
  v29 = v346 ^ v282;
  v30 = v282 ^ v397;
  v425 = v22 ^ v27;
  v452 = v325 ^ v309;
  v341 = v14 ^ v8 ^ v21 ^ v409;
  v454 = v23 ^ v428;
  v351 = v23 ^ v437;
  v429 = v26 ^ v389;
  v31 = v26 ^ v439;
  v287 = v437 ^ v413;
  v32 = v21 ^ v24;
  v33 = v363 ^ v439 ^ v405;
  v398 = v24 ^ v317;
  v34 = v434 ^ v405;
  v35 = v431;
  v432 = v434 ^ v27;
  v385 = v18 ^ v22 ^ v413;
  v36 = v420 ^ v372 ^ v448;
  v375 = v35 ^ v448 ^ v309;
  v347 = v35 ^ v25;
  v37 = v25 ^ v441;
  v283 = v441 ^ v372;
  v318 = bswap32(v279[3]);
  v38 = v394 ^ v409 ^ v389 ^ v367 ^ v268;
  v355 = v333 ^ v445;
  v390 = v301 ^ v417;
  v456 = v31 ^ v367;
  v39 = v31 ^ v37;
  v435 = v434 ^ v405 ^ v37;
  v321 = v305 ^ v337;
  v40 = v329 ^ v420;
  v41 = v30 ^ v309;
  v421 = v372 ^ v30;
  v42 = v381 ^ v372;
  v382 = v413 ^ v381;
  v43 = v29 ^ v413;
  v310 = v405 ^ v29;
  v44 = v42 ^ v443;
  v338 = v401 ^ v443;
  v368 = v409 ^ v28;
  v364 = v363 ^ v401 ^ v409;
  v402 = v38 ^ v274 ^ v298 ^ v292;
  v414 = v359 ^ v437 ^ v413 ^ v341;
  v45 = v450 ^ v333 ^ v445;
  v446 = v450 ^ v441 ^ v372 ^ v33;
  v302 = v301 ^ v325 ^ v409;
  v46 = v43 ^ v333;
  v455 = v36 ^ v295 ^ v385;
  v451 = v385 ^ v32;
  v47 = v321 ^ v394;
  v326 = v329 ^ v28 ^ v405;
  v386 = v378 ^ v292;
  v48 = v359 ^ v40;
  v410 = v39 ^ v268;
  v49 = v41 ^ v305;
  v395 = v33 ^ v347 ^ v268;
  v50 = v32 ^ v351 ^ v274;
  v406 = v290 ^ v435;
  v51 = v452 ^ v313 ^ v44;
  v306 = v34 ^ v452;
  v442 = v47 ^ v34;
  v453 = v45 ^ v295;
  v457 = v51 ^ v268;
  v438 = v268 ^ v283 ^ v429;
  v360 = v40 ^ v44;
  v52 = v429 ^ v454;
  v430 = v321 ^ v326;
  v444 = v347 ^ v432;
  v449 = v48 ^ v283;
  v53 = v425 ^ v375;
  v54 = v398 ^ v425;
  v426 = v355 ^ v49;
  v348 = v287 ^ v398 ^ v274;
  v330 = v351 ^ v313;
  v356 = v302 ^ v338;
  v334 = v421 ^ v313;
  v55 = v36 ^ v338 ^ v313 ^ v268;
  v56 = v421 ^ v295 ^ v46;
  v57 = v368;
  v58 = v46 ^ v390;
  v59 = v364 ^ v390;
  v440 = v34 ^ v368 ^ v49;
  v314 = v364 ^ v34 ^ v375;
  v352 = v414 ^ v318 ^ v292;
  v60 = __ROR4__(v295 ^ v432 ^ v318 ^ v292, 28);
  v369 = v451 ^ v318 ^ v292;
  v422 = v54 ^ v318 ^ v292;
  v61 = v290 ^ v378 ^ v292;
  v391 = v446 ^ v61;
  v436 = v456 ^ v61;
  v62 = v274 ^ v344 ^ v290;
  v63 = v61 ^ v52;
  v64 = v53 ^ v62;
  v433 = v455 ^ v62;
  v322 = v57 ^ v287;
  v65 = v283;
  v66 = v310 ^ v287 ^ v302;
  v447 = v59 ^ v287;
  v67 = v382 ^ v283;
  v284 = v382 ^ v295;
  v68 = v290 ^ v292;
  v415 = v453 ^ v274 ^ v298 ^ v292;
  v296 = v298 ^ v306;
  v403 = __ROR4__(v402, 28);
  v383 = v457 ^ v274;
  v288 = v341 ^ v454 ^ v274;
  v342 = __ROR4__(v410, 30);
  v307 = __ROR4__(v395, 31);
  v373 = __ROR4__(v438, 29);
  v69 = v298 ^ v292;
  v299 = v314 ^ v268;
  v339 = v58 ^ v69;
  v411 = __ROR4__(v348, 30);
  v303 = v66 ^ v69;
  v315 = __ROR4__(v50, 31);
  v323 = v292 ^ v322;
  v293 = v292 ^ v330;
  v399 = v268 ^ v334;
  v376 = v274 ^ v284;
  v407 = __ROR4__(v406, 31);
  v349 = v290 ^ v310 ^ v65;
  v396 = v55 ^ v68;
  v331 = v67 ^ v326 ^ v68;
  v365 = v360 ^ v68;
  v327 = __ROR4__(v352, 31);
  v285 = v442 ^ v318;
  v335 = __ROR4__(v369, 30);
  v370 = __ROR4__(v422, 29);
  v423 = v60;
  v319 = v447 ^ v386;
  v353 = __ROR4__(v391, 30);
  v361 = __ROR4__(v436, 29);
  v392 = __ROR4__(v63, 28);
  v70 = v440 ^ v344;
  v311 = v344 ^ v430;
  v71 = v378 ^ v356;
  v379 = __ROR4__(v433, 29);
  v387 = __ROR4__(v64, 28);
  v72 = v56 ^ v274 ^ v290;
  v73 = 0;
  v345 = v449 ^ v344 ^ v290;
  v357 = v72;
  v269 = 809079974;
  v418 = v426 ^ v274 ^ v290;
  v74 = -533497832;
  v75 = v288;
  v76 = v444 ^ v290;
  v77 = v293;
  v78 = v296;
  v79 = v285;
  v80 = v299;
  while ( 1 )
  {
    v81 = v71 ^ v79;
    v82 = v77 ^ v80;
    v83 = v81 ^ v78 & v79;
    v84 = (v78 | v70) ^ v79;
    v85 = (v75 | v76) ^ v80;
    v86 = v80 & v75;
    v87 = ~v70 ^ v78 & v79;
    v88 = v87 | v83;
    v89 = ~v76 ^ v86;
    v90 = v86 ^ v82;
    v91 = v81 & v84 ^ v87;
    v92 = v78 ^ (v87 | v83);
    v93 = v82 & v85 ^ v89;
    v94 = v89 | v90;
    v95 = v83 ^ v91;
    v96 = v91 & v88;
    v97 = v88 ^ ~v84;
    v98 = v93 & v94;
    v99 = v90 ^ v93 ^ v92;
    v100 = v75 ^ v94 ^ v97;
    v101 = v94 ^ ~v85 ^ v96;
    v102 = v95 ^ v98;
    v103 = v100 ^ __ROR4__(v97, 30);
    v104 = v101 ^ __ROR4__(v96, 30);
    v105 = v99 ^ __ROR4__(v92, 30);
    v106 = v95 ^ v98 ^ __ROR4__(v95, 30);
    ++v73;
    v107 = v103 ^ __ROR4__(v100, 18);
    v108 = v104 ^ __ROR4__(v101, 18);
    v109 = v105 ^ __ROR4__(v99, 18);
    v110 = v106 ^ __ROR4__(v102, 18);
    v70 = v107 ^ __ROR4__(v103, 22);
    v71 = v108 ^ __ROR4__(v104, 22);
    v78 = v109 ^ __ROR4__(v105, 22) ^ v269;
    v75 = __ROR4__(v107, 31);
    v76 = __ROR4__(v108, 31);
    v80 = v74 ^ __ROR4__(v109, 31);
    v79 = v110 ^ __ROR4__(v106, 22);
    v77 = __ROR4__(v110, 31);
    if ( v73 == 8 )
      break;
    v269 = dword_2A1B48[v73];
    v74 = dword_2A1B68[v73];
  }
  v424 = v70;
  v111 = 0;
  v286 = v75;
  v427 = v71;
  v289 = v76;
  v281 = v79;
  v291 = v77;
  v294 = v78;
  v297 = v80;
  v112 = v307;
  v275 = 23617341;
  v113 = v311;
  v114 = v315;
  v115 = v319;
  v116 = v407;
  v117 = v323;
  v118 = v327;
  v270 = -1226960659;
  v119 = v303;
  while ( 1 )
  {
    v120 = v113 ^ v115;
    v121 = v116 ^ v118;
    v122 = v120 ^ v117 & v115;
    v123 = (v117 | v119) ^ v115;
    v124 = (v112 | v114) ^ v118;
    v125 = v118 & v112;
    v126 = ~v119 ^ v117 & v115;
    v127 = v126 | v122;
    v128 = ~v114 ^ v125;
    v129 = v125 ^ v121;
    v130 = v120 & v123 ^ v126;
    v131 = v117 ^ (v126 | v122);
    v132 = v121 & v124 ^ v128;
    v133 = v128 | v129;
    v134 = v122 ^ v130;
    v135 = v130 & v127;
    v136 = v127 ^ ~v123;
    v137 = v132 & v133;
    v138 = v129 ^ v132 ^ v131;
    v139 = v138 ^ __ROR4__(v131, 30);
    v140 = v112 ^ v133 ^ v136;
    v141 = v133 ^ ~v124 ^ v135;
    v142 = v134 ^ v137;
    v143 = v139 ^ __ROR4__(v138, 18);
    v144 = v140 ^ __ROR4__(v136, 30);
    v145 = v141 ^ __ROR4__(v135, 30);
    v146 = v134 ^ v137 ^ __ROR4__(v134, 30);
    ++v111;
    v147 = v144 ^ __ROR4__(v140, 18);
    v148 = v145 ^ __ROR4__(v141, 18);
    v149 = v146 ^ __ROR4__(v142, 18);
    v117 = v143 ^ __ROR4__(v139, 22) ^ v270;
    v119 = v147 ^ __ROR4__(v144, 22);
    v113 = v148 ^ __ROR4__(v145, 22);
    v118 = v275 ^ __ROR4__(v143, 31);
    v112 = __ROR4__(v147, 31);
    v114 = __ROR4__(v148, 31);
    v115 = v149 ^ __ROR4__(v146, 22);
    v116 = __ROR4__(v149, 31);
    if ( v111 == 8 )
      break;
    v270 = dword_2A1B88[v111];
    v275 = dword_2A1BA8[v111];
  }
  v300 = v119;
  v150 = 0;
  v304 = v112;
  v308 = v113;
  v312 = v114;
  v316 = v115;
  v404 = v116;
  v320 = v117;
  v324 = v118;
  v271 = -64955950;
  v151 = v335;
  v152 = v339;
  v153 = v342;
  v154 = v345;
  v155 = v411;
  v156 = v349;
  v157 = v353;
  v158 = v331;
  for ( i = -497126719; ; i = dword_2A1BE8[v150] )
  {
    v159 = v152 ^ v154;
    v160 = v155 ^ v157;
    v161 = v159 ^ v156 & v154;
    v162 = (v156 | v158) ^ v154;
    v163 = (v151 | v153) ^ v157;
    v164 = v157 & v151;
    v165 = ~v158 ^ v156 & v154;
    v166 = v165 | v161;
    v167 = ~v153 ^ v164;
    v168 = v164 ^ v160;
    v169 = v159 & v162 ^ v165;
    v170 = v156 ^ (v165 | v161);
    v171 = v160 & v163 ^ v167;
    v172 = v167 | v168;
    v173 = v161 ^ v169;
    v174 = v169 & v166;
    v175 = v166 ^ ~v162;
    v176 = v171 & v172;
    v177 = v168 ^ v171 ^ v170;
    v178 = v177 ^ __ROR4__(v170, 30);
    v179 = v151 ^ v172 ^ v175;
    v180 = v172 ^ ~v163 ^ v174;
    v181 = v173 ^ v176;
    v182 = v178 ^ __ROR4__(v177, 18);
    v183 = v179 ^ __ROR4__(v175, 30);
    v184 = v180 ^ __ROR4__(v174, 30);
    v185 = v173 ^ v176 ^ __ROR4__(v173, 30);
    ++v150;
    v186 = v183 ^ __ROR4__(v179, 18);
    v187 = v184 ^ __ROR4__(v180, 18);
    v188 = v185 ^ __ROR4__(v181, 18);
    v156 = v182 ^ __ROR4__(v178, 22) ^ v271;
    v158 = v186 ^ __ROR4__(v183, 22);
    v152 = v187 ^ __ROR4__(v184, 22);
    v157 = i ^ __ROR4__(v182, 31);
    v151 = __ROR4__(v186, 31);
    v153 = __ROR4__(v187, 31);
    v154 = v188 ^ __ROR4__(v185, 22);
    v155 = __ROR4__(v188, 31);
    if ( v150 == 8 )
      break;
    v271 = dword_2A1BC8[v150];
  }
  v189 = 0;
  v408 = v155;
  v328 = v158;
  v332 = v151;
  v336 = v152;
  v340 = v153;
  v343 = v154;
  v346 = v156;
  v350 = v157;
  v277 = -534197825;
  v190 = v361;
  v191 = v365;
  v192 = v370;
  v193 = v415;
  v194 = v373;
  v195 = v376;
  v196 = v379;
  v272 = -1307332699;
  v197 = v357;
  while ( 1 )
  {
    v198 = v191 ^ v193;
    v199 = v194 ^ v196;
    v200 = v198 ^ v195 & v193;
    v201 = (v195 | v197) ^ v193;
    v202 = (v190 | v192) ^ v196;
    v203 = v196 & v190;
    v204 = ~v197 ^ v195 & v193;
    v205 = v204 | v200;
    v206 = ~v192 ^ v203;
    v207 = v203 ^ v199;
    v208 = v198 & v201 ^ v204;
    v209 = v195 ^ (v204 | v200);
    v210 = v199 & v202 ^ v206;
    v211 = v206 | v207;
    v212 = v200 ^ v208;
    v213 = v208 & v205;
    v214 = v205 ^ ~v201;
    v215 = v210 & v211;
    v216 = v207 ^ v210 ^ v209;
    v217 = v216 ^ __ROR4__(v209, 30);
    v218 = v190 ^ v211 ^ v214;
    v219 = v211 ^ ~v202 ^ v213;
    v220 = v212 ^ v215;
    v221 = v217 ^ __ROR4__(v216, 18);
    v222 = v218 ^ __ROR4__(v214, 30);
    v223 = v219 ^ __ROR4__(v213, 30);
    v224 = v212 ^ v215 ^ __ROR4__(v212, 30);
    ++v189;
    v225 = v222 ^ __ROR4__(v218, 18);
    v226 = v223 ^ __ROR4__(v219, 18);
    v227 = v224 ^ __ROR4__(v220, 18);
    v195 = v221 ^ __ROR4__(v217, 22) ^ v272;
    v197 = v225 ^ __ROR4__(v222, 22);
    v191 = v226 ^ __ROR4__(v223, 22);
    v196 = v277 ^ __ROR4__(v221, 31);
    v190 = __ROR4__(v225, 31);
    v192 = __ROR4__(v226, 31);
    v193 = v227 ^ __ROR4__(v224, 22);
    v194 = __ROR4__(v227, 31);
    if ( v189 == 8 )
      break;
    v272 = dword_2A1CA8[v189];
    v277 = dword_2A1CC8[v189];
  }
  v354 = v197;
  v358 = v190;
  v362 = v191;
  v366 = v192;
  v412 = v193;
  v228 = 0;
  v371 = v194;
  v374 = v195;
  v377 = v196;
  v273 = -254613021;
  v229 = v387;
  v230 = v418;
  v231 = v392;
  v232 = v396;
  v233 = v423;
  v234 = v399;
  v235 = v403;
  v236 = v383;
  for ( j = 1351669111; ; j = dword_2A1D08[v228] )
  {
    v237 = v230 ^ v232;
    v238 = v233 ^ v235;
    v239 = v237 ^ v234 & v232;
    v240 = (v234 | v236) ^ v232;
    v241 = (v229 | v231) ^ v235;
    v242 = v235 & v229;
    v243 = ~v236 ^ v234 & v232;
    v244 = v243 | v239;
    v245 = ~v231 ^ v242;
    v246 = v242 ^ v238;
    v247 = v237 & v240 ^ v243;
    v248 = v234 ^ (v243 | v239);
    v249 = v238 & v241 ^ v245;
    v250 = v245 | v246;
    v251 = v239 ^ v247;
    v252 = v247 & v244;
    v253 = v244 ^ ~v240;
    result = v249 & v250;
    v254 = v246 ^ v249 ^ v248;
    v255 = v254 ^ __ROR4__(v248, 30);
    v256 = v229 ^ v250 ^ v253;
    v257 = v250 ^ ~v241 ^ v252;
    v258 = v251 ^ result;
    v259 = v255 ^ __ROR4__(v254, 18);
    v260 = v256 ^ __ROR4__(v253, 30);
    v261 = v257 ^ __ROR4__(v252, 30);
    v262 = v251 ^ result ^ __ROR4__(v251, 30);
    ++v228;
    v263 = v260 ^ __ROR4__(v256, 18);
    v264 = v261 ^ __ROR4__(v257, 18);
    v265 = v262 ^ __ROR4__(v258, 18);
    v234 = v259 ^ __ROR4__(v255, 22) ^ v273;
    v236 = v263 ^ __ROR4__(v260, 22);
    v230 = v264 ^ __ROR4__(v261, 22);
    v235 = j ^ __ROR4__(v259, 31);
    v229 = __ROR4__(v263, 31);
    v231 = __ROR4__(v264, 31);
    v232 = v265 ^ __ROR4__(v262, 22);
    v233 = __ROR4__(v265, 31);
    if ( v228 == 8 )
      break;
    v273 = dword_2A1CE8[v228];
  }
  v416 = v230;
  v397 = v234;
  v3 = 0;
  v380 = v236;
  v384 = v229;
  v388 = v231;
  v393 = v232;
  v419 = v233;
  v400 = v235;
  if ( n )
    goto LABEL_5;
LABEL_25:
  v4 = v279;
LABEL_26:
  v4[9] = v294;
  v4[10] = v424;
  v4[11] = v427;
  v4[12] = v281;
  v4[13] = v297;
  v4[14] = v286;
  v4[15] = v289;
  v4[16] = v291;
  v4[17] = v320;
  v4[18] = v300;
  v4[19] = v308;
  v4[20] = v316;
  v4[21] = v324;
  v4[22] = v304;
  v4[23] = v312;
  v4[24] = v404;
  v4[25] = v346;
  v4[26] = v328;
  v4[27] = v336;
  v4[28] = v343;
  v4[29] = v350;
  v4[30] = v332;
  v4[31] = v340;
  v4[32] = v408;
  v4[33] = v374;
  v4[34] = v354;
  v4[35] = v362;
  v4[36] = v412;
  v4[37] = v377;
  v4[38] = v358;
  v4[39] = v366;
  v4[40] = v371;
  v4[8] = v3;
  v4[41] = v397;
  v4[42] = v380;
  v4[43] = v416;
  v4[44] = v393;
  v4[45] = v400;
  v4[46] = v384;
  v4[47] = v388;
  v4[48] = v419;
  return result;
}
