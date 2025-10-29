unsigned int __fastcall sph_blake224_0(unsigned int *a1, char *a2, size_t a3)
{
  unsigned int v3; // r4
  size_t v4; // r3
  unsigned int result; // r0
  char *v6; // r0
  char *v7; // r1
  bool v8; // cf
  size_t v9; // r3
  unsigned int v10; // r0
  unsigned int v11; // r3
  unsigned int v12; // lr
  unsigned int v13; // r1
  unsigned int v14; // r12
  int v15; // r6
  int v16; // r8
  int v17; // r9
  unsigned int v18; // r5
  int v19; // lr
  int v20; // r3
  int v21; // r2
  int v22; // r4
  int v23; // r10
  int v24; // r0
  int v25; // r1
  int v26; // r12
  int v27; // r9
  int v28; // lr
  int v29; // r8
  int v30; // r11
  int v31; // r2
  int v32; // r3
  int v33; // r9
  int v34; // r10
  int v35; // r1
  int v36; // r0
  int v37; // r12
  int v38; // r7
  int v39; // r8
  int v40; // r3
  int v41; // r6
  int v42; // lr
  int v43; // r10
  int v44; // r12
  int v45; // r11
  int v46; // r9
  int v47; // r1
  int v48; // r0
  int v49; // r7
  int v50; // lr
  int v51; // r4
  int v52; // t2
  int v53; // r6
  int v54; // r3
  int v55; // r5
  int v56; // r12
  int v57; // r11
  int v58; // r6
  int v59; // r10
  int v60; // r0
  int v61; // r12
  int v62; // r1
  int v63; // r2
  int v64; // r7
  int v65; // r5
  int v66; // r4
  int v67; // r3
  int v68; // r6
  int v69; // r11
  int v70; // r10
  int v71; // r8
  int v72; // r2
  int v73; // r0
  int v74; // r1
  int v75; // r12
  int v76; // r5
  int v77; // r6
  int v78; // r9
  int v79; // lr
  int v80; // r2
  int v81; // r4
  int v82; // r0
  int v83; // r11
  int v84; // r3
  int v85; // r8
  int v86; // r11
  int v87; // r10
  int v88; // r0
  int v89; // r1
  int v90; // r12
  int v91; // r8
  int v92; // r7
  int v93; // r11
  int v94; // r5
  int v95; // lr
  int v96; // r4
  int v97; // r3
  int v98; // r2
  int v99; // r10
  int v100; // r6
  int v101; // r12
  int v102; // r0
  int v103; // r9
  int v104; // r1
  int v105; // r0
  int v106; // lr
  int v107; // r7
  int v108; // r5
  int v109; // lr
  int v110; // r2
  int v111; // r4
  int v112; // r11
  int v113; // r3
  int v114; // r2
  int v115; // r7
  int v116; // r6
  int v117; // r10
  int v118; // r1
  int v119; // r0
  int v120; // r6
  int v121; // r11
  int v122; // r9
  int v123; // r12
  int v124; // r5
  int v125; // r4
  int v126; // lr
  int v127; // r8
  int v128; // r10
  int v129; // r3
  int v130; // r0
  int v131; // r2
  int v132; // r1
  int v133; // r4
  int v134; // r6
  int v135; // r9
  int v136; // lr
  int v137; // r2
  int v138; // r9
  int v139; // lr
  int v140; // r12
  int v141; // r5
  int v142; // r1
  int v143; // r10
  int v144; // r3
  int v145; // r11
  int v146; // r5
  int v147; // r12
  int v148; // r6
  int v149; // r7
  int v150; // r0
  int v151; // r4
  int v152; // r3
  int v153; // r8
  int v154; // r10
  int v155; // r11
  int v156; // r12
  int v157; // r2
  int v158; // r1
  int v159; // r0
  int v160; // r4
  int v161; // r5
  int v162; // lr
  int v163; // r6
  int v164; // r8
  int v165; // r7
  int v166; // lr
  int v167; // r3
  int v168; // r10
  int v169; // r12
  int v170; // r0
  int v171; // r1
  int v172; // r2
  int v173; // r7
  int v174; // r6
  int v175; // r9
  int v176; // r11
  int v177; // r4
  int v178; // r5
  int v179; // r8
  int v180; // r2
  int v181; // r7
  int v182; // r1
  int v183; // r6
  int v184; // r0
  int v185; // r11
  int v186; // r10
  int v187; // r12
  int v188; // lr
  int v189; // r9
  int v190; // r2
  int v191; // r11
  int v192; // r5
  int v193; // r12
  int v194; // r0
  int v195; // r3
  int v196; // r1
  int v197; // r2
  int v198; // r10
  int v199; // r5
  int v200; // r8
  int v201; // r12
  int v202; // r7
  int v203; // r9
  int v204; // r4
  int v205; // lr
  int v206; // r6
  int v207; // r11
  int v208; // r10
  int v209; // r0
  int v210; // r2
  int v211; // r5
  int v212; // r7
  int v213; // r3
  int v214; // r1
  int v215; // lr
  int v216; // r9
  int v217; // r12
  int v218; // r6
  int v219; // r3
  int v220; // r11
  int v221; // r1
  int v222; // r0
  int v223; // r2
  int v224; // r9
  int v225; // r10
  int v226; // r3
  int v227; // r6
  int v228; // r4
  int v229; // r8
  int v230; // lr
  int v231; // r12
  int v232; // r11
  int v233; // r5
  int v234; // r1
  int v235; // r0
  int v236; // r7
  int v237; // lr
  int v238; // r4
  int v239; // r10
  int v240; // r5
  int v241; // r2
  int v242; // r12
  int v243; // r2
  int v244; // r9
  int v245; // r3
  int v246; // r11
  int v247; // r1
  int v248; // r2
  int v249; // r8
  int v250; // r7
  int v251; // r5
  int v252; // r6
  int v253; // lr
  int v254; // r6
  int v255; // t2
  int v256; // r0
  int v257; // r4
  int v258; // r3
  int v259; // r10
  int v260; // r9
  int v261; // r2
  int v262; // r1
  int v263; // r11
  int v264; // r7
  int v265; // r4
  int v266; // r5
  int v267; // lr
  int v268; // r0
  int v269; // r12
  int v270; // r10
  int v271; // r11
  int v272; // r3
  int v273; // r5
  int v274; // r1
  int v275; // r8
  int v276; // r2
  int v277; // r4
  int v278; // r8
  int v279; // r4
  int v280; // r9
  int v281; // r3
  int v282; // r7
  int v283; // r6
  int v284; // lr
  int v285; // r12
  int v286; // r0
  int v287; // r11
  int v288; // r5
  int v289; // r2
  int v290; // r3
  int v291; // r9
  int v292; // r6
  int v293; // r7
  int v294; // r1
  int v295; // r10
  int v296; // lr
  int v297; // r8
  int v298; // r0
  int v299; // r3
  int v300; // r10
  int v301; // r2
  int v302; // r7
  int v303; // r4
  int v304; // r11
  int v305; // r6
  int v306; // r1
  int v307; // r0
  int v308; // r9
  int v309; // lr
  int v310; // r5
  int v311; // r8
  int v312; // r2
  int v313; // r3
  int v314; // r1
  int v315; // r11
  int v316; // r9
  int v317; // r6
  int v318; // r12
  int v319; // r7
  int v320; // lr
  int v321; // r5
  int v322; // r8
  int v323; // r1
  int v324; // r2
  int v325; // r9
  int v326; // r3
  unsigned int v327; // r11
  int v328; // r5
  int v329; // r6
  int v330; // r4
  int v331; // r10
  int v332; // r12
  int v333; // r0
  int v334; // lr
  int v335; // r7
  int v336; // r8
  int v337; // r3
  int v338; // lr
  int v339; // r2
  int v340; // r7
  int v341; // r10
  int v342; // r1
  int v343; // r9
  int v344; // r7
  int v345; // r6
  int v346; // r4
  int v347; // r5
  int v348; // r12
  int v349; // r8
  int v350; // r11
  int v351; // r0
  int v352; // r3
  int v353; // r7
  int v354; // r4
  int v355; // lr
  int v356; // r1
  int v357; // r9
  int v358; // r2
  int v359; // r12
  int v360; // r6
  int v361; // r5
  int v362; // r10
  int v363; // r0
  int v364; // r1
  int v365; // r2
  int v366; // r11
  int v367; // r7
  int v368; // r4
  int v369; // r9
  int v370; // r2
  int v371; // r11
  int v372; // r8
  int v373; // r6
  int v374; // lr
  int v375; // r12
  int v376; // r3
  int v377; // r4
  int v378; // r10
  int v379; // r1
  int v380; // r6
  int v381; // r7
  int v382; // r3
  int v383; // r0
  int v384; // r1
  int v385; // r6
  int v386; // r11
  int v387; // r2
  int v388; // r10
  int v389; // r12
  int v390; // lr
  int v391; // r5
  int v392; // r9
  int v393; // r7
  int v394; // r3
  int v395; // r0
  int v396; // r0
  int v397; // r4
  int v398; // r1
  int v399; // r12
  int v400; // r6
  int v401; // r2
  int v402; // lr
  int v403; // r11
  int v404; // r8
  int v405; // r7
  int v406; // r5
  int v407; // r9
  int v408; // r3
  int v409; // r0
  int v410; // r2
  int v411; // r1
  int v412; // r4
  int v413; // r8
  int v414; // r6
  int v415; // r7
  int v416; // r9
  int v417; // r5
  int v418; // r0
  int v419; // r10
  int v420; // r1
  int v421; // r2
  int v422; // r8
  int v423; // r4
  int v424; // r7
  int v425; // r3
  int v426; // r12
  int v427; // lr
  int v428; // r10
  int v429; // r3
  int v430; // r1
  int v431; // r2
  int v432; // r6
  int v433; // r0
  int v434; // r12
  int v435; // r5
  int v436; // r8
  int v437; // r4
  int v438; // r7
  int v439; // r3
  int v440; // r5
  int v441; // r10
  int v442; // r4
  int v443; // lr
  int v444; // r1
  int v445; // r11
  int v446; // r0
  int v447; // r12
  int v448; // r2
  int v449; // r8
  int v450; // r7
  int v451; // r5
  int v452; // r1
  int v453; // r4
  int v454; // r9
  int v455; // r2
  int v456; // r8
  int v457; // r3
  int v458; // r5
  int v459; // r1
  int v460; // r0
  int v461; // lr
  int v462; // r8
  int v463; // r11
  int v464; // lr
  int v465; // r9
  int v466; // r12
  int v467; // r10
  int v468; // r5
  int v469; // r1
  int v470; // r2
  int v471; // r5
  int v472; // r0
  int v473; // r7
  int v474; // r12
  int v475; // r3
  int v476; // r6
  int v477; // r8
  int v478; // r10
  int v479; // r0
  int v480; // r7
  int v481; // r4
  int v482; // r2
  int v483; // r9
  int v484; // r6
  int v485; // lr
  int v486; // r11
  int v487; // r3
  int v488; // r8
  int v489; // r1
  int v490; // r12
  int v491; // r5
  int v492; // r6
  int v493; // r0
  int v494; // r7
  int v495; // r3
  int v496; // lr
  int v497; // r4
  int v498; // r5
  int v499; // lr
  int v500; // r8
  int v501; // r10
  int v502; // r1
  int v503; // r2
  int v504; // r11
  int v505; // r0
  int v506; // r9
  int v507; // r6
  int v508; // r12
  int v509; // r8
  int v510; // lr
  int v511; // r2
  int v512; // r9
  int v513; // r7
  int v514; // r4
  unsigned int v515; // r9
  int v516; // r5
  int v517; // r4
  int v518; // r9
  int v519; // r3
  int v520; // r1
  int v521; // r5
  int v522; // r0
  int v523; // r12
  int v524; // r10
  int v525; // r6
  int v526; // r6
  int v527; // r8
  int v528; // lr
  int v529; // r2
  int v530; // r4
  int v531; // r11
  int v532; // r0
  int v533; // r9
  int v534; // r7
  int v535; // r5
  int v536; // r1
  int v537; // r3
  int v538; // r7
  int v539; // r9
  int v540; // r8
  int v541; // r5
  int v542; // r12
  int v543; // lr
  int v544; // r2
  int v545; // r10
  int v546; // r12
  int v547; // r11
  unsigned int v548; // r9
  int v549; // r8
  int v550; // r5
  int v551; // lr
  int v552; // r4
  int v553; // r6
  int v554; // r1
  int v555; // r2
  int v556; // r11
  int v557; // r7
  int v558; // r9
  int v559; // r12
  int v560; // r10
  int v561; // r1
  int v562; // r3
  int v563; // r3
  int v564; // r0
  int v565; // r8
  int v566; // r4
  int v567; // r7
  int v568; // r5
  int v569; // r11
  int v570; // lr
  int v571; // r2
  int v572; // r12
  int v573; // r10
  int v574; // r1
  int v575; // r9
  int v576; // r3
  int v577; // r7
  int v578; // r2
  int v579; // r0
  int v580; // r8
  int v581; // r6
  int v582; // lr
  int v583; // r12
  int v584; // r11
  int v585; // r4
  int v586; // r1
  int v587; // r5
  int v588; // r10
  int v589; // r3
  int v590; // r9
  int v591; // r11
  int v592; // r7
  int v593; // r4
  int v594; // r0
  int v595; // r8
  int v596; // r2
  int v597; // lr
  int v598; // r5
  int v599; // r10
  int v600; // r12
  int v601; // r11
  int v602; // r10
  int v603; // r11
  int v604; // r1
  int v605; // r6
  int v606; // r3
  int v607; // r9
  int v608; // r4
  int v609; // lr
  int v610; // r7
  int v611; // r8
  int v612; // r12
  int v613; // r2
  int v614; // r5
  int v615; // r10
  int v616; // r11
  int v617; // r3
  int v618; // r0
  int v619; // r6
  int v620; // r4
  int v621; // r1
  int v622; // r8
  int v623; // r2
  int v624; // r9
  int v625; // lr
  int v626; // r5
  int v627; // r12
  int v628; // r10
  int v629; // r9
  int v630; // r3
  int v631; // r11
  int v632; // r0
  int v633; // r4
  int v634; // r1
  int v635; // r8
  int v636; // r7
  int v637; // r2
  int v638; // r6
  int v639; // r5
  int v640; // r9
  int v641; // lr
  int v642; // r11
  int v643; // r12
  int v644; // r10
  int v645; // r3
  int v646; // r0
  int v647; // r1
  int v648; // r7
  int v649; // r2
  int v650; // lr
  int v651; // r5
  int v652; // r9
  int v653; // r6
  int v654; // r8
  int v655; // r11
  int v656; // r12
  int v657; // r10
  unsigned int v658; // r0
  int v659; // r3
  int v660; // r6
  int v661; // r7
  int v662; // lr
  int v663; // r4
  int v664; // r12
  int v665; // r6
  int v666; // r10
  int v667; // r2
  int v668; // r8
  int v669; // r5
  int v670; // r11
  int v671; // r3
  int v672; // r6
  int v673; // r1
  int v674; // r9
  int v675; // r0
  int v676; // r7
  int v677; // r4
  int v678; // r6
  int v679; // r9
  int v680; // r12
  int v681; // r8
  int v682; // r9
  int v683; // r10
  int v684; // lr
  int v685; // r5
  int v686; // r2
  int v687; // r11
  int v688; // r1
  int v689; // r6
  int v690; // r2
  int v691; // r0
  int v692; // r4
  int v693; // r5
  int v694; // r7
  int v695; // r10
  int v696; // r12
  int v697; // lr
  int v698; // r9
  int v699; // r3
  int v700; // r11
  int v701; // r2
  int v702; // r0
  int v703; // r6
  int v704; // r1
  int v705; // r4
  int v706; // lr
  int v707; // r8
  int v708; // r3
  int v709; // r7
  int v710; // r10
  int v711; // r9
  int v712; // r10
  int v713; // r1
  int v714; // r0
  int v715; // r12
  int v716; // r6
  int v717; // r11
  int v718; // r7
  int v719; // r3
  int v720; // r4
  int v721; // r2
  int v722; // r5
  int v723; // r9
  int v724; // r8
  int v725; // r11
  int v726; // r5
  int v727; // r12
  int v728; // r10
  int v729; // r1
  int v730; // r0
  int v731; // r4
  int v732; // r2
  int v733; // r7
  int v734; // t2
  int v735; // r9
  int v736; // r12
  int v737; // r8
  int v738; // r6
  int v739; // r5
  int v740; // r10
  int v741; // r2
  int v742; // lr
  int v743; // r7
  int v744; // r3
  int v745; // r11
  int v746; // r6
  int v747; // r0
  int v748; // r5
  int v749; // r8
  int v750; // r1
  int v751; // r9
  int v752; // r4
  int v753; // lr
  int v754; // r10
  int v755; // r3
  int v756; // r2
  int v757; // r1
  int v758; // r0
  int v759; // r6
  int v760; // t2
  int v761; // r12
  int v762; // r5
  int v763; // r6
  int v764; // r5
  size_t n; // [sp+8h] [bp-1E4h]
  int v767; // [sp+14h] [bp-1D8h]
  int v768; // [sp+14h] [bp-1D8h]
  int v769; // [sp+14h] [bp-1D8h]
  int v770; // [sp+14h] [bp-1D8h]
  int v771; // [sp+14h] [bp-1D8h]
  int v772; // [sp+14h] [bp-1D8h]
  int v773; // [sp+14h] [bp-1D8h]
  int v774; // [sp+14h] [bp-1D8h]
  int v775; // [sp+14h] [bp-1D8h]
  int v776; // [sp+14h] [bp-1D8h]
  int v777; // [sp+14h] [bp-1D8h]
  int v778; // [sp+14h] [bp-1D8h]
  int v779; // [sp+14h] [bp-1D8h]
  int v780; // [sp+14h] [bp-1D8h]
  int v781; // [sp+14h] [bp-1D8h]
  int v782; // [sp+18h] [bp-1D4h]
  int v783; // [sp+18h] [bp-1D4h]
  int v784; // [sp+18h] [bp-1D4h]
  int v785; // [sp+18h] [bp-1D4h]
  int v786; // [sp+18h] [bp-1D4h]
  int v787; // [sp+18h] [bp-1D4h]
  int v788; // [sp+18h] [bp-1D4h]
  int v789; // [sp+18h] [bp-1D4h]
  int v790; // [sp+18h] [bp-1D4h]
  int v791; // [sp+18h] [bp-1D4h]
  int v792; // [sp+18h] [bp-1D4h]
  int v793; // [sp+18h] [bp-1D4h]
  int v794; // [sp+18h] [bp-1D4h]
  int v795; // [sp+18h] [bp-1D4h]
  int v796; // [sp+18h] [bp-1D4h]
  int v797; // [sp+18h] [bp-1D4h]
  int v798; // [sp+1Ch] [bp-1D0h]
  int v799; // [sp+1Ch] [bp-1D0h]
  int v800; // [sp+1Ch] [bp-1D0h]
  int v801; // [sp+1Ch] [bp-1D0h]
  int v802; // [sp+1Ch] [bp-1D0h]
  int v803; // [sp+1Ch] [bp-1D0h]
  int v804; // [sp+1Ch] [bp-1D0h]
  int v805; // [sp+1Ch] [bp-1D0h]
  int v806; // [sp+1Ch] [bp-1D0h]
  int v807; // [sp+1Ch] [bp-1D0h]
  int v808; // [sp+1Ch] [bp-1D0h]
  int v809; // [sp+24h] [bp-1C8h]
  unsigned int v810; // [sp+24h] [bp-1C8h]
  int v811; // [sp+24h] [bp-1C8h]
  int v812; // [sp+24h] [bp-1C8h]
  int v813; // [sp+24h] [bp-1C8h]
  int v814; // [sp+24h] [bp-1C8h]
  int v815; // [sp+24h] [bp-1C8h]
  int v816; // [sp+24h] [bp-1C8h]
  int v817; // [sp+24h] [bp-1C8h]
  int v818; // [sp+24h] [bp-1C8h]
  int v819; // [sp+24h] [bp-1C8h]
  int v820; // [sp+24h] [bp-1C8h]
  int v821; // [sp+24h] [bp-1C8h]
  int v822; // [sp+28h] [bp-1C4h]
  unsigned int v823; // [sp+28h] [bp-1C4h]
  int v824; // [sp+28h] [bp-1C4h]
  int v825; // [sp+28h] [bp-1C4h]
  int v826; // [sp+28h] [bp-1C4h]
  int v827; // [sp+28h] [bp-1C4h]
  int v828; // [sp+28h] [bp-1C4h]
  int v829; // [sp+28h] [bp-1C4h]
  int v830; // [sp+2Ch] [bp-1C0h]
  int v831; // [sp+2Ch] [bp-1C0h]
  unsigned int v832; // [sp+2Ch] [bp-1C0h]
  unsigned int v833; // [sp+30h] [bp-1BCh]
  int v834; // [sp+30h] [bp-1BCh]
  int v835; // [sp+30h] [bp-1BCh]
  unsigned int v836; // [sp+34h] [bp-1B8h]
  int v837; // [sp+34h] [bp-1B8h]
  unsigned int v838; // [sp+38h] [bp-1B4h]
  int v839; // [sp+40h] [bp-1ACh]
  unsigned int v840; // [sp+40h] [bp-1ACh]
  int v841; // [sp+40h] [bp-1ACh]
  int v842; // [sp+40h] [bp-1ACh]
  int v843; // [sp+40h] [bp-1ACh]
  unsigned int v844; // [sp+44h] [bp-1A8h]
  int v845; // [sp+44h] [bp-1A8h]
  int v846; // [sp+44h] [bp-1A8h]
  unsigned int v847; // [sp+48h] [bp-1A4h]
  int v848; // [sp+48h] [bp-1A4h]
  unsigned int v849; // [sp+4Ch] [bp-1A0h]
  int v850; // [sp+4Ch] [bp-1A0h]
  int v851; // [sp+4Ch] [bp-1A0h]
  unsigned int v852; // [sp+50h] [bp-19Ch]
  int v853; // [sp+50h] [bp-19Ch]
  int v854; // [sp+50h] [bp-19Ch]
  int v855; // [sp+50h] [bp-19Ch]
  int v856; // [sp+50h] [bp-19Ch]
  int v857; // [sp+50h] [bp-19Ch]
  int v858; // [sp+5Ch] [bp-190h]
  int v859; // [sp+60h] [bp-18Ch]
  int v860; // [sp+60h] [bp-18Ch]
  int v861; // [sp+60h] [bp-18Ch]
  int v862; // [sp+64h] [bp-188h]
  int v863; // [sp+64h] [bp-188h]
  int v864; // [sp+64h] [bp-188h]
  unsigned int v865; // [sp+6Ch] [bp-180h]
  unsigned int v866; // [sp+70h] [bp-17Ch]
  unsigned int v867; // [sp+74h] [bp-178h]
  int v868; // [sp+74h] [bp-178h]
  int v869; // [sp+74h] [bp-178h]
  int v870; // [sp+78h] [bp-174h]
  int v871; // [sp+78h] [bp-174h]
  int v872; // [sp+78h] [bp-174h]
  int v873; // [sp+78h] [bp-174h]
  int v874; // [sp+78h] [bp-174h]
  int v875; // [sp+78h] [bp-174h]
  int v876; // [sp+78h] [bp-174h]
  int v877; // [sp+78h] [bp-174h]
  int v878; // [sp+78h] [bp-174h]
  char *src; // [sp+7Ch] [bp-170h]
  unsigned int v880; // [sp+80h] [bp-16Ch]
  int v881; // [sp+80h] [bp-16Ch]
  unsigned int v882; // [sp+84h] [bp-168h]
  int v883; // [sp+88h] [bp-164h]
  int v884; // [sp+88h] [bp-164h]
  int v885; // [sp+88h] [bp-164h]
  int v886; // [sp+88h] [bp-164h]
  int v887; // [sp+88h] [bp-164h]
  int v888; // [sp+88h] [bp-164h]
  int v889; // [sp+88h] [bp-164h]
  int v890; // [sp+88h] [bp-164h]
  int v891; // [sp+88h] [bp-164h]
  int v892; // [sp+8Ch] [bp-160h]
  int v893; // [sp+8Ch] [bp-160h]
  unsigned int v894; // [sp+8Ch] [bp-160h]
  unsigned int v895; // [sp+90h] [bp-15Ch]
  unsigned int v896; // [sp+94h] [bp-158h]
  unsigned int v897; // [sp+98h] [bp-154h]
  unsigned int v898; // [sp+9Ch] [bp-150h]
  unsigned int v899; // [sp+A0h] [bp-14Ch]
  unsigned int v900; // [sp+A4h] [bp-148h]
  unsigned int v901; // [sp+A8h] [bp-144h]
  unsigned int v902; // [sp+ACh] [bp-140h]
  unsigned int v903; // [sp+B0h] [bp-13Ch]
  unsigned int v904; // [sp+B4h] [bp-138h]
  int v905; // [sp+B8h] [bp-134h]
  int v906; // [sp+BCh] [bp-130h]
  int v907; // [sp+BCh] [bp-130h]
  unsigned int v908; // [sp+BCh] [bp-130h]
  int v909; // [sp+C0h] [bp-12Ch]
  int v910; // [sp+C0h] [bp-12Ch]
  int v911; // [sp+C0h] [bp-12Ch]
  int v912; // [sp+C0h] [bp-12Ch]
  int v913; // [sp+C0h] [bp-12Ch]
  int v914; // [sp+C0h] [bp-12Ch]
  int v915; // [sp+C0h] [bp-12Ch]
  unsigned int v916; // [sp+C4h] [bp-128h]
  unsigned int v917; // [sp+C8h] [bp-124h]
  size_t v918; // [sp+CCh] [bp-120h]
  int v919; // [sp+D0h] [bp-11Ch]
  int v920; // [sp+D0h] [bp-11Ch]
  int v921; // [sp+D0h] [bp-11Ch]
  int v922; // [sp+D0h] [bp-11Ch]
  int v923; // [sp+D0h] [bp-11Ch]
  int v924; // [sp+D0h] [bp-11Ch]
  int v925; // [sp+D0h] [bp-11Ch]
  int v926; // [sp+D0h] [bp-11Ch]
  int v927; // [sp+D0h] [bp-11Ch]
  int v928; // [sp+D0h] [bp-11Ch]
  int v929; // [sp+D0h] [bp-11Ch]
  int v930; // [sp+D0h] [bp-11Ch]
  int v931; // [sp+D0h] [bp-11Ch]
  int v932; // [sp+D0h] [bp-11Ch]
  int v933; // [sp+D0h] [bp-11Ch]
  int v934; // [sp+D0h] [bp-11Ch]
  int v935; // [sp+D0h] [bp-11Ch]
  int v936; // [sp+D4h] [bp-118h]
  int v937; // [sp+D4h] [bp-118h]
  int v938; // [sp+D4h] [bp-118h]
  int v939; // [sp+D4h] [bp-118h]
  int v940; // [sp+D4h] [bp-118h]
  int v941; // [sp+D4h] [bp-118h]
  int v942; // [sp+D4h] [bp-118h]
  int v943; // [sp+D4h] [bp-118h]
  int v944; // [sp+D4h] [bp-118h]
  int v945; // [sp+D4h] [bp-118h]
  int v946; // [sp+D4h] [bp-118h]
  int v947; // [sp+D4h] [bp-118h]
  int v948; // [sp+D4h] [bp-118h]
  int v949; // [sp+D4h] [bp-118h]
  int v950; // [sp+D4h] [bp-118h]
  int v951; // [sp+D4h] [bp-118h]
  int v952; // [sp+D4h] [bp-118h]
  int v953; // [sp+D4h] [bp-118h]
  int v954; // [sp+D4h] [bp-118h]
  int v955; // [sp+D4h] [bp-118h]
  int v956; // [sp+D4h] [bp-118h]
  int v957; // [sp+D8h] [bp-114h]
  int v958; // [sp+D8h] [bp-114h]
  int v959; // [sp+D8h] [bp-114h]
  int v960; // [sp+D8h] [bp-114h]
  int v961; // [sp+D8h] [bp-114h]
  int v962; // [sp+D8h] [bp-114h]
  int v963; // [sp+D8h] [bp-114h]
  int v964; // [sp+D8h] [bp-114h]
  int v965; // [sp+D8h] [bp-114h]
  int v966; // [sp+D8h] [bp-114h]
  int v967; // [sp+D8h] [bp-114h]
  int v968; // [sp+D8h] [bp-114h]
  int v969; // [sp+D8h] [bp-114h]
  int v970; // [sp+D8h] [bp-114h]
  int v971; // [sp+D8h] [bp-114h]
  int v972; // [sp+D8h] [bp-114h]
  int v973; // [sp+D8h] [bp-114h]
  int v974; // [sp+DCh] [bp-110h]
  int v975; // [sp+DCh] [bp-110h]
  int v976; // [sp+DCh] [bp-110h]
  int v977; // [sp+DCh] [bp-110h]
  int v978; // [sp+DCh] [bp-110h]
  int v979; // [sp+DCh] [bp-110h]
  int v980; // [sp+DCh] [bp-110h]
  int v981; // [sp+DCh] [bp-110h]
  int v982; // [sp+DCh] [bp-110h]
  int v983; // [sp+DCh] [bp-110h]
  int v984; // [sp+DCh] [bp-110h]
  int v985; // [sp+DCh] [bp-110h]
  int v986; // [sp+DCh] [bp-110h]
  int v987; // [sp+E0h] [bp-10Ch]
  int v988; // [sp+E0h] [bp-10Ch]
  int v989; // [sp+E0h] [bp-10Ch]
  int v990; // [sp+E0h] [bp-10Ch]
  int v991; // [sp+E0h] [bp-10Ch]
  int v992; // [sp+E0h] [bp-10Ch]
  int v993; // [sp+E0h] [bp-10Ch]
  int v994; // [sp+E0h] [bp-10Ch]
  int v995; // [sp+E0h] [bp-10Ch]
  unsigned int v996; // [sp+E4h] [bp-108h]
  unsigned int v997; // [sp+E8h] [bp-104h]
  unsigned int v998; // [sp+ECh] [bp-100h]
  int v999; // [sp+F0h] [bp-FCh]
  int v1000; // [sp+F4h] [bp-F8h]
  int v1001; // [sp+F8h] [bp-F4h]
  int v1002; // [sp+F8h] [bp-F4h]
  unsigned int v1003; // [sp+FCh] [bp-F0h]
  int v1004; // [sp+100h] [bp-ECh]
  int v1005; // [sp+104h] [bp-E8h]
  int v1006; // [sp+108h] [bp-E4h]
  unsigned int v1007; // [sp+10Ch] [bp-E0h]
  unsigned int v1008; // [sp+118h] [bp-D4h]
  int v1009; // [sp+12Ch] [bp-C0h]
  int v1010; // [sp+130h] [bp-BCh]
  int v1011; // [sp+140h] [bp-ACh]
  int v1012; // [sp+144h] [bp-A8h]
  unsigned int v1013; // [sp+148h] [bp-A4h]
  unsigned int v1014; // [sp+150h] [bp-9Ch]
  int v1015; // [sp+154h] [bp-98h]
  int v1016; // [sp+158h] [bp-94h]
  unsigned int v1017; // [sp+15Ch] [bp-90h]
  int v1018; // [sp+164h] [bp-88h]
  int v1019; // [sp+164h] [bp-88h]
  int v1020; // [sp+168h] [bp-84h]
  int v1021; // [sp+16Ch] [bp-80h]
  int v1022; // [sp+174h] [bp-78h]
  unsigned int v1023; // [sp+17Ch] [bp-70h]
  unsigned int v1024; // [sp+180h] [bp-6Ch]
  int v1025; // [sp+188h] [bp-64h]
  int v1026; // [sp+188h] [bp-64h]
  int v1027; // [sp+18Ch] [bp-60h]
  int v1028; // [sp+190h] [bp-5Ch]
  int v1029; // [sp+190h] [bp-5Ch]
  int v1030; // [sp+190h] [bp-5Ch]
  int v1031; // [sp+194h] [bp-58h]
  unsigned int v1032; // [sp+194h] [bp-58h]
  unsigned int v1033; // [sp+198h] [bp-54h]
  int v1034; // [sp+19Ch] [bp-50h]
  unsigned int v1035; // [sp+1A0h] [bp-4Ch]
  unsigned int v1036; // [sp+1A4h] [bp-48h]
  unsigned int v1037; // [sp+1A8h] [bp-44h]
  unsigned int v1038; // [sp+1ACh] [bp-40h]
  int v1039; // [sp+1B0h] [bp-3Ch]
  int v1040; // [sp+1B4h] [bp-38h]
  int v1041; // [sp+1B8h] [bp-34h]
  int v1042; // [sp+1BCh] [bp-30h]
  int v1043; // [sp+1C0h] [bp-2Ch]
  int v1044; // [sp+1C4h] [bp-28h]
  int v1045; // [sp+1C8h] [bp-24h]
  unsigned int v1046; // [sp+1D0h] [bp-1Ch]
  unsigned int v1047; // [sp+1D4h] [bp-18h]
  unsigned int v1048; // [sp+1D8h] [bp-14h]
  unsigned int v1049; // [sp+1DCh] [bp-10h]
  int v1050; // [sp+1E0h] [bp-Ch]
  int v1051; // [sp+1E4h] [bp-8h]

  v3 = a1[16];
  v4 = 64 - v3;
  n = a3;
  src = a2;
  if ( 64 - v3 > a3 )
  {
    result = (unsigned int)memcpy((char *)a1 + v3, a2, a3);
    a1[16] = v3 + n;
  }
  else
  {
    result = a1[25];
    v900 = a1[17];
    v1023 = a1[25];
    v1024 = a1[27];
    v899 = a1[18];
    v903 = a1[19];
    v902 = a1[20];
    v898 = a1[21];
    v897 = a1[22];
    v896 = a1[23];
    v895 = a1[24];
    v916 = a1[26];
    v917 = a1[28];
    v901 = a1[29];
    v918 = a1[30];
    if ( a3 )
    {
      v1037 = result ^ 0x243F6A88;
      v1038 = a1[27] ^ 0x13198A2E;
      while ( 1 )
      {
        if ( v4 >= n )
          v4 = n;
        v6 = (char *)a1 + v3;
        v3 += v4;
        n -= v4;
        v7 = src;
        src += v4;
        result = (unsigned int)memcpy(v6, v7, v4);
        if ( v3 == 64 )
        {
          v8 = __CFADD__(v901, 512);
          v9 = v901 + 512;
          v901 += 512;
          if ( v8 )
            v9 = v918 + 1;
          v10 = bswap32(a1[6]);
          if ( v8 )
            v918 = v9;
          v11 = bswap32(a1[4]);
          v12 = bswap32(a1[2]);
          v1033 = v10 ^ 0xEC4E6C89;
          v13 = v902 + v895 + (v10 ^ 0xEC4E6C89);
          v14 = bswap32(*a1);
          v882 = v10;
          v1006 = v11 ^ 0x299F31D0;
          v1004 = v12 ^ 0x3707344;
          v15 = __ROR4__(v918 ^ 0xEC4E6C89 ^ v13, 16);
          v852 = v12;
          v1003 = v14 ^ 0x85A308D3;
          v838 = v14;
          v16 = v899 + v897 + (v12 ^ 0x3707344);
          v849 = v11;
          v17 = v903 + v896 + (v11 ^ 0x299F31D0);
          v18 = v900 + v898 + (v14 ^ 0x85A308D3);
          v809 = (v917 ^ 0x3707344) + v15;
          v844 = bswap32(a1[7]);
          v19 = __ROR4__(v918 ^ 0x82EFA98 ^ v17, 16);
          v20 = __ROR4__(v901 ^ 0xA4093822 ^ v18, 16);
          v21 = __ROR4__(v895 ^ v809, 12);
          v22 = __ROR4__(v901 ^ 0x299F31D0 ^ v16, 16);
          v1034 = v844 ^ 0x82EFA98;
          v23 = (v916 ^ 0x85A308D3) + v22;
          v830 = v1038 + v19;
          v782 = v1037 + v20;
          v847 = bswap32(a1[5]);
          v24 = __ROR4__((v1038 + v19) ^ v896, 12);
          v822 = v21 + (v844 ^ 0x82EFA98) + v13;
          v833 = bswap32(a1[3]);
          v25 = __ROR4__(v23 ^ v897, 12);
          v836 = bswap32(a1[1]);
          v26 = __ROR4__((v1037 + v20) ^ v898, 12);
          v1007 = v847 ^ 0xA4093822;
          v1005 = v833 ^ 0x13198A2E;
          v1039 = v836 ^ 0x243F6A88;
          v839 = __ROR4__(v15 ^ v822, 8);
          v27 = v24 + (v847 ^ 0xA4093822) + v17;
          v28 = __ROR4__(v19 ^ v27, 8);
          v870 = v25 + (v833 ^ 0x13198A2E) + v16;
          v29 = __ROR4__(v22 ^ v870, 8);
          v30 = v26 + (v836 ^ 0x243F6A88) + v18;
          v865 = bswap32(a1[12]);
          v31 = __ROR4__(v21 ^ (v809 + v839), 7);
          v32 = __ROR4__(v20 ^ v30, 8);
          v831 = v830 + v28;
          v33 = v31 + (v865 ^ 0xC97C50DD) + v27;
          v996 = v865 ^ 0xC97C50DD;
          v34 = v23 + v29;
          v866 = bswap32(a1[8]);
          v35 = __ROR4__(v25 ^ v34, 7);
          v880 = bswap32(a1[14]);
          v904 = v880 ^ 0xB5470917;
          v36 = __ROR4__(v24 ^ v831, 7);
          v37 = __ROR4__(v26 ^ (v782 + v32), 7);
          v867 = bswap32(a1[10]);
          v1041 = v867 ^ 0x34E90C6C;
          v919 = v35 + (v866 ^ 0x38D01377) + v30;
          v38 = v37 + (v880 ^ 0xB5470917) + v822;
          v936 = v36 + (v867 ^ 0x34E90C6C) + v870;
          v39 = __ROR4__(v29 ^ v33, 16);
          v957 = v782 + v32 + v39;
          v823 = bswap32(a1[13]);
          v40 = __ROR4__(v32 ^ v936, 16);
          v41 = __ROR4__(v839 ^ v919, 16);
          v42 = __ROR4__(v28 ^ v38, 16);
          v43 = v34 + v42;
          v44 = __ROR4__(v37 ^ v43, 12);
          v997 = v823 ^ 0xC0AC29B7;
          v906 = v831 + v41;
          v45 = v809 + v839 + v40;
          v909 = __ROR4__(v31 ^ v957, 12);
          v810 = bswap32(a1[15]);
          v46 = v909 + (v823 ^ 0xC0AC29B7) + v33;
          v47 = __ROR4__(v35 ^ (v831 + v41), 12);
          v832 = bswap32(a1[11]);
          v48 = __ROR4__(v36 ^ v45, 12);
          v840 = bswap32(a1[9]);
          v905 = v810 ^ 0x3F84D5B5;
          v1040 = v840 ^ 0x452821E6;
          v49 = v44 + (v810 ^ 0x3F84D5B5) + v38;
          v50 = __ROR4__(v42 ^ v49, 8);
          v51 = v48 + (v832 ^ 0xBE5466CF) + v936;
          v52 = __ROR4__(v39 ^ v46, 8);
          v53 = v41 ^ (v47 + (v840 ^ 0x452821E6) + v919);
          v920 = v47 + (v840 ^ 0x452821E6) + v919;
          v54 = __ROR4__(v40 ^ v51, 8);
          v55 = v909 ^ (v957 + v52);
          v910 = v43 + v50;
          v56 = v44 ^ (v43 + v50);
          v57 = v45 + v54;
          v1043 = v823 ^ 0x82EFA98;
          v58 = __ROR4__(v53, 8);
          v1008 = v840 ^ 0xB5470917;
          v59 = v906 + v58;
          v60 = __ROR4__(v48 ^ v57, 7);
          v61 = __ROR4__(v56, 7);
          v1000 = v849 ^ 0x452821E6;
          v62 = __ROR4__(v47 ^ (v906 + v58), 7);
          v63 = __ROR4__(v55, 7);
          v64 = v63 + (v823 ^ 0x82EFA98) + v49;
          v998 = v880 ^ 0xBE5466CF;
          v974 = v60 + (v840 ^ 0xB5470917) + v46;
          v907 = v62 + (v849 ^ 0x452821E6) + v51;
          v65 = v61 + (v880 ^ 0xBE5466CF) + v920;
          v66 = __ROR4__(v50 ^ v974, 16);
          v67 = __ROR4__(v54 ^ v65, 16);
          v68 = __ROR4__(v58 ^ v64, 16);
          v69 = v57 + v68;
          v70 = v59 + v66;
          v71 = __ROR4__(v52 ^ v907, 16);
          v72 = __ROR4__(v63 ^ v69, 12);
          v937 = v910 + v71;
          v911 = v72 + (v882 ^ 0xC97C50DD) + v64;
          v921 = v957 + v52 + v67;
          v1042 = v810 ^ 0x38D01377;
          v73 = __ROR4__(v60 ^ v70, 12);
          v74 = __ROR4__(v62 ^ v937, 12);
          v75 = __ROR4__(v61 ^ v921, 12);
          v1035 = v866 ^ 0xA4093822;
          v999 = v867 ^ 0x3F84D5B5;
          v76 = v75 + (v867 ^ 0x3F84D5B5) + v65;
          v77 = __ROR4__(v68 ^ v911, 8);
          v78 = v73 + (v810 ^ 0x38D01377) + v974;
          v975 = v69 + v77;
          v79 = __ROR4__(v66 ^ v78, 8);
          v80 = __ROR4__(v72 ^ (v69 + v77), 7);
          v81 = v74 + (v866 ^ 0xA4093822) + v907;
          v958 = v70 + v79;
          v82 = v73 ^ (v70 + v79);
          v83 = v921;
          v84 = __ROR4__(v67 ^ v76, 8);
          v922 = v80 + (v832 ^ 0xEC4E6C89) + v78;
          v85 = __ROR4__(v71 ^ v81, 8);
          v86 = v83 + v84;
          v1009 = v847 ^ 0x3707344;
          v87 = v937 + v85;
          v88 = __ROR4__(v82, 7);
          v908 = v836 ^ 0xC0AC29B7;
          v89 = __ROR4__(v74 ^ (v937 + v85), 7);
          v90 = __ROR4__(v75 ^ v86, 7);
          v91 = __ROR4__(v85 ^ v922, 16);
          v92 = v90 + (v847 ^ 0x3707344) + v911;
          v93 = v86 + v91;
          v94 = v89 + (v836 ^ 0xC0AC29B7) + v76;
          v938 = __ROR4__(v79 ^ v92, 16);
          v95 = __ROR4__(v77 ^ v94, 16);
          v96 = v88 + (v838 ^ 0x13198A2E) + v81;
          v1045 = v844 ^ 0x34E90C6C;
          v97 = __ROR4__(v84 ^ v96, 16);
          v98 = __ROR4__(v80 ^ v93, 12);
          v99 = v87 + v938;
          v100 = v958;
          v959 = v95;
          v912 = v100 + v95;
          v101 = __ROR4__(v90 ^ v99, 12);
          v102 = v88 ^ (v975 + v97);
          v103 = v98 + (v844 ^ 0x34E90C6C) + v922;
          v976 = v975 + v97;
          v1010 = v833 ^ 0x299F31D0;
          v104 = __ROR4__(v89 ^ (v100 + v95), 12);
          v105 = __ROR4__(v102, 12);
          v1044 = v852 ^ 0x243F6A88;
          v106 = v938;
          v107 = v101 + (v833 ^ 0x299F31D0) + v92;
          v939 = __ROR4__(v91 ^ v103, 8);
          v108 = v104 + (v865 ^ 0x85A308D3) + v94;
          v109 = __ROR4__(v106 ^ v107, 8);
          v987 = v93 + v939;
          v110 = v98 ^ (v93 + v939);
          v923 = v99 + v109;
          v111 = v105 + (v852 ^ 0x243F6A88) + v96;
          v1013 = v810 ^ 0xC97C50DD;
          v112 = v912;
          v913 = v101 ^ (v99 + v109);
          v113 = __ROR4__(v97 ^ v111, 8);
          v114 = __ROR4__(v110, 7);
          v115 = v114 + (v810 ^ 0xC97C50DD) + v107;
          v1011 = v847 ^ 0x13198A2E;
          v116 = __ROR4__(v959 ^ v108, 8);
          v117 = v112 + v116;
          v118 = __ROR4__(v104 ^ (v112 + v116), 7);
          v119 = __ROR4__(v105 ^ (v976 + v113), 7);
          v120 = __ROR4__(v116 ^ v115, 16);
          v121 = v976 + v113 + v120;
          v122 = v119 + (v847 ^ 0x13198A2E) + v103;
          v123 = __ROR4__(v913, 7);
          v124 = v123 + (v832 ^ 0x452821E6) + v108;
          v125 = v118 + (v865 ^ 0x243F6A88) + v111;
          v126 = __ROR4__(v109 ^ v122, 16);
          v127 = __ROR4__(v939 ^ v125, 16);
          v128 = v117 + v126;
          v1046 = v823 ^ 0xB5470917;
          v977 = v923 + v127;
          v129 = __ROR4__(v113 ^ v124, 16);
          v924 = v987 + v129;
          v130 = __ROR4__(v119 ^ v128, 12);
          v131 = __ROR4__(v114 ^ v121, 12);
          v132 = __ROR4__(v118 ^ v977, 12);
          v914 = v123 ^ (v987 + v129);
          v960 = v131 + (v823 ^ 0xB5470917) + v115;
          v1012 = v852 ^ 0x299F31D0;
          v133 = v132 + (v838 ^ 0xC0AC29B7) + v125;
          v134 = __ROR4__(v120 ^ v960, 8);
          v988 = v121 + v134;
          v940 = __ROR4__(v127 ^ v133, 8);
          v135 = v130 + (v852 ^ 0x299F31D0) + v122;
          v1047 = v844 ^ 0x85A308D3;
          v136 = v126 ^ v135;
          v137 = __ROR4__(v131 ^ (v121 + v134), 7);
          v138 = v137 + (v844 ^ 0x85A308D3) + v135;
          v139 = __ROR4__(v136, 8);
          v978 = v977 + v940;
          v140 = __ROR4__(v914, 12);
          v141 = v140 + (v866 ^ 0x34E90C6C) + v124;
          v142 = __ROR4__(v132 ^ v978, 7);
          v1014 = v840 ^ 0xA4093822;
          v143 = v128 + v139;
          v144 = __ROR4__(v129 ^ v141, 8);
          v915 = v833 ^ 0x82EFA98;
          v145 = v924 + v144;
          v146 = v142 + (v867 ^ 0x3F84D5B5) + v141;
          v147 = __ROR4__(v140 ^ (v924 + v144), 7);
          v148 = __ROR4__(v134 ^ v146, 16);
          v149 = v147 + (v840 ^ 0xA4093822) + v960;
          v925 = v143 + v148;
          v150 = __ROR4__(v130 ^ v143, 7);
          v151 = v150 + (v833 ^ 0x82EFA98) + v133;
          v1048 = v836 ^ 0xEC4E6C89;
          v961 = __ROR4__(v139 ^ v149, 16);
          v152 = __ROR4__(v144 ^ v151, 16);
          v153 = __ROR4__(v940 ^ v138, 16);
          v154 = v978 + v961;
          v155 = v145 + v153;
          v941 = v988 + v152;
          v156 = __ROR4__(v147 ^ (v978 + v961), 12);
          v157 = __ROR4__(v137 ^ v155, 12);
          v158 = __ROR4__(v142 ^ v925, 12);
          v979 = v157 + (v836 ^ 0xEC4E6C89) + v138;
          v159 = __ROR4__(v150 ^ (v988 + v152), 12);
          v1015 = v849 ^ 0x38D01377;
          v160 = v159 + (v882 ^ 0x3707344) + v151;
          v161 = v158 + (v880 ^ 0xBE5466CF) + v146;
          v162 = v961;
          v163 = __ROR4__(v148 ^ v161, 8);
          v962 = __ROR4__(v152 ^ v160, 8);
          v164 = __ROR4__(v153 ^ v979, 8);
          v989 = v155 + v164;
          v165 = v156 + (v849 ^ 0x38D01377) + v149;
          v166 = __ROR4__(v162 ^ v165, 8);
          v167 = v941;
          v168 = v154 + v166;
          v942 = v925 + v163;
          v169 = __ROR4__(v156 ^ v168, 7);
          v170 = __ROR4__(v159 ^ (v167 + v962), 7);
          v1017 = v833 ^ 0x85A308D3;
          v171 = __ROR4__(v158 ^ (v925 + v163), 7);
          v172 = __ROR4__(v157 ^ (v155 + v164), 7);
          v173 = v172 + (v832 ^ 0x3F84D5B5) + v165;
          v1016 = v844 ^ 0x38D01377;
          v174 = __ROR4__(v163 ^ v173, 16);
          v175 = v170 + (v823 ^ 0xC0AC29B7) + v979;
          v176 = v167 + v962 + v174;
          v177 = v171 + (v833 ^ 0x85A308D3) + v160;
          v178 = v169 + (v844 ^ 0x38D01377) + v161;
          v926 = __ROR4__(v166 ^ v175, 16);
          v179 = __ROR4__(v164 ^ v177, 16);
          v963 = __ROR4__(v962 ^ v178, 16);
          v943 = v942 + v926;
          v180 = __ROR4__(v172 ^ v176, 12);
          v1051 = v880 ^ 0x34E90C6C;
          v181 = v180 + (v880 ^ 0x34E90C6C) + v173;
          v182 = __ROR4__(v171 ^ (v168 + v179), 12);
          v1018 = v168 + v179;
          v183 = __ROR4__(v174 ^ v181, 8);
          v980 = v989 + v963;
          v184 = __ROR4__(v170 ^ v943, 12);
          v185 = v176 + v183;
          v1050 = v836 ^ 0x3707344;
          v1049 = v840 ^ 0xEC4E6C89;
          v186 = v184 + (v865 ^ 0xC97C50DD) + v175;
          v187 = __ROR4__(v169 ^ (v989 + v963), 12);
          v188 = __ROR4__(v926 ^ v186, 8);
          v189 = v187 + (v840 ^ 0xEC4E6C89) + v178;
          v990 = v187;
          v190 = v180 ^ v185;
          v1020 = v185;
          v191 = v943 + v188;
          v192 = __ROR4__(v179 ^ (v182 + (v836 ^ 0x3707344) + v177), 8);
          v1001 = v182 + (v836 ^ 0x3707344) + v177;
          v1021 = v849 ^ 0x243F6A88;
          v193 = __ROR4__(v190, 7);
          v194 = __ROR4__(v184 ^ (v943 + v188), 7);
          v927 = v1018 + v192;
          v195 = __ROR4__(v963 ^ v189, 8);
          v196 = __ROR4__(v182 ^ (v1018 + v192), 7);
          v197 = __ROR4__(v990 ^ (v980 + v195), 7);
          v198 = v193 + (v849 ^ 0x243F6A88) + v186;
          v1022 = v810 ^ 0x452821E6;
          v199 = __ROR4__(v192 ^ v198, 16);
          v1019 = v852 ^ 0x82EFA98;
          v200 = v980 + v195 + v199;
          v1036 = v847 ^ 0xBE5466CF;
          v201 = __ROR4__(v193 ^ v200, 12);
          v202 = v197 + (v810 ^ 0x452821E6) + v181;
          v203 = v196 + (v852 ^ 0x82EFA98) + v189;
          v204 = v194 + (v847 ^ 0xBE5466CF) + v1001;
          v205 = __ROR4__(v188 ^ v202, 16);
          v206 = __ROR4__(v183 ^ v203, 16);
          v944 = __ROR4__(v195 ^ v204, 16);
          v964 = v927 + v205;
          v928 = v191 + v206;
          v207 = v1020 + v944;
          v208 = v201 + (v838 ^ 0xA4093822) + v198;
          v209 = __ROR4__(v194 ^ (v1020 + v944), 12);
          v210 = __ROR4__(v197 ^ v964, 12);
          v211 = __ROR4__(v199 ^ v208, 8);
          v1002 = v867 ^ 0x299F31D0;
          v212 = v210 + (v866 ^ 0xB5470917) + v202;
          v991 = v209 + (v867 ^ 0x299F31D0) + v204;
          v213 = v944 ^ v991;
          v1025 = v200 + v211;
          v214 = __ROR4__(v196 ^ v928, 12);
          v215 = __ROR4__(v205 ^ v212, 8);
          v216 = v214 + (v882 ^ 0x13198A2E) + v203;
          v945 = v964 + v215;
          v217 = __ROR4__(v201 ^ (v200 + v211), 7);
          v218 = __ROR4__(v206 ^ v216, 8);
          v219 = __ROR4__(v213, 8);
          v220 = v207 + v219;
          v929 = v928 + v218;
          v221 = __ROR4__(v214 ^ v929, 7);
          v222 = __ROR4__(v209 ^ v220, 7);
          v223 = __ROR4__(v210 ^ (v964 + v215), 7);
          v981 = v217 + (v867 ^ 0xB5470917) + v212;
          v224 = v223 + (v840 ^ 0x243F6A88) + v216;
          v225 = v222 + (v852 ^ 0xA4093822) + v208;
          v226 = __ROR4__(v219 ^ v224, 16);
          v227 = __ROR4__(v218 ^ v981, 16);
          v228 = v221 + (v847 ^ 0xEC4E6C89) + v991;
          v1027 = v220 + v227;
          v229 = __ROR4__(v211 ^ v228, 16);
          v230 = __ROR4__(v215 ^ v225, 16);
          v231 = __ROR4__(v217 ^ (v220 + v227), 12);
          v232 = v1025 + v226;
          v965 = v929 + v230;
          v233 = v945 + v229;
          v946 = v223 ^ (v1025 + v226);
          v234 = __ROR4__(v221 ^ v233, 12);
          v982 = v231 + (v810 ^ 0xBE5466CF) + v981;
          v235 = __ROR4__(v222 ^ (v929 + v230), 12);
          v1026 = v233;
          v236 = v235 + (v849 ^ 0x13198A2E) + v225;
          v237 = __ROR4__(v230 ^ v236, 8);
          v1028 = __ROR4__(v227 ^ v982, 8);
          v238 = v234 + (v844 ^ 0x299F31D0) + v228;
          v239 = v1027 + v1028;
          v966 = v965 + v237;
          v240 = __ROR4__(v229 ^ v238, 8);
          v241 = v946;
          v242 = __ROR4__(v231 ^ (v1027 + v1028), 7);
          v947 = v1026 + v240;
          v243 = __ROR4__(v241, 12);
          v244 = v243 + (v838 ^ 0x38D01377) + v224;
          v245 = __ROR4__(v226 ^ v244, 8);
          v992 = v242 + (v882 ^ 0x452821E6) + v236;
          v246 = v232 + v245;
          v247 = __ROR4__(v234 ^ (v1026 + v240), 7);
          v248 = __ROR4__(v243 ^ v246, 7);
          v249 = v248 + (v833 ^ 0xC97C50DD) + v982;
          v250 = v247 + (v880 ^ 0x85A308D3) + v244;
          v251 = __ROR4__(v240 ^ v992, 16);
          v252 = v1028;
          v1029 = v246 + v251;
          v253 = __ROR4__(v237 ^ v249, 16);
          v983 = v947 + v253;
          v254 = __ROR4__(v252 ^ v250, 16);
          v255 = __ROR4__(v242 ^ (v246 + v251), 12);
          v948 = v966 + v254;
          v256 = __ROR4__(v235 ^ v966, 7);
          v257 = v256 + (v832 ^ 0xC0AC29B7) + v238;
          v258 = __ROR4__(v245 ^ v257, 16);
          v259 = v239 + v258;
          v260 = __ROR4__(v248 ^ v983, 12);
          v261 = __ROR4__(v247 ^ (v966 + v254), 12);
          v1031 = v255 + (v866 ^ 0x82EFA98) + v992;
          v262 = __ROR4__(v256 ^ v259, 12);
          v263 = v260 + (v823 ^ 0x3707344) + v249;
          v993 = v261 + (v836 ^ 0x3F84D5B5) + v250;
          v264 = __ROR4__(v251 ^ v1031, 8);
          v265 = v262 + (v865 ^ 0x34E90C6C) + v257;
          v266 = __ROR4__(v254 ^ v993, 8);
          v1030 = v1029 + v264;
          v267 = __ROR4__(v253 ^ v263, 8);
          v967 = v983 + v267;
          v268 = __ROR4__(v255 ^ v1030, 7);
          v269 = __ROR4__(v258 ^ v265, 8);
          v270 = v259 + v269;
          v949 = v948 + v266;
          v271 = v268 + (v866 ^ 0x3707344) + v263;
          v272 = v260 ^ (v983 + v267);
          v273 = __ROR4__(v266 ^ v271, 16);
          v274 = __ROR4__(v262 ^ v270, 7);
          v275 = (v882 ^ 0xBE5466CF) + v265;
          v276 = __ROR4__(v261 ^ v949, 7);
          v277 = (v838 ^ 0x34E90C6C) + v1031;
          v278 = v276 + v275;
          v1032 = v852 ^ 0xC0AC29B7;
          v279 = v274 + v277;
          v280 = v993;
          v994 = v270 + v273;
          v281 = __ROR4__(v272, 7);
          v282 = __ROR4__(v264 ^ v278, 16);
          v283 = v281 + (v852 ^ 0xC0AC29B7) + v280;
          v284 = __ROR4__(v267 ^ v279, 16);
          v968 = v967 + v282;
          v285 = __ROR4__(v269 ^ v283, 16);
          v286 = __ROR4__(v268 ^ (v270 + v273), 12);
          v984 = v949 + v284;
          v287 = v286 + (v833 ^ 0x452821E6) + v271;
          v288 = __ROR4__(v273 ^ v287, 8);
          v289 = __ROR4__(v276 ^ v968, 12);
          v290 = __ROR4__(v281 ^ (v1030 + v285), 12);
          v291 = v289 + (v867 ^ 0x82EFA98) + v278;
          v292 = v290 + (v865 ^ 0x13198A2E) + v283;
          v293 = __ROR4__(v282 ^ v291, 8);
          v294 = __ROR4__(v274 ^ (v949 + v284), 12);
          v295 = v294 + (v832 ^ 0x243F6A88) + v279;
          v995 = v994 + v288;
          v883 = __ROR4__(v285 ^ v292, 8);
          v296 = __ROR4__(v284 ^ v295, 8);
          v950 = v968 + v293;
          v297 = v984 + v296;
          v298 = __ROR4__(v286 ^ v995, 7);
          v299 = __ROR4__(v290 ^ (v1030 + v285 + v883), 7);
          v300 = v298 + (v810 ^ 0x3F84D5B5) + v295;
          v301 = __ROR4__(v289 ^ (v968 + v293), 7);
          v302 = __ROR4__(v293 ^ v300, 16);
          v303 = v1030 + v285 + v883 + v302;
          v304 = v299 + (v836 ^ 0x38D01377) + v287;
          v305 = v301 + (v849 ^ 0xC97C50DD) + v292;
          v306 = __ROR4__(v294 ^ (v984 + v296), 7);
          v307 = __ROR4__(v298 ^ v303, 12);
          v308 = v306 + (v844 ^ 0x299F31D0) + v291;
          v969 = __ROR4__(v296 ^ v304, 16);
          v309 = __ROR4__(v883 ^ v308, 16);
          v310 = __ROR4__(v288 ^ v305, 16);
          v311 = v297 + v310;
          v884 = v995 + v309;
          v312 = __ROR4__(v301 ^ v311, 12);
          v951 = v950 + v969;
          v313 = __ROR4__(v299 ^ v951, 12);
          v930 = v307 + (v880 ^ 0xB5470917) + v300;
          v314 = __ROR4__(v306 ^ (v995 + v309), 12);
          v315 = v313 + (v840 ^ 0x85A308D3) + v304;
          v316 = v314 + (v847 ^ 0xEC4E6C89) + v308;
          v317 = v312 + (v823 ^ 0xA4093822) + v305;
          v318 = __ROR4__(v309 ^ v316, 8);
          v319 = __ROR4__(v302 ^ v930, 8);
          v985 = v303 + v319;
          v320 = __ROR4__(v969 ^ v315, 8);
          v321 = __ROR4__(v310 ^ v317, 8);
          v970 = v884 + v318;
          v885 = v951 + v320;
          v322 = v311 + v321;
          v871 = __ROR4__(v307 ^ (v303 + v319), 7);
          v323 = __ROR4__(v314 ^ v970, 7);
          v324 = __ROR4__(v312 ^ v322, 7);
          v325 = v324 + (v836 ^ 0xB5470917) + v316;
          v326 = __ROR4__(v313 ^ (v951 + v320), 7);
          v327 = (v849 ^ 0xBE5466CF) + v871 + v315;
          v328 = __ROR4__(v321 ^ v327, 16);
          v329 = v326 + (v865 ^ 0x299F31D0) + v317;
          v330 = __ROR4__(v319 ^ v325, 16);
          v971 = v970 + v328;
          v331 = v323 + (v880 ^ 0xC97C50DD) + v930;
          v931 = __ROR4__(v320 ^ v331, 16);
          v332 = __ROR4__(v318 ^ v329, 16);
          v333 = __ROR4__(v871 ^ v971, 12);
          v334 = v322 + v931;
          v335 = v885;
          v886 = v323 ^ (v322 + v931);
          v872 = v335 + v330;
          v336 = v985 + v332;
          v952 = v334;
          v337 = __ROR4__(v326 ^ (v985 + v332), 12);
          v338 = v333 + (v867 ^ 0xA4093822) + v327;
          v339 = __ROR4__(v324 ^ (v335 + v330), 12);
          v340 = (v823 ^ 0x3F84D5B5) + v331;
          v341 = __ROR4__(v328 ^ v338, 8);
          v342 = __ROR4__(v886, 12);
          v343 = v339 + (v810 ^ 0x85A308D3) + v325;
          v344 = v342 + v340;
          v345 = v337 + (v847 ^ 0xC0AC29B7) + v329;
          v346 = __ROR4__(v330 ^ v343, 8);
          v347 = v952;
          v348 = __ROR4__(v332 ^ v345, 8);
          v953 = __ROR4__(v931 ^ v344, 8);
          v349 = v336 + v348;
          v350 = v347 + v953;
          v873 = v872 + v346;
          v351 = __ROR4__(v333 ^ (v971 + v341), 7);
          v352 = __ROR4__(v337 ^ v349, 7);
          v353 = v351 + (v840 ^ 0x13198A2E) + v344;
          v354 = __ROR4__(v346 ^ v353, 16);
          v355 = v352 + (v866 ^ 0x34E90C6C) + v338;
          v356 = __ROR4__(v342 ^ (v347 + v953), 7);
          v357 = v356 + (v882 ^ 0x3707344) + v343;
          v892 = v349 + v354;
          v358 = __ROR4__(v339 ^ v873, 7);
          v359 = __ROR4__(v348 ^ v357, 16);
          v360 = v358 + (v838 ^ 0xEC4E6C89) + v345;
          v887 = v971 + v341 + v359;
          v361 = __ROR4__(v953 ^ v355, 16);
          v362 = __ROR4__(v341 ^ v360, 16);
          v932 = v873 + v361;
          v363 = __ROR4__(v351 ^ (v349 + v354), 12);
          v874 = v350 + v362;
          v364 = __ROR4__(v356 ^ v887, 12);
          v365 = v358 ^ (v350 + v362);
          v366 = v363 + (v852 ^ 0x38D01377) + v353;
          v367 = __ROR4__(v352 ^ v932, 12);
          v954 = v366;
          v368 = v354 ^ v366;
          v369 = v364 + (v833 ^ 0x82EFA98) + v357;
          v370 = __ROR4__(v365, 12);
          v371 = v367 + (v832 ^ 0x452821E6) + v355;
          v372 = v370 + (v844 ^ 0x243F6A88) + v360;
          v373 = __ROR4__(v359 ^ v369, 8);
          v374 = __ROR4__(v361 ^ v371, 8);
          v375 = __ROR4__(v362 ^ v372, 8);
          v376 = v892;
          v893 = v373;
          v377 = __ROR4__(v368, 8);
          v378 = v887 + v373;
          v972 = v376 + v377;
          v379 = v364 ^ (v887 + v373);
          v380 = v932 + v374;
          v381 = v367 ^ (v932 + v374);
          v933 = v378;
          v986 = v380;
          v382 = __ROR4__(v363 ^ (v376 + v377), 7);
          v888 = v874 + v375;
          v383 = __ROR4__(v379, 7);
          v384 = __ROR4__(v381, 7);
          v385 = v383 + (v865 ^ 0x85A308D3) + v954;
          v386 = (v833 ^ 0x38D01377) + v382 + v371;
          v955 = v384 + (v823 ^ 0x34E90C6C) + v372;
          v387 = __ROR4__(v370 ^ (v874 + v375), 7);
          v388 = v387 + (v844 ^ 0x3F84D5B5) + v369;
          v389 = __ROR4__(v375 ^ v386, 16);
          v390 = __ROR4__(v374 ^ v385, 16);
          v391 = __ROR4__(v377 ^ v388, 16);
          v392 = __ROR4__(v893 ^ v955, 16);
          v393 = v933 + v389;
          v394 = __ROR4__(v382 ^ (v933 + v389), 12);
          v934 = v888 + v390;
          v395 = v383 ^ (v888 + v390);
          v889 = v986 + v391;
          v396 = __ROR4__(v395, 12);
          v875 = v972 + v392;
          v973 = v393;
          v397 = v394 + (v840 ^ 0x3707344) + v386;
          v398 = __ROR4__(v384 ^ v875, 12);
          v399 = __ROR4__(v389 ^ v397, 8);
          v400 = v396 + (v836 ^ 0xC0AC29B7) + v385;
          v401 = __ROR4__(v387 ^ (v986 + v391), 12);
          v402 = __ROR4__(v390 ^ v400, 8);
          v403 = v934 + v402;
          v404 = v401 + (v880 ^ 0xEC4E6C89) + v388;
          v405 = v398 + (v832 ^ 0xC97C50DD) + v955;
          v406 = __ROR4__(v391 ^ v404, 8);
          v890 = v889 + v406;
          v407 = __ROR4__(v392 ^ v405, 8);
          v876 = v875 + v407;
          v408 = __ROR4__(v394 ^ (v973 + v399), 7);
          v409 = __ROR4__(v396 ^ (v934 + v402), 7);
          v410 = __ROR4__(v401 ^ v890, 7);
          v894 = v852 ^ 0xBE5466CF;
          v411 = __ROR4__(v398 ^ v876, 7);
          v412 = v411 + (v852 ^ 0xBE5466CF) + v397;
          v413 = v409 + (v810 ^ 0xA4093822) + v404;
          v414 = v408 + (v866 ^ 0x82EFA98) + v400;
          v415 = v410 + (v847 ^ 0x243F6A88) + v405;
          v416 = __ROR4__(v407 ^ v413, 16);
          v859 = __ROR4__(v402 ^ v412, 16);
          v417 = __ROR4__(v406 ^ v414, 16);
          v767 = __ROR4__(v399 ^ v415, 16);
          v853 = v876 + v417;
          v418 = __ROR4__(v409 ^ (v973 + v399 + v416), 12);
          v935 = v973 + v399 + v416;
          v419 = v890 + v859;
          v420 = __ROR4__(v411 ^ (v890 + v859), 12);
          v891 = v403 + v767;
          v421 = __ROR4__(v410 ^ (v403 + v767), 12);
          v422 = v418 + (v849 ^ 0xB5470917) + v413;
          v956 = v867 ^ 0x13198A2E;
          v423 = v420 + (v867 ^ 0x13198A2E) + v412;
          v868 = __ROR4__(v416 ^ v422, 8);
          v424 = v421 + (v838 ^ 0x299F31D0) + v415;
          v425 = __ROR4__(v408 ^ (v876 + v417), 12);
          v862 = v425 + (v882 ^ 0x452821E6) + v414;
          v877 = __ROR4__(v417 ^ v862, 8);
          v426 = __ROR4__(v767 ^ v424, 8);
          v768 = __ROR4__(v859 ^ v423, 8);
          v427 = v935 + v868;
          v854 = v853 + v877;
          v428 = v419 + v768;
          v429 = __ROR4__(v425 ^ v854, 7);
          v860 = v891 + v426;
          v430 = __ROR4__(v420 ^ v428, 7);
          v431 = __ROR4__(v421 ^ (v891 + v426), 7);
          v432 = __ROR4__(v418 ^ (v935 + v868), 7);
          v783 = v432;
          if ( blake256_rounds == 14 )
          {
            v433 = (v838 ^ 0x452821E6) + v429 + v423;
            v434 = __ROR4__(v426 ^ v433, 16);
            v435 = v880 ^ 0x38D01377;
            v881 = v427 + v434;
            v436 = v431 + v435 + v422;
            v437 = v430 + (v882 ^ 0xB5470917) + v424;
            v438 = v432 + (v832 ^ 0x3707344) + v862;
            v439 = __ROR4__(v429 ^ (v427 + v434), 12);
            v858 = v435;
            v863 = v437;
            v440 = __ROR4__(v877 ^ v436, 16);
            v441 = v428 + v440;
            v442 = __ROR4__(v868 ^ v437, 16);
            v443 = __ROR4__(v768 ^ v438, 16);
            v444 = v430 ^ (v854 + v442);
            v878 = v439 + (v866 ^ 0x243F6A88) + v433;
            v855 = v854 + v442;
            v784 = __ROR4__(v434 ^ v878, 8);
            v445 = __ROR4__(v432 ^ (v860 + v443), 12);
            v769 = v840 ^ 0x3F84D5B5;
            v869 = v860 + v443;
            v446 = __ROR4__(v431 ^ v441, 12);
            v447 = __ROR4__(v444, 12);
            v448 = v446 + (v840 ^ 0x3F84D5B5) + v436;
            v449 = v445 + (v833 ^ 0x34E90C6C) + v438;
            v450 = v447 + (v810 ^ 0x82EFA98) + v863;
            v451 = v440 ^ v448;
            v452 = v442 ^ v450;
            v453 = __ROR4__(v439 ^ (v881 + v784), 7);
            v861 = v448;
            v454 = (v836 ^ 0xA4093822) + v449;
            v455 = __ROR4__(v443 ^ v449, 8);
            v456 = __ROR4__(v451, 8);
            v457 = v855;
            v458 = v453 + v454;
            v459 = __ROR4__(v452, 8);
            v856 = v441 + v456;
            v460 = v446 ^ (v441 + v456);
            v461 = v445 ^ (v869 + v455);
            v864 = v869 + v455;
            v462 = __ROR4__(v456 ^ (v453 + v454), 16);
            v463 = v457 + v459 + v462;
            v464 = __ROR4__(v461, 7);
            v465 = v464 + (v823 ^ 0xEC4E6C89) + v861;
            v466 = __ROR4__(v447 ^ (v457 + v459), 7);
            v467 = v466 + v1002 + v878;
            v468 = (v849 ^ 0x85A308D3) + v458;
            v850 = __ROR4__(v453 ^ v463, 12);
            v469 = __ROR4__(v459 ^ v465, 16);
            v470 = __ROR4__(v455 ^ v467, 16);
            v841 = v850 + v468;
            v471 = v881 + v784 + v469;
            v472 = __ROR4__(v460, 7);
            v857 = v856 + v470;
            v473 = v472 + (v865 ^ 0x13198A2E) + v450;
            v474 = __ROR4__(v466 ^ v857, 12);
            v475 = (v844 ^ 0xC97C50DD) + v465;
            v476 = __ROR4__(v784 ^ v473, 16);
            v785 = __ROR4__(v462 ^ v841, 8);
            v477 = v864 + v476;
            v845 = v463 + v785;
            v478 = v474 + v1036 + v467;
            v479 = __ROR4__(v472 ^ (v864 + v476), 12);
            v480 = v479 + v1032 + v473;
            v481 = __ROR4__(v850 ^ (v463 + v785), 7);
            v482 = __ROR4__(v470 ^ v478, 8);
            v483 = (v836 ^ 0x299F31D0) + v481 + v478;
            v484 = __ROR4__(v476 ^ v480, 8);
            v485 = __ROR4__(v464 ^ v471, 12);
            v486 = v477 + v484;
            v487 = v485 + v475;
            v488 = v1034 + v841;
            v489 = __ROR4__(v469 ^ v487, 8);
            v490 = __ROR4__(v474 ^ (v857 + v482), 7);
            v491 = v471 + v489;
            v492 = __ROR4__(v484 ^ v483, 16);
            v493 = __ROR4__(v479 ^ v486, 7);
            v494 = v490 + v956 + v480;
            v495 = v493 + v1035 + v487;
            v496 = v485 ^ v491;
            v842 = v491 + v492;
            v497 = __ROR4__(v481 ^ (v491 + v492), 12);
            v498 = __ROR4__(v785 ^ v495, 16);
            v499 = __ROR4__(v496, 7);
            v500 = v499 + v488;
            v501 = v497 + (v847 ^ 0x85A308D3) + v483;
            v837 = v857 + v482 + v498;
            v502 = __ROR4__(v489 ^ v494, 16);
            v503 = __ROR4__(v482 ^ v500, 16);
            v786 = v845 + v502;
            v504 = v486 + v503;
            v505 = __ROR4__(v493 ^ v837, 12);
            v506 = __ROR4__(v492 ^ v501, 8);
            v507 = __ROR4__(v499 ^ v504, 12);
            v508 = __ROR4__(v490 ^ (v845 + v502), 12);
            v509 = v507 + v1033 + v500;
            v848 = v506;
            v510 = v508 + v894 + v494;
            v511 = __ROR4__(v503 ^ v509, 8);
            v512 = v842 + v506;
            v513 = v505 + v1000 + v495;
            v514 = v497 ^ v512;
            v851 = v512;
            v515 = v833 ^ 0xC0AC29B7;
            v516 = __ROR4__(v498 ^ v513, 8);
            v846 = __ROR4__(v514, 7);
            v517 = __ROR4__(v502 ^ v510, 8);
            v843 = v504 + v511;
            v834 = v837 + v516;
            v518 = v846 + v515 + v509;
            v519 = v505 ^ (v837 + v516);
            v520 = __ROR4__(v508 ^ (v786 + v517), 7);
            v521 = __ROR4__(v516 ^ v518, 16);
            v522 = __ROR4__(v507 ^ (v504 + v511), 7);
            v523 = v520 + (v823 ^ 0x243F6A88) + v501;
            v524 = v786 + v517 + v521;
            v525 = (v810 ^ 0x34E90C6C) + v510;
            v811 = __ROR4__(v519, 7);
            v526 = v811 + v525;
            v527 = v522 + v769 + v513;
            v528 = __ROR4__(v517 ^ v527, 16);
            v529 = __ROR4__(v511 ^ v523, 16);
            v530 = __ROR4__(v848 ^ v526, 16);
            v787 = v834 + v529;
            v531 = __ROR4__(v846 ^ v524, 12);
            v824 = v851 + v528;
            v532 = __ROR4__(v522 ^ (v851 + v528), 12);
            v533 = v531 + (v865 ^ 0x3707344) + v518;
            v534 = v834 + v529;
            v535 = v521 ^ v533;
            v835 = v533;
            v536 = __ROR4__(v520 ^ v534, 12);
            v537 = __ROR4__(v811 ^ (v843 + v530), 12);
            v538 = v537 + (v832 ^ 0xB5470917) + v526;
            v539 = v536 + (v838 ^ 0xC97C50DD) + v523;
            v540 = v532 + v858 + v527;
            v541 = __ROR4__(v535, 8);
            v542 = v528 ^ v540;
            v543 = __ROR4__(v530 ^ v538, 8);
            v544 = __ROR4__(v529 ^ v539, 8);
            v545 = v524 + v541;
            v798 = v787 + v544;
            v546 = __ROR4__(v542, 8);
            v770 = v843 + v530 + v543;
            v547 = __ROR4__(v531 ^ v545, 7);
            v788 = __ROR4__(v532 ^ (v824 + v546), 7);
            v548 = v1033 + v547 + v539;
            v812 = __ROR4__(v537 ^ v770, 7);
            v549 = v812 + v1004 + v540;
            v550 = __ROR4__(v541 ^ v549, 16);
            v551 = __ROR4__(v543 ^ v548, 16);
            v552 = v788 + v1006 + v835;
            v553 = v824 + v546 + v551;
            v554 = __ROR4__(v536 ^ v798, 7);
            v555 = __ROR4__(v544 ^ v552, 16);
            v556 = __ROR4__(v547 ^ v553, 12);
            v557 = v554 + v1003 + v538;
            v558 = v556 + v1034 + v548;
            v559 = __ROR4__(v546 ^ v557, 16);
            v560 = v545 + v559;
            v799 = v798 + v550;
            v561 = __ROR4__(v554 ^ v560, 12);
            v562 = v812;
            v813 = v770 + v555;
            v563 = __ROR4__(v562 ^ v799, 12);
            v564 = __ROR4__(v788 ^ (v770 + v555), 12);
            v565 = v563 + v1005 + v549;
            v771 = __ROR4__(v551 ^ v558, 8);
            v566 = v564 + v1007 + v552;
            v567 = v561 + v1039 + v557;
            v568 = __ROR4__(v550 ^ v565, 8);
            v825 = v553 + v771;
            v569 = v556 ^ (v553 + v771);
            v570 = v799 + v568;
            v571 = __ROR4__(v555 ^ v566, 8);
            v572 = __ROR4__(v559 ^ v567, 8);
            v800 = v813 + v571;
            v573 = v560 + v572;
            v574 = __ROR4__(v561 ^ v573, 7);
            v575 = v574 + v904 + v558;
            v576 = __ROR4__(v563 ^ v570, 7);
            v577 = v576 + (v866 ^ 0x38D01377) + v567;
            v578 = __ROR4__(v571 ^ v575, 16);
            v579 = __ROR4__(v564 ^ v800, 7);
            v580 = v579 + v1041 + v565;
            v581 = v570 + v578;
            v582 = __ROR4__(v771 ^ v577, 16);
            v772 = v800 + v582;
            v583 = __ROR4__(v572 ^ v580, 16);
            v584 = __ROR4__(v569, 7);
            v789 = v825 + v583;
            v585 = v584 + v996 + v566;
            v586 = __ROR4__(v574 ^ v581, 12);
            v587 = __ROR4__(v568 ^ v585, 16);
            v588 = v573 + v587;
            v589 = __ROR4__(v576 ^ (v800 + v582), 12);
            v590 = v586 + v905 + v575;
            v591 = __ROR4__(v584 ^ v588, 12);
            v592 = v589 + v1040 + v577;
            v593 = v591 + v997 + v585;
            v594 = __ROR4__(v579 ^ (v825 + v583), 12);
            v595 = v594 + (v832 ^ 0xBE5466CF) + v580;
            v596 = __ROR4__(v578 ^ v590, 8);
            v597 = __ROR4__(v582 ^ v592, 8);
            v801 = v581 + v596;
            v598 = __ROR4__(v587 ^ v593, 8);
            v599 = v588 + v598;
            v600 = __ROR4__(v583 ^ v595, 8);
            v773 = v772 + v597;
            v601 = v591 ^ v599;
            v814 = v599;
            v602 = v789 + v600;
            v603 = __ROR4__(v601, 7);
            v604 = __ROR4__(v586 ^ (v581 + v596), 7);
            v605 = __ROR4__(v594 ^ (v789 + v600), 7);
            v606 = __ROR4__(v589 ^ v773, 7);
            v607 = v1043 + v603 + v590;
            v608 = v605 + v1008 + v593;
            v609 = __ROR4__(v597 ^ v607, 16);
            v610 = v604 + v998 + v592;
            v611 = v606 + v1000 + v595;
            v612 = __ROR4__(v600 ^ v610, 16);
            v790 = v814 + v612;
            v613 = __ROR4__(v596 ^ v608, 16);
            v614 = __ROR4__(v598 ^ v611, 16);
            v615 = v602 + v609;
            v815 = v773 + v613;
            v774 = v801 + v614;
            v616 = __ROR4__(v603 ^ v615, 12);
            v802 = v606 ^ (v801 + v614);
            v617 = __ROR4__(v604 ^ v790, 12);
            v618 = v616 + (v882 ^ 0xC97C50DD) + v607;
            v619 = __ROR4__(v605 ^ v815, 12);
            v620 = v619 + v1042 + v608;
            v826 = v617 + v999 + v610;
            v621 = __ROR4__(v802, 12);
            v622 = v621 + v1035 + v611;
            v623 = __ROR4__(v613 ^ v620, 8);
            v624 = v790;
            v791 = v815 + v623;
            v625 = __ROR4__(v609 ^ v618, 8);
            v626 = __ROR4__(v614 ^ v622, 8);
            v627 = __ROR4__(v612 ^ v826, 8);
            v628 = v615 + v625;
            v629 = v624 + v627;
            v775 = v774 + v626;
            v630 = __ROR4__(v617 ^ v629, 7);
            v631 = __ROR4__(v616 ^ v628, 7);
            v632 = v630 + v1009 + v618;
            v633 = v631 + (v832 ^ 0xEC4E6C89) + v620;
            v634 = __ROR4__(v621 ^ v775, 7);
            v816 = __ROR4__(v619 ^ (v815 + v623), 7);
            v635 = v816 + (v838 ^ 0x13198A2E) + v622;
            v636 = v634 + v908 + v826;
            v637 = __ROR4__(v623 ^ v632, 16);
            v638 = v775 + v637;
            v639 = __ROR4__(v626 ^ v633, 16);
            v640 = v629 + v639;
            v641 = __ROR4__(v625 ^ v636, 16);
            v776 = v791 + v641;
            v642 = __ROR4__(v631 ^ v640, 12);
            v643 = __ROR4__(v627 ^ v635, 16);
            v792 = v642 + v1045 + v633;
            v644 = v628 + v643;
            v645 = __ROR4__(v630 ^ v638, 12);
            v646 = v645 + v1010 + v632;
            v647 = __ROR4__(v634 ^ v776, 12);
            v648 = v647 + (v865 ^ 0x85A308D3) + v636;
            v649 = __ROR4__(v637 ^ v646, 8);
            v803 = v638 + v649;
            v650 = __ROR4__(v641 ^ v648, 8);
            v651 = __ROR4__(v639 ^ v792, 8);
            v652 = v640 + v651;
            v653 = __ROR4__(v816 ^ v644, 12);
            v827 = v776 + v650;
            v654 = v653 + v1044 + v635;
            v655 = __ROR4__(v642 ^ v652, 7);
            v656 = __ROR4__(v643 ^ v654, 8);
            v657 = v644 + v656;
            v658 = v1013 + v655 + v646;
            v777 = __ROR4__(v647 ^ (v776 + v650), 7);
            v659 = __ROR4__(v645 ^ v803, 7);
            v660 = __ROR4__(v653 ^ v657, 7);
            v661 = v659 + (v832 ^ 0x452821E6) + v648;
            v662 = __ROR4__(v650 ^ v658, 16);
            v663 = v660 + v1011 + v792;
            v664 = __ROR4__(v656 ^ v661, 16);
            v793 = v660;
            v665 = v657 + v662;
            v666 = v652 + v664;
            v667 = __ROR4__(v649 ^ v663, 16);
            v668 = v777 + (v865 ^ 0x243F6A88) + v654;
            v817 = v665;
            v669 = __ROR4__(v651 ^ v668, 16);
            v670 = __ROR4__(v655 ^ v665, 12);
            v671 = __ROR4__(v659 ^ (v652 + v664), 12);
            v672 = v793;
            v794 = v803 + v669;
            v673 = __ROR4__(v777 ^ (v803 + v669), 12);
            v674 = v670 + v1046 + v658;
            v675 = __ROR4__(v672 ^ (v827 + v667), 12);
            v676 = v671 + (v866 ^ 0x34E90C6C) + v661;
            v778 = v674;
            v677 = v675 + v1012 + v663;
            v678 = v662 ^ v674;
            v679 = v664 ^ v676;
            v680 = __ROR4__(v678, 8);
            v681 = v673 + (v838 ^ 0xC0AC29B7) + v668;
            v682 = __ROR4__(v679, 8);
            v683 = v666 + v682;
            v818 = v817 + v680;
            v684 = __ROR4__(v667 ^ v677, 8);
            v685 = __ROR4__(v669 ^ v681, 8);
            v804 = v827 + v667 + v684;
            v686 = v673 ^ (v794 + v685);
            v795 = v794 + v685;
            v687 = __ROR4__(v670 ^ v818, 7);
            v688 = __ROR4__(v671 ^ v683, 7);
            v689 = v687 + v1047 + v677;
            v690 = __ROR4__(v686, 7);
            v691 = __ROR4__(v675 ^ v804, 7);
            v692 = v688 + v1014 + v778;
            v693 = __ROR4__(v685 ^ v689, 16);
            v694 = v690 + v999 + v676;
            v695 = v683 + v693;
            v828 = v691 + v915 + v681;
            v696 = __ROR4__(v680 ^ v694, 16);
            v697 = __ROR4__(v684 ^ v692, 16);
            v698 = __ROR4__(v682 ^ v828, 16);
            v699 = __ROR4__(v687 ^ v695, 12);
            v796 = v795 + v697;
            v700 = v804 + v696;
            v701 = __ROR4__(v690 ^ (v804 + v696), 12);
            v805 = v818 + v698;
            v702 = __ROR4__(v691 ^ (v818 + v698), 12);
            v703 = v699 + v1048 + v689;
            v704 = __ROR4__(v688 ^ v796, 12);
            v705 = v1015 + v692 + v704;
            v779 = __ROR4__(v693 ^ v703, 8);
            v706 = __ROR4__(v697 ^ v705, 8);
            v707 = v702 + (v882 ^ 0x3707344) + v828;
            v819 = v695 + v779;
            v708 = v699 ^ (v695 + v779);
            v709 = v701 + v998 + v694;
            v710 = v805;
            v711 = __ROR4__(v698 ^ v707, 8);
            v806 = v796 + v706;
            v712 = v710 + v711;
            v713 = __ROR4__(v704 ^ (v796 + v706), 7);
            v714 = __ROR4__(v702 ^ v712, 7);
            v715 = __ROR4__(v696 ^ v709, 8);
            v716 = v997 + v703 + v714;
            v717 = v700 + v715;
            v718 = v1016 + v709 + v713;
            v719 = __ROR4__(v708, 7);
            v797 = __ROR4__(v706 ^ v716, 16);
            v720 = (v832 ^ 0x3F84D5B5) + v719 + v705;
            v721 = __ROR4__(v701 ^ v717, 7);
            v722 = v779;
            v723 = __ROR4__(v711 ^ v718, 16);
            v724 = v721 + v1017 + v707;
            v780 = v819 + v723;
            v725 = v717 + v797;
            v726 = __ROR4__(v722 ^ v724, 16);
            v727 = __ROR4__(v715 ^ v720, 16);
            v807 = v806 + v726;
            v728 = v712 + v727;
            v820 = __ROR4__(v719 ^ v728, 12);
            v729 = __ROR4__(v713 ^ v780, 12);
            v730 = __ROR4__(v714 ^ v725, 12);
            v731 = v820 + v1051 + v720;
            v732 = __ROR4__(v721 ^ v807, 12);
            v733 = v1049 + v718 + v729;
            v734 = __ROR4__(v723 ^ v733, 8);
            v735 = __ROR4__(v727 ^ v731, 8);
            v736 = v780 + v734;
            v737 = v1050 + v724 + v732;
            v738 = v996 + v716 + v730;
            v739 = __ROR4__(v726 ^ v737, 8);
            v829 = v728 + v735;
            v740 = v807 + v739;
            v741 = __ROR4__(v732 ^ (v807 + v739), 7);
            v742 = __ROR4__(v797 ^ v738, 8);
            v743 = v1019 + v733 + v741;
            v744 = __ROR4__(v820 ^ v829, 7);
            v745 = v725 + v742;
            v746 = v744 + v1021 + v738;
            v781 = __ROR4__(v735 ^ v743, 16);
            v747 = __ROR4__(v730 ^ v745, 7);
            v748 = __ROR4__(v739 ^ v746, 16);
            v749 = v1036 + v737 + v747;
            v808 = v736 + v748;
            v750 = __ROR4__(v729 ^ v736, 7);
            v751 = __ROR4__(v734 ^ v749, 16);
            v752 = v750 + v1022 + v731;
            v821 = v745 + v781;
            v753 = __ROR4__(v742 ^ v752, 16);
            v754 = v740 + v753;
            v755 = __ROR4__(v744 ^ (v736 + v748), 12);
            v756 = __ROR4__(v741 ^ (v745 + v781), 12);
            v757 = __ROR4__(v750 ^ v754, 12);
            v758 = __ROR4__(v747 ^ (v829 + v751), 12);
            v423 = (v866 ^ 0xB5470917) + v752 + v757;
            v759 = v755 + (v838 ^ 0xA4093822) + v746;
            v424 = (v882 ^ 0x13198A2E) + v743 + v756;
            v760 = __ROR4__(v753 ^ v423, 8);
            v422 = v758 + v1002 + v749;
            v761 = v781 ^ v424;
            v428 = v754 + v760;
            v768 = v760;
            v762 = __ROR4__(v748 ^ v759, 8);
            v426 = __ROR4__(v761, 8);
            v862 = v759;
            v763 = __ROR4__(v751 ^ v422, 8);
            v877 = v762;
            v764 = v808 + v762;
            v427 = v829 + v751 + v763;
            v429 = __ROR4__(v755 ^ v764, 7);
            v430 = __ROR4__(v757 ^ v428, 7);
            v431 = __ROR4__(v756 ^ (v821 + v426), 7);
            v868 = v763;
            v854 = v764;
            v860 = v821 + v426;
            v783 = __ROR4__(v758 ^ v427, 7);
          }
          v900 ^= v854 ^ v424 ^ v1023;
          v899 ^= v422 ^ v916 ^ v428;
          v902 ^= v423 ^ v917 ^ v427;
          v903 ^= v860 ^ v1024 ^ v862;
          v898 ^= v868 ^ v430 ^ v1023;
          result = v896 ^ v1024 ^ v783;
          v3 = 0;
          v895 ^= v429 ^ v917 ^ v426;
          v897 ^= v877 ^ v431 ^ v916;
          v896 = v768 ^ result;
          if ( !n )
            break;
        }
        else if ( !n )
        {
          break;
        }
        v4 = 64 - v3;
      }
    }
    a1[16] = v3;
    a1[17] = v900;
    a1[18] = v899;
    a1[19] = v903;
    a1[20] = v902;
    a1[21] = v898;
    a1[22] = v897;
    a1[23] = v896;
    a1[24] = v895;
    a1[25] = v1023;
    a1[26] = v916;
    a1[27] = v1024;
    a1[28] = v917;
    a1[29] = v901;
    a1[30] = v918;
  }
  return result;
}
