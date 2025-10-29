int __fastcall serdes_internal_loop_ate_init(int a1, unsigned int a2, int a3, int a4)
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
  int v20; // r3
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r3
  int v30; // r0
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
  int v68; // r3
  int v69; // r0
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
  int v128; // r0
  _BYTE v131[32]; // [sp+50h] [bp-1784h] BYREF
  int v132; // [sp+70h] [bp-1764h] BYREF
  _BYTE v133[32]; // [sp+90h] [bp-1744h] BYREF
  int v134; // [sp+B0h] [bp-1724h] BYREF
  _BYTE v135[32]; // [sp+D0h] [bp-1704h] BYREF
  int v136; // [sp+F0h] [bp-16E4h] BYREF
  _BYTE v137[32]; // [sp+110h] [bp-16C4h] BYREF
  int v138; // [sp+130h] [bp-16A4h] BYREF
  _BYTE v139[32]; // [sp+150h] [bp-1684h] BYREF
  int v140; // [sp+170h] [bp-1664h] BYREF
  _BYTE v141[32]; // [sp+190h] [bp-1644h] BYREF
  int v142; // [sp+1B0h] [bp-1624h] BYREF
  _BYTE v143[32]; // [sp+1D0h] [bp-1604h] BYREF
  int v144; // [sp+1F0h] [bp-15E4h] BYREF
  _BYTE v145[32]; // [sp+210h] [bp-15C4h] BYREF
  int v146; // [sp+230h] [bp-15A4h] BYREF
  _BYTE v147[32]; // [sp+250h] [bp-1584h] BYREF
  int v148; // [sp+270h] [bp-1564h] BYREF
  _BYTE v149[32]; // [sp+290h] [bp-1544h] BYREF
  int v150; // [sp+2B0h] [bp-1524h] BYREF
  _BYTE v151[32]; // [sp+2D0h] [bp-1504h] BYREF
  int v152; // [sp+2F0h] [bp-14E4h] BYREF
  _BYTE v153[32]; // [sp+310h] [bp-14C4h] BYREF
  int v154; // [sp+330h] [bp-14A4h] BYREF
  _BYTE v155[32]; // [sp+350h] [bp-1484h] BYREF
  int v156; // [sp+370h] [bp-1464h] BYREF
  _BYTE v157[32]; // [sp+390h] [bp-1444h] BYREF
  int v158; // [sp+3B0h] [bp-1424h] BYREF
  _BYTE v159[32]; // [sp+3D0h] [bp-1404h] BYREF
  int v160; // [sp+3F0h] [bp-13E4h] BYREF
  _BYTE v161[32]; // [sp+410h] [bp-13C4h] BYREF
  int v162; // [sp+430h] [bp-13A4h] BYREF
  _BYTE v163[32]; // [sp+450h] [bp-1384h] BYREF
  int v164; // [sp+470h] [bp-1364h] BYREF
  _BYTE v165[32]; // [sp+490h] [bp-1344h] BYREF
  int v166; // [sp+4B0h] [bp-1324h] BYREF
  _BYTE v167[32]; // [sp+4D0h] [bp-1304h] BYREF
  int v168; // [sp+4F0h] [bp-12E4h] BYREF
  _BYTE v169[32]; // [sp+510h] [bp-12C4h] BYREF
  int v170; // [sp+530h] [bp-12A4h] BYREF
  _BYTE v171[32]; // [sp+550h] [bp-1284h] BYREF
  int v172; // [sp+570h] [bp-1264h] BYREF
  _BYTE v173[32]; // [sp+590h] [bp-1244h] BYREF
  int v174; // [sp+5B0h] [bp-1224h] BYREF
  _BYTE v175[32]; // [sp+5D0h] [bp-1204h] BYREF
  int v176; // [sp+5F0h] [bp-11E4h] BYREF
  _BYTE v177[32]; // [sp+610h] [bp-11C4h] BYREF
  int v178; // [sp+630h] [bp-11A4h] BYREF
  _BYTE v179[32]; // [sp+650h] [bp-1184h] BYREF
  int v180; // [sp+670h] [bp-1164h] BYREF
  _BYTE v181[32]; // [sp+690h] [bp-1144h] BYREF
  int v182; // [sp+6B0h] [bp-1124h] BYREF
  _BYTE v183[32]; // [sp+6D0h] [bp-1104h] BYREF
  int v184; // [sp+6F0h] [bp-10E4h] BYREF
  _BYTE v185[32]; // [sp+710h] [bp-10C4h] BYREF
  int v186; // [sp+730h] [bp-10A4h] BYREF
  _BYTE v187[32]; // [sp+750h] [bp-1084h] BYREF
  int v188; // [sp+770h] [bp-1064h] BYREF
  _BYTE v189[32]; // [sp+790h] [bp-1044h] BYREF
  int v190; // [sp+7B0h] [bp-1024h] BYREF
  _BYTE v191[4100]; // [sp+7D0h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v131, "chain", *(int *)(a1 + 248));
  v6 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    508,
    60,
    v191);
  sub_D85AC(a1, a3, 86, 3670024);
  usleep(0x258u);
  sub_D8A48(a1, a3, 86);
  sub_D85AC(a1, a3, 85, 109905420);
  usleep(0x258u);
  sub_D8A48(a1, a3, 85);
  sub_D85AC(a1, a3, 101, -268374016);
  usleep(0x258u);
  sub_D8A48(a1, a3, 101);
  sub_D85AC(a1, a3, 64, 256);
  usleep(0x258u);
  sub_D8A48(a1, a3, 64);
  sub_D85AC(a1, a3, 80, 33423870);
  usleep(0x258u);
  sub_D8A48(a1, a3, 80);
  sub_D85AC(a1, a3, 81, 832516511);
  usleep(0x258u);
  sub_D8A48(a1, a3, 81);
  sub_D85AC(a1, a3, 88, -1);
  usleep(0x258u);
  sub_D8A48(a1, a3, 88);
  v7 = check_core_reg_with_expect_data(a1, a2, a3, 125, 0x70007000u);
  if ( v7 )
  {
    V_LOCK(v7);
    V_INT((int)&v132, "chain", *(int *)(a1 + 248));
    v128 = logfmt_raw((int)v191, 0x1000u);
    V_UNLOCK(v128);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_internal_loop_ate_init",
      29,
      564,
      100,
      v191);
  }
  sub_D85AC(a1, a3, 86, 137889800);
  v8 = usleep(0x12Cu);
  V_LOCK(v8);
  V_INT((int)v133, "chain", *(int *)(a1 + 248));
  v9 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    569,
    60,
    v191);
  sub_D85AC(
    a1,
    a3,
    77,
    (int)"LT$core..str..pattern..SearchStep$u20$as$u20$core..fmt..Debug$GT$3fmt17hdff973c0848d9d67E");
  sub_D85AC(a1, a3, 78, -2144272046);
  serdes_apb_read(a1, a2, a3, 338);
  sub_D85AC(a1, a3, 77, 33554944);
  sub_D85AC(a1, a3, 78, -2144247742);
  serdes_apb_read(a1, a2, a3, 24642);
  sub_D85AC(a1, a3, 77, 100664832);
  sub_D85AC(a1, a3, 78, -2144247742);
  sub_D85AC(a1, a3, 77, (int)&dword_10000 + 1);
  v10 = sub_D85AC(a1, a3, 78, -2144272003);
  V_LOCK(v10);
  V_INT((int)&v134, "chain", *(int *)(a1 + 248));
  v11 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    579,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 100664832);
  sub_D85AC(a1, a3, 78, -2144247742);
  sub_D8D10(a1, a3, 24643, a4);
  sub_D8D10(a1, a3, 24644, a4 << 7);
  sub_D85AC(a1, a3, 77, 117442304);
  sub_D85AC(a1, a3, 78, -2144247742);
  sub_D8D10(a1, a3, 24643, a4 | 0x100);
  v12 = sub_D8D10(a1, a3, 24644, (a4 << 7) | 0x8000);
  V_LOCK(v12);
  V_INT((int)v135, "chain", *(int *)(a1 + 248));
  v13 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    587,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144251892);
  sub_D85AC(a1, a3, 77, 268439552);
  sub_D85AC(a1, a3, 78, -2144251892);
  sub_D85AC(a1, a3, 77, 33489407);
  sub_D85AC(a1, a3, 78, -2144272086);
  sub_D85AC(a1, a3, 77, 268374015);
  v14 = sub_D85AC(a1, a3, 78, -2144272085);
  V_LOCK(v14);
  V_INT((int)&v136, "chain", *(int *)(a1 + 248));
  v15 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v15);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    592,
    60,
    v191);
  sub_D8D10(a1, a3, 24644, (a4 << 7) | 0x8020);
  sub_D8D10(a1, a3, 24644, (a4 << 7) | 0x8060);
  sub_D85AC(a1, a3, 77, -1);
  sub_D85AC(a1, a3, 78, -2144247719);
  sub_D85AC(a1, a3, 77, -8388737);
  v16 = sub_D85AC(a1, a3, 78, -2144247718);
  V_LOCK(v16);
  V_INT((int)v137, "chain", *(int *)(a1 + 248));
  v17 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v17);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    597,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144247776);
  sub_D85AC(a1, a3, 77, -2136964960);
  v18 = sub_D85AC(a1, a3, 78, -2144247776);
  V_LOCK(v18);
  V_INT((int)&v138, "chain", *(int *)(a1 + 248));
  v19 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v19);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    601,
    60,
    v191);
  if ( a4 == 2 )
    LOWORD(v20) = 4160;
  else
    LOWORD(v20) = 4144;
  if ( a4 == 2 )
    HIWORD(v20) = 4160;
  else
    HIWORD(v20) = 4144;
  sub_D85AC(a1, a3, 77, v20);
  sub_D85AC(a1, a3, 78, -2144247722);
  sub_D85AC(a1, a3, 77, -1);
  v21 = sub_D85AC(a1, a3, 78, -2144247718);
  V_LOCK(v21);
  V_INT((int)v139, "chain", *(int *)(a1 + 248));
  v22 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v22);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    609,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144247771);
  sub_D85AC(a1, a3, 77, (int)&loc_140014);
  v23 = sub_D85AC(a1, a3, 78, -2144247771);
  V_LOCK(v23);
  V_INT((int)&v140, "chain", *(int *)(a1 + 248));
  v24 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    613,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 33554944);
  sub_D85AC(a1, a3, 78, -2144247760);
  sub_D85AC(a1, a3, 77, 122947412);
  v25 = sub_D85AC(a1, a3, 78, -2144247760);
  V_LOCK(v25);
  V_INT((int)v141, "chain", *(int *)(a1 + 248));
  v26 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v26);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    617,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 1073758208);
  sub_D85AC(a1, a3, 78, -2144247770);
  sub_D85AC(a1, a3, 77, -1072381932);
  v27 = sub_D85AC(a1, a3, 78, -2144247770);
  V_LOCK(v27);
  V_INT((int)&v142, "chain", *(int *)(a1 + 248));
  v28 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v28);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    620,
    60,
    v191);
  if ( a4 == 2 )
    LOWORD(v29) = 4;
  else
    LOWORD(v29) = 3;
  if ( a4 == 2 )
    HIWORD(v29) = 4;
  else
    HIWORD(v29) = 3;
  sub_D85AC(a1, a3, 77, v29);
  sub_D85AC(a1, a3, 78, -2144247739);
  sub_D85AC(a1, a3, 77, -1);
  v30 = sub_D85AC(a1, a3, 78, -2144247732);
  V_LOCK(v30);
  V_INT((int)v143, "chain", *(int *)(a1 + 248));
  v31 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v31);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    628,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 268439552);
  sub_D85AC(a1, a3, 78, -2144247769);
  sub_D85AC(a1, a3, 77, 805318656);
  v32 = sub_D85AC(a1, a3, 78, -2144247769);
  V_LOCK(v32);
  V_INT((int)&v144, "chain", *(int *)(a1 + 248));
  v33 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v33);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    632,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144247751);
  sub_D85AC(a1, a3, 77, 5505108);
  v34 = sub_D85AC(a1, a3, 78, -2144247751);
  V_LOCK(v34);
  V_INT((int)v145, "chain", *(int *)(a1 + 248));
  v35 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v35);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    635,
    60,
    v191);
  sub_D85AC(a1, a3, 77, (int)&dword_10000 + 1);
  sub_D85AC(a1, a3, 78, -2144251903);
  sub_D85AC(a1, a3, 77, (int)&loc_230020 + 3);
  v36 = sub_D85AC(a1, a3, 78, -2144251903);
  V_LOCK(v36);
  V_INT((int)&v146, "chain", *(int *)(a1 + 248));
  v37 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v37);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    638,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144251872);
  sub_D85AC(a1, a3, 77, (int)sub_80008);
  v38 = sub_D85AC(a1, a3, 78, -2144251872);
  V_LOCK(v38);
  V_INT((int)v147, "chain", *(int *)(a1 + 248));
  v39 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v39);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    641,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144272111);
  sub_D85AC(a1, a3, 77, 1073692671);
  v40 = sub_D85AC(a1, a3, 78, -2144272088);
  V_LOCK(v40);
  V_INT((int)&v148, "chain", *(int *)(a1 + 248));
  v41 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v41);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    644,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 234884608);
  sub_D85AC(a1, a3, 78, -2144272382);
  sub_D85AC(a1, a3, 77, 235408904);
  v42 = sub_D85AC(a1, a3, 78, -2144272382);
  V_LOCK(v42);
  V_INT((int)v149, "chain", *(int *)(a1 + 248));
  v43 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v43);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    647,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 234884608);
  sub_D85AC(a1, a3, 78, -2144272381);
  sub_D85AC(a1, a3, 77, 235408904);
  v44 = sub_D85AC(a1, a3, 78, -2144272381);
  V_LOCK(v44);
  V_INT((int)&v150, "chain", *(int *)(a1 + 248));
  v45 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v45);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    650,
    60,
    v191);
  sub_D85AC(a1, a3, 77, (int)&loc_180018);
  v46 = sub_D85AC(a1, a3, 78, -2144272353);
  V_LOCK(v46);
  V_INT((int)v151, "chain", *(int *)(a1 + 248));
  v47 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v47);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    653,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 22348117);
  sub_D85AC(a1, a3, 78, -2144272044);
  sub_D85AC(a1, a3, 77, 67044351);
  v48 = sub_D85AC(a1, a3, 78, -2144272044);
  V_LOCK(v48);
  V_INT((int)&v152, "chain", *(int *)(a1 + 248));
  v49 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v49);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    656,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 61277095);
  sub_D85AC(a1, a3, 78, -2144272380);
  sub_D85AC(a1, a3, 77, 65471463);
  v50 = sub_D85AC(a1, a3, 78, -2144272380);
  V_LOCK(v50);
  V_INT((int)v153, "chain", *(int *)(a1 + 248));
  v51 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v51);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    659,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 235408904);
  sub_D85AC(a1, a3, 78, -2144272382);
  sub_D85AC(a1, a3, 77, 252186376);
  sub_D85AC(a1, a3, 78, -2144272382);
  sub_D85AC(a1, a3, 77, 235408904);
  sub_D85AC(a1, a3, 78, -2144272381);
  sub_D85AC(a1, a3, 77, 252186376);
  v52 = sub_D85AC(a1, a3, 78, -2144272381);
  V_LOCK(v52);
  V_INT((int)&v154, "chain", *(int *)(a1 + 248));
  v53 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v53);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    664,
    60,
    v191);
  sub_D85AC(a1, a3, 77, (int)"sph_blake384_addbits_and_close");
  sub_D85AC(a1, a3, 78, -2144272379);
  sub_D85AC(a1, a3, 77, (int)&loc_C000C);
  v54 = sub_D85AC(a1, a3, 78, -2144272379);
  V_LOCK(v54);
  V_INT((int)v155, "chain", *(int *)(a1 + 248));
  v55 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v55);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    667,
    60,
    v191);
  sub_D85AC(a1, a3, 77, (int)"sph_blake384_addbits_and_close");
  sub_D85AC(a1, a3, 78, -2144272378);
  sub_D85AC(a1, a3, 77, (int)&loc_C000C);
  v56 = sub_D85AC(a1, a3, 78, -2144272378);
  V_LOCK(v56);
  V_INT((int)&v156, "chain", *(int *)(a1 + 248));
  v57 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v57);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    670,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144272372);
  sub_D85AC(a1, a3, 77, (int)&loc_100010);
  v58 = sub_D85AC(a1, a3, 78, -2144272372);
  V_LOCK(v58);
  V_INT((int)v157, "chain", *(int *)(a1 + 248));
  v59 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v59);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    673,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144272360);
  sub_D85AC(a1, a3, 77, (int)&loc_100010);
  v60 = sub_D85AC(a1, a3, 78, -2144272360);
  V_LOCK(v60);
  V_INT((int)&v158, "chain", *(int *)(a1 + 248));
  v61 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v61);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    677,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144272114);
  sub_D85AC(a1, a3, 77, 710158932);
  v62 = sub_D85AC(a1, a3, 78, -2144272114);
  V_LOCK(v62);
  V_INT((int)v159, "chain", *(int *)(a1 + 248));
  v63 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v63);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    680,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144272124);
  sub_D85AC(a1, a3, 77, (int)&stru_1FFF8.st_size + 2);
  v64 = sub_D85AC(a1, a3, 78, -2144272124);
  V_LOCK(v64);
  V_INT((int)&v160, "chain", *(int *)(a1 + 248));
  v65 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v65);
  v66 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          190,
          "serdes_internal_loop_ate_init",
          29,
          684,
          60,
          v191);
  V_LOCK(v66);
  V_INT((int)v161, "chain", *(int *)(a1 + 248));
  v67 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v67);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    685,
    60,
    v191);
  if ( a4 == 2 )
    LOWORD(v68) = 498;
  else
    LOWORD(v68) = 501;
  if ( a4 == 2 )
    HIWORD(v68) = 498;
  else
    HIWORD(v68) = 501;
  sub_D85AC(a1, a3, 77, v68);
  v69 = sub_D85AC(a1, a3, 78, -2144247559);
  V_LOCK(v69);
  V_INT((int)&v162, "chain", *(int *)(a1 + 248));
  v70 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v70);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    690,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 25166208);
  sub_D85AC(a1, a3, 78, -2144251901);
  sub_D85AC(a1, a3, 77, 92800392);
  sub_D85AC(a1, a3, 78, -2144251901);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144251900);
  sub_D85AC(a1, a3, 77, 541073472);
  sub_D85AC(a1, a3, 78, -2144251900);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144247761);
  sub_D85AC(a1, a3, 77, (int)&stru_1FFF8.st_size + 2);
  sub_D85AC(a1, a3, 78, -2144247761);
  sub_D85AC(a1, a3, 77, 537010178);
  v71 = sub_D85AC(a1, a3, 78, -2144247750);
  V_LOCK(v71);
  V_INT((int)v163, "chain", *(int *)(a1 + 248));
  v72 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v72);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    702,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 537010178);
  v73 = sub_D85AC(a1, a3, 78, -2144247750);
  V_LOCK(v73);
  V_INT((int)&v164, "chain", *(int *)(a1 + 248));
  v74 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v74);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    704,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 872428544);
  sub_D85AC(a1, a3, 78, -2144247769);
  sub_D85AC(a1, a3, 77, 1006648320);
  v75 = sub_D85AC(a1, a3, 78, -2144247769);
  V_LOCK(v75);
  V_INT((int)v165, "chain", *(int *)(a1 + 248));
  v76 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v76);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    707,
    60,
    v191);
  sub_D85AC(a1, a3, 77, (int)sub_80008);
  sub_D85AC(a1, a3, 78, -2144247745);
  sub_D85AC(a1, a3, 77, (int)&loc_180018);
  v77 = sub_D85AC(a1, a3, 78, -2144247745);
  V_LOCK(v77);
  V_INT((int)&v166, "chain", *(int *)(a1 + 248));
  v78 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v78);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    710,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144247798);
  sub_D85AC(a1, a3, 77, (int)&stru_1FFF8.st_size + 2);
  v79 = sub_D85AC(a1, a3, 78, -2144247798);
  V_LOCK(v79);
  V_INT((int)v167, "chain", *(int *)(a1 + 248));
  v80 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v80);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    713,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 65537);
  v81 = sub_D85AC(a1, a3, 78, -2144247604);
  V_LOCK(v81);
  V_INT((int)&v168, "chain", *(int *)(a1 + 248));
  v82 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v82);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    715,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144247796);
  sub_D85AC(a1, a3, 77, 268439552);
  v83 = sub_D85AC(a1, a3, 78, -2144247796);
  V_LOCK(v83);
  V_INT((int)v169, "chain", *(int *)(a1 + 248));
  v84 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v84);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    718,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144243666);
  sub_D85AC(a1, a3, 77, (int)&stru_1FFF8.st_size + 2);
  sub_D85AC(a1, a3, 78, -2144243666);
  sub_D85AC(a1, a3, 77, 4259905);
  sub_D85AC(a1, a3, 78, -2144251869);
  sub_D85AC(a1, a3, 77, 13304011);
  v85 = sub_D85AC(a1, a3, 78, -2144251869);
  V_LOCK(v85);
  V_INT((int)&v170, "chain", *(int *)(a1 + 248));
  v86 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v86);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    723,
    60,
    v191);
  sub_D85AC(a1, a3, 77, (int)"sph_blake384_addbits_and_close");
  v87 = sub_D85AC(a1, a3, 78, -2144243609);
  V_LOCK(v87);
  V_INT((int)v171, "chain", *(int *)(a1 + 248));
  v88 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v88);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    725,
    60,
    v191);
  sub_D85AC(a1, a3, 77, (int)&loc_A0008 + 2);
  v89 = sub_D85AC(a1, a3, 78, -2144247768);
  V_LOCK(v89);
  V_INT((int)&v172, "chain", *(int *)(a1 + 248));
  v90 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v90);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    727,
    60,
    v191);
  sub_D85AC(a1, a3, 77, (int)"16$u20$as$u20$core..fmt..num..DisplayInt$GT$5to_u817hb5a8760e533952aeE");
  v91 = sub_D85AC(a1, a3, 78, -2144272078);
  V_LOCK(v91);
  V_INT((int)v173, "chain", *(int *)(a1 + 248));
  v92 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v92);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    729,
    60,
    v191);
  serdes_apb_read(a1, a2, a3, 306);
  sub_D85AC(a1, a3, 77, -2136964960);
  sub_D85AC(a1, a3, 78, -2144247776);
  serdes_apb_read(a1, a2, a3, 24608);
  sub_D85AC(a1, a3, 77, -2136309590);
  sub_D85AC(a1, a3, 78, -2144247776);
  v93 = serdes_apb_read(a1, a2, a3, 24608);
  V_LOCK(v93);
  V_INT((int)&v174, "chain", *(int *)(a1 + 248));
  v94 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v94);
  v95 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          190,
          "serdes_internal_loop_ate_init",
          29,
          737,
          60,
          v191);
  V_LOCK(v95);
  V_INT((int)v175, "chain", *(int *)(a1 + 248));
  v96 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v96);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    738,
    60,
    v191);
  v97 = usleep(0x3E8u);
  V_LOCK(v97);
  V_INT((int)&v176, "chain", *(int *)(a1 + 248));
  v98 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v98);
  v99 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          190,
          "serdes_internal_loop_ate_init",
          29,
          741,
          60,
          v191);
  V_LOCK(v99);
  V_INT((int)v177, "chain", *(int *)(a1 + 248));
  v100 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v100);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    742,
    60,
    v191);
  serdes_wait_status(a1, a2, a3, 12308, 65537);
  serdes_wait_status(a1, a2, a3, 12820, 65537);
  serdes_wait_status(a1, a2, a3, 13332, 65537);
  v101 = serdes_wait_status(a1, a2, a3, 13844, 65537);
  V_LOCK(v101);
  V_INT((int)&v178, "chain", *(int *)(a1 + 248));
  v102 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v102);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    748,
    60,
    v191);
  serdes_wait_status(a1, a2, a3, 4156, 80);
  serdes_wait_status(a1, a2, a3, 4668, 80);
  serdes_wait_status(a1, a2, a3, 5180, 80);
  v103 = serdes_wait_status(a1, a2, a3, 5692, 80);
  V_LOCK(v103);
  V_INT((int)v179, "chain", *(int *)(a1 + 248));
  v104 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v104);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    753,
    60,
    v191);
  serdes_wait_status(a1, a2, a3, 8217, 0);
  serdes_wait_status(a1, a2, a3, 8729, 0);
  serdes_wait_status(a1, a2, a3, 9241, 0);
  v105 = serdes_wait_status(a1, a2, a3, 9753, 0);
  V_LOCK(v105);
  V_INT((int)&v180, "chain", *(int *)(a1 + 248));
  v106 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v106);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    758,
    60,
    v191);
  serdes_wait_status(a1, a2, a3, 4114, 0);
  serdes_wait_status(a1, a2, a3, 4626, 0);
  serdes_wait_status(a1, a2, a3, 5138, 0);
  v107 = serdes_wait_status(a1, a2, a3, 5650, 0);
  V_LOCK(v107);
  V_INT((int)v181, "chain", *(int *)(a1 + 248));
  v108 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v108);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    763,
    60,
    v191);
  serdes_wait_status(a1, a2, a3, 8196, 0);
  serdes_wait_status(a1, a2, a3, 8708, 0);
  serdes_wait_status(a1, a2, a3, 9220, 0);
  v109 = serdes_wait_status(a1, a2, a3, 9732, 0);
  V_LOCK(v109);
  V_INT((int)&v182, "chain", *(int *)(a1 + 248));
  v110 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v110);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    769,
    60,
    v191);
  sub_D85AC(a1, a3, 77, (int)&dword_10000 + 1);
  sub_D85AC(a1, a3, 78, -2144251791);
  sub_D85AC(a1, a3, 77, (int)&loc_E000C + 2);
  sub_D85AC(a1, a3, 78, -2144247768);
  sub_D85AC(a1, a3, 77, (int)&loc_E000C + 2);
  sub_D85AC(a1, a3, 78, -2144247768);
  sub_D85AC(
    a1,
    a3,
    77,
    (int)"LT$core..str..pattern..SearchStep$u20$as$u20$core..fmt..Debug$GT$3fmt17hdff973c0848d9d67E");
  sub_D85AC(a1, a3, 78, -2144243377);
  sub_D85AC(
    a1,
    a3,
    77,
    (int)"LT$core..str..pattern..SearchStep$u20$as$u20$core..fmt..Debug$GT$3fmt17hdff973c0848d9d67E");
  sub_D85AC(a1, a3, 78, -2144243377);
  sub_D85AC(a1, a3, 77, (int)"16$u20$as$u20$core..fmt..num..DisplayInt$GT$5to_u817hb5a8760e533952aeE");
  v111 = sub_D85AC(a1, a3, 78, -2144243377);
  V_LOCK(v111);
  V_INT((int)v183, "chain", *(int *)(a1 + 248));
  v112 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v112);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    776,
    60,
    v191);
  sub_D85AC(a1, a3, 77, -2136244053);
  sub_D85AC(a1, a3, 78, -2144247776);
  sub_D85AC(a1, a3, 77, -2136244053);
  sub_D85AC(a1, a3, 78, -2144247776);
  usleep(0x2710u);
  serdes_wait_status(a1, a2, a3, 4156, (int)off_1005C + 1);
  serdes_wait_status(a1, a2, a3, 4668, (int)off_1005C + 1);
  serdes_wait_status(a1, a2, a3, 5180, (int)off_1005C + 1);
  serdes_wait_status(a1, a2, a3, 5692, (int)off_1005C + 1);
  sub_D85AC(a1, a3, 77, -2136309590);
  sub_D85AC(a1, a3, 78, -2144247776);
  sub_D85AC(a1, a3, 77, -2136309590);
  sub_D85AC(a1, a3, 78, -2144247776);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  serdes_wait_status(a1, a2, a3, 4156, 92);
  serdes_wait_status(a1, a2, a3, 4668, 92);
  serdes_wait_status(a1, a2, a3, 5180, 92);
  serdes_wait_status(a1, a2, a3, 5692, 92);
  v113 = usleep(0xEA60u);
  V_LOCK(v113);
  V_INT((int)&v184, "chain", *(int *)(a1 + 248));
  v114 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v114);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    795,
    60,
    v191);
  sub_D85AC(a1, a3, 77, -1062551382);
  sub_D85AC(a1, a3, 78, -2144247776);
  v115 = usleep(0xC350u);
  V_LOCK(v115);
  V_INT((int)v185, "chain", *(int *)(a1 + 248));
  v116 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v116);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    799,
    60,
    v191);
  serdes_wait_status(a1, a2, a3, 4156, 94);
  serdes_wait_status(a1, a2, a3, 4668, 94);
  serdes_wait_status(a1, a2, a3, 5180, 94);
  v117 = serdes_wait_status(a1, a2, a3, 5692, 94);
  V_LOCK(v117);
  V_INT((int)&v186, "chain", *(int *)(a1 + 248));
  v118 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v118);
  v119 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
           190,
           "serdes_internal_loop_ate_init",
           29,
           805,
           60,
           v191);
  if ( a4 == 2 )
  {
    sub_D85AC(a1, a3, 77, 196611);
    sub_D85AC(a1, a3, 78, -2144247798);
    sub_D85AC(a1, a3, 77, 196611);
    sub_D85AC(a1, a3, 78, -2144247798);
    usleep(0x3E8u);
    serdes_wait_status(a1, a2, a3, 8218, 65537);
    serdes_wait_status(a1, a2, a3, 8730, 65537);
    serdes_wait_status(a1, a2, a3, 9242, 65537);
    serdes_wait_status(a1, a2, a3, 9754, 65537);
    sub_D85AC(a1, a3, 77, 131074);
    sub_D85AC(a1, a3, 78, -2144247798);
    sub_D85AC(a1, a3, 77, 131074);
    sub_D85AC(a1, a3, 78, -2144247798);
    usleep((__useconds_t)&elf_hash_chain[4398]);
    serdes_wait_status(a1, a2, a3, 8218, 0);
    serdes_wait_status(a1, a2, a3, 8730, 0);
    serdes_wait_status(a1, a2, a3, 9242, 0);
    v119 = serdes_wait_status(a1, a2, a3, 9754, 0);
  }
  V_LOCK(v119);
  V_INT((int)v187, "chain", *(int *)(a1 + 248));
  v120 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v120);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    824,
    60,
    v191);
  sub_D85AC(a1, a3, 77, -2136309590);
  v121 = sub_D85AC(a1, a3, 78, -2144247776);
  V_LOCK(v121);
  V_INT((int)&v188, "chain", *(int *)(a1 + 248));
  v122 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v122);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    826,
    60,
    v191);
  sub_D85AC(a1, a3, 77, -1062551382);
  sub_D85AC(a1, a3, 78, -2144247776);
  v123 = usleep(0xC350u);
  V_LOCK(v123);
  V_INT((int)v189, "chain", *(int *)(a1 + 248));
  v124 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v124);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    830,
    60,
    v191);
  serdes_wait_status(a1, a2, a3, 4156, 94);
  serdes_wait_status(a1, a2, a3, 4668, 94);
  serdes_wait_status(a1, a2, a3, 5180, 94);
  v125 = serdes_wait_status(a1, a2, a3, 5692, 94);
  V_LOCK(v125);
  V_INT((int)&v190, "chain", *(int *)(a1 + 248));
  v126 = logfmt_raw((int)v191, 0x1000u);
  V_UNLOCK(v126);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    835,
    60,
    v191);
  sub_D85AC(a1, a3, 77, 65537);
  sub_D85AC(a1, a3, 78, -2144251757);
  sub_D85AC(a1, a3, 77, 65537);
  sub_D85AC(a1, a3, 78, -2144251757);
  sub_D85AC(a1, a3, 77, 1114129);
  sub_D85AC(a1, a3, 78, -2144251757);
  sub_D85AC(a1, a3, 77, 65537);
  sub_D85AC(a1, a3, 78, -2144251757);
  sub_D85AC(a1, a3, 77, 1114129);
  sub_D85AC(a1, a3, 78, -2144251757);
  sub_D85AC(a1, a3, 77, 65537);
  sub_D85AC(a1, a3, 78, -2144251757);
  usleep(0x2710u);
  return 0;
}
