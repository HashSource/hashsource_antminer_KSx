int __fastcall serdes_external_loop_ate_init_rvn(int a1, int a2, int a3, int a4)
{
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r3
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r3
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r3
  int v70; // r0
  int v71; // r0
  int v72; // r0
  int v73; // r0
  int v74; // r0
  int v75; // r0
  int v76; // r0
  int v77; // r0
  int v78; // r0
  int v79; // r0
  int v80; // r0
  int v81; // r0
  int v82; // r0
  int v83; // r0
  int v84; // r0
  int v85; // r0
  int v86; // r0
  int v87; // r0
  int v88; // r0
  int v89; // r0
  int v90; // r0
  int v91; // r0
  int v92; // r0
  int v93; // r0
  int v94; // r0
  int v95; // r0
  int v96; // r0
  int v97; // r0
  int v98; // r0
  int v99; // r0
  int v100; // r0
  int v101; // r0
  int v102; // r0
  int v103; // r0
  int v104; // r0
  int v105; // r0
  int v106; // r0
  int v107; // r0
  int v108; // r0
  int v109; // r0
  int v110; // r0
  int v111; // r0
  int v112; // r0
  int v113; // r0
  int v114; // r0
  int v115; // r0
  int v116; // r0
  int v117; // r0
  int v118; // r0
  int v119; // r0
  int v120; // r0
  int v121; // r0
  int v122; // r0
  int v123; // r0
  int v124; // r0
  int v125; // r0
  int v126; // r0
  int v127; // r0
  int v128; // r0
  int v129; // r0
  int v133; // [sp+38h] [bp-17A4h] BYREF
  _BYTE v134[32]; // [sp+58h] [bp-1784h] BYREF
  int v135; // [sp+78h] [bp-1764h] BYREF
  _BYTE v136[32]; // [sp+98h] [bp-1744h] BYREF
  int v137; // [sp+B8h] [bp-1724h] BYREF
  _BYTE v138[32]; // [sp+D8h] [bp-1704h] BYREF
  int v139; // [sp+F8h] [bp-16E4h] BYREF
  _BYTE v140[32]; // [sp+118h] [bp-16C4h] BYREF
  int v141; // [sp+138h] [bp-16A4h] BYREF
  _BYTE v142[32]; // [sp+158h] [bp-1684h] BYREF
  int v143; // [sp+178h] [bp-1664h] BYREF
  _BYTE v144[32]; // [sp+198h] [bp-1644h] BYREF
  int v145; // [sp+1B8h] [bp-1624h] BYREF
  _BYTE v146[32]; // [sp+1D8h] [bp-1604h] BYREF
  int v147; // [sp+1F8h] [bp-15E4h] BYREF
  _BYTE v148[32]; // [sp+218h] [bp-15C4h] BYREF
  int v149; // [sp+238h] [bp-15A4h] BYREF
  _BYTE v150[32]; // [sp+258h] [bp-1584h] BYREF
  int v151; // [sp+278h] [bp-1564h] BYREF
  _BYTE v152[32]; // [sp+298h] [bp-1544h] BYREF
  int v153; // [sp+2B8h] [bp-1524h] BYREF
  _BYTE v154[32]; // [sp+2D8h] [bp-1504h] BYREF
  int v155; // [sp+2F8h] [bp-14E4h] BYREF
  _BYTE v156[32]; // [sp+318h] [bp-14C4h] BYREF
  int v157; // [sp+338h] [bp-14A4h] BYREF
  _BYTE v158[32]; // [sp+358h] [bp-1484h] BYREF
  int v159; // [sp+378h] [bp-1464h] BYREF
  _BYTE v160[32]; // [sp+398h] [bp-1444h] BYREF
  int v161; // [sp+3B8h] [bp-1424h] BYREF
  _BYTE v162[32]; // [sp+3D8h] [bp-1404h] BYREF
  int v163; // [sp+3F8h] [bp-13E4h] BYREF
  int v164; // [sp+418h] [bp-13C4h] BYREF
  int v165; // [sp+438h] [bp-13A4h] BYREF
  int v166; // [sp+458h] [bp-1384h] BYREF
  int v167; // [sp+478h] [bp-1364h] BYREF
  int v168; // [sp+498h] [bp-1344h] BYREF
  int v169; // [sp+4B8h] [bp-1324h] BYREF
  int v170; // [sp+4D8h] [bp-1304h] BYREF
  int v171; // [sp+4F8h] [bp-12E4h] BYREF
  int v172; // [sp+518h] [bp-12C4h] BYREF
  int v173; // [sp+538h] [bp-12A4h] BYREF
  int v174; // [sp+558h] [bp-1284h] BYREF
  int v175; // [sp+578h] [bp-1264h] BYREF
  int v176; // [sp+598h] [bp-1244h] BYREF
  int v177; // [sp+5B8h] [bp-1224h] BYREF
  int v178; // [sp+5D8h] [bp-1204h] BYREF
  int v179; // [sp+5F8h] [bp-11E4h] BYREF
  int v180; // [sp+618h] [bp-11C4h] BYREF
  int v181; // [sp+638h] [bp-11A4h] BYREF
  int v182; // [sp+658h] [bp-1184h] BYREF
  int v183; // [sp+678h] [bp-1164h] BYREF
  int v184; // [sp+698h] [bp-1144h] BYREF
  int v185; // [sp+6B8h] [bp-1124h] BYREF
  int v186; // [sp+6D8h] [bp-1104h] BYREF
  int v187; // [sp+6F8h] [bp-10E4h] BYREF
  int v188; // [sp+718h] [bp-10C4h] BYREF
  int v189; // [sp+738h] [bp-10A4h] BYREF
  int v190; // [sp+758h] [bp-1084h] BYREF
  int v191; // [sp+778h] [bp-1064h] BYREF
  int v192; // [sp+798h] [bp-1044h] BYREF
  int v193; // [sp+7B8h] [bp-1024h] BYREF
  _BYTE v194[4100]; // [sp+7D8h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v133, "chain");
  v6 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    422,
    60,
    v194);
  sub_105374(a1, a3, 240, 0x80000000);
  sub_105374(a1, a3, 86, 67634184);
  sub_105374(a1, a3, 64, 256);
  sub_105374(a1, a3, 80, 33423870);
  sub_105374(a1, a3, 81, 832516511);
  sub_105374(a1, a3, 88, -1);
  v7 = sub_105374(a1, a3, 86, 201853960);
  V_LOCK(v7);
  V_INT((int)v134, "chain");
  v8 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v8);
  v9 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
         195,
         "serdes_external_loop_ate_init_rvn",
         33,
         437,
         60,
         v194);
  V_LOCK(v9);
  V_INT((int)&v135, "chain");
  v10 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    438,
    60,
    v194);
  sub_105374(a1, a3, 77, 196611);
  sub_105374(a1, a3, 78, -2144272046);
  sub_105374(a1, a3, 77, 33554944);
  sub_105374(a1, a3, 78, -2144247742);
  sub_105374(a1, a3, 77, 100664832);
  sub_105374(a1, a3, 78, -2144247742);
  sub_105374(a1, a3, 77, 65537);
  v11 = sub_105374(a1, a3, 78, -2144272003);
  V_LOCK(v11);
  V_INT((int)v136, "chain");
  v12 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    445,
    60,
    v194);
  sub_1058E4(a1, a3, 24642, a4 | 0x600);
  sub_105374(a1, a3, 77, 0);
  sub_105374(a1, a3, 78, -2144247741);
  sub_1058E4(a1, a3, 24644, a4 << 7);
  sub_1058E4(a1, a3, 24642, a4 | 0x700);
  sub_105374(a1, a3, 77, 16777472);
  sub_105374(a1, a3, 78, -2144247741);
  v13 = sub_1058E4(a1, a3, 24644, a4 << 7);
  V_LOCK(v13);
  V_INT((int)&v137, "chain");
  v14 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v14);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    460,
    60,
    v194);
  sub_105374(a1, a3, 77, 0);
  sub_105374(a1, a3, 78, -2144251892);
  sub_105374(a1, a3, 77, 268439552);
  sub_105374(a1, a3, 78, -2144251892);
  sub_105374(a1, a3, 77, 33489407);
  sub_105374(a1, a3, 78, -2144272086);
  sub_105374(a1, a3, 77, 268374015);
  v15 = sub_105374(a1, a3, 78, -2144272085);
  V_LOCK(v15);
  V_INT((int)v138, "chain");
  v16 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v16);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    466,
    60,
    v194);
  sub_1058E4(a1, a3, 24644, (a4 << 7) | 0x8020);
  sub_1058E4(a1, a3, 24644, (a4 << 7) | 0x8060);
  sub_105374(a1, a3, 77, -1);
  sub_105374(a1, a3, 78, -2144247719);
  sub_105374(a1, a3, 77, -8388737);
  v17 = sub_105374(a1, a3, 78, -2144247718);
  V_LOCK(v17);
  V_INT((int)&v139, "chain");
  v18 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v18);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    472,
    60,
    v194);
  sub_105374(a1, a3, 77, 0);
  sub_105374(a1, a3, 78, -2144247776);
  sub_105374(a1, a3, 77, -2136964960);
  v19 = sub_105374(a1, a3, 78, -2144247776);
  V_LOCK(v19);
  V_INT((int)v140, "chain");
  v20 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v20);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    476,
    60,
    v194);
  if ( a4 == 2 )
    LOWORD(v21) = 4160;
  else
    LOWORD(v21) = 4144;
  if ( a4 == 2 )
    HIWORD(v21) = 4160;
  else
    HIWORD(v21) = 4144;
  sub_105374(a1, a3, 77, v21);
  sub_105374(a1, a3, 78, -2144247722);
  sub_105374(a1, a3, 77, -1);
  v22 = sub_105374(a1, a3, 78, -2144247718);
  V_LOCK(v22);
  V_INT((int)&v141, "chain");
  v23 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v23);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    483,
    60,
    v194);
  sub_105374(a1, a3, 77, 0);
  sub_105374(a1, a3, 78, -2144247771);
  sub_105374(a1, a3, 77, (int)&loc_140014);
  v24 = sub_105374(a1, a3, 78, -2144247771);
  V_LOCK(v24);
  V_INT((int)v142, "chain");
  v25 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v25);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    487,
    60,
    v194);
  sub_105374(a1, a3, 77, 33554944);
  sub_105374(a1, a3, 78, -2144247760);
  sub_105374(a1, a3, 77, 122947412);
  v26 = sub_105374(a1, a3, 78, -2144247760);
  V_LOCK(v26);
  V_INT((int)&v143, "chain");
  v27 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v27);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    491,
    60,
    v194);
  sub_105374(a1, a3, 77, 1073758208);
  sub_105374(a1, a3, 78, -2144247770);
  sub_105374(a1, a3, 77, -1072381932);
  v28 = sub_105374(a1, a3, 78, -2144247770);
  V_LOCK(v28);
  V_INT((int)v144, "chain");
  v29 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v29);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    494,
    60,
    v194);
  if ( a4 == 2 )
    LOWORD(v30) = 4;
  else
    LOWORD(v30) = 3;
  if ( a4 == 2 )
    HIWORD(v30) = 4;
  else
    HIWORD(v30) = 3;
  sub_105374(a1, a3, 77, v30);
  sub_105374(a1, a3, 78, -2144247739);
  sub_105374(a1, a3, 77, -1);
  v31 = sub_105374(a1, a3, 78, -2144247732);
  V_LOCK(v31);
  V_INT((int)&v145, "chain");
  v32 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v32);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    501,
    60,
    v194);
  sub_105374(a1, a3, 77, 268439552);
  sub_105374(a1, a3, 78, -2144247769);
  sub_105374(a1, a3, 77, 805318656);
  v33 = sub_105374(a1, a3, 78, -2144247769);
  V_LOCK(v33);
  V_INT((int)v146, "chain");
  v34 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v34);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    505,
    60,
    v194);
  sub_105374(a1, a3, 77, 0);
  sub_105374(a1, a3, 78, -2144247751);
  sub_105374(a1, a3, 77, 5505108);
  v35 = sub_105374(a1, a3, 78, -2144247751);
  V_LOCK(v35);
  V_INT((int)&v147, "chain");
  v36 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v36);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    508,
    60,
    v194);
  sub_105374(a1, a3, 77, (int)&dword_10000 + 1);
  sub_105374(a1, a3, 78, -2144251903);
  sub_105374(a1, a3, 77, (int)&loc_230020 + 3);
  v37 = sub_105374(a1, a3, 78, -2144251903);
  V_LOCK(v37);
  V_INT((int)v148, "chain");
  v38 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v38);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    511,
    60,
    v194);
  sub_105374(a1, a3, 77, 0);
  sub_105374(a1, a3, 78, -2144251872);
  sub_105374(a1, a3, 77, (int)sub_80008);
  v39 = sub_105374(a1, a3, 78, -2144251872);
  V_LOCK(v39);
  V_INT((int)&v149, "chain");
  v40 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v40);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    514,
    60,
    v194);
  sub_105374(a1, a3, 77, 0);
  sub_105374(a1, a3, 78, -2144272111);
  sub_105374(a1, a3, 77, 1073692671);
  v41 = sub_105374(a1, a3, 78, -2144272088);
  V_LOCK(v41);
  V_INT((int)v150, "chain");
  v42 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v42);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    517,
    60,
    v194);
  sub_105374(a1, a3, 77, 234884608);
  sub_105374(a1, a3, 78, -2144272382);
  sub_105374(a1, a3, 77, 235408904);
  v43 = sub_105374(a1, a3, 78, -2144272382);
  V_LOCK(v43);
  V_INT((int)&v151, "chain");
  v44 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v44);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    520,
    60,
    v194);
  sub_105374(a1, a3, 77, 234884608);
  sub_105374(a1, a3, 78, -2144272381);
  sub_105374(a1, a3, 77, 235408904);
  v45 = sub_105374(a1, a3, 78, -2144272381);
  V_LOCK(v45);
  V_INT((int)v152, "chain");
  v46 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v46);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    523,
    60,
    v194);
  sub_105374(a1, a3, 77, (int)&loc_180018);
  v47 = sub_105374(a1, a3, 78, -2144272353);
  V_LOCK(v47);
  V_INT((int)&v153, "chain");
  v48 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v48);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    526,
    60,
    v194);
  sub_105374(a1, a3, 77, 22348117);
  sub_105374(a1, a3, 78, -2144272044);
  sub_105374(a1, a3, 77, 67044351);
  v49 = sub_105374(a1, a3, 78, -2144272044);
  V_LOCK(v49);
  V_INT((int)v154, "chain");
  v50 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v50);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    529,
    60,
    v194);
  sub_105374(a1, a3, 77, 61277095);
  sub_105374(a1, a3, 78, -2144272380);
  sub_105374(a1, a3, 77, 65471463);
  v51 = sub_105374(a1, a3, 78, -2144272380);
  V_LOCK(v51);
  V_INT((int)&v155, "chain");
  v52 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v52);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    532,
    60,
    v194);
  sub_105374(a1, a3, 77, 235408904);
  sub_105374(a1, a3, 78, -2144272382);
  sub_105374(a1, a3, 77, 252186376);
  sub_105374(a1, a3, 78, -2144272382);
  sub_105374(a1, a3, 77, 235408904);
  sub_105374(a1, a3, 78, -2144272381);
  sub_105374(a1, a3, 77, 252186376);
  v53 = sub_105374(a1, a3, 78, -2144272381);
  V_LOCK(v53);
  V_INT((int)v156, "chain");
  v54 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v54);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    537,
    60,
    v194);
  sub_105374(a1, a3, 77, (int)"");
  sub_105374(a1, a3, 78, -2144272379);
  sub_105374(a1, a3, 77, (int)&loc_C000C);
  v55 = sub_105374(a1, a3, 78, -2144272379);
  V_LOCK(v55);
  V_INT((int)&v157, "chain");
  v56 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v56);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    540,
    60,
    v194);
  sub_105374(a1, a3, 77, (int)"");
  sub_105374(a1, a3, 78, -2144272378);
  sub_105374(a1, a3, 77, (int)&loc_C000C);
  v57 = sub_105374(a1, a3, 78, -2144272378);
  V_LOCK(v57);
  V_INT((int)v158, "chain");
  v58 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v58);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    543,
    60,
    v194);
  sub_105374(a1, a3, 77, 0);
  sub_105374(a1, a3, 78, -2144272372);
  sub_105374(a1, a3, 77, (int)&loc_100010);
  v59 = sub_105374(a1, a3, 78, -2144272372);
  V_LOCK(v59);
  V_INT((int)&v159, "chain");
  v60 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v60);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    546,
    60,
    v194);
  sub_105374(a1, a3, 77, 0);
  sub_105374(a1, a3, 78, -2144272360);
  sub_105374(a1, a3, 77, (int)&loc_100010);
  v61 = sub_105374(a1, a3, 78, -2144272360);
  V_LOCK(v61);
  V_INT((int)v160, "chain");
  v62 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v62);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    550,
    60,
    v194);
  sub_105374(a1, a3, 77, 0);
  sub_105374(a1, a3, 78, -2144272114);
  sub_105374(a1, a3, 77, 710158932);
  v63 = sub_105374(a1, a3, 78, -2144272114);
  V_LOCK(v63);
  V_INT((int)&v161, "chain");
  v64 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v64);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    553,
    60,
    v194);
  sub_105374(a1, a3, 77, 0);
  sub_105374(a1, a3, 78, -2144272124);
  sub_105374(a1, a3, 77, (int)&stru_20000.st_name + 2);
  v65 = sub_105374(a1, a3, 78, -2144272124);
  V_LOCK(v65);
  V_INT((int)v162, "chain");
  v66 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v66);
  v67 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
          195,
          "serdes_external_loop_ate_init_rvn",
          33,
          557,
          60,
          v194);
  V_LOCK(v67);
  V_INT((int)&v163, "chain");
  v68 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v68);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    558,
    60,
    v194);
  if ( a4 == 2 )
    LOWORD(v69) = 498;
  else
    LOWORD(v69) = 501;
  if ( a4 == 2 )
    HIWORD(v69) = 498;
  else
    HIWORD(v69) = 501;
  sub_105374(a1, a3, 77, v69);
  v70 = sub_105374(a1, a3, 78, -2144247559);
  V_LOCK(v70);
  V_INT((int)&v164, "chain");
  v71 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v71);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    563,
    60,
    v194);
  sub_105374(a1, a3, 77, 20971840);
  sub_105374(a1, a3, 78, -2144251901);
  sub_105374(a1, a3, 77, 88606024);
  v72 = sub_105374(a1, a3, 78, -2144251901);
  V_LOCK(v72);
  V_INT((int)&v165, "chain");
  v73 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v73);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    567,
    60,
    v194);
  sub_105374(a1, a3, 77, (int)&loc_100010);
  sub_105374(a1, a3, 78, -2144251900);
  sub_105374(a1, a3, 77, 542122064);
  v74 = sub_105374(a1, a3, 78, -2144251900);
  V_LOCK(v74);
  V_INT((int)&v166, "chain");
  v75 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v75);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    570,
    60,
    v194);
  sub_105374(a1, a3, 77, 0);
  sub_105374(a1, a3, 78, -2144247761);
  sub_105374(a1, a3, 77, (int)&stru_20000.st_name + 2);
  v76 = sub_105374(a1, a3, 78, -2144247761);
  V_LOCK(v76);
  V_INT((int)&v167, "chain");
  v77 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v77);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    574,
    60,
    v194);
  sub_105374(a1, a3, 77, 537010178);
  v78 = sub_105374(a1, a3, 78, -2144247750);
  V_LOCK(v78);
  V_INT((int)&v168, "chain");
  v79 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v79);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    576,
    60,
    v194);
  sub_105374(a1, a3, 77, 872428544);
  sub_105374(a1, a3, 78, -2144247769);
  sub_105374(a1, a3, 77, 1006648320);
  v80 = sub_105374(a1, a3, 78, -2144247769);
  V_LOCK(v80);
  V_INT((int)&v169, "chain");
  v81 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v81);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    579,
    60,
    v194);
  sub_105374(a1, a3, 77, (int)sub_80008);
  sub_105374(a1, a3, 78, -2144247745);
  sub_105374(a1, a3, 77, (int)&loc_180018);
  v82 = sub_105374(a1, a3, 78, -2144247745);
  V_LOCK(v82);
  V_INT((int)&v170, "chain");
  v83 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v83);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    582,
    60,
    v194);
  sub_105374(a1, a3, 77, 0);
  sub_105374(a1, a3, 78, -2144247798);
  sub_105374(a1, a3, 77, (int)&stru_20000.st_name + 2);
  v84 = sub_105374(a1, a3, 78, -2144247798);
  V_LOCK(v84);
  V_INT((int)&v171, "chain");
  v85 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v85);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    585,
    60,
    v194);
  sub_105374(a1, a3, 77, (int)&dword_10000 + 1);
  v86 = sub_105374(a1, a3, 78, -2144247604);
  V_LOCK(v86);
  V_INT((int)&v172, "chain");
  v87 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v87);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    587,
    60,
    v194);
  sub_105374(a1, a3, 77, 0);
  sub_105374(a1, a3, 78, -2144247796);
  sub_105374(a1, a3, 77, 268439552);
  v88 = sub_105374(a1, a3, 78, -2144247796);
  V_LOCK(v88);
  V_INT((int)&v173, "chain");
  v89 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v89);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    591,
    60,
    v194);
  sub_105374(a1, a3, 77, 0);
  sub_105374(a1, a3, 78, -2144243666);
  sub_105374(a1, a3, 77, (int)&stru_20000.st_name + 2);
  sub_105374(a1, a3, 78, -2144243666);
  sub_105374(a1, a3, 77, 4259905);
  sub_105374(a1, a3, 78, -2144251869);
  sub_105374(a1, a3, 77, 13304011);
  v90 = sub_105374(a1, a3, 78, -2144251869);
  V_LOCK(v90);
  V_INT((int)&v174, "chain");
  v91 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v91);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    596,
    60,
    v194);
  sub_105374(a1, a3, 77, (int)"");
  v92 = sub_105374(a1, a3, 78, -2144243609);
  V_LOCK(v92);
  V_INT((int)&v175, "chain");
  v93 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v93);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    598,
    60,
    v194);
  sub_105374(a1, a3, 77, (int)&loc_A0008 + 2);
  v94 = sub_105374(a1, a3, 78, -2144247768);
  V_LOCK(v94);
  V_INT((int)&v176, "chain");
  v95 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v95);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    600,
    60,
    v194);
  sub_105374(a1, a3, 77, (int)"ceDirectory3new17h8a5a588e2e79dd0dE");
  v96 = sub_105374(a1, a3, 78, -2144272078);
  V_LOCK(v96);
  V_INT((int)&v177, "chain");
  v97 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v97);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    602,
    60,
    v194);
  sub_105374(a1, a3, 77, -2136964960);
  sub_105374(a1, a3, 78, -2144247776);
  sub_105374(a1, a3, 77, -2136309590);
  v98 = sub_105374(a1, a3, 78, -2144247776);
  V_LOCK(v98);
  V_INT((int)&v178, "chain");
  v99 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v99);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    605,
    60,
    v194);
  serdes_wait_status_rvn(a1, a2, a3, 12308, 1);
  serdes_wait_status_rvn(a1, a2, a3, 12820, 1);
  serdes_wait_status_rvn(a1, a2, a3, 13332, 1);
  v100 = serdes_wait_status_rvn(a1, a2, a3, 13844, 1);
  V_LOCK(v100);
  V_INT((int)&v179, "chain");
  v101 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v101);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    611,
    60,
    v194);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 80);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 80);
  v102 = serdes_wait_status_rvn(a1, a2, a3, 5692, 80);
  V_LOCK(v102);
  V_INT((int)&v180, "chain");
  v103 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v103);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    616,
    60,
    v194);
  serdes_wait_status_rvn(a1, a2, a3, 8217, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8729, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9241, 0);
  v104 = serdes_wait_status_rvn(a1, a2, a3, 9753, 0);
  V_LOCK(v104);
  V_INT((int)&v181, "chain");
  v105 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v105);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    621,
    60,
    v194);
  serdes_wait_status_rvn(a1, a2, a3, 4114, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4626, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5138, 0);
  v106 = serdes_wait_status_rvn(a1, a2, a3, 5650, 0);
  V_LOCK(v106);
  V_INT((int)&v182, "chain");
  v107 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v107);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    626,
    60,
    v194);
  serdes_wait_status_rvn(a1, a2, a3, 8196, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8708, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9220, 0);
  v108 = serdes_wait_status_rvn(a1, a2, a3, 9732, 0);
  V_LOCK(v108);
  V_INT((int)&v183, "chain");
  v109 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v109);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    631,
    60,
    v194);
  sub_105374(a1, a3, 77, (int)&dword_10000 + 1);
  v110 = sub_105374(a1, a3, 78, -2144251791);
  V_LOCK(v110);
  V_INT((int)&v184, "chain");
  v111 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v111);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    633,
    60,
    v194);
  sub_105374(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_105374(a1, a3, 78, -2144247768);
  sub_105374(a1, a3, 77, (int)&loc_A0008 + 2);
  v112 = sub_105374(a1, a3, 78, -2144247768);
  V_LOCK(v112);
  V_INT((int)&v185, "chain");
  v113 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v113);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    637,
    60,
    v194);
  sub_105374(a1, a3, 77, (int)"x..linux_like..sockaddr_in6$u20$as$u20$core..clone..Clone$GT$5clone17hc7400c888ab918b2E");
  sub_105374(a1, a3, 78, -2144243377);
  sub_105374(a1, a3, 77, (int)"x..linux_like..sockaddr_in6$u20$as$u20$core..clone..Clone$GT$5clone17hc7400c888ab918b2E");
  sub_105374(a1, a3, 78, -2144243377);
  sub_105374(a1, a3, 77, (int)"ceDirectory3new17h8a5a588e2e79dd0dE");
  v114 = sub_105374(a1, a3, 78, -2144243377);
  V_LOCK(v114);
  V_INT((int)&v186, "chain");
  v115 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v115);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    641,
    60,
    v194);
  sub_105374(a1, a3, 77, -2136244053);
  sub_105374(a1, a3, 78, -2144247776);
  sub_105374(a1, a3, 77, -2136244053);
  sub_105374(a1, a3, 78, -2144247776);
  usleep(0xAu);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 81);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 81);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 81);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 81);
  sub_105374(a1, a3, 77, -2136309590);
  sub_105374(a1, a3, 78, -2144247776);
  sub_105374(a1, a3, 77, -2136309590);
  sub_105374(a1, a3, 78, -2144247776);
  usleep(0x64u);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 84);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 84);
  v116 = usleep(0x3Cu);
  V_LOCK(v116);
  V_INT((int)&v187, "chain");
  v117 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v117);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    657,
    60,
    v194);
  sub_105374(a1, a3, 77, -1062551382);
  sub_105374(a1, a3, 78, -2144247776);
  v118 = usleep(0x32u);
  V_LOCK(v118);
  V_INT((int)&v188, "chain");
  v119 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v119);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    660,
    60,
    v194);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 86);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 86);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 86);
  v120 = serdes_wait_status_rvn(a1, a2, a3, 5692, 86);
  V_LOCK(v120);
  V_INT((int)&v189, "chain");
  v121 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v121);
  v122 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
           195,
           "serdes_external_loop_ate_init_rvn",
           33,
           666,
           60,
           v194);
  if ( a4 == 2 )
  {
    sub_105374(a1, a3, 77, 196611);
    sub_105374(a1, a3, 78, -2144247798);
    sub_105374(a1, a3, 77, 196611);
    sub_105374(a1, a3, 78, -2144247798);
    usleep(1u);
    serdes_wait_status_rvn(a1, a2, a3, 8218, 1);
    serdes_wait_status_rvn(a1, a2, a3, 8730, 1);
    serdes_wait_status_rvn(a1, a2, a3, 9242, 1);
    serdes_wait_status_rvn(a1, a2, a3, 9754, 1);
    sub_105374(a1, a3, 77, 131074);
    sub_105374(a1, a3, 78, -2144247798);
    sub_105374(a1, a3, 77, 131074);
    sub_105374(a1, a3, 78, -2144247798);
    usleep(0x64u);
    serdes_wait_status_rvn(a1, a2, a3, 8218, 0);
    serdes_wait_status_rvn(a1, a2, a3, 8730, 0);
    serdes_wait_status_rvn(a1, a2, a3, 9242, 0);
    v122 = serdes_wait_status_rvn(a1, a2, a3, 9754, 0);
  }
  V_LOCK(v122);
  V_INT((int)&v190, "chain");
  v123 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v123);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    685,
    60,
    v194);
  sub_105374(a1, a3, 77, -2136309590);
  v124 = sub_105374(a1, a3, 78, -2144247776);
  V_LOCK(v124);
  V_INT((int)&v191, "chain");
  v125 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v125);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    687,
    60,
    v194);
  sub_105374(a1, a3, 77, -1062551382);
  sub_105374(a1, a3, 78, -2144247776);
  v126 = usleep(0x32u);
  V_LOCK(v126);
  V_INT((int)&v192, "chain");
  v127 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v127);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    691,
    60,
    v194);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 82);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 86);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 82);
  v128 = serdes_wait_status_rvn(a1, a2, a3, 5692, 86);
  V_LOCK(v128);
  V_INT((int)&v193, "chain");
  v129 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v129);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_external_loop_ate_init_rvn",
    33,
    697,
    60,
    v194);
  sub_105374(a1, a3, 77, 65537);
  sub_105374(a1, a3, 78, -2144251757);
  sub_105374(a1, a3, 77, 65537);
  sub_105374(a1, a3, 78, -2144251757);
  sub_105374(a1, a3, 77, 1114129);
  sub_105374(a1, a3, 78, -2144251757);
  sub_105374(a1, a3, 77, 65537);
  sub_105374(a1, a3, 78, -2144251757);
  sub_105374(a1, a3, 77, 1114129);
  sub_105374(a1, a3, 78, -2144251757);
  sub_105374(a1, a3, 77, 65537);
  sub_105374(a1, a3, 78, -2144251757);
  usleep(0xAu);
  return 0;
}
