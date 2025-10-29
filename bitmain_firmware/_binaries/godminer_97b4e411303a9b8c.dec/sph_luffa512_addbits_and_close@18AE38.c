void *__fastcall sph_luffa512_addbits_and_close(unsigned int *a1, char a2, char a3, _BYTE *a4)
{
  unsigned int v4; // lr
  int v6; // r7
  int v7; // r3
  int v8; // r1
  int v9; // lr
  int v10; // r12
  int v11; // r0
  int v12; // r11
  int v13; // r2
  int v14; // r9
  int v15; // r4
  int v16; // r10
  int v17; // r6
  int v18; // r11
  int v19; // r2
  int v20; // r5
  int v21; // lr
  int v22; // r12
  int v23; // r7
  int v24; // r9
  int v25; // r8
  int v26; // r6
  int v27; // r5
  int v28; // r10
  int v29; // r1
  int v30; // r11
  int v31; // r12
  int v32; // r6
  int v33; // r11
  int v34; // r2
  int v35; // r8
  int v36; // r3
  int v37; // r7
  int v38; // r8
  int v39; // r6
  int v40; // r0
  int v41; // r1
  int v42; // r5
  int v43; // r10
  int v44; // lr
  int v45; // r1
  int v46; // r2
  int v47; // r7
  int v48; // r4
  int v49; // r1
  int v50; // r3
  int v51; // r9
  int v52; // r3
  int v53; // r1
  unsigned int v54; // r7
  int v55; // r2
  int v56; // r0
  int v57; // r9
  int v58; // r12
  int v59; // r10
  int v60; // r5
  int v61; // r4
  int v62; // r6
  int v63; // r11
  int v64; // lr
  int v65; // r1
  int v66; // r3
  int v67; // r4
  int v68; // r3
  int v69; // lr
  int v70; // r1
  int v71; // r9
  int v72; // r7
  int v73; // r12
  int v74; // r5
  int v75; // r4
  int v76; // r6
  int v77; // r8
  int v78; // r3
  int v79; // r1
  int v80; // r10
  int v81; // r0
  int v82; // r2
  int v83; // r6
  int v84; // r8
  int v85; // r11
  int v86; // lr
  int v87; // r6
  int v88; // r3
  int v89; // r4
  int v90; // r1
  int v91; // lr
  int v92; // r10
  int v93; // r3
  int v94; // r11
  int v95; // r0
  int v96; // r6
  int v97; // r12
  int v98; // lr
  int v99; // r2
  int v100; // r11
  int v101; // r3
  int v102; // r4
  int v103; // r10
  int v104; // r12
  int v105; // lr
  int v106; // r6
  int v107; // r2
  int v108; // r5
  int v109; // r6
  int v110; // r9
  unsigned int v111; // r12
  int v112; // r3
  unsigned int v113; // lr
  int v114; // r7
  unsigned int v115; // r1
  int v116; // r4
  int v117; // r8
  int v118; // r3
  int v119; // r1
  int v120; // r10
  int v121; // r0
  int v122; // r2
  int v123; // r8
  int v124; // r9
  int v125; // r11
  int v126; // lr
  int v127; // r8
  int v128; // r3
  int v129; // r4
  int v130; // r1
  int v131; // lr
  int v132; // r10
  int v133; // r3
  int v134; // r11
  int v135; // r0
  int v136; // r8
  int v137; // r12
  int v138; // lr
  int v139; // r2
  int v140; // r11
  int v141; // r3
  int v142; // r4
  int v143; // r10
  int v144; // r12
  int v145; // lr
  int v146; // r8
  int v147; // r2
  int v148; // r7
  unsigned int v149; // r12
  int v150; // r3
  unsigned int v151; // lr
  int v152; // r5
  unsigned int v153; // r1
  int v154; // r4
  int v155; // r6
  int v156; // r8
  int v157; // r3
  int v158; // r1
  int v159; // r9
  int v160; // r0
  int v161; // r2
  int v162; // r6
  int v163; // r8
  int v164; // r11
  int v165; // lr
  int v166; // r6
  int v167; // r3
  int v168; // r4
  int v169; // r1
  int v170; // lr
  int v171; // r9
  int v172; // r3
  int v173; // r11
  int v174; // r0
  int v175; // r6
  int v176; // r4
  int v177; // r12
  int v178; // lr
  int v179; // r2
  int v180; // r6
  int v181; // r11
  int v182; // r3
  int v183; // r9
  int v184; // r12
  int v185; // lr
  int v186; // r2
  int v187; // r7
  unsigned int v188; // r12
  int v189; // r3
  unsigned int v190; // lr
  int v191; // r5
  unsigned int v192; // r1
  int v193; // r4
  int v194; // r6
  int v195; // r8
  int v196; // r3
  int v197; // r1
  int v198; // r9
  int v199; // r0
  int v200; // r2
  int v201; // r6
  int v202; // r8
  int v203; // r11
  int v204; // lr
  int v205; // r6
  int v206; // r3
  int v207; // r4
  int v208; // r1
  int v209; // lr
  int v210; // r9
  int v211; // r3
  int v212; // r11
  int v213; // r0
  int v214; // r6
  int v215; // r4
  int v216; // r12
  int v217; // lr
  int v218; // r2
  int v219; // r6
  int v220; // r11
  int v221; // r3
  int v222; // r9
  int v223; // r12
  int v224; // lr
  int v225; // r2
  int v226; // r7
  unsigned int v227; // r12
  int v228; // r3
  unsigned int v229; // lr
  int v230; // r5
  unsigned int v231; // r1
  int v232; // r4
  int v233; // r6
  int v234; // r8
  int v235; // r3
  int v236; // r1
  int v237; // r9
  int v238; // r0
  int v239; // r2
  int v240; // r6
  int v241; // r8
  int v242; // r11
  int v243; // lr
  int v244; // r6
  int v245; // r3
  int v246; // r4
  int v247; // r1
  int v248; // lr
  int v249; // r9
  int v250; // r3
  int v251; // r11
  int v252; // r0
  int v253; // r6
  int v254; // r4
  int v255; // r12
  int v256; // lr
  int v257; // r2
  int v258; // r6
  int v259; // r11
  int v260; // r3
  int v261; // r9
  int v262; // r12
  int v263; // lr
  int v264; // r2
  int v265; // r1
  int v266; // r5
  int v267; // r12
  int v268; // r2
  int v269; // lr
  int v270; // r6
  int v271; // r3
  int v272; // r11
  void *result; // r0
  int v274; // r0
  int v275; // r12
  int v276; // lr
  int v277; // r1
  int v278; // r4
  int v279; // r5
  int v280; // r6
  int v281; // r0
  unsigned int v282; // [sp+0h] [bp-124h]
  int v283; // [sp+0h] [bp-124h]
  int v284; // [sp+0h] [bp-124h]
  int v285; // [sp+0h] [bp-124h]
  int v286; // [sp+0h] [bp-124h]
  int v287; // [sp+0h] [bp-124h]
  unsigned int v288; // [sp+4h] [bp-120h]
  int i; // [sp+4h] [bp-120h]
  int j; // [sp+4h] [bp-120h]
  int k; // [sp+4h] [bp-120h]
  int v292; // [sp+10h] [bp-114h]
  int v293; // [sp+10h] [bp-114h]
  int v294; // [sp+10h] [bp-114h]
  int v295; // [sp+10h] [bp-114h]
  int v296; // [sp+10h] [bp-114h]
  unsigned int v297; // [sp+14h] [bp-110h]
  int v298; // [sp+14h] [bp-110h]
  int v299; // [sp+14h] [bp-110h]
  int v300; // [sp+14h] [bp-110h]
  int v301; // [sp+18h] [bp-10Ch]
  int v302; // [sp+18h] [bp-10Ch]
  int v303; // [sp+18h] [bp-10Ch]
  int v304; // [sp+1Ch] [bp-108h]
  int v305; // [sp+1Ch] [bp-108h]
  int v306; // [sp+1Ch] [bp-108h]
  int v307; // [sp+20h] [bp-104h]
  int v308; // [sp+20h] [bp-104h]
  int v309; // [sp+20h] [bp-104h]
  unsigned int v310; // [sp+24h] [bp-100h]
  int v311; // [sp+24h] [bp-100h]
  unsigned int v312; // [sp+24h] [bp-100h]
  int v313; // [sp+28h] [bp-FCh]
  int v314; // [sp+28h] [bp-FCh]
  int v315; // [sp+28h] [bp-FCh]
  int v316; // [sp+28h] [bp-FCh]
  unsigned int v317; // [sp+2Ch] [bp-F8h]
  unsigned int v318; // [sp+2Ch] [bp-F8h]
  int v319; // [sp+2Ch] [bp-F8h]
  unsigned int v320; // [sp+2Ch] [bp-F8h]
  int v321; // [sp+30h] [bp-F4h]
  int v322; // [sp+30h] [bp-F4h]
  int v323; // [sp+30h] [bp-F4h]
  int v324; // [sp+30h] [bp-F4h]
  unsigned int v325; // [sp+34h] [bp-F0h]
  int v326; // [sp+34h] [bp-F0h]
  int v327; // [sp+34h] [bp-F0h]
  unsigned int v328; // [sp+34h] [bp-F0h]
  int v329; // [sp+38h] [bp-ECh]
  int v330; // [sp+38h] [bp-ECh]
  int v331; // [sp+38h] [bp-ECh]
  int v332; // [sp+38h] [bp-ECh]
  int v333; // [sp+3Ch] [bp-E8h]
  int v334; // [sp+3Ch] [bp-E8h]
  int v335; // [sp+3Ch] [bp-E8h]
  int v336; // [sp+3Ch] [bp-E8h]
  unsigned int v337; // [sp+40h] [bp-E4h]
  int v338; // [sp+40h] [bp-E4h]
  int v339; // [sp+40h] [bp-E4h]
  unsigned int v340; // [sp+40h] [bp-E4h]
  int v341; // [sp+44h] [bp-E0h]
  int v342; // [sp+44h] [bp-E0h]
  int v343; // [sp+44h] [bp-E0h]
  int v344; // [sp+44h] [bp-E0h]
  unsigned int v345; // [sp+48h] [bp-DCh]
  int v346; // [sp+48h] [bp-DCh]
  int v347; // [sp+48h] [bp-DCh]
  unsigned int v348; // [sp+48h] [bp-DCh]
  int v349; // [sp+4Ch] [bp-D8h]
  int v350; // [sp+4Ch] [bp-D8h]
  int v351; // [sp+4Ch] [bp-D8h]
  int v352; // [sp+4Ch] [bp-D8h]
  unsigned int v353; // [sp+50h] [bp-D4h]
  int v354; // [sp+50h] [bp-D4h]
  int v355; // [sp+50h] [bp-D4h]
  unsigned int v356; // [sp+50h] [bp-D4h]
  int v357; // [sp+54h] [bp-D0h]
  int v358; // [sp+54h] [bp-D0h]
  int v359; // [sp+54h] [bp-D0h]
  int v360; // [sp+54h] [bp-D0h]
  int v361; // [sp+58h] [bp-CCh]
  int v362; // [sp+58h] [bp-CCh]
  int v363; // [sp+58h] [bp-CCh]
  int v364; // [sp+5Ch] [bp-C8h]
  int v365; // [sp+5Ch] [bp-C8h]
  int v366; // [sp+5Ch] [bp-C8h]
  unsigned int v367; // [sp+60h] [bp-C4h]
  int v368; // [sp+60h] [bp-C4h]
  int v369; // [sp+60h] [bp-C4h]
  unsigned int v370; // [sp+60h] [bp-C4h]
  int v371; // [sp+64h] [bp-C0h]
  int v372; // [sp+64h] [bp-C0h]
  int v373; // [sp+64h] [bp-C0h]
  int v374; // [sp+64h] [bp-C0h]
  unsigned int v375; // [sp+68h] [bp-BCh]
  int v376; // [sp+68h] [bp-BCh]
  int v377; // [sp+68h] [bp-BCh]
  unsigned int v378; // [sp+68h] [bp-BCh]
  int v379; // [sp+6Ch] [bp-B8h]
  int v380; // [sp+6Ch] [bp-B8h]
  int v381; // [sp+6Ch] [bp-B8h]
  int v382; // [sp+6Ch] [bp-B8h]
  unsigned int v383; // [sp+70h] [bp-B4h]
  int v384; // [sp+70h] [bp-B4h]
  int v385; // [sp+70h] [bp-B4h]
  unsigned int v386; // [sp+70h] [bp-B4h]
  int v387; // [sp+74h] [bp-B0h]
  int v388; // [sp+74h] [bp-B0h]
  int v389; // [sp+74h] [bp-B0h]
  int v390; // [sp+74h] [bp-B0h]
  int v391; // [sp+78h] [bp-ACh]
  int v392; // [sp+78h] [bp-ACh]
  int v393; // [sp+78h] [bp-ACh]
  int v394; // [sp+78h] [bp-ACh]
  int v395; // [sp+7Ch] [bp-A8h]
  int v396; // [sp+7Ch] [bp-A8h]
  int v397; // [sp+7Ch] [bp-A8h]
  unsigned int v398; // [sp+80h] [bp-A4h]
  int v399; // [sp+80h] [bp-A4h]
  unsigned int v400; // [sp+80h] [bp-A4h]
  int v401; // [sp+84h] [bp-A0h]
  unsigned int v402; // [sp+84h] [bp-A0h]
  int v403; // [sp+84h] [bp-A0h]
  unsigned int v404; // [sp+88h] [bp-9Ch]
  int v405; // [sp+88h] [bp-9Ch]
  int v406; // [sp+88h] [bp-9Ch]
  unsigned int v407; // [sp+88h] [bp-9Ch]
  int v408; // [sp+8Ch] [bp-98h]
  int v409; // [sp+8Ch] [bp-98h]
  int v410; // [sp+8Ch] [bp-98h]
  int v411; // [sp+8Ch] [bp-98h]
  unsigned int v412; // [sp+90h] [bp-94h]
  unsigned int v413; // [sp+90h] [bp-94h]
  unsigned int v414; // [sp+90h] [bp-94h]
  int v415; // [sp+94h] [bp-90h]
  int v416; // [sp+94h] [bp-90h]
  int v417; // [sp+94h] [bp-90h]
  int v418; // [sp+94h] [bp-90h]
  int v419; // [sp+94h] [bp-90h]
  int v420; // [sp+98h] [bp-8Ch]
  int v421; // [sp+98h] [bp-8Ch]
  int v422; // [sp+98h] [bp-8Ch]
  int v423; // [sp+98h] [bp-8Ch]
  int v424; // [sp+9Ch] [bp-88h]
  int v425; // [sp+9Ch] [bp-88h]
  int v426; // [sp+9Ch] [bp-88h]
  int v427; // [sp+A0h] [bp-84h]
  int v428; // [sp+A0h] [bp-84h]
  int v429; // [sp+A0h] [bp-84h]
  int v430; // [sp+A0h] [bp-84h]
  unsigned int v431; // [sp+A4h] [bp-80h]
  int v433; // [sp+B0h] [bp-74h]
  int v434; // [sp+B0h] [bp-74h]
  int v435; // [sp+B4h] [bp-70h]
  int v436; // [sp+B4h] [bp-70h]
  int v437; // [sp+B4h] [bp-70h]
  unsigned int v438; // [sp+B8h] [bp-6Ch]
  int v439; // [sp+B8h] [bp-6Ch]
  unsigned int v440; // [sp+BCh] [bp-68h]
  int v441; // [sp+C0h] [bp-64h]
  int v442; // [sp+C0h] [bp-64h]
  int v443; // [sp+C4h] [bp-60h]
  int v444; // [sp+C4h] [bp-60h]
  int v445; // [sp+C8h] [bp-5Ch]
  int v446; // [sp+C8h] [bp-5Ch]
  int v447; // [sp+CCh] [bp-58h]
  unsigned int v448; // [sp+D0h] [bp-54h]
  int v449; // [sp+D4h] [bp-50h]
  int v450; // [sp+D4h] [bp-50h]
  int v451; // [sp+D8h] [bp-4Ch]
  int v452; // [sp+D8h] [bp-4Ch]
  int v453; // [sp+D8h] [bp-4Ch]
  int v454; // [sp+DCh] [bp-48h]
  int v455; // [sp+DCh] [bp-48h]
  int v456; // [sp+E0h] [bp-44h]
  int v457; // [sp+E0h] [bp-44h]
  int v458; // [sp+E0h] [bp-44h]
  int v459; // [sp+E4h] [bp-40h]
  int v460; // [sp+E4h] [bp-40h]
  int v461; // [sp+E8h] [bp-3Ch]
  int v462; // [sp+E8h] [bp-3Ch]
  int v463; // [sp+ECh] [bp-38h]
  int v464; // [sp+ECh] [bp-38h]
  int v465; // [sp+F0h] [bp-34h]
  int v466; // [sp+F4h] [bp-30h]
  int v467; // [sp+F8h] [bp-2Ch]
  int v468; // [sp+FCh] [bp-28h]
  int v469; // [sp+100h] [bp-24h]
  int v470; // [sp+104h] [bp-20h]
  int v471; // [sp+108h] [bp-1Ch]
  int v472; // [sp+10Ch] [bp-18h]

  v4 = a1[8];
  *((_BYTE *)a1 + v4) = (128 >> a3) | a2 & -(128 >> a3);
  memset((char *)a1 + v4 + 1, 0, 31 - v4);
  v424 = a1[9];
  v6 = v424 ^ a1[17];
  v301 = a1[12];
  v435 = a1[15];
  v304 = a1[13];
  v297 = a1[14];
  v307 = a1[18];
  v438 = a1[16];
  v292 = a1[10];
  v321 = a1[20];
  v313 = a1[19];
  v427 = a1[17];
  v433 = a1[11];
  v329 = a1[21];
  v310 = a1[22];
  v447 = 0;
  v317 = a1[23];
  v325 = a1[24];
  v357 = a1[25];
  v333 = a1[26];
  v341 = a1[27];
  v349 = a1[28];
  v361 = a1[29];
  v337 = a1[30];
  v345 = a1[31];
  v353 = a1[32];
  v387 = a1[33];
  v364 = a1[34];
  v371 = a1[35];
  v379 = a1[36];
  v391 = a1[37];
  v367 = a1[38];
  v375 = a1[39];
  v412 = a1[48];
  v383 = a1[40];
  v415 = a1[41];
  v395 = a1[42];
  v401 = a1[43];
  v408 = a1[44];
  v420 = a1[45];
  v398 = a1[46];
  v404 = a1[47];
  while ( 1 )
  {
    v288 = bswap32(a1[7]);
    v448 = bswap32(*a1);
    v431 = bswap32(a1[1]);
    v7 = v6 ^ v415;
    v282 = bswap32(a1[6]);
    v8 = v353 ^ v383 ^ v412 ^ v438 ^ v325;
    v9 = v341 ^ v371 ^ v433 ^ v313 ^ v401 ^ v8;
    v10 = v349 ^ v379 ^ v301 ^ v321 ^ v408 ^ v8;
    v11 = v364 ^ v292 ^ v307 ^ v395 ^ v333;
    v12 = v345 ^ v375 ^ v404 ^ v435 ^ v317;
    v13 = v337 ^ v367 ^ v398 ^ v297 ^ v310;
    v440 = bswap32(a1[2]);
    v449 = v11 ^ v341;
    v443 = v11 ^ v401;
    v441 = v11 ^ v313;
    v372 = v11 ^ v371;
    v14 = v12 ^ v412;
    v342 = v12 ^ v438;
    v15 = v12 ^ v325;
    v326 = v12 ^ v383;
    v451 = v13 ^ v345;
    v314 = v12 ^ v353;
    v16 = v13 ^ v317;
    v405 = v13 ^ v404;
    v17 = v361 ^ v391 ^ v304 ^ v329 ^ v420;
    v354 = v13 ^ v375;
    v413 = bswap32(a1[5]);
    v318 = bswap32(a1[3]);
    v445 = v413 ^ v448 ^ v288;
    v346 = v9 ^ v321;
    v402 = bswap32(a1[4]);
    v384 = v9 ^ v349;
    v18 = v9 ^ v301;
    v454 = v9 ^ v379;
    v376 = v16;
    v456 = v9 ^ v408;
    v19 = v13 ^ v435;
    v302 = v16 ^ v314;
    v350 = v10 ^ v329;
    v20 = v14;
    v421 = v10 ^ v420;
    v380 = v443 ^ v14;
    v330 = v17 ^ v297;
    v298 = v10 ^ v304;
    v21 = v10 ^ v361;
    v22 = v10 ^ v391;
    v23 = v17 ^ v310;
    v305 = v318 ^ v288;
    v24 = v17 ^ v337;
    v338 = v20;
    v25 = v17 ^ v367;
    v26 = v17 ^ v398;
    v311 = v354 ^ v20;
    v368 = v7 ^ v357 ^ v387 ^ v8;
    v409 = v424 ^ v8;
    v27 = v8 ^ v357;
    v392 = v427 ^ v8;
    v388 = v8 ^ v387;
    v416 = v8 ^ v415;
    v28 = v405;
    v322 = v11 ^ v433;
    v406 = v342 ^ v405;
    v29 = v18 ^ v350;
    v381 = v18 ^ v380;
    v30 = v384 ^ v22;
    v362 = v384 ^ v441 ^ v15;
    v31 = v22 ^ v26;
    v32 = v19 ^ v26;
    v358 = v30;
    v425 = v330 ^ v376;
    v436 = v350 ^ v24;
    v461 = v24 ^ v354;
    v33 = v19 ^ v15;
    v463 = v25 ^ v28;
    v459 = v21 ^ v25;
    v34 = v298 ^ v456;
    v355 = v456 ^ v372 ^ v326;
    v35 = v298 ^ v23;
    v36 = v451;
    v399 = v32;
    v452 = v23 ^ v451;
    v37 = v368 ^ v364;
    v434 = v35;
    v38 = v368 ^ v292;
    v39 = v333 ^ v368;
    v299 = v36 ^ v326;
    v40 = v307 ^ v368;
    v334 = v29 ^ v342;
    v293 = v368 ^ v395;
    v41 = v27 ^ v314;
    v351 = v358 ^ v314;
    v428 = v27 ^ v15;
    v385 = v330 ^ v421;
    v331 = v21 ^ v346 ^ v15;
    v42 = v342;
    v43 = v392;
    v369 = v454 ^ v421 ^ v326;
    v44 = v392 ^ v15;
    v393 = v34 ^ v338;
    v343 = v342 ^ v43;
    v422 = v37 ^ v443;
    v365 = v37 ^ v41;
    v45 = v441;
    v442 = v302 ^ v318 ^ v288 ^ v362 ^ v334;
    v46 = v282 ^ v440 ^ v288;
    v47 = v38 ^ v45;
    v457 = v318 ^ v33;
    v359 = v39 ^ v44;
    v48 = v449 ^ v314 ^ v454;
    v319 = v39 ^ v372;
    v49 = v388 ^ v326;
    v50 = v416;
    v373 = v314 ^ v388;
    v417 = v326 ^ v416;
    v51 = v50 ^ v338;
    v315 = v40 ^ v449;
    v327 = v409 ^ v338;
    v466 = v402 ^ v445 ^ v406 ^ v381 ^ v369;
    v396 = v293 ^ v49;
    v339 = v322 ^ v293;
    v294 = v346 ^ v322 ^ v42;
    v308 = v40 ^ v409 ^ v42;
    v52 = v413 ^ v431 ^ v282;
    v389 = v38 ^ v51;
    v444 = v299 ^ v46 ^ v48 ^ v331;
    v465 = v52 ^ v31 ^ v393;
    v455 = v311 ^ v52 ^ v355 ^ v351;
    v467 = v457 ^ v47;
    v53 = v459;
    v470 = v299 ^ v431 ^ v282 ^ v362;
    v410 = v47 ^ v39 ^ v44;
    v323 = v459 ^ v46 ^ v369;
    v460 = v46 ^ v463 ^ v385;
    v469 = v302 ^ v440 ^ v288 ^ v294;
    v458 = v402 ^ v299 ^ v463;
    v347 = v402 ^ v434 ^ v331;
    v450 = v402 ^ v452 ^ v53;
    v471 = v311 ^ v445 ^ v48;
    v54 = __ROR4__(v33 ^ v452 ^ v282, 31);
    v446 = v436 ^ v305 ^ v351;
    v55 = v413 ^ v425 ^ v436;
    v453 = v461 ^ v305 ^ v31;
    v56 = v402 ^ v282 ^ v288 ^ v406 ^ v355;
    v377 = v425 ^ v406;
    v57 = v302 ^ v461 ^ v413;
    v426 = v33 ^ v327;
    v472 = v402 ^ v413 ^ v327 ^ v406;
    v462 = v311 ^ v399 ^ v305;
    v437 = v417 ^ v406;
    v58 = v417 ^ v311;
    v439 = v373 ^ v311;
    v59 = v299 ^ v428;
    v60 = v428 ^ v302;
    v429 = v343 ^ v302;
    v61 = v402 ^ v33 ^ v294;
    v464 = v343 ^ v33 ^ v431;
    v418 = v373 ^ v299 ^ v282 ^ v288;
    v62 = v413 ^ v282;
    v468 = v282 ^ v399;
    v63 = v58 ^ v413 ^ v282;
    v332 = __ROR4__(v442, 31);
    v303 = v467 ^ v381;
    v300 = v413 ^ v385 ^ v334;
    v64 = v422;
    v65 = v422 ^ v389;
    v423 = __ROR4__(v466, 28);
    v370 = __ROR4__(v323, 29);
    v382 = v471 ^ v64;
    v335 = v319 ^ v396;
    v324 = v469 ^ v315;
    v66 = v339;
    v295 = v308 ^ v339;
    v344 = v315 ^ v365 ^ v448 ^ v288;
    v363 = __ROR4__(v444, 30);
    v328 = v54;
    v407 = __ROR4__(v460, 28);
    v386 = __ROR4__(v458, 29);
    v312 = __ROR4__(v347, 31);
    v348 = __ROR4__(v450, 30);
    v316 = v431 ^ v410;
    v306 = v61 ^ v393;
    v352 = v470 ^ v319;
    v400 = __ROR4__(v465, 28);
    v394 = __ROR4__(v455, 29);
    v340 = __ROR4__(v446, 30);
    v320 = __ROR4__(v55, 31);
    v67 = v288 ^ v377;
    v378 = __ROR4__(v453, 29);
    v374 = v335 ^ v282 ^ v288;
    v356 = __ROR4__(v57, 30);
    v411 = v56 ^ v66;
    v68 = v440 ^ v295;
    v296 = v389 ^ v464;
    v309 = v60 ^ v448 ^ v288 ^ v308;
    v430 = v288 ^ v429;
    v336 = v418 ^ v359;
    v360 = v282 ^ v59;
    v397 = v472 ^ v396;
    v390 = v413 ^ v439;
    v414 = __ROR4__(v462, 28);
    v419 = v402 ^ v437;
    v69 = v468 ^ v434;
    v403 = v65 ^ v62;
    v366 = v63 ^ v365;
    v70 = v67;
    v71 = -533497832;
    v72 = 0;
    v73 = v300;
    v283 = 809079974;
    v74 = v303;
    v75 = v448 ^ v426;
    v76 = v306;
    v77 = v296;
    while ( 1 )
    {
      v78 = v68 ^ v74;
      v79 = v70 ^ v76;
      v80 = v78 ^ v75 & v74;
      v81 = (v75 | v77) ^ v74;
      v82 = (v73 | v69) ^ v76;
      v83 = v76 & v73;
      v84 = ~v77 ^ v75 & v74;
      v85 = v84 | v80;
      v86 = ~v69 ^ v83;
      v87 = v83 ^ v79;
      v88 = v78 & v81 ^ v84;
      v89 = v75 ^ (v84 | v80);
      v90 = v79 & v82 ^ v86;
      v91 = v86 | v87;
      v92 = v80 ^ v88;
      v93 = v88 & v85;
      v94 = v85 ^ ~v81;
      v95 = v90 & v91;
      v96 = v87 ^ v90 ^ v89;
      v97 = v73 ^ v91 ^ v94;
      v98 = v91 ^ ~v82 ^ v93;
      v99 = v92 ^ v95;
      v100 = v97 ^ __ROR4__(v94, 30);
      v101 = v98 ^ __ROR4__(v93, 30);
      v102 = v96 ^ __ROR4__(v89, 30);
      v103 = v92 ^ v95 ^ __ROR4__(v92, 30);
      ++v72;
      v104 = v100 ^ __ROR4__(v97, 18);
      v105 = v101 ^ __ROR4__(v98, 18);
      v106 = v102 ^ __ROR4__(v96, 18);
      v107 = v103 ^ __ROR4__(v99, 18);
      v77 = v104 ^ __ROR4__(v100, 22);
      v68 = v105 ^ __ROR4__(v101, 22);
      v75 = v106 ^ __ROR4__(v102, 22) ^ v283;
      v73 = __ROR4__(v104, 31);
      v69 = __ROR4__(v105, 31);
      v76 = v71 ^ __ROR4__(v106, 31);
      v74 = v107 ^ __ROR4__(v103, 22);
      v70 = __ROR4__(v107, 31);
      if ( v72 == 8 )
        break;
      v283 = dword_2A2CE8[v72];
      v71 = dword_2A2D08[v72];
    }
    v292 = v77;
    v297 = v73;
    v433 = v68;
    v435 = v69;
    v301 = v74;
    v108 = 0;
    v438 = v70;
    v424 = v75;
    v304 = v76;
    v109 = 23617341;
    v284 = -1226960659;
    v110 = v309;
    v111 = v312;
    v112 = v316;
    v113 = v320;
    v114 = v324;
    v115 = v328;
    v116 = v430;
    v117 = v332;
    while ( 1 )
    {
      v118 = v112 ^ v114;
      v119 = v115 ^ v117;
      v120 = v118 ^ v116 & v114;
      v121 = (v116 | v110) ^ v114;
      v122 = (v111 | v113) ^ v117;
      v123 = v117 & v111;
      v124 = ~v110 ^ v116 & v114;
      v125 = v124 | v120;
      v126 = ~v113 ^ v123;
      v127 = v123 ^ v119;
      v128 = v118 & v121 ^ v124;
      v129 = v116 ^ (v124 | v120);
      v130 = v119 & v122 ^ v126;
      v131 = v126 | v127;
      v132 = v120 ^ v128;
      v133 = v128 & v125;
      v134 = v125 ^ ~v121;
      v135 = v130 & v131;
      v136 = v127 ^ v130 ^ v129;
      v137 = v111 ^ v131 ^ v134;
      v138 = v131 ^ ~v122 ^ v133;
      v139 = v132 ^ v135;
      v140 = v137 ^ __ROR4__(v134, 30);
      v141 = v138 ^ __ROR4__(v133, 30);
      v142 = v136 ^ __ROR4__(v129, 30);
      v143 = v132 ^ v135 ^ __ROR4__(v132, 30);
      ++v108;
      v144 = v140 ^ __ROR4__(v137, 18);
      v145 = v141 ^ __ROR4__(v138, 18);
      v146 = v142 ^ __ROR4__(v136, 18);
      v147 = v143 ^ __ROR4__(v139, 18);
      v110 = v144 ^ __ROR4__(v140, 22);
      v112 = v145 ^ __ROR4__(v141, 22);
      v116 = v146 ^ __ROR4__(v142, 22) ^ v284;
      v111 = __ROR4__(v144, 31);
      v113 = __ROR4__(v145, 31);
      v117 = v109 ^ __ROR4__(v146, 31);
      v114 = v147 ^ __ROR4__(v143, 22);
      v115 = __ROR4__(v147, 31);
      if ( v108 == 8 )
        break;
      v284 = dword_2A2D28[v108];
      v109 = dword_2A2D48[v108];
    }
    v325 = v115;
    v307 = v110;
    v310 = v111;
    v313 = v112;
    v317 = v113;
    v321 = v114;
    v148 = 0;
    v427 = v116;
    v329 = v117;
    v149 = v340;
    v285 = -64955950;
    v150 = v344;
    v151 = v348;
    v152 = v352;
    v153 = v356;
    v154 = v360;
    v155 = v363;
    v156 = v336;
    for ( i = -497126719; ; i = dword_2A2D88[v148] )
    {
      v157 = v150 ^ v152;
      v158 = v153 ^ v155;
      v159 = v157 ^ v154 & v152;
      v160 = (v154 | v156) ^ v152;
      v161 = (v149 | v151) ^ v155;
      v162 = v155 & v149;
      v163 = ~v156 ^ v154 & v152;
      v164 = v163 | v159;
      v165 = ~v151 ^ v162;
      v166 = v162 ^ v158;
      v167 = v157 & v160 ^ v163;
      v168 = v154 ^ (v163 | v159);
      v169 = v158 & v161 ^ v165;
      v170 = v165 | v166;
      v171 = v159 ^ v167;
      v172 = v167 & v164;
      v173 = v164 ^ ~v160;
      v174 = v169 & v170;
      v175 = v166 ^ v169 ^ v168;
      v176 = v175 ^ __ROR4__(v168, 30);
      v177 = v149 ^ v170 ^ v173;
      v178 = v170 ^ ~v161 ^ v172;
      v179 = v171 ^ v174;
      v180 = v176 ^ __ROR4__(v175, 18);
      v181 = v177 ^ __ROR4__(v173, 30);
      v182 = v178 ^ __ROR4__(v172, 30);
      v183 = v171 ^ v174 ^ __ROR4__(v171, 30);
      ++v148;
      v184 = v181 ^ __ROR4__(v177, 18);
      v185 = v182 ^ __ROR4__(v178, 18);
      v186 = v183 ^ __ROR4__(v179, 18);
      v154 = v180 ^ __ROR4__(v176, 22) ^ v285;
      v156 = v184 ^ __ROR4__(v181, 22);
      v150 = v185 ^ __ROR4__(v182, 22);
      v155 = i ^ __ROR4__(v180, 31);
      v149 = __ROR4__(v184, 31);
      v151 = __ROR4__(v185, 31);
      v152 = v186 ^ __ROR4__(v183, 22);
      v153 = __ROR4__(v186, 31);
      if ( v148 == 8 )
        break;
      v285 = dword_2A2D68[v148];
    }
    v353 = v153;
    v333 = v156;
    v337 = v149;
    v341 = v150;
    v345 = v151;
    v349 = v152;
    v187 = 0;
    v357 = v154;
    v361 = v155;
    v286 = -1307332699;
    v188 = v370;
    v189 = v374;
    v190 = v378;
    v191 = v382;
    v192 = v386;
    v193 = v390;
    v194 = v394;
    v195 = v366;
    for ( j = -534197825; ; j = dword_2A2E68[v187] )
    {
      v196 = v189 ^ v191;
      v197 = v192 ^ v194;
      v198 = v196 ^ v193 & v191;
      v199 = (v193 | v195) ^ v191;
      v200 = (v188 | v190) ^ v194;
      v201 = v194 & v188;
      v202 = ~v195 ^ v193 & v191;
      v203 = v202 | v198;
      v204 = ~v190 ^ v201;
      v205 = v201 ^ v197;
      v206 = v196 & v199 ^ v202;
      v207 = v193 ^ (v202 | v198);
      v208 = v197 & v200 ^ v204;
      v209 = v204 | v205;
      v210 = v198 ^ v206;
      v211 = v206 & v203;
      v212 = v203 ^ ~v199;
      v213 = v208 & v209;
      v214 = v205 ^ v208 ^ v207;
      v215 = v214 ^ __ROR4__(v207, 30);
      v216 = v188 ^ v209 ^ v212;
      v217 = v209 ^ ~v200 ^ v211;
      v218 = v210 ^ v213;
      v219 = v215 ^ __ROR4__(v214, 18);
      v220 = v216 ^ __ROR4__(v212, 30);
      v221 = v217 ^ __ROR4__(v211, 30);
      v222 = v210 ^ v213 ^ __ROR4__(v210, 30);
      ++v187;
      v223 = v220 ^ __ROR4__(v216, 18);
      v224 = v221 ^ __ROR4__(v217, 18);
      v225 = v222 ^ __ROR4__(v218, 18);
      v193 = v219 ^ __ROR4__(v215, 22) ^ v286;
      v195 = v223 ^ __ROR4__(v220, 22);
      v189 = v224 ^ __ROR4__(v221, 22);
      v194 = j ^ __ROR4__(v219, 31);
      v188 = __ROR4__(v223, 31);
      v190 = __ROR4__(v224, 31);
      v191 = v225 ^ __ROR4__(v222, 22);
      v192 = __ROR4__(v225, 31);
      if ( v187 == 8 )
        break;
      v286 = dword_2A2E48[v187];
    }
    v383 = v192;
    v364 = v195;
    v367 = v188;
    v371 = v189;
    v375 = v190;
    v379 = v191;
    v226 = 0;
    v387 = v193;
    v391 = v194;
    v287 = -254613021;
    v227 = v400;
    v228 = v403;
    v229 = v407;
    v230 = v411;
    v231 = v414;
    v232 = v419;
    v233 = v423;
    v234 = v397;
    for ( k = 1351669111; ; k = dword_2A2EA8[v226] )
    {
      v235 = v228 ^ v230;
      v236 = v231 ^ v233;
      v237 = v235 ^ v232 & v230;
      v238 = (v232 | v234) ^ v230;
      v239 = (v227 | v229) ^ v233;
      v240 = v233 & v227;
      v241 = ~v234 ^ v232 & v230;
      v242 = v241 | v237;
      v243 = ~v229 ^ v240;
      v244 = v240 ^ v236;
      v245 = v235 & v238 ^ v241;
      v246 = v232 ^ (v241 | v237);
      v247 = v236 & v239 ^ v243;
      v248 = v243 | v244;
      v249 = v237 ^ v245;
      v250 = v245 & v242;
      v251 = v242 ^ ~v238;
      v252 = v247 & v248;
      v253 = v244 ^ v247 ^ v246;
      v254 = v253 ^ __ROR4__(v246, 30);
      v255 = v227 ^ v248 ^ v251;
      v256 = v248 ^ ~v239 ^ v250;
      v257 = v249 ^ v252;
      v258 = v254 ^ __ROR4__(v253, 18);
      v259 = v255 ^ __ROR4__(v251, 30);
      v260 = v256 ^ __ROR4__(v250, 30);
      v261 = v249 ^ v252 ^ __ROR4__(v249, 30);
      ++v226;
      v262 = v259 ^ __ROR4__(v255, 18);
      v263 = v260 ^ __ROR4__(v256, 18);
      v264 = v261 ^ __ROR4__(v257, 18);
      v232 = v258 ^ __ROR4__(v254, 22) ^ v287;
      v234 = v262 ^ __ROR4__(v259, 22);
      v228 = v263 ^ __ROR4__(v260, 22);
      v233 = k ^ __ROR4__(v258, 31);
      v227 = __ROR4__(v262, 31);
      v229 = __ROR4__(v263, 31);
      v230 = v264 ^ __ROR4__(v261, 22);
      v231 = __ROR4__(v264, 31);
      if ( v226 == 8 )
        break;
      v287 = dword_2A2E88[v226];
    }
    v401 = v228;
    v395 = v234;
    v398 = v227;
    v404 = v229;
    v408 = v230;
    v412 = v231;
    v415 = v232;
    v420 = v233;
    if ( v447 != 1 )
      break;
    v6 = v427 ^ v424;
    v274 = v427 ^ v424 ^ v357 ^ v387 ^ v232;
    a4[3] = v274;
    v275 = v292 ^ v307 ^ v333 ^ v364 ^ v234;
    v276 = v433 ^ v313 ^ v341 ^ v371 ^ v228;
    v277 = v301 ^ v321 ^ v349 ^ v379 ^ v230;
    *a4 = HIBYTE(v274);
    v278 = v304 ^ v329 ^ v361 ^ v391 ^ v233;
    a4[1] = BYTE2(v274);
    v279 = v297 ^ v310 ^ v337 ^ v367 ^ v398;
    a4[2] = (unsigned __int16)(v427 ^ v424 ^ v357 ^ v387 ^ v415) >> 8;
    v280 = v435 ^ v317 ^ v345 ^ v375 ^ v404;
    a4[4] = HIBYTE(v275);
    a4[6] = BYTE1(v275);
    a4[5] = BYTE2(v275);
    a4[7] = v275;
    a4[8] = HIBYTE(v276);
    a4[11] = v276;
    v281 = v438 ^ v325 ^ v353 ^ v383 ^ v412;
    a4[15] = v277;
    a4[9] = BYTE2(v276);
    a4[10] = BYTE1(v276);
    a4[17] = BYTE2(v278);
    a4[12] = HIBYTE(v277);
    a4[21] = BYTE2(v279);
    a4[13] = BYTE2(v277);
    a4[14] = BYTE1(v277);
    a4[16] = HIBYTE(v278);
    a4[19] = v278;
    a4[18] = BYTE1(v278);
    a4[23] = v279;
    a4[20] = HIBYTE(v279);
    a4[22] = BYTE1(v279);
    a4[27] = v280;
    a4[24] = HIBYTE(v280);
    a4[25] = BYTE2(v280);
    a4[26] = BYTE1(v280);
    a4[31] = v281;
    a4[28] = HIBYTE(v281);
    a4[29] = BYTE2(v281);
    a4[30] = BYTE1(v281);
LABEL_21:
    ++v447;
  }
  if ( v447 != 2 )
  {
    v6 = v427 ^ v424;
    *(_QWORD *)a1 = 0;
    *((_QWORD *)a1 + 1) = 0;
    *((_QWORD *)a1 + 2) = 0;
    *((_QWORD *)a1 + 3) = 0;
    goto LABEL_21;
  }
  v265 = v424 ^ v427 ^ v232 ^ v387 ^ v357;
  v266 = v292 ^ v307 ^ v333 ^ v234 ^ v364;
  a4[35] = v265;
  v267 = v433 ^ v313 ^ v341 ^ v228 ^ v371;
  a4[36] = HIBYTE(v266);
  v268 = v301 ^ v321 ^ v408 ^ v379 ^ v349;
  a4[37] = BYTE2(v266);
  v269 = v391 ^ v304 ^ v329 ^ v233 ^ v361;
  a4[39] = v266;
  v270 = v337 ^ v297 ^ v310 ^ v398 ^ v367;
  a4[43] = v267;
  v271 = v435 ^ v317 ^ v345 ^ v404 ^ v375;
  a4[47] = v268;
  v272 = v438 ^ v325 ^ v412 ^ v383 ^ v353;
  a4[32] = HIBYTE(v265);
  a4[44] = HIBYTE(v268);
  a4[51] = v269;
  a4[55] = v270;
  a4[59] = v271;
  a4[63] = v272;
  a4[33] = BYTE2(v265);
  a4[34] = BYTE1(v265);
  a4[38] = BYTE1(v266);
  a4[40] = HIBYTE(v267);
  a4[41] = BYTE2(v267);
  a4[42] = BYTE1(v267);
  a4[45] = BYTE2(v268);
  a4[46] = BYTE1(v268);
  a4[52] = HIBYTE(v270);
  a4[53] = BYTE2(v270);
  a4[48] = HIBYTE(v269);
  a4[49] = BYTE2(v269);
  a4[50] = BYTE1(v269);
  a4[54] = BYTE1(v270);
  a4[58] = BYTE1(v271);
  a4[60] = HIBYTE(v272);
  a4[56] = HIBYTE(v271);
  a4[57] = BYTE2(v271);
  a4[61] = BYTE2(v272);
  a4[62] = BYTE1(v272);
  result = memcpy(a1 + 9, &unk_2A2DA8, 0xA0u);
  a1[8] = 0;
  return result;
}
