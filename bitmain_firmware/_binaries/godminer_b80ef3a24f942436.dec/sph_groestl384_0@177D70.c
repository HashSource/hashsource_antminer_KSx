void *__fastcall sph_groestl384_0(int a1, char *a2, size_t a3)
{
  int v3; // r5
  size_t v4; // r4
  void *v5; // r0
  char *v6; // r1
  __int64 *v7; // r12
  _BYTE *v8; // lr
  int v9; // r5
  int *v10; // r4
  __int64 v11; // r0
  __int64 v12; // t1
  __int64 v13; // t1
  __int64 v14; // r4
  __int64 v15; // r4
  __int64 v16; // r2
  _QWORD *v17; // r12
  int v18; // d16.s[0]
  __int64 v19; // r8
  __int64 v20; // r0
  __int64 v21; // r10
  __int64 v22; // r6
  __int64 v23; // r2
  __int64 v24; // r8
  __int64 v25; // r2
  unsigned __int64 v26; // r6
  __int64 v27; // r0
  __int64 v28; // r4
  _QWORD *v29; // lr
  __int64 v30; // r2
  __int64 v31; // r8
  __int64 v32; // r6
  __int64 v33; // r8
  bool v34; // cf
  __int64 v35; // r4
  __int64 v36; // r8
  __int64 v37; // r6
  __int64 v38; // r2
  __int64 v39; // r2
  int v40; // r5
  int v41; // r3
  int v42; // r9
  int v43; // r0
  unsigned __int8 v44; // r1^1
  __int64 v45; // r8
  __int64 v46; // r2
  __int64 v47; // r6
  __int64 v48; // r2
  __int64 v49; // r6
  __int64 v50; // r2
  __int64 v51; // r0
  __int64 v52; // r8
  _QWORD *v53; // lr
  __int64 v54; // r4
  __int64 v55; // r2
  __int64 v56; // r6
  __int64 v57; // r4
  __int64 v58; // r2
  __int64 v59; // r2
  __int64 v60; // r6
  __int64 v61; // r6
  __int64 v62; // r2
  int v63; // r11
  __int64 v64; // r0
  __int64 v65; // r2
  __int64 v66; // r10
  int v67; // d16.s[0]
  __int64 v68; // r2
  __int64 v69; // r0
  __int64 v70; // r4
  __int64 v71; // r2
  __int64 v72; // r2
  __int64 v73; // r4
  __int64 v74; // r2
  __int64 v75; // r6
  __int64 v76; // r4
  _QWORD *v77; // lr
  __int64 v78; // r8
  __int64 v79; // r4
  __int64 v80; // r6
  __int64 v81; // r2
  __int64 v82; // r4
  __int64 v83; // r8
  __int64 v84; // r2
  __int64 v85; // r8
  __int64 v86; // r4
  __int64 v87; // r2
  __int64 v88; // r0
  __int64 v89; // r0
  __int64 v90; // r8
  __int64 v91; // r6
  __int64 v92; // r2
  _QWORD *v93; // r12
  __int64 v94; // r2
  __int64 *v95; // lr
  __int64 v96; // r4
  __int64 v97; // r4
  _QWORD *v98; // r12
  __int64 v99; // r6
  __int64 v100; // r0
  __int64 v101; // r4
  __int64 v102; // r4
  __int64 v103; // r0
  __int64 v104; // r10
  _QWORD *v105; // lr
  __int64 v106; // r0
  __int64 v107; // r6
  bool v108; // zf
  __int64 v109; // r2
  __int64 v110; // r10
  __int64 *v111; // r2
  __int64 *v112; // r3
  __int64 v113; // r6
  int v114; // r1
  __int64 v115; // r8
  __int64 v116; // t1
  __int64 v117; // t1
  __int64 v118; // t1
  void *result; // r0
  _QWORD *v122; // [sp+8h] [bp-3E4h]
  __int64 v123; // [sp+8h] [bp-3E4h]
  __int64 v124; // [sp+8h] [bp-3E4h]
  __int64 v125; // [sp+8h] [bp-3E4h]
  __int64 v126; // [sp+8h] [bp-3E4h]
  unsigned __int64 v127; // [sp+10h] [bp-3DCh]
  __int64 v128; // [sp+10h] [bp-3DCh]
  __int64 v129; // [sp+10h] [bp-3DCh]
  __int64 v130; // [sp+10h] [bp-3DCh]
  __int64 v131; // [sp+10h] [bp-3DCh]
  __int64 v132; // [sp+18h] [bp-3D4h]
  __int64 v133; // [sp+18h] [bp-3D4h]
  __int64 v134; // [sp+18h] [bp-3D4h]
  __int64 v135; // [sp+18h] [bp-3D4h]
  __int64 v136; // [sp+18h] [bp-3D4h]
  __int64 v137; // [sp+18h] [bp-3D4h]
  __int64 v138; // [sp+18h] [bp-3D4h]
  __int64 v139; // [sp+20h] [bp-3CCh]
  __int64 v140; // [sp+20h] [bp-3CCh]
  __int64 v141; // [sp+20h] [bp-3CCh]
  int v142; // [sp+20h] [bp-3CCh]
  __int64 v143; // [sp+20h] [bp-3CCh]
  unsigned int v144; // [sp+24h] [bp-3C8h]
  __int64 v145; // [sp+28h] [bp-3C4h]
  __int64 v146; // [sp+28h] [bp-3C4h]
  __int64 v147; // [sp+28h] [bp-3C4h]
  __int64 v148; // [sp+28h] [bp-3C4h]
  int v149; // [sp+28h] [bp-3C4h]
  __int64 v150; // [sp+28h] [bp-3C4h]
  __int64 v151; // [sp+28h] [bp-3C4h]
  unsigned int v152; // [sp+2Ch] [bp-3C0h]
  __int64 v153; // [sp+30h] [bp-3BCh]
  __int64 v154; // [sp+30h] [bp-3BCh]
  __int64 v155; // [sp+30h] [bp-3BCh]
  __int64 v156; // [sp+30h] [bp-3BCh]
  int v157; // [sp+30h] [bp-3BCh]
  __int64 v158; // [sp+30h] [bp-3BCh]
  __int64 v159; // [sp+30h] [bp-3BCh]
  unsigned int v160; // [sp+34h] [bp-3B8h]
  __int64 v161; // [sp+38h] [bp-3B4h]
  __int64 v162; // [sp+38h] [bp-3B4h]
  __int64 v163; // [sp+38h] [bp-3B4h]
  __int64 v164; // [sp+38h] [bp-3B4h]
  __int64 v165; // [sp+38h] [bp-3B4h]
  __int64 v166; // [sp+40h] [bp-3ACh]
  __int64 v167; // [sp+40h] [bp-3ACh]
  __int64 v168; // [sp+40h] [bp-3ACh]
  __int64 v169; // [sp+40h] [bp-3ACh]
  int v170; // [sp+40h] [bp-3ACh]
  __int64 v171; // [sp+40h] [bp-3ACh]
  __int64 v172; // [sp+40h] [bp-3ACh]
  __int64 v173; // [sp+40h] [bp-3ACh]
  int v174; // [sp+44h] [bp-3A8h]
  unsigned int v175; // [sp+44h] [bp-3A8h]
  __int64 v176; // [sp+48h] [bp-3A4h]
  __int64 v177; // [sp+48h] [bp-3A4h]
  __int64 v178; // [sp+48h] [bp-3A4h]
  int v179; // [sp+48h] [bp-3A4h]
  __int64 v180; // [sp+48h] [bp-3A4h]
  __int64 v181; // [sp+48h] [bp-3A4h]
  __int64 v182; // [sp+48h] [bp-3A4h]
  unsigned int v183; // [sp+4Ch] [bp-3A0h]
  __int64 v184; // [sp+50h] [bp-39Ch]
  __int64 v185; // [sp+50h] [bp-39Ch]
  __int64 v186; // [sp+50h] [bp-39Ch]
  __int64 v187; // [sp+50h] [bp-39Ch]
  __int64 v188; // [sp+50h] [bp-39Ch]
  __int64 v189; // [sp+50h] [bp-39Ch]
  __int64 v190; // [sp+50h] [bp-39Ch]
  __int64 v191; // [sp+58h] [bp-394h]
  __int64 v192; // [sp+58h] [bp-394h]
  __int64 v193; // [sp+58h] [bp-394h]
  int v194; // [sp+58h] [bp-394h]
  unsigned __int64 v195; // [sp+58h] [bp-394h]
  __int64 v196; // [sp+58h] [bp-394h]
  unsigned int v197; // [sp+5Ch] [bp-390h]
  int v198; // [sp+5Ch] [bp-390h]
  __int64 v199; // [sp+60h] [bp-38Ch]
  __int64 v200; // [sp+60h] [bp-38Ch]
  int v201; // [sp+60h] [bp-38Ch]
  __int64 v202; // [sp+60h] [bp-38Ch]
  __int64 v203; // [sp+60h] [bp-38Ch]
  int v204; // [sp+64h] [bp-388h]
  unsigned int v205; // [sp+64h] [bp-388h]
  __int64 v206; // [sp+68h] [bp-384h]
  __int64 v207; // [sp+68h] [bp-384h]
  __int64 v208; // [sp+68h] [bp-384h]
  __int64 v209; // [sp+68h] [bp-384h]
  __int64 v210; // [sp+68h] [bp-384h]
  _QWORD *v211; // [sp+68h] [bp-384h]
  __int64 v212; // [sp+70h] [bp-37Ch]
  __int64 v213; // [sp+70h] [bp-37Ch]
  __int64 v214; // [sp+70h] [bp-37Ch]
  unsigned __int64 v215; // [sp+70h] [bp-37Ch]
  __int64 v216; // [sp+78h] [bp-374h]
  __int64 v217; // [sp+78h] [bp-374h]
  __int64 v218; // [sp+78h] [bp-374h]
  __int64 v219; // [sp+78h] [bp-374h]
  __int64 v220; // [sp+78h] [bp-374h]
  __int64 v221; // [sp+78h] [bp-374h]
  __int64 v222; // [sp+80h] [bp-36Ch]
  __int64 v223; // [sp+80h] [bp-36Ch]
  __int64 v224; // [sp+80h] [bp-36Ch]
  __int64 v225; // [sp+80h] [bp-36Ch]
  __int64 v226; // [sp+80h] [bp-36Ch]
  __int64 v227; // [sp+88h] [bp-364h]
  __int64 v228; // [sp+88h] [bp-364h]
  __int64 v229; // [sp+88h] [bp-364h]
  unsigned int v230; // [sp+8Ch] [bp-360h]
  __int64 v231; // [sp+90h] [bp-35Ch]
  __int64 v232; // [sp+90h] [bp-35Ch]
  __int64 v233; // [sp+90h] [bp-35Ch]
  int v234; // [sp+90h] [bp-35Ch]
  __int64 v235; // [sp+90h] [bp-35Ch]
  unsigned int v236; // [sp+94h] [bp-358h]
  __int64 v237; // [sp+98h] [bp-354h]
  __int64 v238; // [sp+98h] [bp-354h]
  _QWORD *v239; // [sp+98h] [bp-354h]
  __int64 v240; // [sp+98h] [bp-354h]
  int v241; // [sp+98h] [bp-354h]
  __int64 v242; // [sp+98h] [bp-354h]
  __int64 v243; // [sp+98h] [bp-354h]
  unsigned int v244; // [sp+9Ch] [bp-350h]
  __int64 v245; // [sp+A0h] [bp-34Ch]
  _QWORD *v246; // [sp+A0h] [bp-34Ch]
  __int64 v247; // [sp+A0h] [bp-34Ch]
  __int64 v248; // [sp+A0h] [bp-34Ch]
  __int64 v249; // [sp+A0h] [bp-34Ch]
  __int64 v250; // [sp+A8h] [bp-344h]
  __int64 v251; // [sp+A8h] [bp-344h]
  __int64 v252; // [sp+A8h] [bp-344h]
  __int64 v253; // [sp+A8h] [bp-344h]
  _QWORD *v254; // [sp+A8h] [bp-344h]
  __int64 v255; // [sp+B0h] [bp-33Ch]
  __int64 v256; // [sp+B0h] [bp-33Ch]
  __int64 v257; // [sp+B0h] [bp-33Ch]
  int v258; // [sp+B0h] [bp-33Ch]
  unsigned int v259; // [sp+B4h] [bp-338h]
  __int64 v260; // [sp+B8h] [bp-334h]
  _QWORD *v261; // [sp+B8h] [bp-334h]
  __int64 v262; // [sp+B8h] [bp-334h]
  int v263; // [sp+BCh] [bp-330h]
  __int64 v264; // [sp+C0h] [bp-32Ch]
  _DWORD *v265; // [sp+C0h] [bp-32Ch]
  _QWORD *v266; // [sp+C0h] [bp-32Ch]
  __int64 v267; // [sp+C8h] [bp-324h]
  _QWORD *v268; // [sp+C8h] [bp-324h]
  _QWORD *v269; // [sp+C8h] [bp-324h]
  _QWORD *v270; // [sp+C8h] [bp-324h]
  _QWORD *v271; // [sp+C8h] [bp-324h]
  _QWORD *v272; // [sp+C8h] [bp-324h]
  __int64 v273; // [sp+D0h] [bp-31Ch]
  __int64 v274; // [sp+D8h] [bp-314h]
  _QWORD *v275; // [sp+D8h] [bp-314h]
  unsigned int v276; // [sp+DCh] [bp-310h]
  _QWORD *v277; // [sp+E0h] [bp-30Ch]
  _QWORD *v278; // [sp+E0h] [bp-30Ch]
  _QWORD *v279; // [sp+E0h] [bp-30Ch]
  _QWORD *v280; // [sp+E0h] [bp-30Ch]
  unsigned int v281; // [sp+E4h] [bp-308h]
  _QWORD *v282; // [sp+E8h] [bp-304h]
  int v283; // [sp+E8h] [bp-304h]
  _QWORD *v284; // [sp+E8h] [bp-304h]
  _QWORD *v285; // [sp+E8h] [bp-304h]
  unsigned int v286; // [sp+ECh] [bp-300h]
  unsigned int v287; // [sp+ECh] [bp-300h]
  _QWORD *v288; // [sp+F0h] [bp-2FCh]
  _QWORD *v289; // [sp+F0h] [bp-2FCh]
  _QWORD *v290; // [sp+F0h] [bp-2FCh]
  __int64 *v291; // [sp+F0h] [bp-2FCh]
  _QWORD *v292; // [sp+F0h] [bp-2FCh]
  int v293; // [sp+F4h] [bp-2F8h]
  _QWORD *v294; // [sp+F8h] [bp-2F4h]
  __int64 v295; // [sp+F8h] [bp-2F4h]
  _QWORD *v296; // [sp+F8h] [bp-2F4h]
  unsigned int v297; // [sp+FCh] [bp-2F0h]
  int v298; // [sp+FCh] [bp-2F0h]
  _QWORD *v299; // [sp+100h] [bp-2ECh]
  _QWORD *v300; // [sp+100h] [bp-2ECh]
  _QWORD *v301; // [sp+100h] [bp-2ECh]
  _QWORD *v302; // [sp+100h] [bp-2ECh]
  unsigned int v303; // [sp+104h] [bp-2E8h]
  _DWORD *v304; // [sp+108h] [bp-2E4h]
  _QWORD *v305; // [sp+108h] [bp-2E4h]
  _QWORD *v306; // [sp+108h] [bp-2E4h]
  _QWORD *v307; // [sp+110h] [bp-2DCh]
  _QWORD *v308; // [sp+110h] [bp-2DCh]
  _QWORD *v309; // [sp+110h] [bp-2DCh]
  _QWORD *v310; // [sp+118h] [bp-2D4h]
  _QWORD *v311; // [sp+118h] [bp-2D4h]
  _DWORD *v312; // [sp+118h] [bp-2D4h]
  _QWORD *v313; // [sp+118h] [bp-2D4h]
  _QWORD *v314; // [sp+128h] [bp-2C4h]
  _QWORD *v315; // [sp+128h] [bp-2C4h]
  _QWORD *v316; // [sp+128h] [bp-2C4h]
  _QWORD *v317; // [sp+128h] [bp-2C4h]
  _QWORD *v318; // [sp+130h] [bp-2BCh]
  _QWORD *v319; // [sp+130h] [bp-2BCh]
  _QWORD *v320; // [sp+130h] [bp-2BCh]
  _QWORD *v321; // [sp+138h] [bp-2B4h]
  _QWORD *v322; // [sp+138h] [bp-2B4h]
  _QWORD *v323; // [sp+138h] [bp-2B4h]
  _QWORD *v324; // [sp+138h] [bp-2B4h]
  _QWORD *v325; // [sp+138h] [bp-2B4h]
  _QWORD *v326; // [sp+140h] [bp-2ACh]
  _QWORD *v327; // [sp+140h] [bp-2ACh]
  _QWORD *v328; // [sp+148h] [bp-2A4h]
  _QWORD *v329; // [sp+148h] [bp-2A4h]
  _QWORD *v330; // [sp+148h] [bp-2A4h]
  _QWORD *v331; // [sp+150h] [bp-29Ch]
  _QWORD *v332; // [sp+150h] [bp-29Ch]
  _QWORD *v333; // [sp+150h] [bp-29Ch]
  _QWORD *v334; // [sp+150h] [bp-29Ch]
  _QWORD *v335; // [sp+158h] [bp-294h]
  _QWORD *v336; // [sp+158h] [bp-294h]
  _QWORD *v337; // [sp+158h] [bp-294h]
  _QWORD *v338; // [sp+158h] [bp-294h]
  _QWORD *v339; // [sp+160h] [bp-28Ch]
  _QWORD *v340; // [sp+160h] [bp-28Ch]
  _QWORD *v341; // [sp+160h] [bp-28Ch]
  int v342; // [sp+160h] [bp-28Ch]
  _QWORD *v343; // [sp+160h] [bp-28Ch]
  _QWORD *v344; // [sp+160h] [bp-28Ch]
  _QWORD *v345; // [sp+168h] [bp-284h]
  _DWORD *v346; // [sp+168h] [bp-284h]
  _QWORD *v347; // [sp+168h] [bp-284h]
  _QWORD *v348; // [sp+170h] [bp-27Ch]
  _QWORD *v349; // [sp+178h] [bp-274h]
  _QWORD *v350; // [sp+178h] [bp-274h]
  _QWORD *v351; // [sp+178h] [bp-274h]
  _QWORD *v352; // [sp+178h] [bp-274h]
  _QWORD *v353; // [sp+180h] [bp-26Ch]
  _QWORD *v354; // [sp+180h] [bp-26Ch]
  _QWORD *v355; // [sp+180h] [bp-26Ch]
  _QWORD *v356; // [sp+180h] [bp-26Ch]
  _QWORD *v357; // [sp+188h] [bp-264h]
  _QWORD *v358; // [sp+188h] [bp-264h]
  _QWORD *v359; // [sp+188h] [bp-264h]
  _QWORD *v360; // [sp+190h] [bp-25Ch]
  _QWORD *v361; // [sp+190h] [bp-25Ch]
  _DWORD *v362; // [sp+190h] [bp-25Ch]
  _QWORD *v363; // [sp+190h] [bp-25Ch]
  _QWORD *v364; // [sp+198h] [bp-254h]
  _QWORD *v365; // [sp+198h] [bp-254h]
  _QWORD *v366; // [sp+198h] [bp-254h]
  _QWORD *v367; // [sp+198h] [bp-254h]
  _QWORD *v368; // [sp+1A0h] [bp-24Ch]
  _QWORD *v369; // [sp+1A0h] [bp-24Ch]
  _QWORD *v370; // [sp+1A0h] [bp-24Ch]
  _QWORD *v371; // [sp+1A8h] [bp-244h]
  _QWORD *v372; // [sp+1A8h] [bp-244h]
  _QWORD *v373; // [sp+1A8h] [bp-244h]
  _QWORD *v374; // [sp+1A8h] [bp-244h]
  _DWORD *v375; // [sp+1B0h] [bp-23Ch]
  _QWORD *v376; // [sp+1B0h] [bp-23Ch]
  _QWORD *v377; // [sp+1B8h] [bp-234h]
  _QWORD *v378; // [sp+1B8h] [bp-234h]
  _QWORD *v379; // [sp+1B8h] [bp-234h]
  _QWORD *v380; // [sp+1B8h] [bp-234h]
  _QWORD *v381; // [sp+1C0h] [bp-22Ch]
  _QWORD *v382; // [sp+1C8h] [bp-224h]
  size_t n; // [sp+1D0h] [bp-21Ch]
  _QWORD *v384; // [sp+1D4h] [bp-218h]
  _QWORD *v385; // [sp+1D4h] [bp-218h]
  _QWORD *v386; // [sp+1D8h] [bp-214h]
  _QWORD *v387; // [sp+1E0h] [bp-20Ch]
  _QWORD *v388; // [sp+1E0h] [bp-20Ch]
  _QWORD *v389; // [sp+1E8h] [bp-204h]
  _QWORD *v390; // [sp+1F0h] [bp-1FCh]
  _QWORD *v391; // [sp+1F0h] [bp-1FCh]
  _QWORD *v392; // [sp+1F0h] [bp-1FCh]
  _QWORD *v393; // [sp+1F8h] [bp-1F4h]
  _QWORD *v394; // [sp+1F8h] [bp-1F4h]
  _QWORD *v395; // [sp+200h] [bp-1ECh]
  _QWORD *v396; // [sp+200h] [bp-1ECh]
  _QWORD *v397; // [sp+200h] [bp-1ECh]
  _QWORD *v398; // [sp+208h] [bp-1E4h]
  _QWORD *v399; // [sp+208h] [bp-1E4h]
  _QWORD *v400; // [sp+210h] [bp-1DCh]
  _QWORD *v401; // [sp+210h] [bp-1DCh]
  _QWORD *v402; // [sp+214h] [bp-1D8h]
  _QWORD *v403; // [sp+218h] [bp-1D4h]
  _QWORD *v404; // [sp+21Ch] [bp-1D0h]
  _QWORD *v405; // [sp+220h] [bp-1CCh]
  _QWORD *v406; // [sp+220h] [bp-1CCh]
  _QWORD *v407; // [sp+220h] [bp-1CCh]
  _QWORD *v408; // [sp+224h] [bp-1C8h]
  _QWORD *v409; // [sp+228h] [bp-1C4h]
  _QWORD *v410; // [sp+228h] [bp-1C4h]
  _QWORD *v411; // [sp+22Ch] [bp-1C0h]
  _QWORD *v412; // [sp+22Ch] [bp-1C0h]
  _QWORD *v413; // [sp+230h] [bp-1BCh]
  _QWORD *v414; // [sp+234h] [bp-1B8h]
  _QWORD *v415; // [sp+234h] [bp-1B8h]
  _QWORD *v416; // [sp+238h] [bp-1B4h]
  _QWORD *v417; // [sp+23Ch] [bp-1B0h]
  _QWORD *v418; // [sp+240h] [bp-1ACh]
  _QWORD *v419; // [sp+240h] [bp-1ACh]
  _QWORD *v420; // [sp+240h] [bp-1ACh]
  _QWORD *v421; // [sp+244h] [bp-1A8h]
  _QWORD *v422; // [sp+244h] [bp-1A8h]
  _QWORD *v423; // [sp+244h] [bp-1A8h]
  _QWORD *v424; // [sp+244h] [bp-1A8h]
  _QWORD *v425; // [sp+248h] [bp-1A4h]
  _QWORD *v426; // [sp+248h] [bp-1A4h]
  _QWORD *v427; // [sp+248h] [bp-1A4h]
  _QWORD *v428; // [sp+24Ch] [bp-1A0h]
  char *src; // [sp+258h] [bp-194h]
  int v431; // [sp+260h] [bp-18Ch] BYREF
  void *v432; // [sp+264h] [bp-188h]
  _BYTE dest[128]; // [sp+268h] [bp-184h] BYREF
  __int64 v434; // [sp+2E8h] [bp-104h]
  __int64 v435; // [sp+2F0h] [bp-FCh] BYREF
  __int64 v436; // [sp+2F8h] [bp-F4h]
  __int64 v437; // [sp+300h] [bp-ECh]
  __int64 v438; // [sp+308h] [bp-E4h]
  __int64 v439; // [sp+310h] [bp-DCh]
  __int64 v440; // [sp+318h] [bp-D4h]
  __int64 v441; // [sp+320h] [bp-CCh]
  __int64 v442; // [sp+328h] [bp-C4h]
  __int64 v443; // [sp+330h] [bp-BCh]
  __int64 v444; // [sp+338h] [bp-B4h]
  __int64 v445; // [sp+340h] [bp-ACh]
  __int64 v446; // [sp+348h] [bp-A4h]
  __int64 v447; // [sp+350h] [bp-9Ch]
  __int64 v448; // [sp+358h] [bp-94h]
  __int64 v449; // [sp+360h] [bp-8Ch] BYREF
  __int64 v450; // [sp+368h] [bp-84h]
  __int64 v451; // [sp+370h] [bp-7Ch] BYREF
  __int64 v452; // [sp+378h] [bp-74h]
  __int64 v453; // [sp+380h] [bp-6Ch]
  __int64 v454; // [sp+388h] [bp-64h]
  __int64 v455; // [sp+390h] [bp-5Ch]
  __int64 v456; // [sp+398h] [bp-54h]
  __int64 v457; // [sp+3A0h] [bp-4Ch]
  __int64 v458; // [sp+3A8h] [bp-44h]
  __int64 v459; // [sp+3B0h] [bp-3Ch]
  __int64 v460; // [sp+3B8h] [bp-34h]
  __int64 v461; // [sp+3C0h] [bp-2Ch]
  __int64 v462; // [sp+3C8h] [bp-24h]
  __int64 v463; // [sp+3D0h] [bp-1Ch]
  __int64 v464; // [sp+3D8h] [bp-14h]
  __int64 v465; // [sp+3E0h] [bp-Ch] BYREF

  v3 = *(_DWORD *)(a1 + 128);
  v4 = 128 - v3;
  n = a3;
  src = a2;
  if ( 128 - v3 > a3 )
  {
    result = memcpy((void *)(a1 + v3), a2, a3);
    *(_DWORD *)(a1 + 128) = v3 + a3;
  }
  else
  {
    v432 = (void *)(a1 + 136);
    memcpy(dest, (const void *)(a1 + 136), sizeof(dest));
    if ( n )
    {
      v122 = qword_2A91A0;
      while ( 1 )
      {
        if ( n < v4 )
          v4 = n;
        v5 = (void *)(a1 + v3);
        v6 = src;
        v3 += v4;
        n -= v4;
        src += v4;
        memcpy(v5, v6, v4);
        if ( v3 == 128 )
        {
          v7 = &v449;
          v8 = &dest[120];
          v9 = a1 - 8;
          v10 = &v431;
          v431 = (int)&v431;
          do
          {
            v12 = *(_QWORD *)(v9 + 8);
            v9 += 8;
            v11 = v12;
            v13 = *((_QWORD *)v10 + 1);
            v10 += 2;
            v7[1] = v11;
            ++v7;
            *((_QWORD *)v8 + 1) = v13 ^ v11;
            v8 += 8;
          }
          while ( &v465 != v7 );
          v273 = v434;
          v127 = 0;
          v199 = v435;
          v206 = v436;
          v212 = v437;
          v145 = v438;
          v153 = v439;
          v161 = v440;
          v166 = v441;
          v176 = v442;
          v184 = v443;
          v191 = v444;
          v216 = v445;
          v222 = v447;
          v227 = v448;
          v250 = v449;
          v255 = v446;
          do
          {
            v231 = v199 ^ (v127 + 16);
            v139 = v206 ^ (v127 + 32);
            v237 = v212 ^ (v127 + 48);
            v245 = v145 ^ (v127 + 64);
            v146 = v153 ^ (v127 + 80);
            v154 = v161 ^ (v127 + 96);
            v162 = v166 ^ (v127 + 112);
            v167 = v176 ^ (v127 + 128);
            v177 = v184 ^ (v127 + 144);
            v14 = v191 ^ (v127 + 160);
            v192 = v216 ^ (v127 + 176);
            v200 = v255 ^ (v127 + 192);
            v207 = (v127 + 208) ^ v222;
            v217 = v250 ^ (v127 + 240);
            v213 = (v127 + 224) ^ v227;
            v371 = &qword_2AC1A0[BYTE5(v14)];
            v353 = &qword_2AC9A0[BYTE6(v14)];
            v384 = &qword_2AB198[((unsigned int)v184 ^ ((_DWORD)v127 + 144)) >> 24];
            v393 = &qword_2AB198[BYTE3(v14)];
            v400 = &qword_2AA9A8[BYTE2(v14)];
            v185 = v14;
            v223 = qword_2AB198[BYTE3(v237) + 1]
                 ^ qword_2AA1A8[BYTE1(v231) - 1]
                 ^ (v127 + 1)
                 ^ v122[(unsigned __int8)(v273 ^ v127)]
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v192))]
                 ^ qword_2AA9A8[BYTE2(v139) - 1]
                 ^ qword_2AB9A8[BYTE4(v245) - 1]
                 ^ qword_2AC1A0[BYTE5(v146)]
                 ^ qword_2AC9A0[BYTE6(v154)];
            v405 = &qword_2AA1A8[BYTE1(v14)];
            v277 = &qword_2AB198[((unsigned int)v255 ^ ((_DWORD)v127 + 192)) >> 24];
            v15 = qword_2AC1A0[BYTE5(v154)];
            v16 = (v127 + 17)
                ^ v122[(unsigned __int8)v231]
                ^ qword_2A99A0[HIBYTE(HIDWORD(v200))]
                ^ qword_2AA1A8[BYTE1(v139) - 1]
                ^ qword_2AA9A8[BYTE2(v237) - 1]
                ^ qword_2AB198[BYTE3(v245) + 1]
                ^ qword_2AB9A8[BYTE4(v146) - 1]
                ^ (unsigned int)v15;
            HIDWORD(v16) = (((v127 + 17)
                           ^ v122[(unsigned __int8)v231]
                           ^ qword_2A99A0[HIBYTE(HIDWORD(v200))]
                           ^ qword_2AA1A8[BYTE1(v139) - 1]
                           ^ qword_2AA9A8[BYTE2(v237) - 1]
                           ^ qword_2AB198[BYTE3(v245) + 1]
                           ^ qword_2AB9A8[BYTE4(v146) - 1]) >> 32)
                         ^ HIDWORD(v15);
            v260 = v16 ^ qword_2AC9A0[BYTE6(v162)];
            v228 = (v127 + 33)
                 ^ v122[(unsigned __int8)v139]
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v207))]
                 ^ qword_2AA1A8[BYTE1(v237) - 1]
                 ^ qword_2AA9A8[BYTE2(v245) - 1]
                 ^ qword_2AB198[BYTE3(v146) + 1]
                 ^ qword_2AB9A8[BYTE4(v154) - 1]
                 ^ qword_2AC1A0[BYTE5(v162)]
                 ^ qword_2AC9A0[BYTE6(v167)];
            v314 = &qword_2AC9A0[BYTE6(v231)];
            v417 = &qword_2AA1A8[BYTE1(v207)];
            v418 = &qword_2AA9A8[BYTE2(v213)];
            v251 = qword_2AA9A8[BYTE2(v146) - 1]
                 ^ (v127 + 49)
                 ^ v122[(unsigned __int8)v237]
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v213))]
                 ^ qword_2AA1A8[BYTE1(v245) - 1]
                 ^ qword_2AB198[BYTE3(v154) + 1]
                 ^ qword_2AB9A8[BYTE4(v162) - 1]
                 ^ qword_2AC1A0[BYTE5(v167)]
                 ^ qword_2AC9A0[BYTE6(v177)];
            v421 = &qword_2AB198[BYTE3(v217)];
            v335 = &qword_2AC9A0[BYTE6(v139)];
            v339 = &qword_2AC1A0[BYTE5(v231)];
            v425 = &qword_2AA1A8[BYTE1(v213)];
            v256 = qword_2AB198[BYTE3(v162) + 1]
                 ^ (v127 + 65)
                 ^ v122[(unsigned __int8)v245]
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v217))]
                 ^ qword_2AA1A8[BYTE1(v146) - 1]
                 ^ qword_2AA9A8[BYTE2(v154) - 1]
                 ^ qword_2AB9A8[BYTE4(v167) - 1]
                 ^ qword_2AC1A0[BYTE5(v177)]
                 ^ *v353;
            v310 = &qword_2A99A0[HIBYTE(HIDWORD(v154))];
            v264 = qword_2AA9A8[BYTE2(v162) - 1]
                 ^ qword_2AA1A8[BYTE1(v154) - 1]
                 ^ (v127 + 81)
                 ^ qword_2A99A0[(unsigned int)((v273 ^ v127) >> 32) >> 24]
                 ^ v122[(unsigned __int8)v146]
                 ^ qword_2AB198[BYTE3(v167) + 1]
                 ^ qword_2AB9A8[BYTE4(v177) - 1]
                 ^ *v371
                 ^ qword_2AC9A0[BYTE6(v192)];
            v331 = &qword_2A99A0[HIBYTE(HIDWORD(v162))];
            v267 = qword_2AA1A8[BYTE1(v162) - 1]
                 ^ (v127 + 97)
                 ^ v122[(unsigned __int8)v154]
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v231))]
                 ^ qword_2AA9A8[BYTE2(v167) - 1]
                 ^ v384[1]
                 ^ qword_2AB9A8[BYTE4(v185) - 1]
                 ^ qword_2AC1A0[BYTE5(v192)]
                 ^ qword_2AC9A0[BYTE6(v200)];
            v321 = &qword_2AB9A8[(unsigned __int8)((v273 ^ v127) >> 32)];
            v354 = &qword_2A99A0[HIBYTE(HIDWORD(v167))];
            v155 = (v127 + 113)
                 ^ v122[(unsigned __int8)v162]
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v139))]
                 ^ qword_2AA1A8[BYTE1(v167) - 1]
                 ^ qword_2AA9A8[BYTE2(v177) - 1]
                 ^ v393[1]
                 ^ qword_2AB9A8[BYTE4(v192) - 1]
                 ^ qword_2AC1A0[BYTE5(v200)]
                 ^ qword_2AC9A0[BYTE6(v207)];
            v17 = &qword_2A99A0[HIBYTE(HIDWORD(v146))];
            v390 = &qword_2AC9A0[BYTE6(v146)];
            v387 = &qword_2AA9A8[BYTE2(v231)];
            v377 = &qword_2AB198[BYTE3(v231)];
            v360 = &qword_2AB9A8[BYTE4(v231)];
            v147 = qword_2AB198[BYTE3(v192) + 1]
                 ^ (v127 + 129)
                 ^ v122[(unsigned __int8)v167]
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v237))]
                 ^ qword_2AA1A8[BYTE1(v177) - 1]
                 ^ *(v400 - 1)
                 ^ qword_2AB9A8[BYTE4(v200) - 1]
                 ^ qword_2AC1A0[BYTE5(v207)]
                 ^ qword_2AC9A0[BYTE6(v213)];
            v168 = qword_2AB9A8[BYTE4(v207) - 1];
            v299 = &qword_2AC1A0[BYTE5(v139)];
            v307 = &qword_2AC1A0[BYTE5(v237)];
            v232 = qword_2AB198[BYTE3(v213) + 1]
                 ^ qword_2AA9A8[BYTE2(v207) - 1]
                 ^ v122[(unsigned __int8)v192]
                 ^ qword_2AC1A0[(unsigned __int8)((unsigned __int16)((v273 ^ v127) >> 32) >> 8)]
                 ^ (v127 + 177)
                 ^ *v310
                 ^ qword_2AA1A8[BYTE1(v200) - 1];
            v18 = vshrd_n_u64(vdup_n_s8(HIDWORD(v237)).n64_u64[0], 0x38u);
            v19 = (v127 + 209)
                ^ qword_2AB198[(((unsigned int)v273 ^ (unsigned int)v127) >> 24) + 1]
                ^ v122[(unsigned __int8)v207]
                ^ *v354;
            v20 = qword_2AB198[BYTE3(v207) + 1]
                ^ qword_2AA9A8[BYTE2(v200) - 1]
                ^ qword_2AA1A8[BYTE1(v192) - 1]
                ^ *v17
                ^ (v127 + 161)
                ^ qword_2AC9A0[(unsigned __int8)((v273 ^ v127) >> 48)]
                ^ v122[(unsigned __int8)v185];
            v208 = qword_2AC9A0[BYTE6(v237)];
            v21 = qword_2AB9A8[BYTE4(v139) - 1]
                ^ v377[1]
                ^ qword_2AA1A8[BYTE1(v217) - 1]
                ^ qword_2A99A0[HIBYTE(HIDWORD(v177))]
                ^ (v127 + 225)
                ^ v122[(unsigned __int8)v213]
                ^ qword_2AA9A8[(unsigned __int8)(((unsigned int)v273 ^ (unsigned int)v127) >> 16) - 1];
            v238 = qword_2AC9A0[BYTE6(v245)];
            v132 = qword_2AC9A0[BYTE6(v217)]
                 ^ qword_2AC1A0[BYTE5(v213)]
                 ^ v168
                 ^ v277[1]
                 ^ (v127 + 145)
                 ^ v122[(unsigned __int8)v177]
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v245))]
                 ^ *(v405 - 1)
                 ^ qword_2AA9A8[BYTE2(v192) - 1];
            v163 = *v314 ^ qword_2AB9A8[BYTE4(v217) - 1] ^ v232;
            v169 = v421[1]
                 ^ *(v418 - 1)
                 ^ *(v417 - 1)
                 ^ (v127 + 193)
                 ^ *(v321 - 1)
                 ^ v122[(unsigned __int8)v200]
                 ^ *v331
                 ^ *v339
                 ^ *v335;
            v193 = *v390
                 ^ qword_2AC1A0[BYTE5(v245)]
                 ^ qword_2AB9A8[v18 - 1]
                 ^ qword_2AB198[BYTE3(v139) + 1]
                 ^ *(v387 - 1)
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v185))]
                 ^ (v127 + 241)
                 ^ v122[(unsigned __int8)v217]
                 ^ qword_2AA1A8[(unsigned __int8)((unsigned __int16)(v273 ^ v127) >> 8) - 1];
            v140 = qword_2AB9A8[BYTE4(v213) - 1] ^ v20 ^ qword_2AC1A0[BYTE5(v217)];
            v178 = v208 ^ *v299 ^ *(v360 - 1) ^ qword_2AA9A8[BYTE2(v217) - 1] ^ *(v425 - 1) ^ v19;
            v186 = v238 ^ *v307 ^ v21;
            v349 = &qword_2AB198[BYTE3(v147)];
            v364 = &qword_2AA9A8[BYTE2(v147)];
            v368 = &qword_2AB198[BYTE3(v132)];
            v378 = &qword_2AA1A8[BYTE1(v147)];
            v381 = &qword_2AA9A8[BYTE2(v132)];
            v388 = &qword_2AA1A8[BYTE1(v132)];
            v391 = &qword_2AB198[(*(_DWORD *)v314 ^ LODWORD(qword_2AB9A8[BYTE4(v217) - 1]) ^ (unsigned int)v232) >> 24];
            v398 = &qword_2AA9A8[BYTE2(v163)];
            v395 = &qword_2AB198[(*((_DWORD *)v421 + 2)
                                ^ *((_DWORD *)v418 - 2)
                                ^ *((_DWORD *)v417 - 2)
                                ^ ((_DWORD)v127 + 193)
                                ^ (unsigned int)(*((_DWORD *)v321 - 2) ^ LODWORD(v122[(unsigned __int8)v200]))
                                ^ *(_DWORD *)v331
                                ^ *(_DWORD *)v339
                                ^ *(_DWORD *)v335) >> 24];
            v403 = &qword_2AA1A8[BYTE1(v163)];
            v127 += 2LL;
            v404 = &qword_2AA9A8[BYTE2(v169)];
            v406 = &qword_2AB198[((unsigned int)v208
                                ^ *(_DWORD *)v299
                                ^ *((_DWORD *)v360 - 2)
                                ^ LODWORD(qword_2AA9A8[BYTE2(v217) - 1])
                                ^ *((_DWORD *)v425 - 2)
                                ^ (unsigned int)v19) >> 24];
            v411 = &qword_2AA1A8[BYTE1(v169)];
            v22 = qword_2AA9A8[BYTE2(v228) - 1];
            v23 = qword_2AA1A8[BYTE1(v260) - 1]
                ^ qword_2AC1A0[BYTE5(v264)]
                ^ qword_2A99A0[HIBYTE(HIDWORD(v163))]
                ^ v122[(unsigned __int8)v223]
                ^ (unsigned int)v22;
            HIDWORD(v23) = ((qword_2AA1A8[BYTE1(v260) - 1]
                           ^ qword_2AC1A0[BYTE5(v264)]
                           ^ qword_2A99A0[HIBYTE(HIDWORD(v163))]
                           ^ v122[(unsigned __int8)v223]) >> 32)
                         ^ HIDWORD(v22);
            v24 = v23 ^ qword_2AB198[BYTE3(v251) + 1];
            v413 = &qword_2AA9A8[BYTE2(v178)];
            v414 = &qword_2AB198[((unsigned int)v238 ^ *(_DWORD *)v307 ^ (unsigned int)v21) >> 24];
            v273 = v24 ^ qword_2AB9A8[BYTE4(v256) - 1] ^ qword_2AC9A0[BYTE6(v267)];
            v25 = v122[(unsigned __int8)v260];
            v26 = qword_2AB9A8[BYTE4(v264) - 1];
            v27 = qword_2AA9A8[BYTE2(v251) - 1];
            v28 = qword_2AA1A8[BYTE1(v228) - 1] ^ v25 ^ v26 ^ qword_2A99A0[HIBYTE(HIDWORD(v169))] ^ (unsigned int)v27;
            HIDWORD(v28) = ((qword_2AA1A8[BYTE1(v228) - 1] ^ v25 ^ v26 ^ qword_2A99A0[HIBYTE(HIDWORD(v169))]) >> 32)
                         ^ HIDWORD(v27);
            v426 = &qword_2AA1A8[BYTE1(v223)];
            v419 = &qword_2AA9A8[BYTE2(v223)];
            v199 = qword_2AB198[BYTE3(v256) + 1] ^ v28 ^ qword_2AC1A0[BYTE5(v267)] ^ qword_2AC9A0[BYTE6(v155)];
            v206 = qword_2AA1A8[BYTE1(v251) - 1]
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v178))]
                 ^ v122[(unsigned __int8)v228]
                 ^ qword_2AB198[BYTE3(v264) + 1]
                 ^ qword_2AA9A8[BYTE2(v256) - 1]
                 ^ qword_2AB9A8[BYTE4(v267) - 1]
                 ^ qword_2AC1A0[BYTE5(v155)]
                 ^ qword_2AC9A0[BYTE6(v147)];
            v318 = &qword_2AB9A8[BYTE4(v223)];
            v212 = qword_2A99A0[HIBYTE(HIDWORD(v186))]
                 ^ v122[(unsigned __int8)v251]
                 ^ qword_2AA9A8[BYTE2(v264) - 1]
                 ^ qword_2AA1A8[BYTE1(v256) - 1]
                 ^ qword_2AB198[BYTE3(v267) + 1]
                 ^ qword_2AB9A8[BYTE4(v155) - 1]
                 ^ qword_2AC1A0[BYTE5(v147)]
                 ^ qword_2AC9A0[BYTE6(v132)];
            LODWORD(v217) = &v122[(unsigned __int8)v155];
            v326 = &qword_2A99A0[HIBYTE(HIDWORD(v155))];
            v278 = &qword_2AB9A8[BYTE4(v163)];
            v311 = &v122[(unsigned __int8)v163];
            v282 = &v122[(unsigned __int8)v147];
            v336 = &qword_2A99A0[HIBYTE(HIDWORD(v147))];
            v145 = qword_2AA1A8[BYTE1(v264) - 1]
                 ^ v122[(unsigned __int8)v256]
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v193))]
                 ^ qword_2AA9A8[BYTE2(v267) - 1]
                 ^ qword_2AB198[BYTE3(v155) + 1]
                 ^ qword_2AB9A8[BYTE4(v147) - 1]
                 ^ qword_2AC1A0[BYTE5(v132)]
                 ^ qword_2AC9A0[BYTE6(v140)];
            v322 = &v122[(unsigned __int8)v169];
            v29 = &v122[(unsigned __int8)v132];
            v422 = &qword_2A99A0[HIBYTE(HIDWORD(v132))];
            v308 = &qword_2AB9A8[BYTE4(v186)];
            v30 = qword_2A99A0[HIBYTE(HIDWORD(v223))]
                ^ v122[(unsigned __int8)v264]
                ^ qword_2AA1A8[BYTE1(v267) - 1]
                ^ qword_2AA9A8[BYTE2(v155) - 1]
                ^ v349[1];
            v315 = &qword_2AB9A8[BYTE4(v193)];
            v332 = &v122[(unsigned __int8)v178];
            v328 = &qword_2AA1A8[BYTE1(v178)];
            v350 = &v122[(unsigned __int8)v186];
            v428 = &v122[(unsigned __int8)v193];
            v31 = v30 ^ qword_2AB9A8[BYTE4(v132) - 1] ^ qword_2AC1A0[BYTE5(v140)] ^ qword_2AC9A0[BYTE6(v163)];
            v133 = qword_2AA1A8[BYTE1(v155) - 1];
            v153 = v31;
            v340 = &qword_2AA1A8[BYTE1(v186)];
            v239 = &qword_2AA9A8[BYTE2(v186)];
            v355 = &qword_2AA1A8[BYTE1(v193)];
            v345 = &qword_2AA9A8[BYTE2(v193)];
            v32 = v133 ^ v122[(unsigned __int8)v267] ^ qword_2A99A0[HIBYTE(HIDWORD(v260))] ^ *(v364 - 1);
            v246 = &qword_2AB198[BYTE3(v193)];
            v357 = &qword_2AB198[BYTE3(v260)];
            v361 = &qword_2AA9A8[BYTE2(v260)];
            v365 = &qword_2AB198[BYTE3(v228)];
            v261 = &qword_2AC1A0[BYTE5(v260)];
            v161 = v368[1] ^ v32 ^ qword_2AB9A8[BYTE4(v140) - 1] ^ qword_2AC1A0[BYTE5(v163)] ^ qword_2AC9A0[BYTE6(v169)];
            v268 = &qword_2AC9A0[BYTE6(v228)];
            v134 = *(v278 - 1)
                 ^ *(v378 - 1)
                 ^ *(_QWORD *)v217
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v228))]
                 ^ *(v381 - 1)
                 ^ qword_2AB198[BYTE3(v140) + 1]
                 ^ qword_2AC1A0[BYTE5(v169)];
            v218 = qword_2AC9A0[BYTE6(v186)];
            v294 = &qword_2AC1A0[BYTE5(v256)];
            v33 = qword_2AB9A8[(unsigned int)vshrd_n_u64(vdup_n_s8(HIDWORD(v169)).n64_u64[0], 0x38u) - 1]
                ^ qword_2AA9A8[BYTE2(v140) - 1]
                ^ qword_2A99A0[HIBYTE(HIDWORD(v251))]
                ^ *v282
                ^ *(v388 - 1)
                ^ v391[1];
            v34 = v127 >= 0xE;
            v187 = qword_2AC1A0[BYTE5(v186)]
                 ^ *v29
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v256))]
                 ^ qword_2AA1A8[BYTE1(v140) - 1]
                 ^ *(v398 - 1)
                 ^ v395[1]
                 ^ qword_2AB9A8[BYTE4(v178) - 1];
            v166 = qword_2AC9A0[BYTE6(v178)] ^ v134;
            v176 = v218 ^ qword_2AC1A0[BYTE5(v178)] ^ v33;
            v184 = qword_2AC9A0[BYTE6(v193)] ^ v187;
            v191 = qword_2AC1A0[BYTE5(v193)]
                 ^ *(v404 - 1)
                 ^ qword_2AC9A0[BYTE6(v223)]
                 ^ v122[(unsigned __int8)v140]
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v264))]
                 ^ *(v403 - 1)
                 ^ v406[1]
                 ^ *(v308 - 1);
            v216 = *(v315 - 1)
                 ^ *(v413 - 1)
                 ^ qword_2AC1A0[BYTE5(v223)]
                 ^ *v311
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v267))]
                 ^ *(v411 - 1)
                 ^ v414[1]
                 ^ qword_2AC9A0[BYTE6(v260)];
            v35 = qword_2AC9A0[BYTE6(v256)];
            v222 = qword_2AC9A0[BYTE6(v251)]
                 ^ qword_2AC1A0[BYTE5(v228)]
                 ^ qword_2AB9A8[BYTE4(v260) - 1]
                 ^ *(v345 - 1)
                 ^ *(v340 - 1)
                 ^ *v332
                 ^ qword_2AB198[BYTE3(v223) + 1]
                 ^ *v336;
            v255 = *(v328 - 1) ^ *(v318 - 1) ^ *v322 ^ *v326 ^ *(v239 - 1) ^ v246[1] ^ *v261 ^ *v268;
            v227 = qword_2AC1A0[BYTE5(v251)]
                 ^ qword_2AB9A8[BYTE4(v228) - 1]
                 ^ v357[1]
                 ^ *v350
                 ^ *(v419 - 1)
                 ^ *v422
                 ^ *(v355 - 1)
                 ^ v35;
            v250 = qword_2AB9A8[BYTE4(v251) - 1]
                 ^ *(v361 - 1)
                 ^ qword_2AC9A0[BYTE6(v264)]
                 ^ *(v426 - 1)
                 ^ *v428
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v140))]
                 ^ v365[1]
                 ^ *v294;
          }
          while ( v127 != 14 );
          v36 = *(v328 - 1) ^ *(v318 - 1) ^ *v322 ^ *v326 ^ *(v239 - 1) ^ v246[1] ^ *v261 ^ *v268;
          v233 = v450;
          v262 = -1;
          v247 = v451;
          v257 = v452;
          v240 = v453;
          v141 = v454;
          v128 = v455;
          v434 = v273;
          v435 = v199;
          v436 = v206;
          v437 = v212;
          v438 = v145;
          v439 = v153;
          v148 = v456;
          v440 = v161;
          v156 = v457;
          v441 = v166;
          v37 = v464;
          v446 = v36;
          v164 = v458;
          v442 = v176;
          v209 = v459;
          v443 = v184;
          v214 = v460;
          v444 = v191;
          v188 = v461;
          v445 = v216;
          v38 = v222;
          v224 = v462;
          v447 = v38;
          v448 = v227;
          v219 = v465;
          v39 = v250;
          v252 = v463;
          v449 = v39;
          do
          {
            v40 = HIDWORD(v262);
            v276 = HIDWORD(v262) ^ 0x90000000;
            v135 = v233 ^ v262;
            v41 = HIDWORD(v262) ^ 0x60000000;
            v297 = HIDWORD(v262) ^ 0xE0000000;
            v281 = HIDWORD(v262) ^ 0xA0000000;
            v303 = HIDWORD(v262) ^ 0xF0000000;
            v174 = HIDWORD(v262) ^ 0x10000000;
            v204 = HIDWORD(v262) ^ 0x50000000;
            v234 = ~(_DWORD)v257;
            v236 = HIDWORD(v262) ^ 0x20000000 ^ HIDWORD(v257);
            v286 = HIDWORD(v262) ^ 0xB0000000;
            v42 = HIDWORD(v262) ^ 0x30000000 ^ HIDWORD(v240);
            HIDWORD(v262) ^= 0x40000000u;
            v43 = ~(_DWORD)v240;
            v44 = BYTE1(v42);
            v241 = ~(_DWORD)v148;
            v244 = HIDWORD(v148) ^ v41;
            v170 = ~(_DWORD)v247;
            v175 = HIDWORD(v247) ^ v174;
            v230 = HIDWORD(v128) ^ v204;
            v179 = v43;
            v183 = v42;
            v201 = ~(_DWORD)v188;
            v205 = HIDWORD(v188) ^ v286;
            v189 = v141 ^ v262;
            v194 = ~(_DWORD)v156;
            v197 = HIDWORD(v156) ^ v40 ^ 0x70000000;
            LODWORD(v45) = ~(_DWORD)v224;
            HIDWORD(v45) = HIDWORD(v224) ^ v40 ^ 0xC0000000;
            v142 = ~(_DWORD)v164;
            v144 = HIDWORD(v164) ^ (v40 + 0x80000000);
            v149 = ~(_DWORD)v209;
            v152 = HIDWORD(v209) ^ v276;
            HIDWORD(v46) = v297 ^ HIDWORD(v37);
            LODWORD(v46) = ~(_DWORD)v37;
            v157 = ~(_DWORD)v214;
            v160 = HIDWORD(v214) ^ v281;
            LODWORD(v47) = ~(_DWORD)v219;
            HIDWORD(v47) = HIDWORD(v219) ^ v303;
            v210 = v47;
            v248 = v45;
            v263 = v40;
            HIDWORD(v128) = 0xFFFFFF - v40;
            LODWORD(v47) = __SPAIR64__(HIDWORD(v252) ^ v40 ^ 0xD0000000, ~(_DWORD)v252) >> 24;
            v258 = ~(_DWORD)v252;
            v259 = HIDWORD(v252) ^ v40 ^ 0xD0000000;
            v253 = v46;
            v288 = &qword_2AC1A0[v44];
            v309 = &qword_2AB198[(unsigned __int8)v47];
            v323 = &qword_2AB198[BYTE3(v46)];
            v372 = &qword_2AA9A8[BYTE2(v201)];
            v416 = &qword_2AB198[HIBYTE(v241)];
            v48 = qword_2AA1A8[BYTE1(v43) - 1];
            v389 = &qword_2AC9A0[BYTE2(v205)];
            v392 = &qword_2AA1A8[BYTE1(v201)];
            v49 = v122[(unsigned __int8)v170] ^ qword_2A99A0[HIBYTE(v244)];
            v399 = &qword_2AC9A0[BYTE6(v45)];
            v396 = &qword_2AA1A8[(unsigned __int8)((unsigned __int16)~(_WORD)v224 >> 8)];
            v215 = __PAIR64__(
                     HIDWORD(v48) ^ HIDWORD(v49) ^ ((unsigned int)v34 + v40 - 0x1000000),
                     (unsigned int)v48 ^ ~(_DWORD)v49)
                 ^ qword_2AA9A8[(unsigned __int8)((unsigned int)~(_DWORD)v128 >> 16) - 1]
                 ^ qword_2AB198[HIBYTE(v201) + 1]
                 ^ qword_2AB9A8[BYTE4(v135) - 1]
                 ^ qword_2AC1A0[BYTE1(v236)]
                 ^ qword_2AC9A0[BYTE6(v189)];
            v50 = v122[(unsigned __int8)v234];
            v51 = qword_2A99A0[HIBYTE(v197)];
            v52 = qword_2AA1A8[BYTE1(v189) - 1];
            LODWORD(v51) = v51 ^ ~(_DWORD)v50 ^ v52;
            HIDWORD(v51) ^= (0xFFFFFF - v40) ^ 0xEFFFFFFF ^ HIDWORD(v50) ^ HIDWORD(v52);
            v402 = &qword_2AC1A0[BYTE1(v205)];
            v53 = v122;
            v123 = v122[(unsigned __int8)v179];
            v220 = v51
                 ^ qword_2AA9A8[BYTE2(v241) - 1]
                 ^ qword_2AB198[((unsigned int)~(_DWORD)v224 >> 24) + 1]
                 ^ qword_2AB9A8[(unsigned __int8)v175 - 1]
                 ^ *v288
                 ^ qword_2AC9A0[BYTE2(v230)];
            v408 = &qword_2AB198[(unsigned int)~(_DWORD)v128 >> 24];
            HIDWORD(v54) = HIDWORD(v123) ^ (0xFFFFFF - v40) ^ 0xDFFFFFFF;
            LODWORD(v54) = ~(_DWORD)v123;
            v409 = &qword_2AC1A0[BYTE5(v248)];
            v55 = qword_2AB9A8[(unsigned __int8)v236 - 1];
            v56 = qword_2AA1A8[(unsigned __int8)~BYTE1(v128) - 1]
                ^ v54
                ^ qword_2A99A0[HIBYTE(v144)]
                ^ qword_2AA9A8[BYTE2(v194) - 1]
                ^ v309[1];
            HIDWORD(v56) ^= HIDWORD(v55);
            v57 = qword_2AC1A0[BYTE5(v189)];
            LODWORD(v56) = v56 ^ v55 ^ v57;
            v58 = qword_2AC9A0[BYTE2(v244)];
            v165 = qword_2AA1A8[BYTE1(v241) - 1];
            LODWORD(v57) = v56 ^ v58;
            HIDWORD(v57) ^= HIDWORD(v56) ^ HIDWORD(v58);
            v59 = v53[(unsigned __int8)v189];
            v225 = v57;
            v60 = qword_2A99A0[HIBYTE(v152)];
            LODWORD(v60) = v165 ^ v60 ^ ~(_DWORD)v59;
            HIDWORD(v60) ^= HIDWORD(v165) ^ HIDWORD(v59) ^ HIDWORD(v128) ^ 0xCFFFFFFF;
            v61 = v60 ^ qword_2AA9A8[BYTE2(v142) - 1] ^ v323[1];
            v62 = qword_2AB9A8[(unsigned __int8)v183 - 1];
            v63 = HIDWORD(v61) ^ HIDWORD(v62);
            v64 = qword_2AC1A0[BYTE1(v230)];
            LODWORD(v61) = v61 ^ v62;
            v65 = qword_2AC9A0[BYTE2(v197)];
            HIDWORD(v61) = v63 ^ HIDWORD(v64);
            v66 = v53[(unsigned __int8)~(_BYTE)v128];
            LODWORD(v165) = v61 ^ v64 ^ v65;
            HIDWORD(v165) = HIDWORD(v61) ^ HIDWORD(v65);
            LODWORD(v57) = ~(_DWORD)v66;
            HIDWORD(v57) = HIDWORD(v66) ^ HIDWORD(v128) ^ 0xBFFFFFFF;
            v269 = &qword_2AB9A8[(unsigned __int8)v244];
            v67 = vshrd_n_u64(vdup_n_s8(v230).n64_u64[0], 0x38u);
            v423 = &qword_2A99A0[HIBYTE(v230)];
            v124 = qword_2AA1A8[BYTE1(v142) - 1];
            v68 = v53[(unsigned __int8)v241];
            v229 = qword_2A99A0[HIBYTE(v160)]
                 ^ v57
                 ^ qword_2AA1A8[BYTE1(v194) - 1]
                 ^ qword_2AA9A8[BYTE2(v149) - 1]
                 ^ qword_2AB198[BYTE3(v210) + 1]
                 ^ qword_2AB9A8[BYTE4(v189) - 1]
                 ^ qword_2AC1A0[BYTE1(v244)]
                 ^ qword_2AC9A0[BYTE2(v144)];
            v69 = qword_2A99A0[HIBYTE(v205)];
            v70 = qword_2AA9A8[BYTE2(v157) - 1];
            LODWORD(v124) = ~(_DWORD)v68 ^ v69 ^ v124 ^ v70;
            HIDWORD(v124) ^= HIDWORD(v68) ^ HIDWORD(v128) ^ 0xAFFFFFFF ^ HIDWORD(v69) ^ HIDWORD(v70);
            v289 = &qword_2AB9A8[(unsigned __int8)v144];
            v71 = v124 ^ qword_2AB198[BYTE3(v135) + 1] ^ qword_2AB9A8[v67 - 1] ^ qword_2AC1A0[BYTE1(v197)];
            v312 = &v53[(unsigned __int8)v248];
            v242 = qword_2AA1A8[BYTE1(v149) - 1];
            v125 = v53[(unsigned __int8)v194];
            LOBYTE(v69) = v201;
            BYTE4(v69) = v205;
            v202 = v71 ^ qword_2AC9A0[BYTE2(v152)];
            v337 = &qword_2AB9A8[BYTE4(v248)];
            v304 = &v53[(unsigned __int8)v69];
            v72 = qword_2A99A0[HIBYTE(HIDWORD(v248))];
            v265 = &v53[(unsigned __int8)v157];
            LODWORD(v61) = v242 ^ ~(_DWORD)v125 ^ v72;
            HIDWORD(v61) = HIDWORD(v242) ^ HIDWORD(v125) ^ HIDWORD(v128) ^ 0x9FFFFFFF ^ HIDWORD(v72);
            v316 = &qword_2AB9A8[BYTE4(v69)];
            v300 = &qword_2AB9A8[(unsigned __int8)v152];
            v73 = *(v269 - 1);
            v270 = &qword_2AB9A8[(unsigned __int8)v160];
            LODWORD(v125) = v53;
            v319 = &v53[(unsigned __int8)v258];
            v243 = v61
                 ^ *(v372 - 1)
                 ^ qword_2AB198[HIBYTE(v170) + 1]
                 ^ v73
                 ^ qword_2AC1A0[BYTE1(v144)]
                 ^ qword_2AC9A0[BYTE2(v160)];
            v341 = &v53[(unsigned __int8)v253];
            LODWORD(v61) = -1;
            HIDWORD(v61) = HIDWORD(v128) ^ 0x8FFFFFFF;
            v375 = &v53[(unsigned __int8)v135];
            v362 = &v53[(unsigned __int8)v210];
            v324 = &qword_2A99A0[HIBYTE(v236)];
            v329 = &qword_2AA9A8[BYTE2(v170)];
            v356 = &qword_2AB198[HIBYTE(v142)];
            v382 = &qword_2AB198[HIBYTE(v157)];
            v369 = &qword_2AB198[HIBYTE(v149)];
            v333 = &qword_2AB198[HIBYTE(v194)];
            v346 = &qword_2A99A0[HIBYTE(v183)];
            v74 = qword_2AC1A0[BYTE1(v152)]
                ^ qword_2A99A0[HIBYTE(v259)]
                ^ v61
                ^ v53[(unsigned __int8)v142]
                ^ qword_2AA1A8[BYTE1(v157) - 1]
                ^ qword_2AA9A8[BYTE2(v248) - 1]
                ^ qword_2AB198[HIBYTE(v234) + 1]
                ^ qword_2AB9A8[(unsigned __int8)v197 - 1];
            v75 = v53[(unsigned __int8)v149];
            v249 = v416[1];
            v143 = v74 ^ *v389;
            v366 = &qword_2AA1A8[BYTE1(v170)];
            v76 = qword_2A99A0[HIBYTE(HIDWORD(v253))];
            HIDWORD(v74) = HIDWORD(v128) ^ 0x7FFFFFFF ^ HIDWORD(v75) ^ HIDWORD(v76);
            v351 = &qword_2AA9A8[BYTE2(v234)];
            LODWORD(v74) = ~(_DWORD)v75 ^ v76;
            v379 = &qword_2AA1A8[BYTE1(v234)];
            v77 = &qword_2AA9A8[BYTE2(v179)];
            v373 = &qword_2AC9A0[BYTE2(v236)];
            v385 = &qword_2AC9A0[BYTE2(v183)];
            v78 = qword_2AA1A8[BYTE1(v253) - 1];
            v79 = v74
                ^ *(v392 - 1)
                ^ qword_2AA9A8[BYTE2(v258) - 1]
                ^ qword_2AB198[HIBYTE(v179) + 1]
                ^ *(v289 - 1)
                ^ qword_2AC1A0[BYTE1(v160)];
            v80 = qword_2A99A0[HIBYTE(v175)];
            v81 = qword_2AA9A8[BYTE2(v135) - 1];
            v274 = qword_2AC1A0[BYTE1(v259)];
            HIDWORD(v66) = HIDWORD(v128) ^ 0x6FFFFFFF;
            HIDWORD(v78) ^= HIDWORD(v81) ^ HIDWORD(v128) ^ 0x4FFFFFFF ^ v312[1] ^ HIDWORD(v80);
            HIDWORD(v81) = HIDWORD(v128);
            v129 = v81 ^ ~*v312 ^ (unsigned int)v80 ^ (unsigned int)v78;
            v180 = *(v396 - 1);
            v198 = HIDWORD(v81) ^ 0x5FFFFFFF;
            LODWORD(v235) = v129 ^ v249;
            HIDWORD(v235) = HIDWORD(v78) ^ HIDWORD(v249);
            v150 = *v399 ^ v79;
            v82 = qword_2A99A0[HIBYTE(HIDWORD(v210))];
            v83 = qword_2AA9A8[BYTE2(v253) - 1];
            HIDWORD(v69) = HIDWORD(v81) ^ 0x3FFFFFFF;
            v84 = qword_2AB198[BYTE3(v189) + 1];
            v287 = HIDWORD(v69);
            v293 = HIDWORD(v129) ^ 0x2FFFFFFF;
            LODWORD(v158) = v83 ^ v180 ^ ~*v265 ^ v82 ^ v84;
            HIDWORD(v158) = HIDWORD(v83) ^ HIDWORD(v180) ^ HIDWORD(v66) ^ v265[1] ^ HIDWORD(v82) ^ HIDWORD(v84);
            HIDWORD(v66) = HIDWORD(v129) ^ 0x1FFFFFFF;
            v85 = qword_2AA1A8[BYTE1(v258) - 1];
            v86 = qword_2A99A0[HIBYTE(HIDWORD(v135))];
            v87 = qword_2AA9A8[BYTE2(v210) - 1];
            v298 = HIDWORD(v129) ^ 0xFFFFFFF;
            LODWORD(v129) = v85 ^ ~*v304 ^ v86 ^ v87;
            HIDWORD(v129) = HIDWORD(v85) ^ v198 ^ v304[1] ^ HIDWORD(v86) ^ HIDWORD(v87);
            v88 = *v341;
            HIDWORD(v88) = v293 ^ *((_DWORD *)v341 + 1);
            HIDWORD(v66) ^= v362[1];
            LODWORD(v66) = ~*v362;
            LODWORD(v295) = ~*v375;
            HIDWORD(v295) = v298 ^ v375[1];
            LOBYTE(v87) = BYTE2(v175);
            v342 = BYTE1(v175);
            LODWORD(v171) = *v346 ^ ~(_DWORD)v88;
            HIDWORD(v171) = v346[1] ^ HIDWORD(v88);
            v283 = BYTE6(v135);
            v290 = &qword_2AC1A0[BYTE5(v210)];
            v89 = *(v270 - 1) ^ v408[1] ^ v129;
            v90 = qword_2AB9A8[(unsigned __int8)v259 - 1] ^ *(v351 - 1) ^ qword_2AA1A8[BYTE1(v135) - 1] ^ v171 ^ v356[1];
            v91 = qword_2AC9A0[(unsigned __int8)v87];
            v130 = *v402 ^ v158 ^ *(v300 - 1);
            v92 = qword_2AB9A8[BYTE4(v253) - 1]
                ^ *(v366 - 1)
                ^ qword_2A99A0[HIBYTE(HIDWORD(v189))]
                ^ v66
                ^ *(v77 - 1)
                ^ v369[1]
                ^ qword_2AC1A0[BYTE5(v135)];
            v159 = qword_2AC9A0[BYTE6(v210)] ^ v274 ^ *(v316 - 1) ^ v235;
            v131 = qword_2AC9A0[BYTE2(v259)] ^ v130;
            v136 = qword_2AC9A0[BYTE6(v253)] ^ *v409 ^ v89;
            v172 = v91 ^ *v290 ^ v90;
            v181 = v92 ^ *v373;
            v190 = *v385
                 ^ qword_2AC1A0[v342]
                 ^ qword_2AB9A8[(unsigned int)vshrd_n_u64(vdup_n_s8(HIDWORD(v210)).n64_u64[0], 0x38u) - 1]
                 ^ v382[1]
                 ^ qword_2AA9A8[BYTE2(v189) - 1]
                 ^ v295
                 ^ *v423
                 ^ *(v379 - 1);
            v195 = *(v329 - 1)
                 ^ *v324
                 ^ __PAIR64__(v287, -1)
                 ^ *v319
                 ^ qword_2AA1A8[BYTE1(v210) - 1]
                 ^ v333[1]
                 ^ *(v337 - 1)
                 ^ qword_2AC1A0[BYTE5(v253)]
                 ^ qword_2AC9A0[v283];
            v343 = &qword_2AC1A0[BYTE5(v243)];
            v358 = &qword_2AC1A0[BYTE5(v143)];
            v376 = &qword_2AC1A0[BYTE5(v150)];
            v386 = &qword_2AC1A0[BYTE5(v131)];
            v394 = &qword_2AC1A0[BYTE5(v136)];
            v397 = &qword_2AA9A8[BYTE2(v181)];
            v415 = &qword_2AB198[BYTE3(v243)];
            v401 = &qword_2AC1A0[BYTE5(v159)];
            v412 = &qword_2AA1A8[BYTE1(v181)];
            v233 = qword_2AB198[((LODWORD(qword_2AC9A0[BYTE6(v210)])
                                ^ (unsigned int)v274
                                ^ *((_DWORD *)v316 - 2)
                                ^ (unsigned int)v235) >> 24)
                              + 1]
                 ^ qword_2AA1A8[BYTE1(v165) - 1]
                 ^ *(_QWORD *)(v125 + 8 * (unsigned __int8)v220)
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v243))]
                 ^ qword_2AA9A8[BYTE2(v202) - 1]
                 ^ qword_2AB9A8[BYTE4(v215) - 1]
                 ^ qword_2AC1A0[BYTE5(v225)]
                 ^ qword_2AC9A0[BYTE6(v229)];
            v407 = &qword_2AB198[BYTE3(v202)];
            v247 = *(_QWORD *)(v125 + 8 * (unsigned __int8)v225)
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v143))]
                 ^ qword_2AA1A8[BYTE1(v229) - 1]
                 ^ qword_2AA9A8[BYTE2(v243) - 1]
                 ^ qword_2AB198[((*((_DWORD *)v329 - 2)
                                ^ *(_DWORD *)v324
                                ^ (unsigned int)~*(_DWORD *)v319
                                ^ LODWORD(qword_2AA1A8[BYTE1(v210) - 1])
                                ^ *((_DWORD *)v333 + 2)
                                ^ *((_DWORD *)v337 - 2)
                                ^ LODWORD(qword_2AC1A0[BYTE5(v253)])
                                ^ LODWORD(qword_2AC9A0[v283])) >> 24)
                              + 1]
                 ^ qword_2AB9A8[BYTE4(v220) - 1]
                 ^ qword_2AC1A0[BYTE5(v165)]
                 ^ qword_2AC9A0[BYTE6(v202)];
            v410 = &qword_2AC9A0[BYTE6(v181)];
            v257 = *(_QWORD *)(v125 + 8 * (unsigned __int8)v165)
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v150))]
                 ^ qword_2AA1A8[BYTE1(v202) - 1]
                 ^ qword_2AA9A8[BYTE2(v143) - 1]
                 ^ qword_2AB198[(((unsigned int)v91 ^ *(_DWORD *)v290 ^ (unsigned int)v90) >> 24) + 1]
                 ^ qword_2AB9A8[BYTE4(v225) - 1]
                 ^ qword_2AC1A0[BYTE5(v229)]
                 ^ qword_2AC9A0[BYTE6(v243)];
            v93 = (_QWORD *)v125;
            v271 = (_QWORD *)(v125 + 8 * (unsigned __int8)v243);
            LODWORD(v274) = &qword_2AB9A8[BYTE4(v243)];
            v424 = &qword_2A99A0[HIBYTE(HIDWORD(v202))];
            LODWORD(v210) = v125 + 8 * (unsigned __int8)v143;
            v240 = qword_2AC1A0[BYTE5(v202)]
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v131))]
                 ^ *(_QWORD *)(v125 + 8 * (unsigned __int8)v229)
                 ^ qword_2AA1A8[BYTE1(v243) - 1]
                 ^ qword_2AA9A8[BYTE2(v150) - 1]
                 ^ qword_2AB198[(((unsigned int)v92 ^ *(_DWORD *)v373) >> 24) + 1]
                 ^ qword_2AB9A8[BYTE4(v165) - 1]
                 ^ qword_2AC9A0[BYTE6(v143)];
            v279 = (_QWORD *)(v125 + 8 * (unsigned __int8)v150);
            v284 = &qword_2AB9A8[BYTE4(v143)];
            v330 = &qword_2AB198[BYTE3(v143)];
            v291 = (__int64 *)(v125 + 8 * (unsigned __int8)v131);
            v301 = &qword_2AB9A8[BYTE4(v150)];
            v347 = &qword_2AB198[BYTE3(v150)];
            v141 = qword_2AC9A0[BYTE6(v150)]
                 ^ qword_2AB9A8[BYTE4(v229) - 1]
                 ^ *(_QWORD *)(v125 + 8 * (unsigned __int8)v202)
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v136))]
                 ^ qword_2AA1A8[BYTE1(v143) - 1]
                 ^ qword_2AA9A8[BYTE2(v131) - 1]
                 ^ qword_2AB198[BYTE3(v190) + 1]
                 ^ *v343;
            v94 = qword_2AA1A8[BYTE1(v150) - 1]
                ^ *v271
                ^ qword_2A99A0[HIBYTE(HIDWORD(v159))]
                ^ qword_2AA9A8[BYTE2(v136) - 1];
            v95 = (__int64 *)(v125 + 8 * (unsigned __int8)v136);
            v305 = &qword_2AB9A8[BYTE4(v131)];
            v420 = &qword_2AB198[BYTE3(v131)];
            v313 = (_QWORD *)(v125 + 8 * (unsigned __int8)v195);
            v334 = &qword_2AB9A8[BYTE4(v195)];
            v325 = &qword_2A99A0[HIBYTE(HIDWORD(v225))];
            v96 = *(_QWORD *)v210;
            v151 = qword_2AA1A8[BYTE1(v131) - 1];
            v211 = (_QWORD *)(v125 + 8 * (unsigned __int8)v159);
            v317 = &qword_2AB9A8[BYTE4(v159)];
            v128 = v94
                 ^ qword_2AB198[BYTE3(v215) + 1]
                 ^ qword_2AB9A8[BYTE4(v202) - 1]
                 ^ *v358
                 ^ qword_2AC9A0[BYTE6(v131)];
            v126 = qword_2A99A0[HIBYTE(HIDWORD(v195))] ^ v96;
            v254 = &qword_2AB9A8[BYTE4(v136)];
            v427 = &qword_2AB198[BYTE3(v136)];
            v320 = &v93[(unsigned __int8)v172];
            v348 = &qword_2AB9A8[BYTE4(v172)];
            LODWORD(v94) = v126 ^ v151;
            v122 = v93;
            v97 = qword_2AA9A8[BYTE2(v159) - 1];
            HIDWORD(v91) = HIDWORD(v126) ^ HIDWORD(v151) ^ HIDWORD(v97);
            v327 = &qword_2AA1A8[BYTE1(v190)];
            LODWORD(v91) = v94 ^ v97;
            v370 = &v93[(unsigned __int8)v215];
            v374 = &qword_2AA1A8[BYTE1(v225)];
            v98 = &qword_2A99A0[HIBYTE(HIDWORD(v165))];
            v344 = &qword_2AA1A8[BYTE1(v215)];
            v148 = v91 ^ qword_2AB198[BYTE3(v220) + 1] ^ *(_QWORD *)(v274 - 8) ^ *v376 ^ qword_2AC9A0[BYTE6(v136)];
            v359 = &qword_2AA1A8[BYTE1(v220)];
            v352 = &v122[(unsigned __int8)v190];
            v338 = &v122[(unsigned __int8)v181];
            v266 = &qword_2AA9A8[BYTE2(v220)];
            v99 = *(v284 - 1);
            v285 = &qword_2AA9A8[BYTE2(v225)];
            v367 = &qword_2AC9A0[BYTE6(v225)];
            v363 = &qword_2AA9A8[BYTE2(v165)];
            v100 = *v291;
            v275 = &qword_2AC1A0[BYTE5(v181)];
            v292 = &qword_2AB9A8[BYTE4(v181)];
            v101 = qword_2AA1A8[BYTE1(v159) - 1];
            v156 = qword_2A99A0[HIBYTE(HIDWORD(v172))]
                 ^ *v279
                 ^ qword_2AA1A8[BYTE1(v136) - 1]
                 ^ qword_2AA9A8[BYTE2(v195) - 1]
                 ^ qword_2AB198[BYTE3(v225) + 1]
                 ^ v99
                 ^ *v386
                 ^ qword_2AC9A0[BYTE6(v159)];
            v102 = v101 ^ v100 ^ qword_2A99A0[HIBYTE(HIDWORD(v181))] ^ qword_2AA9A8[BYTE2(v172) - 1];
            v103 = *(v301 - 1);
            v280 = &qword_2AC9A0[BYTE6(v215)];
            v182 = qword_2AC9A0[BYTE6(v195)];
            v296 = &qword_2AC1A0[BYTE5(v215)];
            v104 = *v95;
            v302 = &qword_2AB9A8[BYTE4(v190)];
            v137 = qword_2AB198[BYTE3(v165) + 1] ^ v102 ^ v103;
            v380 = &qword_2AC1A0[BYTE5(v220)];
            v105 = &qword_2AC1A0[BYTE5(v190)];
            v106 = *(v305 - 1);
            v272 = &qword_2AC9A0[BYTE6(v220)];
            v203 = qword_2AC9A0[BYTE6(v172)];
            v306 = &qword_2AC9A0[BYTE6(v165)];
            HIDWORD(v262) = v263 - 0x1FFFFFF;
            v138 = *v394 ^ v137;
            v226 = qword_2AC1A0[BYTE5(v172)];
            v107 = qword_2AA1A8[BYTE1(v172) - 1];
            v221 = *(v317 - 1)
                 ^ v415[1]
                 ^ qword_2AA9A8[BYTE2(v215) - 1]
                 ^ *v313
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v220))]
                 ^ *(v412 - 1);
            v34 = HIDWORD(v262) >= 0xF1FFFFFF;
            v108 = HIDWORD(v262) == -234881025;
            if ( HIDWORD(v262) == -234881025 )
            {
              v34 = 1;
              v108 = 1;
            }
            v173 = *v401
                 ^ qword_2AB198[BYTE3(v229) + 1]
                 ^ *(v397 - 1)
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v190))]
                 ^ v104
                 ^ qword_2AA1A8[BYTE1(v195) - 1]
                 ^ v106;
            v196 = *(v254 - 1)
                 ^ v407[1]
                 ^ *v211
                 ^ qword_2A99A0[HIBYTE(HIDWORD(v215))]
                 ^ v107
                 ^ qword_2AA9A8[BYTE2(v190) - 1]
                 ^ qword_2AC1A0[BYTE5(v195)];
            v164 = v182 ^ v138;
            v209 = v203 ^ v173;
            v188 = qword_2AC9A0[BYTE6(v190)] ^ v221 ^ v226;
            v214 = *v410 ^ v196;
            v224 = v330[1] ^ *v325 ^ *v320 ^ *(v327 - 1) ^ *(v266 - 1) ^ *(v334 - 1) ^ *v275 ^ *v280;
            v109 = *v272 ^ *(v348 - 1) ^ *v338 ^ *v98 ^ *(v344 - 1) ^ *(v285 - 1) ^ v347[1] ^ *v105;
            v219 = qword_2AA9A8[BYTE2(v229) - 1] ^ *v424 ^ *v370 ^ *(v374 - 1) ^ v427[1] ^ *(v302 - 1) ^ *v380 ^ *v306;
            v252 = v109;
            v37 = *v296
                ^ *(v292 - 1)
                ^ *(v363 - 1)
                ^ *v352
                ^ qword_2A99A0[HIBYTE(HIDWORD(v229))]
                ^ *(v359 - 1)
                ^ v420[1]
                ^ *v367;
          }
          while ( !v108 );
          v110 = v109;
          v111 = &v435;
          v451 = v247;
          v112 = &v451;
          v462 = v224;
          v452 = v257;
          v464 = v37;
          v450 = v233;
          v113 = v233;
          v453 = v240;
          v463 = v110;
          v465 = v219;
          v454 = v141;
          v114 = v431;
          v455 = v128;
          v456 = v148;
          v457 = v156;
          v458 = v182 ^ v138;
          v459 = v203 ^ v173;
          v460 = v214;
          v461 = v188;
          v115 = v273;
          while ( 1 )
          {
            v118 = *(_QWORD *)(v114 + 8);
            v114 += 8;
            *(_QWORD *)v114 = v118 ^ v113 ^ v115;
            if ( &dest[120] == (_BYTE *)v114 )
              break;
            v116 = *v111++;
            v115 = v116;
            v117 = *v112++;
            v113 = v117;
          }
          v3 = 0;
          ++*(_QWORD *)(a1 + 264);
          if ( !n )
            break;
        }
        else if ( !n )
        {
          break;
        }
        v4 = 128 - v3;
      }
    }
    result = memcpy(v432, dest, 0x80u);
    *(_DWORD *)(a1 + 128) = v3;
  }
  return result;
}
