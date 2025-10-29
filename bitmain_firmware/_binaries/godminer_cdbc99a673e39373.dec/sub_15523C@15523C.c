unsigned int __fastcall sub_15523C(_DWORD *a1, char a2, char a3, _BYTE *a4, int a5)
{
  int v5; // lr
  int v7; // r6
  int v8; // r11
  int v9; // r10
  int v10; // r9
  int v11; // r0
  int v12; // r8
  int v13; // r1
  int v14; // r7
  int v15; // r12
  int v16; // r4
  int v17; // lr
  int v18; // r3
  int v19; // r9
  int v20; // r10
  int v21; // r12
  int v22; // r5
  int v23; // r8
  int v24; // r2
  int v25; // r11
  int v26; // r6
  int v27; // r0
  int v28; // r1
  int v29; // r9
  int v30; // t2
  int v31; // r5
  int v32; // r2
  int v33; // r2
  int v34; // r3
  int v35; // lr
  int v36; // lr
  int v37; // r1
  int v38; // r10
  int v39; // r7
  int v40; // r4
  int v41; // r8
  int v42; // r11
  int v43; // r5
  int v44; // r6
  int v45; // r6
  int v46; // r2
  int v47; // r3
  int v48; // r12
  int v49; // r4
  int v50; // lr
  int v51; // r10
  int v52; // r4
  int v53; // r0
  int v54; // r4
  int v55; // r8
  int v56; // r5
  int v57; // r6
  int v58; // r7
  int v59; // r9
  int v60; // r1
  int v61; // r1
  int v62; // r11
  int v63; // lr
  int v64; // r3
  int v65; // r2
  int v66; // r4
  int v67; // r2
  int v68; // r8
  int v69; // r9
  int v70; // r10
  int v71; // r7
  int v72; // r6
  int v73; // r1
  int v74; // r11
  int v75; // r5
  int v76; // r0
  int v77; // r2
  int v78; // lr
  int v79; // r10
  int v80; // r4
  int v81; // r12
  int v82; // r9
  int v83; // r7
  int v84; // r12
  int v85; // r1
  int v86; // r8
  int v87; // r4
  int v88; // r11
  int v89; // r7
  int v90; // r5
  int v91; // lr
  int v92; // r3
  int v93; // r9
  int v94; // r8
  int v95; // r2
  int v96; // r1
  int v97; // r10
  int v98; // r11
  int v99; // r12
  int v100; // r3
  int v101; // r6
  int v102; // lr
  int v103; // r0
  int v104; // r5
  int v105; // r0
  int v106; // r4
  int v107; // r2
  int v108; // r10
  int v109; // r11
  int v110; // r8
  int v111; // r7
  int v112; // r9
  int v113; // r6
  int v114; // r4
  int v115; // lr
  int v116; // r5
  int v117; // r12
  int v118; // r9
  int v119; // r2
  int v120; // r3
  int v121; // r3
  int v122; // r6
  int v123; // r12
  int v124; // r5
  int v125; // r10
  int v126; // r1
  int v127; // r11
  int v128; // lr
  int v129; // r1
  int v130; // r0
  int v131; // r2
  int v132; // r3
  int v133; // r4
  int v134; // r11
  int v135; // r9
  int v136; // r1
  int v137; // r6
  int v138; // r7
  int v139; // r0
  int v140; // r6
  int v141; // r8
  int v142; // r8
  int v143; // r5
  int v144; // lr
  int v145; // r10
  int v146; // r8
  int v147; // r4
  int v148; // r3
  int v149; // r11
  int v150; // r9
  int v151; // r2
  int v152; // r6
  int v153; // r7
  int v154; // r10
  int v155; // r5
  int v156; // lr
  int v157; // r3
  int v158; // r10
  int v159; // r9
  int v160; // r0
  int v161; // r12
  int v162; // r4
  int v163; // r2
  int v164; // r11
  int v165; // r3
  int v166; // r10
  int v167; // r8
  int v168; // r6
  int v169; // r1
  int v170; // r5
  int v171; // lr
  int v172; // r11
  int v173; // r9
  int v174; // r12
  int v175; // r0
  int v176; // r2
  int v177; // r1
  int v178; // r4
  int v179; // r3
  int v180; // r8
  int v181; // r10
  int v182; // r7
  int v183; // lr
  int v184; // r1
  int v185; // r12
  int v186; // r1
  int v187; // r0
  int v188; // r2
  int v189; // r5
  int v190; // r3
  int v191; // r4
  int v192; // r8
  int v193; // r4
  int v194; // r7
  int v195; // r11
  int v196; // r3
  int v197; // r9
  int v198; // r12
  int v199; // r6
  int v200; // r1
  int v201; // r0
  int v202; // r5
  int v203; // lr
  int v204; // r10
  int v205; // r8
  int v206; // r4
  int v207; // r3
  int v208; // r11
  int v209; // r9
  int v210; // r2
  int v211; // r6
  int v212; // r7
  int v213; // r10
  int v214; // r5
  int v215; // lr
  int v216; // r3
  int v217; // r9
  int v218; // r12
  int v219; // r0
  int v220; // r4
  int v221; // r2
  int v222; // r11
  int v223; // r3
  int v224; // r10
  int v225; // r8
  int v226; // r6
  int v227; // r5
  int v228; // lr
  int v229; // r11
  int v230; // r12
  int v231; // r0
  int v232; // r3
  int v233; // r9
  int v234; // r2
  int v235; // r4
  int v236; // r1
  int v237; // r3
  int v238; // r8
  int v239; // r10
  int v240; // r7
  int v241; // lr
  int v242; // r1
  int v243; // r12
  int v244; // r1
  int v245; // r0
  int v246; // r2
  int v247; // r5
  int v248; // r7
  int v249; // r3
  int v250; // r4
  int v251; // r8
  int v252; // r4
  int v253; // r11
  int v254; // r3
  int v255; // r9
  int v256; // r12
  int v257; // r6
  int v258; // r1
  int v259; // r0
  int v260; // r5
  int v261; // lr
  int v262; // r10
  int v263; // r8
  int v264; // r4
  int v265; // r3
  int v266; // r11
  int v267; // r9
  int v268; // r2
  int v269; // r6
  int v270; // r7
  int v271; // r10
  int v272; // r5
  int v273; // lr
  int v274; // r3
  int v275; // r9
  int v276; // r12
  int v277; // r0
  int v278; // r4
  int v279; // r2
  int v280; // r11
  int v281; // r3
  int v282; // r10
  int v283; // r8
  int v284; // r6
  int v285; // lr
  int v286; // r5
  int v287; // r11
  int v288; // r3
  int v289; // r9
  int v290; // r12
  int v291; // t2
  int v292; // r2
  int v293; // r1
  int v294; // r4
  int v295; // r3
  int v296; // r8
  int v297; // r10
  int v298; // r7
  int v299; // lr
  int v300; // r1
  int v301; // r12
  int v302; // r1
  int v303; // r0
  int v304; // r2
  int v305; // r5
  int v306; // r7
  int v307; // r3
  int v308; // r4
  int v309; // r8
  int v310; // r4
  int v311; // r11
  int v312; // r3
  int v313; // r9
  int v314; // r12
  int v315; // r6
  int v316; // r1
  int v317; // r0
  int v318; // r5
  int v319; // lr
  int v320; // r10
  int v321; // r8
  int v322; // r4
  int v323; // r3
  int v324; // r11
  int v325; // r9
  int v326; // r2
  int v327; // r6
  int v328; // r7
  int v329; // r10
  int v330; // r5
  int v331; // lr
  int v332; // r3
  int v333; // r9
  int v334; // r12
  int v335; // r0
  int v336; // r4
  int v337; // r2
  int v338; // r11
  int v339; // r3
  int v340; // r10
  int v341; // r8
  int v342; // r6
  int v343; // r1
  int v344; // r5
  int v345; // lr
  int v346; // r11
  int v347; // r3
  int v348; // r9
  int v349; // r12
  int v350; // t2
  int v351; // r2
  int v352; // r1
  int v353; // r4
  int v354; // r3
  int v355; // r8
  int v356; // r10
  int v357; // r7
  int v358; // lr
  int v359; // r1
  int v360; // r12
  int v361; // r1
  int v362; // r0
  int v363; // r2
  int v364; // r5
  int v365; // r3
  int v366; // r8
  int v367; // r4
  int v368; // r7
  int v369; // r11
  int v370; // r3
  int v371; // r9
  int v372; // r12
  int v373; // r6
  int v374; // r1
  int v375; // r0
  int v376; // r5
  int v377; // lr
  int v378; // r10
  int v379; // r8
  int v380; // r4
  int v381; // r3
  int v382; // r11
  int v383; // r9
  int v384; // r2
  int v385; // r6
  int v386; // r7
  int v387; // r10
  int v388; // r5
  int v389; // lr
  int v390; // r3
  int v391; // r9
  int v392; // r12
  int v393; // r0
  int v394; // r4
  int v395; // r2
  int v396; // r11
  int v397; // r3
  int v398; // r10
  int v399; // r8
  int v400; // r6
  int v401; // r5
  int v402; // lr
  int v403; // r11
  int v404; // r12
  int v405; // r0
  int v406; // r3
  int v407; // r9
  int v408; // r2
  int v409; // r4
  int v410; // r1
  int v411; // r3
  int v412; // r8
  int v413; // r10
  int v414; // r7
  int v415; // lr
  int v416; // r1
  int v417; // r1
  int v418; // lr
  int v419; // r5
  int v420; // r0
  int v421; // r3
  int v422; // r4
  int v423; // r8
  int v424; // r4
  int v425; // r10
  int v426; // r11
  int v427; // r3
  int v428; // r9
  int v429; // r7
  int v430; // r0
  int v431; // r2
  int v432; // r6
  int v433; // r1
  int v434; // r5
  int v435; // lr
  int v436; // r0
  int v437; // r12
  int v438; // r12
  int v439; // r9
  int v440; // r2
  int v441; // r4
  int v442; // r3
  int v443; // r10
  int v444; // r8
  int v445; // r11
  int v446; // r2
  int v447; // r7
  int v448; // r6
  int v449; // lr
  int v450; // r3
  int v451; // r10
  int v452; // r1
  int v453; // r0
  int v454; // r12
  int v455; // r0
  int v456; // r9
  int v457; // r0
  int v458; // r6
  int v459; // r4
  int v460; // r5
  int v461; // r11
  int v462; // r8
  int v463; // r7
  int v464; // r1
  int v465; // lr
  int v466; // r12
  int v467; // r2
  int v468; // lr
  int v469; // r0
  int v470; // r12
  int v471; // r3
  _BYTE *v472; // r3
  unsigned int v473; // r2
  _DWORD *i; // r12
  unsigned int v475; // t1
  unsigned int result; // r0
  int v477; // [sp+0h] [bp-84h]
  int v478; // [sp+4h] [bp-80h]
  int v479; // [sp+4h] [bp-80h]
  int v480; // [sp+4h] [bp-80h]
  int v481; // [sp+4h] [bp-80h]
  int v482; // [sp+4h] [bp-80h]
  int v483; // [sp+4h] [bp-80h]
  int v484; // [sp+4h] [bp-80h]
  int v485; // [sp+4h] [bp-80h]
  int v486; // [sp+4h] [bp-80h]
  int v487; // [sp+4h] [bp-80h]
  int v488; // [sp+4h] [bp-80h]
  int v489; // [sp+4h] [bp-80h]
  int v490; // [sp+4h] [bp-80h]
  int v491; // [sp+4h] [bp-80h]
  int v492; // [sp+4h] [bp-80h]
  int v493; // [sp+4h] [bp-80h]
  int v494; // [sp+4h] [bp-80h]
  int v495; // [sp+4h] [bp-80h]
  int v496; // [sp+4h] [bp-80h]
  int v497; // [sp+4h] [bp-80h]
  int v498; // [sp+4h] [bp-80h]
  int v499; // [sp+4h] [bp-80h]
  int v500; // [sp+4h] [bp-80h]
  int v501; // [sp+4h] [bp-80h]
  int v502; // [sp+4h] [bp-80h]
  int v503; // [sp+4h] [bp-80h]
  int v504; // [sp+4h] [bp-80h]
  int v505; // [sp+4h] [bp-80h]
  int v506; // [sp+4h] [bp-80h]
  int v507; // [sp+4h] [bp-80h]
  int v508; // [sp+4h] [bp-80h]
  int v509; // [sp+8h] [bp-7Ch]
  int v510; // [sp+8h] [bp-7Ch]
  int v511; // [sp+8h] [bp-7Ch]
  int v512; // [sp+8h] [bp-7Ch]
  int v513; // [sp+8h] [bp-7Ch]
  int v514; // [sp+8h] [bp-7Ch]
  int v515; // [sp+8h] [bp-7Ch]
  int v516; // [sp+8h] [bp-7Ch]
  int v517; // [sp+8h] [bp-7Ch]
  int v518; // [sp+8h] [bp-7Ch]
  int v519; // [sp+8h] [bp-7Ch]
  int v520; // [sp+8h] [bp-7Ch]
  int v521; // [sp+8h] [bp-7Ch]
  int v522; // [sp+8h] [bp-7Ch]
  int v523; // [sp+8h] [bp-7Ch]
  int v524; // [sp+8h] [bp-7Ch]
  int v525; // [sp+8h] [bp-7Ch]
  int v526; // [sp+8h] [bp-7Ch]
  int v527; // [sp+8h] [bp-7Ch]
  int v528; // [sp+8h] [bp-7Ch]
  int v529; // [sp+8h] [bp-7Ch]
  int v530; // [sp+8h] [bp-7Ch]
  int v531; // [sp+8h] [bp-7Ch]
  int v532; // [sp+8h] [bp-7Ch]
  int v533; // [sp+8h] [bp-7Ch]
  int v534; // [sp+8h] [bp-7Ch]
  int v535; // [sp+8h] [bp-7Ch]
  int v536; // [sp+8h] [bp-7Ch]
  int v537; // [sp+8h] [bp-7Ch]
  int v538; // [sp+8h] [bp-7Ch]
  int v539; // [sp+8h] [bp-7Ch]
  int v540; // [sp+Ch] [bp-78h]
  int v541; // [sp+Ch] [bp-78h]
  int v542; // [sp+Ch] [bp-78h]
  int v543; // [sp+Ch] [bp-78h]
  int v544; // [sp+Ch] [bp-78h]
  int v545; // [sp+Ch] [bp-78h]
  int v546; // [sp+Ch] [bp-78h]
  int v547; // [sp+Ch] [bp-78h]
  int v548; // [sp+Ch] [bp-78h]
  int v549; // [sp+Ch] [bp-78h]
  int v550; // [sp+Ch] [bp-78h]
  int v551; // [sp+Ch] [bp-78h]
  int v552; // [sp+Ch] [bp-78h]
  int v553; // [sp+Ch] [bp-78h]
  int v554; // [sp+Ch] [bp-78h]
  int v555; // [sp+Ch] [bp-78h]
  int v556; // [sp+Ch] [bp-78h]
  int v557; // [sp+Ch] [bp-78h]
  int v558; // [sp+Ch] [bp-78h]
  int v559; // [sp+Ch] [bp-78h]
  int v560; // [sp+Ch] [bp-78h]
  int v561; // [sp+Ch] [bp-78h]
  int v562; // [sp+Ch] [bp-78h]
  int v563; // [sp+Ch] [bp-78h]
  int v564; // [sp+Ch] [bp-78h]
  int v565; // [sp+Ch] [bp-78h]
  int v566; // [sp+Ch] [bp-78h]
  int v567; // [sp+Ch] [bp-78h]
  int v568; // [sp+Ch] [bp-78h]
  int v569; // [sp+Ch] [bp-78h]
  int v570; // [sp+Ch] [bp-78h]
  int v571; // [sp+10h] [bp-74h]
  int v572; // [sp+10h] [bp-74h]
  int v573; // [sp+10h] [bp-74h]
  int v574; // [sp+10h] [bp-74h]
  int v575; // [sp+10h] [bp-74h]
  int v576; // [sp+10h] [bp-74h]
  int v577; // [sp+10h] [bp-74h]
  int v578; // [sp+10h] [bp-74h]
  int v579; // [sp+10h] [bp-74h]
  int v580; // [sp+10h] [bp-74h]
  int v581; // [sp+10h] [bp-74h]
  int v582; // [sp+10h] [bp-74h]
  int v583; // [sp+10h] [bp-74h]
  int v584; // [sp+10h] [bp-74h]
  int v585; // [sp+10h] [bp-74h]
  int v586; // [sp+10h] [bp-74h]
  int v587; // [sp+10h] [bp-74h]
  int v588; // [sp+10h] [bp-74h]
  int v589; // [sp+10h] [bp-74h]
  int v590; // [sp+10h] [bp-74h]
  int v591; // [sp+10h] [bp-74h]
  int v592; // [sp+10h] [bp-74h]
  int v593; // [sp+10h] [bp-74h]
  int v594; // [sp+10h] [bp-74h]
  int v595; // [sp+10h] [bp-74h]
  int v596; // [sp+10h] [bp-74h]
  int v597; // [sp+14h] [bp-70h]
  int v598; // [sp+14h] [bp-70h]
  int v599; // [sp+14h] [bp-70h]
  int v600; // [sp+14h] [bp-70h]
  int v601; // [sp+14h] [bp-70h]
  int v602; // [sp+14h] [bp-70h]
  int v603; // [sp+14h] [bp-70h]
  int v604; // [sp+14h] [bp-70h]
  int v605; // [sp+14h] [bp-70h]
  int v606; // [sp+14h] [bp-70h]
  int v607; // [sp+14h] [bp-70h]
  int v608; // [sp+14h] [bp-70h]
  int v609; // [sp+14h] [bp-70h]
  int v610; // [sp+14h] [bp-70h]
  int v611; // [sp+14h] [bp-70h]
  int v612; // [sp+14h] [bp-70h]
  int v613; // [sp+14h] [bp-70h]
  int v614; // [sp+14h] [bp-70h]
  int v615; // [sp+14h] [bp-70h]
  int v616; // [sp+14h] [bp-70h]
  int v617; // [sp+14h] [bp-70h]
  int v618; // [sp+14h] [bp-70h]
  int v619; // [sp+14h] [bp-70h]
  int v620; // [sp+14h] [bp-70h]
  int v621; // [sp+14h] [bp-70h]
  int v622; // [sp+14h] [bp-70h]
  int v623; // [sp+14h] [bp-70h]
  int v624; // [sp+14h] [bp-70h]
  int v625; // [sp+14h] [bp-70h]
  int v626; // [sp+14h] [bp-70h]
  int v627; // [sp+14h] [bp-70h]
  int v628; // [sp+18h] [bp-6Ch]
  int v629; // [sp+18h] [bp-6Ch]
  int v630; // [sp+18h] [bp-6Ch]
  int v631; // [sp+18h] [bp-6Ch]
  int v632; // [sp+18h] [bp-6Ch]
  int v633; // [sp+18h] [bp-6Ch]
  int v634; // [sp+18h] [bp-6Ch]
  int v635; // [sp+18h] [bp-6Ch]
  int v636; // [sp+18h] [bp-6Ch]
  int v637; // [sp+18h] [bp-6Ch]
  int v638; // [sp+18h] [bp-6Ch]
  int v639; // [sp+18h] [bp-6Ch]
  int v640; // [sp+18h] [bp-6Ch]
  int v641; // [sp+18h] [bp-6Ch]
  int v642; // [sp+18h] [bp-6Ch]
  int v643; // [sp+18h] [bp-6Ch]
  int v644; // [sp+18h] [bp-6Ch]
  int v645; // [sp+18h] [bp-6Ch]
  int v646; // [sp+18h] [bp-6Ch]
  int v647; // [sp+18h] [bp-6Ch]
  int v648; // [sp+18h] [bp-6Ch]
  int v649; // [sp+18h] [bp-6Ch]
  int v650; // [sp+18h] [bp-6Ch]
  int v651; // [sp+18h] [bp-6Ch]
  int v652; // [sp+18h] [bp-6Ch]
  int v653; // [sp+1Ch] [bp-68h]
  int v654; // [sp+1Ch] [bp-68h]
  int v655; // [sp+1Ch] [bp-68h]
  int v656; // [sp+1Ch] [bp-68h]
  int v657; // [sp+1Ch] [bp-68h]
  int v658; // [sp+1Ch] [bp-68h]
  int v659; // [sp+1Ch] [bp-68h]
  int v660; // [sp+1Ch] [bp-68h]
  int v661; // [sp+1Ch] [bp-68h]
  int v662; // [sp+1Ch] [bp-68h]
  int v663; // [sp+1Ch] [bp-68h]
  int v664; // [sp+1Ch] [bp-68h]
  int v665; // [sp+1Ch] [bp-68h]
  int v666; // [sp+1Ch] [bp-68h]
  int v667; // [sp+1Ch] [bp-68h]
  int v668; // [sp+1Ch] [bp-68h]
  int v669; // [sp+1Ch] [bp-68h]
  int v670; // [sp+1Ch] [bp-68h]
  int v671; // [sp+1Ch] [bp-68h]
  int v672; // [sp+1Ch] [bp-68h]
  int v673; // [sp+1Ch] [bp-68h]
  int v674; // [sp+1Ch] [bp-68h]
  int v675; // [sp+1Ch] [bp-68h]
  int v676; // [sp+1Ch] [bp-68h]
  int v677; // [sp+1Ch] [bp-68h]
  int v678; // [sp+1Ch] [bp-68h]
  int v679; // [sp+1Ch] [bp-68h]
  int v680; // [sp+1Ch] [bp-68h]
  int v681; // [sp+1Ch] [bp-68h]
  int v682; // [sp+20h] [bp-64h]
  int v683; // [sp+20h] [bp-64h]
  int v684; // [sp+20h] [bp-64h]
  int v685; // [sp+20h] [bp-64h]
  int v686; // [sp+20h] [bp-64h]
  int v687; // [sp+20h] [bp-64h]
  int v688; // [sp+20h] [bp-64h]
  int v689; // [sp+20h] [bp-64h]
  int v690; // [sp+20h] [bp-64h]
  int v691; // [sp+20h] [bp-64h]
  int v692; // [sp+20h] [bp-64h]
  int v693; // [sp+20h] [bp-64h]
  int v694; // [sp+20h] [bp-64h]
  int v695; // [sp+20h] [bp-64h]
  int v696; // [sp+20h] [bp-64h]
  int v697; // [sp+20h] [bp-64h]
  int v698; // [sp+20h] [bp-64h]
  int v699; // [sp+20h] [bp-64h]
  int v700; // [sp+20h] [bp-64h]
  int v701; // [sp+20h] [bp-64h]
  int v702; // [sp+20h] [bp-64h]
  int v703; // [sp+20h] [bp-64h]
  int v704; // [sp+20h] [bp-64h]
  int v705; // [sp+20h] [bp-64h]
  int v706; // [sp+20h] [bp-64h]
  int v707; // [sp+20h] [bp-64h]
  int v708; // [sp+20h] [bp-64h]
  int v709; // [sp+20h] [bp-64h]
  int v710; // [sp+24h] [bp-60h]
  int v711; // [sp+24h] [bp-60h]
  int v712; // [sp+24h] [bp-60h]
  int v713; // [sp+24h] [bp-60h]
  int v714; // [sp+24h] [bp-60h]
  int v715; // [sp+24h] [bp-60h]
  int v716; // [sp+24h] [bp-60h]
  int v717; // [sp+24h] [bp-60h]
  int v718; // [sp+24h] [bp-60h]
  int v719; // [sp+24h] [bp-60h]
  int v720; // [sp+24h] [bp-60h]
  int v721; // [sp+24h] [bp-60h]
  int v722; // [sp+24h] [bp-60h]
  int v723; // [sp+24h] [bp-60h]
  int v724; // [sp+24h] [bp-60h]
  int v725; // [sp+24h] [bp-60h]
  int v726; // [sp+24h] [bp-60h]
  int v727; // [sp+24h] [bp-60h]
  int v728; // [sp+24h] [bp-60h]
  int v729; // [sp+24h] [bp-60h]
  int v730; // [sp+24h] [bp-60h]
  int v731; // [sp+24h] [bp-60h]
  int v732; // [sp+24h] [bp-60h]
  int v733; // [sp+24h] [bp-60h]
  int v734; // [sp+24h] [bp-60h]
  int v735; // [sp+24h] [bp-60h]
  int v736; // [sp+24h] [bp-60h]
  int v737; // [sp+24h] [bp-60h]
  int v738; // [sp+28h] [bp-5Ch]
  int v739; // [sp+28h] [bp-5Ch]
  int v740; // [sp+28h] [bp-5Ch]
  int v741; // [sp+28h] [bp-5Ch]
  int v742; // [sp+28h] [bp-5Ch]
  int v743; // [sp+28h] [bp-5Ch]
  int v744; // [sp+28h] [bp-5Ch]
  int v745; // [sp+28h] [bp-5Ch]
  int v746; // [sp+28h] [bp-5Ch]
  int v747; // [sp+28h] [bp-5Ch]
  int v748; // [sp+28h] [bp-5Ch]
  int v749; // [sp+28h] [bp-5Ch]
  int v750; // [sp+28h] [bp-5Ch]
  int v751; // [sp+28h] [bp-5Ch]
  int v752; // [sp+28h] [bp-5Ch]
  int v753; // [sp+28h] [bp-5Ch]
  int v754; // [sp+28h] [bp-5Ch]
  int v755; // [sp+28h] [bp-5Ch]
  int v756; // [sp+28h] [bp-5Ch]
  int v757; // [sp+28h] [bp-5Ch]
  int v758; // [sp+28h] [bp-5Ch]
  int v759; // [sp+28h] [bp-5Ch]
  int v760; // [sp+28h] [bp-5Ch]
  int v761; // [sp+28h] [bp-5Ch]
  int v762; // [sp+28h] [bp-5Ch]
  int v763; // [sp+28h] [bp-5Ch]
  int v764; // [sp+28h] [bp-5Ch]
  int v765; // [sp+28h] [bp-5Ch]
  int v766; // [sp+28h] [bp-5Ch]
  int v767; // [sp+2Ch] [bp-58h]
  int v768; // [sp+2Ch] [bp-58h]
  int v769; // [sp+2Ch] [bp-58h]
  int v770; // [sp+2Ch] [bp-58h]
  int v771; // [sp+2Ch] [bp-58h]
  int v772; // [sp+2Ch] [bp-58h]
  int v773; // [sp+2Ch] [bp-58h]
  int v774; // [sp+2Ch] [bp-58h]
  int v775; // [sp+2Ch] [bp-58h]
  int v776; // [sp+2Ch] [bp-58h]
  int v777; // [sp+2Ch] [bp-58h]
  int v778; // [sp+2Ch] [bp-58h]
  int v779; // [sp+2Ch] [bp-58h]
  int v780; // [sp+2Ch] [bp-58h]
  int v781; // [sp+2Ch] [bp-58h]
  int v782; // [sp+2Ch] [bp-58h]
  int v783; // [sp+2Ch] [bp-58h]
  int v784; // [sp+2Ch] [bp-58h]
  int v785; // [sp+2Ch] [bp-58h]
  int v786; // [sp+2Ch] [bp-58h]
  int v787; // [sp+2Ch] [bp-58h]
  int v788; // [sp+2Ch] [bp-58h]
  int v789; // [sp+2Ch] [bp-58h]
  int v790; // [sp+2Ch] [bp-58h]
  int v791; // [sp+2Ch] [bp-58h]
  int v792; // [sp+30h] [bp-54h]
  int v793; // [sp+30h] [bp-54h]
  int v794; // [sp+30h] [bp-54h]
  int v795; // [sp+30h] [bp-54h]
  int v796; // [sp+30h] [bp-54h]
  int v797; // [sp+30h] [bp-54h]
  int v798; // [sp+30h] [bp-54h]
  int v799; // [sp+30h] [bp-54h]
  int v800; // [sp+30h] [bp-54h]
  int v801; // [sp+30h] [bp-54h]
  int v802; // [sp+30h] [bp-54h]
  int v803; // [sp+30h] [bp-54h]
  int v804; // [sp+30h] [bp-54h]
  int v805; // [sp+30h] [bp-54h]
  int v806; // [sp+30h] [bp-54h]
  int v807; // [sp+30h] [bp-54h]
  int v808; // [sp+30h] [bp-54h]
  int v809; // [sp+30h] [bp-54h]
  int v810; // [sp+30h] [bp-54h]
  int v811; // [sp+30h] [bp-54h]
  int v812; // [sp+30h] [bp-54h]
  int v813; // [sp+30h] [bp-54h]
  int v814; // [sp+30h] [bp-54h]
  int v815; // [sp+30h] [bp-54h]
  int v816; // [sp+30h] [bp-54h]
  int v817; // [sp+30h] [bp-54h]
  int v818; // [sp+30h] [bp-54h]
  int v819; // [sp+34h] [bp-50h]
  int v820; // [sp+34h] [bp-50h]
  int v821; // [sp+34h] [bp-50h]
  int v822; // [sp+34h] [bp-50h]
  int v823; // [sp+34h] [bp-50h]
  int v824; // [sp+34h] [bp-50h]
  int v825; // [sp+34h] [bp-50h]
  int v826; // [sp+34h] [bp-50h]
  int v827; // [sp+34h] [bp-50h]
  int v828; // [sp+34h] [bp-50h]
  int v829; // [sp+34h] [bp-50h]
  int v830; // [sp+34h] [bp-50h]
  int v831; // [sp+34h] [bp-50h]
  int v832; // [sp+34h] [bp-50h]
  int v833; // [sp+34h] [bp-50h]
  int v834; // [sp+34h] [bp-50h]
  int v835; // [sp+34h] [bp-50h]
  int v836; // [sp+34h] [bp-50h]
  int v837; // [sp+34h] [bp-50h]
  int v838; // [sp+34h] [bp-50h]
  int v839; // [sp+34h] [bp-50h]
  int v840; // [sp+34h] [bp-50h]
  int v841; // [sp+34h] [bp-50h]
  int v842; // [sp+34h] [bp-50h]
  int v843; // [sp+34h] [bp-50h]
  int v844; // [sp+34h] [bp-50h]
  int v845; // [sp+34h] [bp-50h]
  int v846; // [sp+34h] [bp-50h]
  int v847; // [sp+38h] [bp-4Ch]
  int v848; // [sp+38h] [bp-4Ch]
  int v849; // [sp+38h] [bp-4Ch]
  int v850; // [sp+38h] [bp-4Ch]
  int v851; // [sp+38h] [bp-4Ch]
  int v852; // [sp+38h] [bp-4Ch]
  int v853; // [sp+38h] [bp-4Ch]
  int v854; // [sp+38h] [bp-4Ch]
  int v855; // [sp+38h] [bp-4Ch]
  int v856; // [sp+38h] [bp-4Ch]
  int v857; // [sp+38h] [bp-4Ch]
  int v858; // [sp+38h] [bp-4Ch]
  int v859; // [sp+38h] [bp-4Ch]
  int v860; // [sp+38h] [bp-4Ch]
  int v861; // [sp+38h] [bp-4Ch]
  int v862; // [sp+38h] [bp-4Ch]
  int v863; // [sp+38h] [bp-4Ch]
  int v864; // [sp+38h] [bp-4Ch]
  int v865; // [sp+38h] [bp-4Ch]
  int v866; // [sp+38h] [bp-4Ch]
  int v867; // [sp+38h] [bp-4Ch]
  int v868; // [sp+38h] [bp-4Ch]
  int v869; // [sp+38h] [bp-4Ch]
  int v870; // [sp+38h] [bp-4Ch]
  int v871; // [sp+38h] [bp-4Ch]
  int v872; // [sp+38h] [bp-4Ch]
  int v873; // [sp+3Ch] [bp-48h]
  int v874; // [sp+3Ch] [bp-48h]
  int v875; // [sp+3Ch] [bp-48h]
  int v876; // [sp+3Ch] [bp-48h]
  int v877; // [sp+3Ch] [bp-48h]
  int v878; // [sp+3Ch] [bp-48h]
  int v879; // [sp+3Ch] [bp-48h]
  int v880; // [sp+3Ch] [bp-48h]
  int v881; // [sp+3Ch] [bp-48h]
  int v882; // [sp+3Ch] [bp-48h]
  int v883; // [sp+3Ch] [bp-48h]
  int v884; // [sp+3Ch] [bp-48h]
  int v885; // [sp+3Ch] [bp-48h]
  int v886; // [sp+3Ch] [bp-48h]
  int v887; // [sp+3Ch] [bp-48h]
  int v888; // [sp+3Ch] [bp-48h]
  int v889; // [sp+3Ch] [bp-48h]
  int v890; // [sp+3Ch] [bp-48h]
  int v891; // [sp+3Ch] [bp-48h]
  int v892; // [sp+3Ch] [bp-48h]
  int v893; // [sp+3Ch] [bp-48h]
  int v894; // [sp+3Ch] [bp-48h]
  int v895; // [sp+3Ch] [bp-48h]
  int v896; // [sp+3Ch] [bp-48h]
  int v897; // [sp+3Ch] [bp-48h]
  int v898; // [sp+3Ch] [bp-48h]
  int v899; // [sp+40h] [bp-44h]
  int v900; // [sp+40h] [bp-44h]
  int v901; // [sp+40h] [bp-44h]
  int v902; // [sp+40h] [bp-44h]
  int v903; // [sp+40h] [bp-44h]
  int v904; // [sp+40h] [bp-44h]
  int v905; // [sp+40h] [bp-44h]
  int v906; // [sp+40h] [bp-44h]
  int v907; // [sp+40h] [bp-44h]
  int v908; // [sp+40h] [bp-44h]
  int v909; // [sp+40h] [bp-44h]
  int v910; // [sp+40h] [bp-44h]
  int v911; // [sp+40h] [bp-44h]
  int v912; // [sp+40h] [bp-44h]
  int v913; // [sp+40h] [bp-44h]
  int v914; // [sp+40h] [bp-44h]
  int v915; // [sp+40h] [bp-44h]
  int v916; // [sp+40h] [bp-44h]
  int v917; // [sp+40h] [bp-44h]
  int v918; // [sp+40h] [bp-44h]
  int v919; // [sp+40h] [bp-44h]
  int v920; // [sp+40h] [bp-44h]
  int v921; // [sp+40h] [bp-44h]
  int v922; // [sp+40h] [bp-44h]
  int v923; // [sp+40h] [bp-44h]
  int v924; // [sp+40h] [bp-44h]
  int v925; // [sp+40h] [bp-44h]
  int v926; // [sp+40h] [bp-44h]
  int v927; // [sp+44h] [bp-40h]
  int v928; // [sp+44h] [bp-40h]
  int v929; // [sp+44h] [bp-40h]
  int v930; // [sp+44h] [bp-40h]
  int v931; // [sp+44h] [bp-40h]
  int v932; // [sp+44h] [bp-40h]
  int v933; // [sp+44h] [bp-40h]
  int v934; // [sp+44h] [bp-40h]
  int v935; // [sp+44h] [bp-40h]
  int v936; // [sp+44h] [bp-40h]
  int v937; // [sp+44h] [bp-40h]
  int v938; // [sp+44h] [bp-40h]
  int v939; // [sp+44h] [bp-40h]
  int v940; // [sp+44h] [bp-40h]
  int v941; // [sp+44h] [bp-40h]
  int v942; // [sp+44h] [bp-40h]
  int v943; // [sp+44h] [bp-40h]
  int v944; // [sp+44h] [bp-40h]
  int v945; // [sp+44h] [bp-40h]
  int v946; // [sp+44h] [bp-40h]
  int v947; // [sp+44h] [bp-40h]
  int v948; // [sp+44h] [bp-40h]
  int v949; // [sp+44h] [bp-40h]
  int v950; // [sp+44h] [bp-40h]
  int v951; // [sp+44h] [bp-40h]
  int v952; // [sp+44h] [bp-40h]
  int v953; // [sp+44h] [bp-40h]
  int v954; // [sp+44h] [bp-40h]
  int v955; // [sp+48h] [bp-3Ch]
  int v956; // [sp+48h] [bp-3Ch]
  int v957; // [sp+48h] [bp-3Ch]
  int v958; // [sp+48h] [bp-3Ch]
  int v959; // [sp+48h] [bp-3Ch]
  int v960; // [sp+48h] [bp-3Ch]
  int v961; // [sp+48h] [bp-3Ch]
  int v962; // [sp+48h] [bp-3Ch]
  int v963; // [sp+48h] [bp-3Ch]
  int v964; // [sp+48h] [bp-3Ch]
  int v965; // [sp+48h] [bp-3Ch]
  int v966; // [sp+48h] [bp-3Ch]
  int v967; // [sp+48h] [bp-3Ch]
  int v968; // [sp+48h] [bp-3Ch]
  int v969; // [sp+48h] [bp-3Ch]
  int v970; // [sp+48h] [bp-3Ch]
  int v971; // [sp+48h] [bp-3Ch]
  int v972; // [sp+48h] [bp-3Ch]
  int v973; // [sp+48h] [bp-3Ch]
  int v974; // [sp+48h] [bp-3Ch]
  int v975; // [sp+48h] [bp-3Ch]
  int v976; // [sp+48h] [bp-3Ch]
  int v977; // [sp+48h] [bp-3Ch]
  int v978; // [sp+48h] [bp-3Ch]
  int v979; // [sp+48h] [bp-3Ch]
  int v980; // [sp+48h] [bp-3Ch]
  int v981; // [sp+48h] [bp-3Ch]
  int v982; // [sp+4Ch] [bp-38h]
  int v983; // [sp+4Ch] [bp-38h]
  int v984; // [sp+4Ch] [bp-38h]
  int v985; // [sp+4Ch] [bp-38h]
  int v986; // [sp+4Ch] [bp-38h]
  int v987; // [sp+4Ch] [bp-38h]
  int v988; // [sp+4Ch] [bp-38h]
  int v989; // [sp+4Ch] [bp-38h]
  int v990; // [sp+4Ch] [bp-38h]
  int v991; // [sp+4Ch] [bp-38h]
  int v992; // [sp+4Ch] [bp-38h]
  int v993; // [sp+4Ch] [bp-38h]
  int v994; // [sp+4Ch] [bp-38h]
  int v995; // [sp+4Ch] [bp-38h]
  int v996; // [sp+4Ch] [bp-38h]
  int v997; // [sp+4Ch] [bp-38h]
  int v998; // [sp+4Ch] [bp-38h]
  int v999; // [sp+4Ch] [bp-38h]
  int v1000; // [sp+4Ch] [bp-38h]
  int v1001; // [sp+4Ch] [bp-38h]
  int v1002; // [sp+4Ch] [bp-38h]
  int v1003; // [sp+4Ch] [bp-38h]
  int v1004; // [sp+4Ch] [bp-38h]
  int v1005; // [sp+4Ch] [bp-38h]
  int v1006; // [sp+50h] [bp-34h]
  int v1007; // [sp+50h] [bp-34h]
  int v1008; // [sp+50h] [bp-34h]
  int v1009; // [sp+50h] [bp-34h]
  int v1010; // [sp+50h] [bp-34h]
  int v1011; // [sp+50h] [bp-34h]
  int v1012; // [sp+50h] [bp-34h]
  int v1013; // [sp+50h] [bp-34h]
  int v1014; // [sp+50h] [bp-34h]
  int v1015; // [sp+50h] [bp-34h]
  int v1016; // [sp+50h] [bp-34h]
  int v1017; // [sp+50h] [bp-34h]
  int v1018; // [sp+50h] [bp-34h]
  int v1019; // [sp+50h] [bp-34h]
  int v1020; // [sp+50h] [bp-34h]
  int v1021; // [sp+50h] [bp-34h]
  int v1022; // [sp+50h] [bp-34h]
  int v1023; // [sp+50h] [bp-34h]
  int v1024; // [sp+50h] [bp-34h]
  int v1025; // [sp+50h] [bp-34h]
  int v1026; // [sp+50h] [bp-34h]
  int v1027; // [sp+50h] [bp-34h]
  int v1028; // [sp+50h] [bp-34h]
  int v1029; // [sp+50h] [bp-34h]
  int v1030; // [sp+54h] [bp-30h]
  int v1031; // [sp+54h] [bp-30h]
  int v1032; // [sp+54h] [bp-30h]
  int v1033; // [sp+54h] [bp-30h]
  int v1034; // [sp+54h] [bp-30h]
  int v1035; // [sp+54h] [bp-30h]
  int v1036; // [sp+54h] [bp-30h]
  int v1037; // [sp+54h] [bp-30h]
  int v1038; // [sp+54h] [bp-30h]
  int v1039; // [sp+54h] [bp-30h]
  int v1040; // [sp+54h] [bp-30h]
  int v1041; // [sp+54h] [bp-30h]
  int v1042; // [sp+54h] [bp-30h]
  int v1043; // [sp+54h] [bp-30h]
  int v1044; // [sp+54h] [bp-30h]
  int v1045; // [sp+54h] [bp-30h]
  int v1046; // [sp+54h] [bp-30h]
  int v1047; // [sp+54h] [bp-30h]
  int v1048; // [sp+54h] [bp-30h]
  int v1049; // [sp+54h] [bp-30h]
  int v1050; // [sp+54h] [bp-30h]
  int v1051; // [sp+54h] [bp-30h]
  int v1052; // [sp+54h] [bp-30h]
  int v1053; // [sp+54h] [bp-30h]
  int v1054; // [sp+58h] [bp-2Ch]
  int v1055; // [sp+58h] [bp-2Ch]
  int v1056; // [sp+58h] [bp-2Ch]
  int v1057; // [sp+58h] [bp-2Ch]
  int v1058; // [sp+58h] [bp-2Ch]
  int v1059; // [sp+58h] [bp-2Ch]
  int v1060; // [sp+58h] [bp-2Ch]
  int v1061; // [sp+58h] [bp-2Ch]
  int v1062; // [sp+58h] [bp-2Ch]
  int v1063; // [sp+58h] [bp-2Ch]
  int v1064; // [sp+58h] [bp-2Ch]
  int v1065; // [sp+58h] [bp-2Ch]
  int v1066; // [sp+58h] [bp-2Ch]
  int v1067; // [sp+58h] [bp-2Ch]
  int v1068; // [sp+58h] [bp-2Ch]
  int v1069; // [sp+58h] [bp-2Ch]
  int v1070; // [sp+58h] [bp-2Ch]
  int v1071; // [sp+58h] [bp-2Ch]
  int v1072; // [sp+58h] [bp-2Ch]
  int v1073; // [sp+5Ch] [bp-28h]
  int v1074; // [sp+5Ch] [bp-28h]
  int v1075; // [sp+5Ch] [bp-28h]
  int v1076; // [sp+5Ch] [bp-28h]
  int v1077; // [sp+5Ch] [bp-28h]
  int v1078; // [sp+5Ch] [bp-28h]
  int v1079; // [sp+5Ch] [bp-28h]
  int v1080; // [sp+5Ch] [bp-28h]
  int v1081; // [sp+5Ch] [bp-28h]
  int v1082; // [sp+5Ch] [bp-28h]
  int v1083; // [sp+5Ch] [bp-28h]
  int v1084; // [sp+5Ch] [bp-28h]
  int v1085; // [sp+5Ch] [bp-28h]
  int v1086; // [sp+5Ch] [bp-28h]
  int v1087; // [sp+5Ch] [bp-28h]
  int v1088; // [sp+5Ch] [bp-28h]
  int v1089; // [sp+60h] [bp-24h]
  int v1090; // [sp+60h] [bp-24h]
  int v1091; // [sp+60h] [bp-24h]
  int v1092; // [sp+60h] [bp-24h]
  int v1093; // [sp+60h] [bp-24h]
  int v1094; // [sp+60h] [bp-24h]
  int v1095; // [sp+64h] [bp-20h]
  int v1096; // [sp+64h] [bp-20h]
  int v1097; // [sp+64h] [bp-20h]
  int v1098; // [sp+64h] [bp-20h]
  int v1099; // [sp+68h] [bp-1Ch]
  int v1100; // [sp+6Ch] [bp-18h]
  int v1101; // [sp+70h] [bp-14h]
  int v1102; // [sp+74h] [bp-10h]
  _DWORD *v1103; // [sp+78h] [bp-Ch]

  v5 = a1[8];
  *((_BYTE *)a1 + v5) = (128 >> a3) | a2 & -(128 >> a3);
  memset((char *)a1 + v5 + 1, 0, 31 - v5);
  v710 = a1[20];
  v738 = a1[21];
  v477 = 0;
  v767 = a1[22];
  v1030 = a1[18];
  v792 = a1[23];
  v1089 = a1[17];
  v1095 = a1[19];
  v819 = a1[24];
  v571 = a1[38];
  v509 = a1[40];
  v1103 = a1;
  v478 = a1[9] ^ *a1;
  v540 = a1[30];
  v597 = a1[10] ^ a1[1];
  v982 = a1[31];
  v955 = a1[32];
  v628 = a1[13] ^ a1[4];
  v847 = a1[26];
  v7 = a1[39];
  v653 = a1[14] ^ a1[5];
  v899 = a1[27];
  v8 = a1[25];
  v9 = a1[35];
  v927 = a1[29];
  v10 = a1[33];
  v682 = a1[16] ^ a1[7];
  v11 = a1[15] ^ a1[6];
  v12 = a1[36];
  v13 = a1[37];
  v873 = a1[28];
  v14 = a1[34];
  v15 = a1[11] ^ a1[2];
  v16 = a1[12] ^ a1[3];
  v17 = v1089;
  v18 = v1095;
  while ( 1 )
  {
    v19 = v17 + v10;
    v20 = v18 + v9;
    v1006 = v478 + v8;
    v848 = v597 + v847;
    v900 = v15 + v899;
    v21 = v20 ^ __ROR4__(v15, 25);
    v874 = v16 + v873;
    v928 = v628 + v927;
    v541 = v653 + v540;
    v956 = v682 + v955;
    v22 = v1030;
    v983 = v11 + v982;
    v1031 = v1030 + v14;
    v1054 = v738 + v13;
    v23 = v710 + v12;
    v24 = v478 + v8;
    v25 = v767 + v571;
    v26 = v792 + v7;
    v27 = v26 ^ __ROR4__(v11, 25);
    v28 = v819 + v509;
    v510 = v24 ^ __ROR4__(v17, 25);
    v1073 = v19 ^ __ROR4__(v478, 25);
    v29 = v19 + v21;
    v479 = v848 ^ __ROR4__(v22, 25);
    v1090 = v1031 ^ __ROR4__(v597, 25);
    v572 = v900 ^ __ROR4__(v18, 25);
    v30 = __ROR4__(v710, 25);
    v711 = v23 ^ __ROR4__(v16, 25);
    v598 = v874 ^ v30;
    v31 = v928 ^ __ROR4__(v738, 25);
    v32 = v628;
    v629 = v983 ^ __ROR4__(v792, 25);
    v33 = v1054 ^ __ROR4__(v32, 25);
    v34 = v541 ^ __ROR4__(v767, 25);
    v35 = v653;
    v654 = v956 ^ __ROR4__(v819, 25);
    v683 = v28 ^ __ROR4__(v682, 25);
    v36 = v25 ^ __ROR4__(v35, 25);
    v37 = v28 + v36;
    v739 = v900 + v510;
    v793 = v1006 + v572;
    v901 = v20 + v1073;
    v768 = v874 + v479;
    v38 = v848 + v598;
    v875 = v23 + v1090;
    v39 = v1031 + v711;
    v40 = v928;
    v820 = v983 + v31;
    v929 = v26 + v33;
    v41 = v40 + v629;
    v542 = v541 + v654;
    v42 = v25 + v683;
    v43 = v739 ^ __ROR4__(v31, 21);
    v984 = v1054 + v27;
    v44 = v956;
    v957 = v820 ^ __ROR4__(v510, 21);
    v45 = v44 + v34;
    v511 = (v1006 + v572) ^ __ROR4__(v629, 21);
    v630 = v29 ^ __ROR4__(v27, 21);
    v573 = v41 ^ __ROR4__(v572, 21);
    v46 = v901 ^ __ROR4__(v33, 21);
    v1032 = (v1054 + v27) ^ __ROR4__(v21, 21);
    v1007 = v929 ^ __ROR4__(v1073, 21);
    v47 = v768 ^ __ROR4__(v34, 21);
    v48 = v45 ^ __ROR4__(v479, 21);
    v480 = (v848 + v598) ^ __ROR4__(v654, 21);
    v49 = v683;
    v684 = v768 + v43;
    v599 = v542 ^ __ROR4__(v598, 21);
    v1055 = v739 + v47;
    v740 = v45 + v957;
    v50 = v875 ^ __ROR4__(v36, 21);
    v769 = v820 + v48;
    v51 = v38 + v511;
    v655 = v39 ^ __ROR4__(v49, 21);
    v52 = v711;
    v53 = v37 ^ __ROR4__(v1090, 21);
    v712 = v793 + v480;
    v54 = v42 ^ __ROR4__(v52, 21);
    v543 = v542 + v573;
    v794 = v41 + v599;
    v55 = v875 + v46;
    v56 = (v875 + v46) ^ __ROR4__(v43, 25);
    v821 = v901 + v50;
    v57 = v37 + v1007;
    v849 = v929 + v53;
    v58 = v39 + v630;
    v59 = v29 + v655;
    v876 = v42 + v1032;
    v60 = v984;
    v985 = (v901 + v50) ^ __ROR4__(v47, 25);
    v61 = v60 + v54;
    v902 = v684 ^ __ROR4__(v46, 25);
    v62 = v1055;
    v930 = v740 ^ __ROR4__(v1007, 25);
    v1008 = v57 ^ __ROR4__(v957, 25);
    v63 = v1055 ^ __ROR4__(v50, 25);
    v958 = v769 ^ __ROR4__(v53, 25);
    v1056 = v849 ^ __ROR4__(v48, 25);
    v1074 = v51 ^ __ROR4__(v630, 25);
    v512 = v58 ^ __ROR4__(v511, 25);
    v64 = v712 ^ __ROR4__(v655, 25);
    v65 = v1032;
    v631 = v59 ^ __ROR4__(v480, 25);
    v1033 = v58 + v56;
    v481 = v543 ^ __ROR4__(v65, 25);
    v574 = v876 ^ __ROR4__(v573, 25);
    v66 = v794 ^ __ROR4__(v54, 25);
    v600 = v61 ^ __ROR4__(v599, 25);
    v67 = v51 + v902;
    v685 = v684 + v1074;
    v68 = v55 + v512;
    v656 = v712 + v63;
    v69 = v59 + v985;
    v713 = v62 + v64;
    v70 = v543 + v930;
    v822 = v821 + v631;
    v71 = v740 + v481;
    v877 = v876 + v1008;
    v72 = v57 + v574;
    v741 = v769 + v66;
    v73 = v61 + v1056;
    v544 = v794 + v958;
    v74 = v849 + v600;
    v770 = v67 ^ __ROR4__(v930, 21);
    v795 = v70 ^ __ROR4__(v902, 21);
    v482 = v685 ^ __ROR4__(v481, 21);
    v850 = v71 ^ __ROR4__(v1074, 21);
    v903 = v1033 ^ __ROR4__(v1008, 21);
    v75 = v877 ^ __ROR4__(v56, 21);
    v575 = v68 ^ __ROR4__(v574, 21);
    v1009 = v72 ^ __ROR4__(v512, 21);
    v76 = v656 ^ __ROR4__(v958, 21);
    v77 = v67 + v76;
    v78 = v544 ^ __ROR4__(v63, 21);
    v79 = v70 + v78;
    v80 = v713 ^ __ROR4__(v66, 21);
    v513 = v741 ^ __ROR4__(v64, 21);
    v931 = v73 ^ __ROR4__(v985, 21);
    v81 = v69 ^ __ROR4__(v1056, 21);
    v601 = v822 ^ __ROR4__(v600, 21);
    v632 = v74 ^ __ROR4__(v631, 21);
    v657 = v656 + v770;
    v959 = v544 + v795;
    v1075 = v713 + v482;
    v545 = v685 + v80;
    v686 = v741 + v850;
    v714 = v71 + v513;
    v82 = v69 + v903;
    v742 = v73 + v75;
    v83 = v1033 + v81;
    v1034 = (v1033 + v81) ^ __ROR4__(v76, 25);
    v84 = v77 ^ __ROR4__(v81, 25);
    v878 = v877 + v931;
    v85 = v822 + v575;
    v86 = v68 + v601;
    v87 = v86 ^ __ROR4__(v80, 25);
    v88 = v74 + v1009;
    v89 = v83 + v87;
    v823 = v72 + v632;
    v904 = v657 ^ __ROR4__(v903, 25);
    v986 = v82 ^ __ROR4__(v770, 25);
    v1057 = v742 ^ __ROR4__(v795, 25);
    v90 = v959 ^ __ROR4__(v75, 25);
    v771 = v79 ^ __ROR4__(v931, 25);
    v576 = v1075 ^ __ROR4__(v575, 25);
    v91 = v878 ^ __ROR4__(v78, 25);
    v796 = v85 ^ __ROR4__(v482, 25);
    v483 = v545 ^ __ROR4__(v601, 25);
    v602 = v686 ^ __ROR4__(v1009, 25);
    v851 = v88 ^ __ROR4__(v850, 25);
    v633 = v714 ^ __ROR4__(v632, 25);
    v92 = v823 ^ __ROR4__(v513, 25);
    v514 = v1075 + v904;
    v658 = v657 + v576;
    v1010 = v85 + v986;
    v93 = v82 + v796;
    v546 = v545 + v84;
    v94 = v86 + v1034;
    v932 = v77 + v483;
    v95 = v686 + v90;
    v687 = v959 + v602;
    v96 = v88 + v1057;
    v743 = v742 + v851;
    v97 = v79 + v633;
    v98 = v714 + v771;
    v99 = (v714 + v771) ^ __ROR4__(v84, 21);
    v715 = v878 + v92;
    v100 = v89 ^ __ROR4__(v92, 21);
    v101 = v823 + v91;
    v102 = v94 ^ __ROR4__(v91, 21);
    v824 = (v1075 + v904) ^ __ROR4__(v90, 21);
    v879 = v95 ^ __ROR4__(v904, 21);
    v103 = v959 + v602;
    v603 = v658 ^ __ROR4__(v602, 21);
    v905 = v103 ^ __ROR4__(v576, 21);
    v960 = v1010 ^ __ROR4__(v1057, 21);
    v987 = v96 ^ __ROR4__(v986, 21);
    v852 = v93 ^ __ROR4__(v851, 21);
    v797 = v743 ^ __ROR4__(v796, 21);
    v104 = v546 ^ __ROR4__(v771, 21);
    v577 = v932 ^ __ROR4__(v633, 21);
    v484 = v97 ^ __ROR4__(v483, 21);
    v105 = v101 ^ __ROR4__(v1034, 21);
    v106 = v715 ^ __ROR4__(v87, 21);
    v547 = v546 + v824;
    v515 = v514 + v104;
    v772 = v98 + v879;
    v1035 = v95 + v99;
    v107 = v932 + v603;
    v659 = v658 + v577;
    v108 = v97 + v905;
    v109 = v687 + v484;
    v110 = v94 + v960;
    v688 = v1010 + v102;
    v933 = v101 + v987;
    v1011 = v96 + v105;
    v111 = v89 + v852;
    v716 = v715 + v797;
    v112 = v93 + v100;
    v113 = v743 + v106;
    v114 = v109 ^ __ROR4__(v106, 25);
    v744 = v547 ^ __ROR4__(v960, 25);
    v961 = v110 ^ __ROR4__(v824, 25);
    v115 = v515 ^ __ROR4__(v102, 25);
    v116 = v688 ^ __ROR4__(v104, 25);
    v1076 = v772 ^ __ROR4__(v987, 25);
    v880 = v933 ^ __ROR4__(v879, 25);
    v825 = v1035 ^ __ROR4__(v105, 25);
    v117 = (v96 + v105) ^ __ROR4__(v99, 25);
    v1058 = v107 ^ __ROR4__(v852, 25);
    v853 = v111 ^ __ROR4__(v603, 25);
    v604 = v659 ^ __ROR4__(v100, 25);
    v634 = v112 ^ __ROR4__(v577, 25);
    v118 = v112 + v116;
    v578 = v108 ^ __ROR4__(v797, 25);
    v798 = v716 ^ __ROR4__(v905, 25);
    v119 = v107 + v744;
    v120 = v484;
    v485 = v547 + v1058;
    v906 = v111 + v961;
    v121 = v113 ^ __ROR4__(v120, 25);
    v122 = v113 + v117;
    v123 = v118 ^ __ROR4__(v117, 21);
    v124 = v122 ^ __ROR4__(v116, 21);
    v988 = v110 + v853;
    v1091 = v659 + v115;
    v516 = v515 + v604;
    v689 = v688 + v634;
    v548 = v772 + v578;
    v125 = v108 + v1076;
    v717 = v716 + v880;
    v126 = v933;
    v934 = v119 ^ __ROR4__(v1076, 21);
    v773 = v126 + v798;
    v127 = v109 + v825;
    v128 = v127 ^ __ROR4__(v115, 21);
    v660 = v1035 + v114;
    v129 = v1011 + v121;
    v1012 = v125 ^ __ROR4__(v744, 21);
    v579 = v485 ^ __ROR4__(v578, 21);
    v1036 = v548 ^ __ROR4__(v1058, 21);
    v881 = (v111 + v961) ^ __ROR4__(v880, 21);
    v1059 = v717 ^ __ROR4__(v961, 21);
    v962 = (v110 + v853) ^ __ROR4__(v798, 21);
    v854 = v773 ^ __ROR4__(v853, 21);
    v130 = v1091 ^ __ROR4__(v825, 21);
    v131 = v119 + v130;
    v745 = v516 ^ __ROR4__(v114, 21);
    v605 = v660 ^ __ROR4__(v604, 21);
    v132 = v689 ^ __ROR4__(v121, 21);
    v133 = v129 ^ __ROR4__(v634, 21);
    v635 = v1091 + v934;
    v826 = v127 + v1012;
    v1092 = v516 + v579;
    v1077 = v125 + v128;
    v134 = v485 + v745;
    v486 = v660 + v1036;
    v517 = v548 + v605;
    v135 = v118 + v881;
    v136 = v129 + v854;
    v549 = v122 + v1059;
    v661 = v717 + v124;
    v137 = v689;
    v690 = v773 + v133;
    v718 = v635 ^ __ROR4__(v881, 25);
    v138 = v906 + v123;
    v774 = v131 ^ __ROR4__(v123, 25);
    v907 = v135 ^ __ROR4__(v934, 25);
    v139 = v138 ^ __ROR4__(v130, 25);
    v882 = v826 ^ __ROR4__(v1059, 25);
    v140 = v137 + v962;
    v141 = v988;
    v989 = v549 ^ __ROR4__(v1012, 25);
    v142 = v141 + v132;
    v143 = (v125 + v128) ^ __ROR4__(v124, 25);
    v144 = v661 ^ __ROR4__(v128, 25);
    v799 = v1092 ^ __ROR4__(v962, 25);
    v145 = v579;
    v580 = v134 ^ __ROR4__(v132, 25);
    v935 = v140 ^ __ROR4__(v145, 25);
    v963 = v142 ^ __ROR4__(v745, 25);
    v146 = v142 + v139;
    v746 = v486 ^ __ROR4__(v854, 25);
    v855 = v136 ^ __ROR4__(v1036, 25);
    v147 = v517 ^ __ROR4__(v133, 25);
    v148 = v690 ^ __ROR4__(v605, 25);
    v606 = v1092 + v718;
    v636 = v635 + v799;
    v1013 = v140 + v907;
    v149 = v134 + v774;
    v150 = v135 + v935;
    v151 = v131 + v580;
    v152 = v138 + v963;
    v487 = v486 + v882;
    v153 = v826 + v746;
    v827 = v136 + v989;
    v1037 = v549 + v855;
    v154 = v517 + v143;
    v155 = v149 ^ __ROR4__(v143, 21);
    v518 = v154;
    v550 = v690 + v144;
    v662 = v661 + v148;
    v156 = v146 ^ __ROR4__(v144, 21);
    v157 = v152 ^ __ROR4__(v148, 21);
    v691 = (v1092 + v718) ^ __ROR4__(v882, 21);
    v158 = v1077 + v147;
    v883 = v487 ^ __ROR4__(v718, 21);
    v719 = v636 ^ __ROR4__(v746, 21);
    v800 = v153 ^ __ROR4__(v799, 21);
    v990 = v1013 ^ __ROR4__(v989, 21);
    v908 = v827 ^ __ROR4__(v907, 21);
    v856 = v150 ^ __ROR4__(v855, 21);
    v159 = v150 + v157;
    v747 = v151 ^ __ROR4__(v147, 21);
    v581 = (v1077 + v147) ^ __ROR4__(v580, 21);
    v936 = v1037 ^ __ROR4__(v935, 21);
    v160 = v550 ^ __ROR4__(v139, 21);
    v161 = v518 ^ __ROR4__(v774, 21);
    v162 = v662 ^ __ROR4__(v963, 21);
    v775 = v149 + v691;
    v607 = v606 + v155;
    v519 = v518 + v883;
    v488 = v487 + v161;
    v163 = v151 + v719;
    v164 = v636 + v747;
    v165 = (v636 + v747) ^ __ROR4__(v157, 25);
    v166 = v158 + v800;
    v637 = v153 + v581;
    v167 = v146 + v990;
    v964 = v1013 + v156;
    v551 = v550 + v908;
    v828 = v827 + v160;
    v168 = v152 + v856;
    v663 = v662 + v936;
    v1014 = v1037 + v162;
    v991 = v775 ^ __ROR4__(v990, 25);
    v169 = v691;
    v692 = v165;
    v1038 = v167 ^ __ROR4__(v169, 25);
    v170 = v964 ^ __ROR4__(v155, 25);
    v171 = v607 ^ __ROR4__(v156, 25);
    v172 = v164 + v171;
    v1078 = v519 ^ __ROR4__(v908, 25);
    v748 = v159 ^ __ROR4__(v747, 25);
    v173 = v159 + v170;
    v909 = v551 ^ __ROR4__(v883, 25);
    v174 = v828 ^ __ROR4__(v161, 25);
    v884 = v488 ^ __ROR4__(v160, 25);
    v175 = v163 ^ __ROR4__(v856, 25);
    v857 = v168 ^ __ROR4__(v719, 25);
    v720 = v166 ^ __ROR4__(v936, 25);
    v801 = v663 ^ __ROR4__(v800, 25);
    v176 = v163 + v991;
    v177 = v581;
    v178 = (v153 + v581) ^ __ROR4__(v162, 25);
    v582 = v775 + v175;
    v179 = v1014 ^ __ROR4__(v177, 25);
    v180 = v167 + v857;
    v776 = v168 + v1038;
    v608 = v607 + v692;
    v937 = v964 + v748;
    v181 = v166 + v1078;
    v520 = v519 + v720;
    v664 = v663 + v909;
    v965 = v551 + v801;
    v489 = v488 + v178;
    v182 = v637 + v884;
    v183 = (v637 + v884) ^ __ROR4__(v171, 21);
    v638 = v176 ^ __ROR4__(v1078, 21);
    v552 = v1014 + v174;
    v184 = v828;
    v185 = v173 ^ __ROR4__(v174, 21);
    v829 = v181 ^ __ROR4__(v991, 21);
    v186 = v184 + v179;
    v721 = v582 ^ __ROR4__(v720, 21);
    v992 = v520 ^ __ROR4__(v175, 21);
    v910 = (v168 + v1038) ^ __ROR4__(v909, 21);
    v1039 = v664 ^ __ROR4__(v1038, 21);
    v1015 = v180 ^ __ROR4__(v801, 21);
    v1060 = v965 ^ __ROR4__(v857, 21);
    v802 = v608 ^ __ROR4__(v178, 21);
    v187 = v172 ^ __ROR4__(v884, 21);
    v188 = v176 + v187;
    v693 = v489 ^ __ROR4__(v692, 21);
    v189 = v552 ^ __ROR4__(v170, 21);
    v190 = v937 ^ __ROR4__(v179, 21);
    v191 = v748;
    v192 = v180 + v190;
    v749 = v172 + v638;
    v193 = v186 ^ __ROR4__(v191, 21);
    v194 = v182 + v829;
    v885 = v181 + v183;
    v195 = v582 + v802;
    v1079 = v608 + v721;
    v196 = (v582 + v802) ^ __ROR4__(v190, 25);
    v490 = v489 + v992;
    v197 = v173 + v910;
    v521 = v520 + v693;
    v583 = v776 + v185;
    v198 = v188 ^ __ROR4__(v185, 25);
    v553 = v552 + v1039;
    v609 = v664 + v189;
    v199 = v937 + v1015;
    v200 = v186 + v1060;
    v665 = v965 + v193;
    v777 = v749 ^ __ROR4__(v910, 25);
    v201 = v583 ^ __ROR4__(v187, 25);
    v938 = v197 ^ __ROR4__(v638, 25);
    v911 = v194 ^ __ROR4__(v1039, 25);
    v1040 = v553 ^ __ROR4__(v829, 25);
    v202 = (v181 + v183) ^ __ROR4__(v189, 25);
    v203 = v609 ^ __ROR4__(v183, 25);
    v830 = v1079 ^ __ROR4__(v1015, 25);
    v204 = v721;
    v722 = v196;
    v858 = v199 ^ __ROR4__(v204, 25);
    v966 = v192 ^ __ROR4__(v802, 25);
    v205 = v192 + v201;
    v803 = v490 ^ __ROR4__(v1060, 25);
    v993 = v200 ^ __ROR4__(v992, 25);
    v206 = v521 ^ __ROR4__(v193, 25);
    v207 = v665 ^ __ROR4__(v693, 25);
    v694 = v1079 + v777;
    v750 = v749 + v830;
    v1016 = v199 + v938;
    v208 = v195 + v198;
    v209 = v197 + v858;
    v210 = v188 + v722;
    v211 = v583 + v966;
    v491 = v490 + v911;
    v212 = v194 + v803;
    v1061 = v553 + v993;
    v213 = v885 + v206;
    v522 = v521 + v202;
    v214 = v208 ^ __ROR4__(v202, 21);
    v554 = v665 + v203;
    v610 = v609 + v207;
    v215 = v205 ^ __ROR4__(v203, 21);
    v216 = (v583 + v966) ^ __ROR4__(v207, 21);
    v666 = (v1079 + v777) ^ __ROR4__(v911, 21);
    v886 = v491 ^ __ROR4__(v777, 21);
    v778 = v750 ^ __ROR4__(v803, 21);
    v804 = v212 ^ __ROR4__(v830, 21);
    v831 = v1016 ^ __ROR4__(v1040, 21);
    v939 = (v200 + v1040) ^ __ROR4__(v938, 21);
    v912 = v209 ^ __ROR4__(v993, 21);
    v217 = v209 + v216;
    v639 = v210 ^ __ROR4__(v206, 21);
    v859 = v1061 ^ __ROR4__(v858, 21);
    v723 = v213 ^ __ROR4__(v722, 21);
    v218 = v522 ^ __ROR4__(v198, 21);
    v219 = v554 ^ __ROR4__(v201, 21);
    v220 = v610 ^ __ROR4__(v966, 21);
    v967 = v208 + v666;
    v695 = v694 + v214;
    v523 = v522 + v886;
    v492 = v491 + v218;
    v221 = v210 + v778;
    v222 = v750 + v639;
    v223 = (v750 + v639) ^ __ROR4__(v216, 25);
    v224 = v213 + v804;
    v751 = v212 + v723;
    v225 = v205 + v831;
    v994 = v1016 + v215;
    v555 = v554 + v939;
    v584 = v200 + v1040 + v219;
    v226 = v211 + v912;
    v611 = v610 + v859;
    v1017 = v1061 + v220;
    v832 = v967 ^ __ROR4__(v831, 25);
    v1041 = v225 ^ __ROR4__(v666, 25);
    v227 = v994 ^ __ROR4__(v214, 25);
    v228 = v695 ^ __ROR4__(v215, 25);
    v229 = v222 + v228;
    v1080 = v523 ^ __ROR4__(v939, 25);
    v940 = v555 ^ __ROR4__(v886, 25);
    v887 = v492 ^ __ROR4__(v219, 25);
    v230 = v584 ^ __ROR4__(v218, 25);
    v667 = v223;
    v231 = v221 ^ __ROR4__(v912, 25);
    v779 = v226 ^ __ROR4__(v778, 25);
    v232 = v217 ^ __ROR4__(v639, 25);
    v233 = v217 + v227;
    v913 = v232;
    v640 = v224 ^ __ROR4__(v859, 25);
    v805 = v611 ^ __ROR4__(v804, 25);
    v234 = v221 + v832;
    v235 = (v212 + v723) ^ __ROR4__(v220, 25);
    v236 = v723;
    v724 = v967 + v231;
    v237 = v1017 ^ __ROR4__(v236, 25);
    v238 = v225 + v779;
    v860 = v226 + v1041;
    v696 = v695 + v667;
    v968 = v994 + v913;
    v524 = v523 + v640;
    v239 = v224 + v1080;
    v612 = v611 + v940;
    v995 = v555 + v805;
    v240 = v751 + v887;
    v493 = v492 + v235;
    v241 = (v751 + v887) ^ __ROR4__(v228, 21);
    v556 = v1017 + v230;
    v242 = v584;
    v243 = v233 ^ __ROR4__(v230, 21);
    v585 = v234 ^ __ROR4__(v1080, 21);
    v244 = v242 + v237;
    v833 = v239 ^ __ROR4__(v832, 21);
    v641 = v724 ^ __ROR4__(v640, 21);
    v1018 = v524 ^ __ROR4__(v231, 21);
    v941 = (v226 + v1041) ^ __ROR4__(v940, 21);
    v1042 = v612 ^ __ROR4__(v1041, 21);
    v806 = v238 ^ __ROR4__(v805, 21);
    v1062 = v995 ^ __ROR4__(v779, 21);
    v752 = v696 ^ __ROR4__(v235, 21);
    v245 = v229 ^ __ROR4__(v887, 21);
    v246 = v234 + v245;
    v668 = v493 ^ __ROR4__(v667, 21);
    v247 = v556 ^ __ROR4__(v227, 21);
    v888 = v229 + v585;
    v248 = v240 + v833;
    v249 = v968 ^ __ROR4__(v237, 21);
    v250 = v913;
    v914 = v239 + v241;
    v251 = v238 + v249;
    v252 = v244 ^ __ROR4__(v250, 21);
    v253 = v724 + v752;
    v1081 = v696 + v641;
    v254 = (v724 + v752) ^ __ROR4__(v249, 25);
    v494 = v493 + v1018;
    v255 = v233 + v941;
    v525 = v524 + v668;
    v697 = v860 + v243;
    v256 = v246 ^ __ROR4__(v243, 25);
    v557 = v556 + v1042;
    v613 = v612 + v247;
    v257 = v968 + v806;
    v258 = v244 + v1062;
    v725 = v995 + v252;
    v861 = v888 ^ __ROR4__(v941, 25);
    v969 = v255 ^ __ROR4__(v585, 25);
    v259 = v697 ^ __ROR4__(v245, 25);
    v942 = v248 ^ __ROR4__(v1042, 25);
    v996 = v557 ^ __ROR4__(v833, 25);
    v260 = (v239 + v241) ^ __ROR4__(v247, 25);
    v261 = v613 ^ __ROR4__(v241, 25);
    v780 = v1081 ^ __ROR4__(v806, 25);
    v262 = v641;
    v642 = v254;
    v807 = v257 ^ __ROR4__(v262, 25);
    v834 = v251 ^ __ROR4__(v752, 25);
    v263 = v251 + v259;
    v753 = v494 ^ __ROR4__(v1062, 25);
    v1019 = v258 ^ __ROR4__(v1018, 25);
    v264 = v525 ^ __ROR4__(v252, 25);
    v265 = v725 ^ __ROR4__(v668, 25);
    v669 = v1081 + v861;
    v889 = v888 + v780;
    v1043 = v257 + v969;
    v266 = v253 + v256;
    v267 = v255 + v807;
    v268 = v246 + v642;
    v269 = v697 + v834;
    v495 = v494 + v942;
    v270 = v248 + v753;
    v698 = v258 + v996;
    v1063 = v557 + v1019;
    v271 = v914 + v264;
    v526 = v525 + v260;
    v272 = v266 ^ __ROR4__(v260, 21);
    v558 = v725 + v261;
    v614 = v613 + v265;
    v273 = v263 ^ __ROR4__(v261, 21);
    v274 = v269 ^ __ROR4__(v265, 21);
    v726 = (v1081 + v861) ^ __ROR4__(v942, 21);
    v862 = v495 ^ __ROR4__(v861, 21);
    v754 = v889 ^ __ROR4__(v753, 21);
    v781 = v270 ^ __ROR4__(v780, 21);
    v915 = v1043 ^ __ROR4__(v996, 21);
    v970 = (v258 + v996) ^ __ROR4__(v969, 21);
    v943 = v267 ^ __ROR4__(v1019, 21);
    v275 = v267 + v274;
    v586 = v268 ^ __ROR4__(v264, 21);
    v808 = v1063 ^ __ROR4__(v807, 21);
    v643 = v271 ^ __ROR4__(v642, 21);
    v276 = v526 ^ __ROR4__(v256, 21);
    v277 = v558 ^ __ROR4__(v259, 21);
    v278 = v614 ^ __ROR4__(v834, 21);
    v835 = v266 + v726;
    v670 = v669 + v272;
    v527 = v526 + v862;
    v496 = v495 + v276;
    v279 = v268 + v754;
    v280 = v889 + v586;
    v281 = (v889 + v586) ^ __ROR4__(v274, 25);
    v282 = v271 + v781;
    v890 = v270 + v643;
    v283 = v263 + v915;
    v997 = v1043 + v273;
    v559 = v558 + v970;
    v699 = v698 + v277;
    v284 = v269 + v943;
    v615 = v614 + v808;
    v1020 = v1063 + v278;
    v916 = v835 ^ __ROR4__(v915, 25);
    v1044 = v283 ^ __ROR4__(v726, 25);
    v285 = v670 ^ __ROR4__(v273, 25);
    v286 = v997 ^ __ROR4__(v272, 25);
    v727 = v281;
    v287 = v280 + v285;
    v1082 = v527 ^ __ROR4__(v970, 25);
    v288 = v275 ^ __ROR4__(v586, 25);
    v289 = v275 + v286;
    v971 = v559 ^ __ROR4__(v862, 25);
    v290 = v699 ^ __ROR4__(v276, 25);
    v863 = v496 ^ __ROR4__(v277, 25);
    v291 = __ROR4__(v943, 25);
    v944 = v288;
    v755 = v284 ^ __ROR4__(v754, 25);
    v1064 = v279 ^ v291;
    v587 = v282 ^ __ROR4__(v808, 25);
    v782 = v615 ^ __ROR4__(v781, 25);
    v292 = v279 + v916;
    v293 = v643;
    v294 = (v270 + v643) ^ __ROR4__(v278, 25);
    v644 = v835 + v1064;
    v295 = v1020 ^ __ROR4__(v293, 25);
    v809 = v284 + v1044;
    v296 = v283 + v755;
    v671 = v670 + v727;
    v836 = v997 + v944;
    v297 = v282 + v1082;
    v528 = v527 + v587;
    v616 = v615 + v971;
    v998 = v559 + v782;
    v298 = v890 + v863;
    v497 = v496 + v294;
    v299 = (v890 + v863) ^ __ROR4__(v285, 21);
    v560 = v1020 + v290;
    v300 = v699;
    v301 = v289 ^ __ROR4__(v290, 21);
    v700 = v292 ^ __ROR4__(v1082, 21);
    v302 = v300 + v295;
    v891 = v297 ^ __ROR4__(v916, 21);
    v588 = v644 ^ __ROR4__(v587, 21);
    v917 = v528 ^ __ROR4__(v1064, 21);
    v972 = (v284 + v1044) ^ __ROR4__(v971, 21);
    v1045 = v616 ^ __ROR4__(v1044, 21);
    v1021 = v296 ^ __ROR4__(v782, 21);
    v1065 = v998 ^ __ROR4__(v755, 21);
    v756 = v671 ^ __ROR4__(v294, 21);
    v303 = v287 ^ __ROR4__(v863, 21);
    v304 = v292 + v303;
    v728 = v497 ^ __ROR4__(v727, 21);
    v305 = v560 ^ __ROR4__(v286, 21);
    v864 = v287 + v700;
    v306 = v298 + v891;
    v307 = v836 ^ __ROR4__(v295, 21);
    v308 = v944;
    v945 = v297 + v299;
    v309 = v296 + v307;
    v310 = v302 ^ __ROR4__(v308, 21);
    v311 = v644 + v756;
    v1083 = v671 + v588;
    v312 = (v644 + v756) ^ __ROR4__(v307, 25);
    v498 = v497 + v917;
    v313 = v289 + v972;
    v529 = v528 + v728;
    v645 = v809 + v301;
    v314 = v304 ^ __ROR4__(v301, 25);
    v561 = v560 + v1045;
    v617 = v616 + v305;
    v315 = v836 + v1021;
    v316 = v302 + v1065;
    v672 = v998 + v310;
    v810 = v864 ^ __ROR4__(v972, 25);
    v973 = v313 ^ __ROR4__(v700, 25);
    v317 = v645 ^ __ROR4__(v303, 25);
    v837 = v306 ^ __ROR4__(v1045, 25);
    v1046 = v561 ^ __ROR4__(v891, 25);
    v318 = (v297 + v299) ^ __ROR4__(v305, 25);
    v319 = v617 ^ __ROR4__(v299, 25);
    v783 = v1083 ^ __ROR4__(v1021, 25);
    v320 = v588;
    v589 = v312;
    v892 = v315 ^ __ROR4__(v320, 25);
    v999 = v309 ^ __ROR4__(v756, 25);
    v321 = v309 + v317;
    v757 = v498 ^ __ROR4__(v1065, 25);
    v918 = v316 ^ __ROR4__(v917, 25);
    v322 = v529 ^ __ROR4__(v310, 25);
    v323 = v672 ^ __ROR4__(v728, 25);
    v729 = v1083 + v810;
    v865 = v864 + v783;
    v1022 = v315 + v973;
    v324 = v311 + v314;
    v325 = v313 + v892;
    v326 = v304 + v589;
    v327 = v645 + v999;
    v499 = v498 + v837;
    v328 = v306 + v757;
    v1066 = v561 + v918;
    v329 = v945 + v322;
    v530 = v529 + v318;
    v330 = v324 ^ __ROR4__(v318, 21);
    v562 = v672 + v319;
    v618 = v617 + v323;
    v331 = v321 ^ __ROR4__(v319, 21);
    v332 = (v645 + v999) ^ __ROR4__(v323, 21);
    v673 = (v1083 + v810) ^ __ROR4__(v837, 21);
    v811 = v499 ^ __ROR4__(v810, 21);
    v758 = v865 ^ __ROR4__(v757, 21);
    v784 = v328 ^ __ROR4__(v783, 21);
    v838 = v1022 ^ __ROR4__(v1046, 21);
    v946 = (v316 + v1046) ^ __ROR4__(v973, 21);
    v919 = v325 ^ __ROR4__(v918, 21);
    v333 = v325 + v332;
    v701 = v326 ^ __ROR4__(v322, 21);
    v893 = v1066 ^ __ROR4__(v892, 21);
    v590 = v329 ^ __ROR4__(v589, 21);
    v334 = v530 ^ __ROR4__(v314, 21);
    v335 = v562 ^ __ROR4__(v317, 21);
    v336 = v618 ^ __ROR4__(v999, 21);
    v974 = v324 + v673;
    v730 = v729 + v330;
    v531 = v530 + v811;
    v500 = v499 + v334;
    v337 = v326 + v758;
    v338 = v865 + v701;
    v339 = (v865 + v701) ^ __ROR4__(v332, 25);
    v340 = v329 + v784;
    v866 = v328 + v590;
    v341 = v321 + v838;
    v1000 = v1022 + v331;
    v563 = v562 + v946;
    v646 = v316 + v1046 + v335;
    v342 = v327 + v919;
    v619 = v618 + v893;
    v1023 = v1066 + v336;
    v839 = v974 ^ __ROR4__(v838, 25);
    v343 = v673;
    v674 = v339;
    v1047 = v341 ^ __ROR4__(v343, 25);
    v344 = v1000 ^ __ROR4__(v330, 25);
    v345 = v730 ^ __ROR4__(v331, 25);
    v346 = v338 + v345;
    v1084 = v531 ^ __ROR4__(v946, 25);
    v347 = v333 ^ __ROR4__(v701, 25);
    v348 = v333 + v344;
    v947 = v563 ^ __ROR4__(v811, 25);
    v349 = v646 ^ __ROR4__(v334, 25);
    v812 = v500 ^ __ROR4__(v335, 25);
    v350 = __ROR4__(v919, 25);
    v920 = v347;
    v759 = v342 ^ __ROR4__(v758, 25);
    v702 = v340 ^ __ROR4__(v893, 25);
    v1067 = v337 ^ v350;
    v785 = v619 ^ __ROR4__(v784, 25);
    v351 = v337 + v839;
    v352 = v590;
    v353 = (v328 + v590) ^ __ROR4__(v336, 25);
    v591 = v974 + v1067;
    v354 = v1023 ^ __ROR4__(v352, 25);
    v355 = v341 + v759;
    v894 = v342 + v1047;
    v731 = v730 + v674;
    v975 = v1000 + v920;
    v356 = v340 + v1084;
    v532 = v531 + v702;
    v620 = v619 + v947;
    v1001 = v563 + v785;
    v501 = v500 + v353;
    v357 = v866 + v812;
    v358 = (v866 + v812) ^ __ROR4__(v345, 21);
    v564 = v1023 + v349;
    v359 = v646;
    v360 = v348 ^ __ROR4__(v349, 21);
    v647 = v351 ^ __ROR4__(v1084, 21);
    v361 = v359 + v354;
    v840 = v356 ^ __ROR4__(v839, 21);
    v703 = v591 ^ __ROR4__(v702, 21);
    v867 = v532 ^ __ROR4__(v1067, 21);
    v948 = (v342 + v1047) ^ __ROR4__(v947, 21);
    v1048 = v620 ^ __ROR4__(v1047, 21);
    v1024 = v355 ^ __ROR4__(v785, 21);
    v1068 = v1001 ^ __ROR4__(v759, 21);
    v760 = v731 ^ __ROR4__(v353, 21);
    v362 = v346 ^ __ROR4__(v812, 21);
    v363 = v351 + v362;
    v675 = v501 ^ __ROR4__(v674, 21);
    v364 = v564 ^ __ROR4__(v344, 21);
    v365 = v975 ^ __ROR4__(v354, 21);
    v366 = v355 + v365;
    v813 = v346 + v647;
    v367 = v361 ^ __ROR4__(v920, 21);
    v368 = v357 + v840;
    v921 = v356 + v358;
    v369 = v591 + v760;
    v1085 = v731 + v703;
    v370 = (v591 + v760) ^ __ROR4__(v365, 25);
    v502 = v501 + v867;
    v371 = v348 + v948;
    v533 = v532 + v675;
    v592 = v894 + v360;
    v372 = v363 ^ __ROR4__(v360, 25);
    v565 = v564 + v1048;
    v621 = v620 + v364;
    v373 = v975 + v1024;
    v374 = v361 + v1068;
    v732 = v1001 + v367;
    v895 = v813 ^ __ROR4__(v948, 25);
    v375 = v592 ^ __ROR4__(v362, 25);
    v976 = v371 ^ __ROR4__(v647, 25);
    v949 = v368 ^ __ROR4__(v1048, 25);
    v1049 = v565 ^ __ROR4__(v840, 25);
    v376 = (v356 + v358) ^ __ROR4__(v364, 25);
    v377 = v621 ^ __ROR4__(v358, 25);
    v786 = v1085 ^ __ROR4__(v1024, 25);
    v378 = v703;
    v704 = v370;
    v841 = v373 ^ __ROR4__(v378, 25);
    v1002 = v366 ^ __ROR4__(v760, 25);
    v379 = v366 + v375;
    v761 = v502 ^ __ROR4__(v1068, 25);
    v868 = v374 ^ __ROR4__(v867, 25);
    v380 = v533 ^ __ROR4__(v367, 25);
    v381 = v732 ^ __ROR4__(v675, 25);
    v676 = v1085 + v895;
    v814 = v813 + v786;
    v1025 = v373 + v976;
    v382 = v369 + v372;
    v383 = v371 + v841;
    v384 = v363 + v704;
    v385 = v592 + v1002;
    v503 = v502 + v949;
    v386 = v368 + v761;
    v1069 = v565 + v868;
    v387 = v921 + v380;
    v534 = v533 + v376;
    v388 = v382 ^ __ROR4__(v376, 21);
    v566 = v732 + v377;
    v622 = v621 + v381;
    v389 = v379 ^ __ROR4__(v377, 21);
    v390 = (v592 + v1002) ^ __ROR4__(v381, 21);
    v733 = (v1085 + v895) ^ __ROR4__(v949, 21);
    v896 = v503 ^ __ROR4__(v895, 21);
    v762 = v814 ^ __ROR4__(v761, 21);
    v787 = v386 ^ __ROR4__(v786, 21);
    v922 = v1025 ^ __ROR4__(v1049, 21);
    v950 = (v374 + v1049) ^ __ROR4__(v976, 21);
    v869 = v383 ^ __ROR4__(v868, 21);
    v391 = v383 + v390;
    v648 = v384 ^ __ROR4__(v380, 21);
    v842 = v1069 ^ __ROR4__(v841, 21);
    v705 = v387 ^ __ROR4__(v704, 21);
    v392 = v534 ^ __ROR4__(v372, 21);
    v393 = v566 ^ __ROR4__(v375, 21);
    v394 = v622 ^ __ROR4__(v1002, 21);
    v977 = v382 + v733;
    v677 = v676 + v388;
    v535 = v534 + v896;
    v504 = v503 + v392;
    v395 = v384 + v762;
    v396 = v814 + v648;
    v397 = (v814 + v648) ^ __ROR4__(v390, 25);
    v398 = v387 + v787;
    v815 = v386 + v705;
    v399 = v379 + v922;
    v1003 = v1025 + v389;
    v567 = v566 + v950;
    v593 = v374 + v1049 + v393;
    v400 = v385 + v869;
    v623 = v622 + v842;
    v1026 = v1069 + v394;
    v923 = v977 ^ __ROR4__(v922, 25);
    v1050 = v399 ^ __ROR4__(v733, 25);
    v401 = v1003 ^ __ROR4__(v388, 25);
    v402 = v677 ^ __ROR4__(v389, 25);
    v403 = v396 + v402;
    v1086 = v535 ^ __ROR4__(v950, 25);
    v951 = v567 ^ __ROR4__(v896, 25);
    v897 = v504 ^ __ROR4__(v393, 25);
    v404 = v593 ^ __ROR4__(v392, 25);
    v734 = v397;
    v405 = v395 ^ __ROR4__(v869, 25);
    v763 = v400 ^ __ROR4__(v762, 25);
    v406 = v391 ^ __ROR4__(v648, 25);
    v407 = v391 + v401;
    v870 = v406;
    v649 = v398 ^ __ROR4__(v842, 25);
    v788 = v623 ^ __ROR4__(v787, 25);
    v408 = v395 + v923;
    v409 = (v386 + v705) ^ __ROR4__(v394, 25);
    v410 = v705;
    v706 = v977 + v405;
    v411 = v1026 ^ __ROR4__(v410, 25);
    v412 = v399 + v763;
    v843 = v400 + v1050;
    v678 = v677 + v734;
    v978 = v1003 + v870;
    v536 = v535 + v649;
    v413 = v398 + v1086;
    v624 = v623 + v951;
    v1004 = v567 + v788;
    v414 = v815 + v897;
    v505 = v504 + v409;
    v415 = (v815 + v897) ^ __ROR4__(v402, 21);
    v568 = v1026 + v404;
    v416 = v593;
    v594 = v408 ^ __ROR4__(v1086, 21);
    v417 = v416 + v411;
    v816 = v413 ^ __ROR4__(v923, 21);
    v650 = v706 ^ __ROR4__(v649, 21);
    v924 = v536 ^ __ROR4__(v405, 21);
    v952 = (v400 + v1050) ^ __ROR4__(v951, 21);
    v1051 = v624 ^ __ROR4__(v1050, 21);
    v1027 = v412 ^ __ROR4__(v788, 21);
    v1070 = v1004 ^ __ROR4__(v763, 21);
    v789 = v415;
    v418 = v407 ^ __ROR4__(v404, 21);
    v419 = v568 ^ __ROR4__(v401, 21);
    v764 = v678 ^ __ROR4__(v409, 21);
    v420 = v403 ^ __ROR4__(v897, 21);
    v735 = v505 ^ __ROR4__(v734, 21);
    v1096 = v413 + v789;
    v421 = v978 ^ __ROR4__(v411, 21);
    v422 = v870;
    v423 = v412 + v421;
    v871 = v403 + v594;
    v424 = v417 ^ __ROR4__(v422, 21);
    v425 = v678 + v650;
    v1087 = v408 + v420;
    v426 = v706 + v764;
    v427 = (v706 + v764) ^ __ROR4__(v421, 25);
    v1093 = v414 + v816;
    v506 = v505 + v924;
    v428 = v407 + v952;
    v429 = v843 + v418;
    v537 = v536 + v735;
    v430 = (v843 + v418) ^ __ROR4__(v420, 25);
    v431 = v568 + v1051;
    v569 = v624 + v419;
    v432 = v978 + v1027;
    v979 = v431;
    v433 = v417 + v1070;
    v625 = v1004 + v424;
    v679 = v871 ^ __ROR4__(v952, 25);
    v844 = v428 ^ __ROR4__(v594, 25);
    v898 = v430;
    v595 = v1087 ^ __ROR4__(v418, 25);
    v707 = v1093 ^ __ROR4__(v1051, 25);
    v817 = v431 ^ __ROR4__(v816, 25);
    v434 = v1096 ^ __ROR4__(v419, 25);
    v435 = v569 ^ __ROR4__(v789, 25);
    v436 = v425 ^ __ROR4__(v1027, 25);
    v437 = v650;
    v651 = v427;
    v438 = v432 ^ __ROR4__(v437, 25);
    v439 = v428 + v438;
    v790 = v423 ^ __ROR4__(v764, 25);
    v765 = v506 ^ __ROR4__(v1070, 25);
    v440 = v1004 + v424;
    v925 = v433 ^ __ROR4__(v924, 25);
    v441 = v537 ^ __ROR4__(v424, 25);
    v442 = v440 ^ __ROR4__(v735, 25);
    v736 = v425 + v679;
    v872 = v871 + v436;
    v443 = v432 + v844;
    v444 = v423 + v898;
    v445 = v426 + v595;
    v446 = v1087 + v651;
    v447 = v429 + v790;
    v507 = v506 + v707;
    v953 = v1093 + v765;
    v448 = v433 + v817;
    v1005 = v979 + v925;
    v538 = v537 + v434;
    v980 = v1096 + v441;
    v626 = v625 + v435;
    v449 = v444 ^ __ROR4__(v435, 21);
    v570 = v569 + v442;
    v450 = v447 ^ __ROR4__(v442, 21);
    v708 = v736 ^ __ROR4__(v707, 21);
    v1028 = v507 ^ __ROR4__(v679, 21);
    v680 = v872 ^ __ROR4__(v765, 21);
    v1052 = (v1093 + v765) ^ __ROR4__(v436, 21);
    v1071 = v443 ^ __ROR4__(v817, 21);
    v845 = (v433 + v817) ^ __ROR4__(v844, 21);
    v451 = v443 + v449;
    v452 = v595;
    v453 = v925;
    v926 = v1005 ^ __ROR4__(v438, 21);
    v454 = v445 ^ __ROR4__(v434, 21);
    v596 = (v1087 + v651) ^ __ROR4__(v441, 21);
    v455 = v439 ^ __ROR4__(v453, 21);
    v456 = v439 + v450;
    v818 = v455;
    v652 = (v1096 + v441) ^ __ROR4__(v651, 21);
    v766 = v538 ^ __ROR4__(v452, 21);
    v457 = v626 ^ __ROR4__(v898, 21);
    v458 = v448 + v457;
    v459 = v570 ^ __ROR4__(v790, 21);
    v460 = v445 + v708;
    v737 = v736 + v454;
    v539 = v538 + v1028;
    v791 = v507 + v766;
    v508 = v446 + v680;
    v461 = v872 + v596;
    v981 = v980 + v1052;
    v954 = v953 + v652;
    v462 = v444 + v1071;
    v1088 = v460 ^ __ROR4__(v1071, 25);
    v627 = v626 + v845;
    v463 = v447 + v818;
    v1072 = v570 + v926;
    v464 = v1005 + v459;
    v1097 = v462 ^ __ROR4__(v708, 25);
    v709 = v737 ^ __ROR4__(v449, 25);
    v465 = v454;
    v466 = v845;
    v467 = v1028;
    v1099 = v451 ^ __ROR4__(v465, 25);
    v846 = (v872 + v596) ^ __ROR4__(v450, 25);
    v1094 = v539 ^ __ROR4__(v466, 25);
    v1029 = v791 ^ __ROR4__(v457, 25);
    v468 = v627 ^ __ROR4__(v467, 25);
    v1101 = v458 ^ __ROR4__(v766, 25);
    v469 = v508 ^ __ROR4__(v818, 25);
    v1100 = v456 ^ __ROR4__(v596, 25);
    v681 = v463 ^ __ROR4__(v680, 25);
    v470 = v981 ^ __ROR4__(v926, 25);
    v471 = (v570 + v926) ^ __ROR4__(v1052, 25);
    v1053 = v954 ^ __ROR4__(v459, 25);
    v1102 = (v1005 + v459) ^ __ROR4__(v652, 25);
    v847 = v508 + v1088;
    v873 = v460 + v469;
    v14 = v463 + v1097;
    v12 = v462 + v681;
    v8 = v461 + v709;
    v899 = v737 + v846;
    v10 = v456 + v1099;
    v9 = v451 + v1100;
    v540 = v981 + v1094;
    v955 = v539 + v470;
    v571 = v1072 + v468;
    v17 = v14 ^ __ROR4__(v468, 21);
    v509 = v627 + v471;
    v18 = v12 ^ __ROR4__(v471, 21);
    v927 = v954 + v1029;
    v982 = v791 + v1053;
    v13 = v464 + v1101;
    v7 = v458 + v1102;
    v478 = (v508 + v1088) ^ __ROR4__(v1094, 21);
    v628 = v540 ^ __ROR4__(v1088, 21);
    v15 = (v460 + v469) ^ __ROR4__(v470, 21);
    v11 = v955 ^ __ROR4__(v469, 21);
    v738 = v571 ^ __ROR4__(v1097, 21);
    v792 = v509 ^ __ROR4__(v681, 21);
    v597 = v8 ^ __ROR4__(v1029, 21);
    v653 = v927 ^ __ROR4__(v709, 21);
    v16 = (v737 + v846) ^ __ROR4__(v1053, 21);
    v682 = (v791 + v1053) ^ __ROR4__(v846, 21);
    v1030 = v10 ^ __ROR4__(v1101, 21);
    v767 = v13 ^ __ROR4__(v1099, 21);
    v710 = v9 ^ __ROR4__(v1102, 21);
    v819 = v7 ^ __ROR4__(v1100, 21);
    if ( !v477 )
    {
      v509 ^= 1u;
      goto LABEL_2;
    }
    if ( v477 == 10 )
      break;
LABEL_2:
    ++v477;
  }
  v1098 = v18;
  v472 = a4;
  v1103[9] = v478;
  v1103[10] = v597;
  v1103[11] = v15;
  v1103[12] = v16;
  v1103[13] = v628;
  v1103[14] = v653;
  v1103[15] = v11;
  v1103[26] = v847;
  v1103[16] = v682;
  v1103[29] = v927;
  v1103[31] = v982;
  v1103[17] = v17;
  v1103[32] = v955;
  v1103[25] = v8;
  v1103[18] = v1030;
  v1103[27] = v899;
  v1103[28] = v873;
  v1103[19] = v1098;
  v1103[30] = v540;
  v1103[33] = v10;
  v1103[20] = v710;
  v1103[34] = v14;
  v1103[35] = v9;
  v1103[21] = v738;
  v1103[22] = v767;
  v1103[23] = v792;
  v1103[24] = v819;
  v1103[36] = v12;
  v1103[39] = v7;
  v1103[37] = v13;
  v1103[40] = v509;
  v473 = v478;
  v1103[38] = v571;
  for ( i = v1103 + 9; ; ++i )
  {
    *v472 = v473;
    result = v473 >> 8;
    v472[1] = BYTE1(v473);
    v472[2] = BYTE2(v473);
    v472 += 4;
    *(v472 - 1) = HIBYTE(v473);
    if ( &a4[4 * a5] == v472 )
      break;
    v475 = i[1];
    v473 = v475;
  }
  return result;
}
