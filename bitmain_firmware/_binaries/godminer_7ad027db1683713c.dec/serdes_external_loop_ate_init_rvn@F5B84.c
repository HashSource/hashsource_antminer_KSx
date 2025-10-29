int __fastcall serdes_external_loop_ate_init_rvn(int a1, int a2, int a3, int a4)
{
  int v6; // r3
  int v7; // r3
  int v8; // r3
  _DWORD v12[7]; // [sp+38h] [bp-17A4h] BYREF
  int v13; // [sp+54h] [bp-1788h]
  _DWORD v14[7]; // [sp+58h] [bp-1784h] BYREF
  int v15; // [sp+74h] [bp-1768h]
  _DWORD v16[7]; // [sp+78h] [bp-1764h] BYREF
  int v17; // [sp+94h] [bp-1748h]
  _DWORD v18[7]; // [sp+98h] [bp-1744h] BYREF
  int v19; // [sp+B4h] [bp-1728h]
  _DWORD v20[7]; // [sp+B8h] [bp-1724h] BYREF
  int v21; // [sp+D4h] [bp-1708h]
  _DWORD v22[7]; // [sp+D8h] [bp-1704h] BYREF
  int v23; // [sp+F4h] [bp-16E8h]
  _DWORD v24[7]; // [sp+F8h] [bp-16E4h] BYREF
  int v25; // [sp+114h] [bp-16C8h]
  _DWORD v26[7]; // [sp+118h] [bp-16C4h] BYREF
  int v27; // [sp+134h] [bp-16A8h]
  _DWORD v28[7]; // [sp+138h] [bp-16A4h] BYREF
  int v29; // [sp+154h] [bp-1688h]
  _DWORD v30[7]; // [sp+158h] [bp-1684h] BYREF
  int v31; // [sp+174h] [bp-1668h]
  _DWORD v32[7]; // [sp+178h] [bp-1664h] BYREF
  int v33; // [sp+194h] [bp-1648h]
  _DWORD v34[7]; // [sp+198h] [bp-1644h] BYREF
  int v35; // [sp+1B4h] [bp-1628h]
  _DWORD v36[7]; // [sp+1B8h] [bp-1624h] BYREF
  int v37; // [sp+1D4h] [bp-1608h]
  _DWORD v38[7]; // [sp+1D8h] [bp-1604h] BYREF
  int v39; // [sp+1F4h] [bp-15E8h]
  _DWORD v40[7]; // [sp+1F8h] [bp-15E4h] BYREF
  int v41; // [sp+214h] [bp-15C8h]
  _DWORD v42[7]; // [sp+218h] [bp-15C4h] BYREF
  int v43; // [sp+234h] [bp-15A8h]
  _DWORD v44[7]; // [sp+238h] [bp-15A4h] BYREF
  int v45; // [sp+254h] [bp-1588h]
  _DWORD v46[7]; // [sp+258h] [bp-1584h] BYREF
  int v47; // [sp+274h] [bp-1568h]
  _DWORD v48[7]; // [sp+278h] [bp-1564h] BYREF
  int v49; // [sp+294h] [bp-1548h]
  _DWORD v50[7]; // [sp+298h] [bp-1544h] BYREF
  int v51; // [sp+2B4h] [bp-1528h]
  _DWORD v52[7]; // [sp+2B8h] [bp-1524h] BYREF
  int v53; // [sp+2D4h] [bp-1508h]
  _DWORD v54[7]; // [sp+2D8h] [bp-1504h] BYREF
  int v55; // [sp+2F4h] [bp-14E8h]
  _DWORD v56[7]; // [sp+2F8h] [bp-14E4h] BYREF
  int v57; // [sp+314h] [bp-14C8h]
  _DWORD v58[7]; // [sp+318h] [bp-14C4h] BYREF
  int v59; // [sp+334h] [bp-14A8h]
  _DWORD v60[7]; // [sp+338h] [bp-14A4h] BYREF
  int v61; // [sp+354h] [bp-1488h]
  _DWORD v62[7]; // [sp+358h] [bp-1484h] BYREF
  int v63; // [sp+374h] [bp-1468h]
  _DWORD v64[7]; // [sp+378h] [bp-1464h] BYREF
  int v65; // [sp+394h] [bp-1448h]
  _DWORD v66[7]; // [sp+398h] [bp-1444h] BYREF
  int v67; // [sp+3B4h] [bp-1428h]
  _DWORD v68[7]; // [sp+3B8h] [bp-1424h] BYREF
  int v69; // [sp+3D4h] [bp-1408h]
  _DWORD v70[7]; // [sp+3D8h] [bp-1404h] BYREF
  int v71; // [sp+3F4h] [bp-13E8h]
  _DWORD v72[7]; // [sp+3F8h] [bp-13E4h] BYREF
  int v73; // [sp+414h] [bp-13C8h]
  _DWORD v74[7]; // [sp+418h] [bp-13C4h] BYREF
  int v75; // [sp+434h] [bp-13A8h]
  _DWORD v76[7]; // [sp+438h] [bp-13A4h] BYREF
  int v77; // [sp+454h] [bp-1388h]
  _DWORD v78[7]; // [sp+458h] [bp-1384h] BYREF
  int v79; // [sp+474h] [bp-1368h]
  _DWORD v80[7]; // [sp+478h] [bp-1364h] BYREF
  int v81; // [sp+494h] [bp-1348h]
  _DWORD v82[7]; // [sp+498h] [bp-1344h] BYREF
  int v83; // [sp+4B4h] [bp-1328h]
  _DWORD v84[7]; // [sp+4B8h] [bp-1324h] BYREF
  int v85; // [sp+4D4h] [bp-1308h]
  _DWORD v86[7]; // [sp+4D8h] [bp-1304h] BYREF
  int v87; // [sp+4F4h] [bp-12E8h]
  _DWORD v88[7]; // [sp+4F8h] [bp-12E4h] BYREF
  int v89; // [sp+514h] [bp-12C8h]
  _DWORD v90[7]; // [sp+518h] [bp-12C4h] BYREF
  int v91; // [sp+534h] [bp-12A8h]
  _DWORD v92[7]; // [sp+538h] [bp-12A4h] BYREF
  int v93; // [sp+554h] [bp-1288h]
  _DWORD v94[7]; // [sp+558h] [bp-1284h] BYREF
  int v95; // [sp+574h] [bp-1268h]
  _DWORD v96[7]; // [sp+578h] [bp-1264h] BYREF
  int v97; // [sp+594h] [bp-1248h]
  _DWORD v98[7]; // [sp+598h] [bp-1244h] BYREF
  int v99; // [sp+5B4h] [bp-1228h]
  _DWORD v100[7]; // [sp+5B8h] [bp-1224h] BYREF
  int v101; // [sp+5D4h] [bp-1208h]
  _DWORD v102[7]; // [sp+5D8h] [bp-1204h] BYREF
  int v103; // [sp+5F4h] [bp-11E8h]
  _DWORD v104[7]; // [sp+5F8h] [bp-11E4h] BYREF
  int v105; // [sp+614h] [bp-11C8h]
  _DWORD v106[7]; // [sp+618h] [bp-11C4h] BYREF
  int v107; // [sp+634h] [bp-11A8h]
  _DWORD v108[7]; // [sp+638h] [bp-11A4h] BYREF
  int v109; // [sp+654h] [bp-1188h]
  _DWORD v110[7]; // [sp+658h] [bp-1184h] BYREF
  int v111; // [sp+674h] [bp-1168h]
  _DWORD v112[7]; // [sp+678h] [bp-1164h] BYREF
  int v113; // [sp+694h] [bp-1148h]
  _DWORD v114[7]; // [sp+698h] [bp-1144h] BYREF
  int v115; // [sp+6B4h] [bp-1128h]
  _DWORD v116[7]; // [sp+6B8h] [bp-1124h] BYREF
  int v117; // [sp+6D4h] [bp-1108h]
  _DWORD v118[7]; // [sp+6D8h] [bp-1104h] BYREF
  int v119; // [sp+6F4h] [bp-10E8h]
  _DWORD v120[7]; // [sp+6F8h] [bp-10E4h] BYREF
  int v121; // [sp+714h] [bp-10C8h]
  _DWORD v122[7]; // [sp+718h] [bp-10C4h] BYREF
  int v123; // [sp+734h] [bp-10A8h]
  _DWORD v124[7]; // [sp+738h] [bp-10A4h] BYREF
  int v125; // [sp+754h] [bp-1088h]
  _DWORD v126[7]; // [sp+758h] [bp-1084h] BYREF
  int v127; // [sp+774h] [bp-1068h]
  _DWORD v128[7]; // [sp+778h] [bp-1064h] BYREF
  int v129; // [sp+794h] [bp-1048h]
  _DWORD v130[7]; // [sp+798h] [bp-1044h] BYREF
  int v131; // [sp+7B4h] [bp-1028h]
  _DWORD v132[7]; // [sp+7B8h] [bp-1024h] BYREF
  int v133; // [sp+7D4h] [bp-1008h]
  char v134[4100]; // [sp+7D8h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v12, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "%s ...",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    422,
    60,
    v134);
  sub_F2F24(a1, a3, 240, 0x80000000);
  sub_F2F24(a1, a3, 86, 67634184);
  sub_F2F24(a1, a3, 64, 256);
  sub_F2F24(a1, a3, 80, 33423870);
  sub_F2F24(a1, a3, 81, 832516511);
  sub_F2F24(a1, a3, 88, -1);
  sub_F2F24(a1, a3, 86, 201853960);
  V_LOCK();
  V_INT((int)v14, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v15,
    v14[0],
    v14[1],
    v14[2],
    v14[3],
    v14[4],
    v14[5],
    v14[6],
    v15,
    "%s Sram_ext_ld done",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    437,
    60,
    v134);
  V_LOCK();
  V_INT((int)v16, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v17,
    v16[0],
    v16[1],
    v16[2],
    v16[3],
    v16[4],
    v16[5],
    v16[6],
    v17,
    "%s Override pcs_pwr_stable, pma_pwr_stable",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    438,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 196611);
  sub_F2F24(a1, a3, 78, -2144272046);
  sub_F2F24(a1, a3, 77, 33554944);
  sub_F2F24(a1, a3, 78, -2144247742);
  sub_F2F24(a1, a3, 77, 100664832);
  sub_F2F24(a1, a3, 78, -2144247742);
  sub_F2F24(a1, a3, 77, 65537);
  sub_F2F24(a1, a3, 78, -2144272003);
  V_LOCK();
  V_INT((int)v18, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v19,
    v18[0],
    v18[1],
    v18[2],
    v18[3],
    v18[4],
    v18[5],
    v18[6],
    v19,
    "%s Override tx_cnxt_sel rx_cnxt_sel tx_cmn_cntx_sel",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    445,
    60,
    v134);
  sub_F3498(a1, a3, 24642, a4 | 0x600);
  sub_F2F24(a1, a3, 77, 0);
  sub_F2F24(a1, a3, 78, -2144247741);
  sub_F3498(a1, a3, 24644, a4 << 7);
  sub_F3498(a1, a3, 24642, a4 | 0x700);
  sub_F2F24(a1, a3, 77, 16777472);
  sub_F2F24(a1, a3, 78, -2144247741);
  sub_F3498(a1, a3, 24644, a4 << 7);
  V_LOCK();
  V_INT((int)v20, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v21,
    v20[0],
    v20[1],
    v20[2],
    v20[3],
    v20[4],
    v20[5],
    v20[6],
    v21,
    "%s Overriding sup_cntx_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    460,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 0);
  sub_F2F24(a1, a3, 78, -2144251892);
  sub_F2F24(a1, a3, 77, 268439552);
  sub_F2F24(a1, a3, 78, -2144251892);
  sub_F2F24(a1, a3, 77, 33489407);
  sub_F2F24(a1, a3, 78, -2144272086);
  sub_F2F24(a1, a3, 77, 268374015);
  sub_F2F24(a1, a3, 78, -2144272085);
  V_LOCK();
  V_INT((int)v22, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v23,
    v22[0],
    v22[1],
    v22[2],
    v22[3],
    v22[4],
    v22[5],
    v22[6],
    v23,
    "%s Overriding lane_cntx_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    466,
    60,
    v134);
  sub_F3498(a1, a3, 24644, (a4 << 7) | 0x8020);
  sub_F3498(a1, a3, 24644, (a4 << 7) | 0x8060);
  sub_F2F24(a1, a3, 77, -1);
  sub_F2F24(a1, a3, 78, -2144247719);
  sub_F2F24(a1, a3, 77, -8388737);
  sub_F2F24(a1, a3, 78, -2144247718);
  V_LOCK();
  V_INT((int)v24, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v25,
    v24[0],
    v24[1],
    v24[2],
    v24[3],
    v24[4],
    v24[5],
    v24[6],
    v25,
    "%s Override tx_req, rx_req, and De-assert rx_data_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    472,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 0);
  sub_F2F24(a1, a3, 78, -2144247776);
  sub_F2F24(a1, a3, 77, -2136964960);
  sub_F2F24(a1, a3, 78, -2144247776);
  V_LOCK();
  V_INT((int)v26, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v27,
    v26[0],
    v26[1],
    v26[2],
    v26[3],
    v26[4],
    v26[5],
    v26[6],
    v27,
    "%s Override rx_width",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    476,
    60,
    v134);
  if ( a4 == 2 )
    LOWORD(v6) = 4160;
  else
    LOWORD(v6) = 4144;
  if ( a4 == 2 )
    HIWORD(v6) = 4160;
  else
    HIWORD(v6) = 4144;
  sub_F2F24(a1, a3, 77, v6);
  sub_F2F24(a1, a3, 78, -2144247722);
  sub_F2F24(a1, a3, 77, -1);
  sub_F2F24(a1, a3, 78, -2144247718);
  V_LOCK();
  V_INT((int)v28, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v29,
    v28[0],
    v28[1],
    v28[2],
    v28[3],
    v28[4],
    v28[5],
    v28[6],
    v29,
    "%s Override rx_lpd, rx_pstate",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    483,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 0);
  sub_F2F24(a1, a3, 78, -2144247771);
  sub_F2F24(a1, a3, 77, (int)&loc_140014);
  sub_F2F24(a1, a3, 78, -2144247771);
  V_LOCK();
  V_INT((int)v30, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v31,
    v30[0],
    v30[1],
    v30[2],
    v30[3],
    v30[4],
    v30[5],
    v30[6],
    v31,
    "%s Override rx_recal_skip_en, rx_recal_force_en, rx_recal_bank_sel, rx_coarse_adpt_force_en, rx_coarse_adpt_skip_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    487,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 33554944);
  sub_F2F24(a1, a3, 78, -2144247760);
  sub_F2F24(a1, a3, 77, 122947412);
  sub_F2F24(a1, a3, 78, -2144247760);
  V_LOCK();
  V_INT((int)v32, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v33,
    v32[0],
    v32[1],
    v32[2],
    v32[3],
    v32[4],
    v32[5],
    v32[6],
    v33,
    "%s  Override tx_lpd, tx_pstate, tx_pll_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    491,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 1073758208);
  sub_F2F24(a1, a3, 78, -2144247770);
  sub_F2F24(a1, a3, 77, -1072381932);
  sub_F2F24(a1, a3, 78, -2144247770);
  V_LOCK();
  V_INT((int)v34, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v35,
    v34[0],
    v34[1],
    v34[2],
    v34[3],
    v34[4],
    v34[5],
    v34[6],
    v35,
    "%s Override tx_width_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    494,
    60,
    v134);
  if ( a4 == 2 )
    LOWORD(v7) = 4;
  else
    LOWORD(v7) = 3;
  if ( a4 == 2 )
    HIWORD(v7) = 4;
  else
    HIWORD(v7) = 3;
  sub_F2F24(a1, a3, 77, v7);
  sub_F2F24(a1, a3, 78, -2144247739);
  sub_F2F24(a1, a3, 77, -1);
  sub_F2F24(a1, a3, 78, -2144247732);
  V_LOCK();
  V_INT((int)v36, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v37,
    v36[0],
    v36[1],
    v36[2],
    v36[3],
    v36[4],
    v36[5],
    v36[6],
    v37,
    "%s Override tx_master_pll_state_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    501,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 268439552);
  sub_F2F24(a1, a3, 78, -2144247769);
  sub_F2F24(a1, a3, 77, 805318656);
  sub_F2F24(a1, a3, 78, -2144247769);
  V_LOCK();
  V_INT((int)v38, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v39,
    v38[0],
    v38[1],
    v38[2],
    v38[3],
    v38[4],
    v38[5],
    v38[6],
    v39,
    "%s Override tx_recal_bank_sel_r, tx_recal_force_en_r, tx_recal_skip_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    505,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 0);
  sub_F2F24(a1, a3, 78, -2144247751);
  sub_F2F24(a1, a3, 77, 5505108);
  sub_F2F24(a1, a3, 78, -2144247751);
  V_LOCK();
  V_INT((int)v40, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v41,
    v40[0],
    v40[1],
    v40[2],
    v40[3],
    v40[4],
    v40[5],
    v40[6],
    v41,
    "%s Overriding tx_invert_r, tx_clk_rdy_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    508,
    60,
    v134);
  sub_F2F24(a1, a3, 77, (int)&dword_10000 + 1);
  sub_F2F24(a1, a3, 78, -2144251903);
  sub_F2F24(a1, a3, 77, (int)&loc_230020 + 3);
  sub_F2F24(a1, a3, 78, -2144251903);
  V_LOCK();
  V_INT((int)v42, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v43,
    v42[0],
    v42[1],
    v42[2],
    v42[3],
    v42[4],
    v42[5],
    v42[6],
    v43,
    "%s Overriding rx_invert",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    511,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 0);
  sub_F2F24(a1, a3, 78, -2144251872);
  sub_F2F24(a1, a3, 77, (int)&loc_80008);
  sub_F2F24(a1, a3, 78, -2144251872);
  V_LOCK();
  V_INT((int)v44, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v45,
    v44[0],
    v44[1],
    v44[2],
    v44[3],
    v44[4],
    v44[5],
    v44[6],
    v45,
    "%s Overriding sup_misc",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    514,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 0);
  sub_F2F24(a1, a3, 78, -2144272111);
  sub_F2F24(a1, a3, 77, 1073692671);
  sub_F2F24(a1, a3, 78, -2144272088);
  V_LOCK();
  V_INT((int)v46, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v47,
    v46[0],
    v46[1],
    v46[2],
    v46[3],
    v46[4],
    v46[5],
    v46[6],
    v47,
    "%s Perform refa_clk_div2_en override",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    517,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 234884608);
  sub_F2F24(a1, a3, 78, -2144272382);
  sub_F2F24(a1, a3, 77, 235408904);
  sub_F2F24(a1, a3, 78, -2144272382);
  V_LOCK();
  V_INT((int)v48, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v49,
    v48[0],
    v48[1],
    v48[2],
    v48[3],
    v48[4],
    v48[5],
    v48[6],
    v49,
    "%s  Perform refb_clk_div2_en override",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    520,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 234884608);
  sub_F2F24(a1, a3, 78, -2144272381);
  sub_F2F24(a1, a3, 77, 235408904);
  sub_F2F24(a1, a3, 78, -2144272381);
  V_LOCK();
  V_INT((int)v50, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v51,
    v50[0],
    v50[1],
    v50[2],
    v50[3],
    v50[4],
    v50[5],
    v50[6],
    v51,
    "%s Get access to external resistor",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    523,
    60,
    v134);
  sub_F2F24(a1, a3, 77, (int)&loc_180018);
  sub_F2F24(a1, a3, 78, -2144272353);
  V_LOCK();
  V_INT((int)v52, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v53,
    v52[0],
    v52[1],
    v52[2],
    v52[3],
    v52[4],
    v52[5],
    v52[6],
    v53,
    "%s Overriding refa_clk_en, refb_clk_en, mplla_force_en, mpllb_force_en, ref_repeat_clk_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    526,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 22348117);
  sub_F2F24(a1, a3, 78, -2144272044);
  sub_F2F24(a1, a3, 77, 67044351);
  sub_F2F24(a1, a3, 78, -2144272044);
  V_LOCK();
  V_INT((int)v54, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v55,
    v54[0],
    v54[1],
    v54[2],
    v54[3],
    v54[4],
    v54[5],
    v54[6],
    v55,
    "%s Overriding bg_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    529,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 61277095);
  sub_F2F24(a1, a3, 78, -2144272380);
  sub_F2F24(a1, a3, 77, 65471463);
  sub_F2F24(a1, a3, 78, -2144272380);
  V_LOCK();
  V_INT((int)v56, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v57,
    v56[0],
    v56[1],
    v56[2],
    v56[3],
    v56[4],
    v56[5],
    v56[6],
    v57,
    "%s Overriding refa_clkdet_en_r, refb_clkdet_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    532,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 235408904);
  sub_F2F24(a1, a3, 78, -2144272382);
  sub_F2F24(a1, a3, 77, 252186376);
  sub_F2F24(a1, a3, 78, -2144272382);
  sub_F2F24(a1, a3, 77, 235408904);
  sub_F2F24(a1, a3, 78, -2144272381);
  sub_F2F24(a1, a3, 77, 252186376);
  sub_F2F24(a1, a3, 78, -2144272381);
  V_LOCK();
  V_INT((int)v58, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v59,
    v58[0],
    v58[1],
    v58[2],
    v58[3],
    v58[4],
    v58[5],
    v58[6],
    v59,
    "%s Asserting mplla_word_clk_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    537,
    60,
    v134);
  sub_F2F24(a1, a3, 77, (int)"num6bignum5tests6Big8x37is_zero17he9d1683f90a9b0edE");
  sub_F2F24(a1, a3, 78, -2144272379);
  sub_F2F24(a1, a3, 77, (int)&loc_C000C);
  sub_F2F24(a1, a3, 78, -2144272379);
  V_LOCK();
  V_INT((int)v60, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v61,
    v60[0],
    v60[1],
    v60[2],
    v60[3],
    v60[4],
    v60[5],
    v60[6],
    v61,
    "%s Asserting mpllb_word_clk_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    540,
    60,
    v134);
  sub_F2F24(a1, a3, 77, (int)"num6bignum5tests6Big8x37is_zero17he9d1683f90a9b0edE");
  sub_F2F24(a1, a3, 78, -2144272378);
  sub_F2F24(a1, a3, 77, (int)&loc_C000C);
  sub_F2F24(a1, a3, 78, -2144272378);
  V_LOCK();
  V_INT((int)v62, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v63,
    v62[0],
    v62[1],
    v62[2],
    v62[3],
    v62[4],
    v62[5],
    v62[6],
    v63,
    "%s  Overriding mplla_ssc_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    543,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 0);
  sub_F2F24(a1, a3, 78, -2144272372);
  sub_F2F24(a1, a3, 77, (int)&loc_100010);
  sub_F2F24(a1, a3, 78, -2144272372);
  V_LOCK();
  V_INT((int)v64, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v65,
    v64[0],
    v64[1],
    v64[2],
    v64[3],
    v64[4],
    v64[5],
    v64[6],
    v65,
    "%s Overriding mpllb_ssc_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    546,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 0);
  sub_F2F24(a1, a3, 78, -2144272360);
  sub_F2F24(a1, a3, 77, (int)&loc_100010);
  sub_F2F24(a1, a3, 78, -2144272360);
  V_LOCK();
  V_INT((int)v66, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v67,
    v66[0],
    v66[1],
    v66[2],
    v66[3],
    v66[4],
    v66[5],
    v66[6],
    v67,
    "%s Overriding mplla/b_recal_skip_en, mplla/b_recal_force_en, mplla/b_cal_bank_sel",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    550,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 0);
  sub_F2F24(a1, a3, 78, -2144272114);
  sub_F2F24(a1, a3, 77, 710158932);
  sub_F2F24(a1, a3, 78, -2144272114);
  V_LOCK();
  V_INT((int)v68, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v69,
    v68[0],
    v68[1],
    v68[2],
    v68[3],
    v68[4],
    v68[5],
    v68[6],
    v69,
    "%s Overriding mplla_init_cal_disable, mpllb_init_cal_disable, rtune_req",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    553,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 0);
  sub_F2F24(a1, a3, 78, -2144272124);
  sub_F2F24(a1, a3, 77, (int)&stru_20000.st_name + 2);
  sub_F2F24(a1, a3, 78, -2144272124);
  V_LOCK();
  V_INT((int)v70, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v71,
    v70[0],
    v70[1],
    v70[2],
    v70[3],
    v70[4],
    v70[5],
    v70[6],
    v71,
    "%s Hooking up tx0_clk to appropriate ROPLL word/dword/qword, mplla/b word/dword/qword clock",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    557,
    60,
    v134);
  V_LOCK();
  V_INT((int)v72, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v73,
    v72[0],
    v72[1],
    v72[2],
    v72[3],
    v72[4],
    v72[5],
    v72[6],
    v73,
    "%s  Overriding tx_clk_sel",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    558,
    60,
    v134);
  if ( a4 == 2 )
    LOWORD(v8) = 498;
  else
    LOWORD(v8) = 501;
  if ( a4 == 2 )
    HIWORD(v8) = 498;
  else
    HIWORD(v8) = 501;
  sub_F2F24(a1, a3, 77, v8);
  sub_F2F24(a1, a3, 78, -2144247559);
  V_LOCK();
  V_INT((int)v74, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v75,
    v74[0],
    v74[1],
    v74[2],
    v74[3],
    v74[4],
    v74[5],
    v74[6],
    v75,
    "%s Overriding tx_eq_main_r, tx_beacon_en_r, tx_disable_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    563,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 20971840);
  sub_F2F24(a1, a3, 78, -2144251901);
  sub_F2F24(a1, a3, 77, 88606024);
  sub_F2F24(a1, a3, 78, -2144251901);
  V_LOCK();
  V_INT((int)v76, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v77,
    v76[0],
    v76[1],
    v76[2],
    v76[3],
    v76[4],
    v76[5],
    v76[6],
    v77,
    "%s Overriding tx_eq_pre and tx_eq_post",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    567,
    60,
    v134);
  sub_F2F24(a1, a3, 77, (int)&loc_100010);
  sub_F2F24(a1, a3, 78, -2144251900);
  sub_F2F24(a1, a3, 77, 542122064);
  sub_F2F24(a1, a3, 78, -2144251900);
  V_LOCK();
  V_INT((int)v78, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v79,
    v78[0],
    v78[1],
    v78[2],
    v78[3],
    v78[4],
    v78[5],
    v78[6],
    v79,
    "%s Overriding tx_detrx_req",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    570,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 0);
  sub_F2F24(a1, a3, 78, -2144247761);
  sub_F2F24(a1, a3, 77, (int)&stru_20000.st_name + 2);
  sub_F2F24(a1, a3, 78, -2144247761);
  V_LOCK();
  V_INT((int)v80, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v81,
    v80[0],
    v80[1],
    v80[2],
    v80[3],
    v80[4],
    v80[5],
    v80[6],
    v81,
    "%s Overriding the RX_MARGIN_IN_PROG_OVRD and RX_MARGIN_ERROR_CLEAR_OVRD to 0",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    574,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 537010178);
  sub_F2F24(a1, a3, 78, -2144247750);
  V_LOCK();
  V_INT((int)v82, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v83,
    v82[0],
    v82[1],
    v82[2],
    v82[3],
    v82[4],
    v82[5],
    v82[6],
    v83,
    "%s Overriding lane_ref_sel_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    576,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 872428544);
  sub_F2F24(a1, a3, 78, -2144247769);
  sub_F2F24(a1, a3, 77, 1006648320);
  sub_F2F24(a1, a3, 78, -2144247769);
  V_LOCK();
  V_INT((int)v84, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v85,
    v84[0],
    v84[1],
    v84[2],
    v84[3],
    v84[4],
    v84[5],
    v84[6],
    v85,
    "%s  Overriding tx_ropll_word_clk_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    579,
    60,
    v134);
  sub_F2F24(a1, a3, 77, (int)&loc_80008);
  sub_F2F24(a1, a3, 78, -2144247745);
  sub_F2F24(a1, a3, 77, (int)&loc_180018);
  sub_F2F24(a1, a3, 78, -2144247745);
  V_LOCK();
  V_INT((int)v86, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v87,
    v86[0],
    v86[1],
    v86[2],
    v86[3],
    v86[4],
    v86[5],
    v86[6],
    v87,
    "%s Overriding rx_offcan_cont_r, rx_adapt_cont_r, rx_adapt_req_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    582,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 0);
  sub_F2F24(a1, a3, 78, -2144247798);
  sub_F2F24(a1, a3, 77, (int)&stru_20000.st_name + 2);
  sub_F2F24(a1, a3, 78, -2144247798);
  V_LOCK();
  V_INT((int)v88, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v89,
    v88[0],
    v88[1],
    v88[2],
    v88[3],
    v88[4],
    v88[5],
    v88[6],
    v89,
    "%s Clear the rx_adapt_dis IRQ to prevent rx_ack assertion after initial powerup sequence completed",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    585,
    60,
    v134);
  sub_F2F24(a1, a3, 77, (int)&dword_10000 + 1);
  sub_F2F24(a1, a3, 78, -2144247604);
  V_LOCK();
  V_INT((int)v90, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v91,
    v90[0],
    v90[1],
    v90[2],
    v90[3],
    v90[4],
    v90[5],
    v90[6],
    v91,
    "%s Overriding rx_margin_iq and rx_delta_iq",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    587,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 0);
  sub_F2F24(a1, a3, 78, -2144247796);
  sub_F2F24(a1, a3, 77, 268439552);
  sub_F2F24(a1, a3, 78, -2144247796);
  V_LOCK();
  V_INT((int)v92, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v93,
    v92[0],
    v92[1],
    v92[2],
    v92[3],
    v92[4],
    v92[5],
    v92[6],
    v93,
    "%s Overriding rx_term_en_r, rx_disable_r, rx_cdr_ssc_en_r, rx_cdr_track_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    591,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 0);
  sub_F2F24(a1, a3, 78, -2144243666);
  sub_F2F24(a1, a3, 77, (int)&stru_20000.st_name + 2);
  sub_F2F24(a1, a3, 78, -2144243666);
  sub_F2F24(a1, a3, 77, 4259905);
  sub_F2F24(a1, a3, 78, -2144251869);
  sub_F2F24(a1, a3, 77, 13304011);
  sub_F2F24(a1, a3, 78, -2144251869);
  V_LOCK();
  V_INT((int)v94, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v95,
    v94[0],
    v94[1],
    v94[2],
    v94[3],
    v94[4],
    v94[5],
    v94[6],
    v95,
    "%s Disable RX CDR PPM detector",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    596,
    60,
    v134);
  sub_F2F24(a1, a3, 77, (int)"num6bignum5tests6Big8x37is_zero17he9d1683f90a9b0edE");
  sub_F2F24(a1, a3, 78, -2144243609);
  V_LOCK();
  V_INT((int)v96, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v97,
    v96[0],
    v96[1],
    v96[2],
    v96[3],
    v96[4],
    v96[5],
    v96[6],
    v97,
    "%s Overriding lane_rx2tx_par_lb_en and lane_tx2rx_ser_lb_en to 0",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    598,
    60,
    v134);
  sub_F2F24(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_F2F24(a1, a3, 78, -2144247768);
  V_LOCK();
  V_INT((int)v98, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v99,
    v98[0],
    v98[1],
    v98[2],
    v98[3],
    v98[4],
    v98[5],
    v98[6],
    v99,
    "%s Overriding TOKEN_DLY",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    600,
    60,
    v134);
  sub_F2F24(a1, a3, 77, (int)"rch..arm_shared..neon..uint8x8_t$u20$as$u20$core..fmt..Debug$GT$3fmt17h36b73b959a5f5a1bE");
  sub_F2F24(a1, a3, 78, -2144272078);
  V_LOCK();
  V_INT((int)v100, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v101,
    v100[0],
    v100[1],
    v100[2],
    v100[3],
    v100[4],
    v100[5],
    v100[6],
    v101,
    "%s De-assrting per lane resets to 0",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    602,
    60,
    v134);
  sub_F2F24(a1, a3, 77, -2136964960);
  sub_F2F24(a1, a3, 78, -2144247776);
  sub_F2F24(a1, a3, 77, -2136309590);
  sub_F2F24(a1, a3, 78, -2144247776);
  V_LOCK();
  V_INT((int)v102, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v103,
    v102[0],
    v102[1],
    v102[2],
    v102[3],
    v102[4],
    v102[5],
    v102[6],
    v103,
    "%s Waiting for PHY power up...",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    605,
    60,
    v134);
  serdes_wait_status_rvn(a1, a2, a3, 12308, 1);
  serdes_wait_status_rvn(a1, a2, a3, 12820, 1);
  serdes_wait_status_rvn(a1, a2, a3, 13332, 1);
  serdes_wait_status_rvn(a1, a2, a3, 13844, 1);
  V_LOCK();
  V_INT((int)v104, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v105,
    v104[0],
    v104[1],
    v104[2],
    v104[3],
    v104[4],
    v104[5],
    v104[6],
    v105,
    "%s Reading RX ACK and RX VALID at PMA level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    611,
    60,
    v134);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 80);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 80);
  V_LOCK();
  V_INT((int)v106, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v107,
    v106[0],
    v106[1],
    v106[2],
    v106[3],
    v106[4],
    v106[5],
    v106[6],
    v107,
    "%s Reading RX ACK at PHY level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    616,
    60,
    v134);
  serdes_wait_status_rvn(a1, a2, a3, 8217, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8729, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9241, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9753, 0);
  V_LOCK();
  V_INT((int)v108, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v109,
    v108[0],
    v108[1],
    v108[2],
    v108[3],
    v108[4],
    v108[5],
    v108[6],
    v109,
    "%s Reading TX ACK at PMA level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    621,
    60,
    v134);
  serdes_wait_status_rvn(a1, a2, a3, 4114, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4626, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5138, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5650, 0);
  V_LOCK();
  V_INT((int)v110, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v111,
    v110[0],
    v110[1],
    v110[2],
    v110[3],
    v110[4],
    v110[5],
    v110[6],
    v111,
    "%s Reading TX ACK at PHY level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    626,
    60,
    v134);
  serdes_wait_status_rvn(a1, a2, a3, 8196, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8708, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9220, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9732, 0);
  V_LOCK();
  V_INT((int)v112, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v113,
    v112[0],
    v112[1],
    v112[2],
    v112[3],
    v112[4],
    v112[5],
    v112[6],
    v113,
    "%s Enabling TX LBERT in LFSR31",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    631,
    60,
    v134);
  sub_F2F24(a1, a3, 77, (int)&dword_10000 + 1);
  sub_F2F24(a1, a3, 78, -2144251791);
  V_LOCK();
  V_INT((int)v114, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v115,
    v114[0],
    v114[1],
    v114[2],
    v114[3],
    v114[4],
    v114[5],
    v114[6],
    v115,
    "%s Overriding lane_rx2tx_par_lb_en and lane_tx2rx_ser_lb_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    633,
    60,
    v134);
  sub_F2F24(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_F2F24(a1, a3, 78, -2144247768);
  sub_F2F24(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_F2F24(a1, a3, 78, -2144247768);
  V_LOCK();
  V_INT((int)v116, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v117,
    v116[0],
    v116[1],
    v116[2],
    v116[3],
    v116[4],
    v116[5],
    v116[6],
    v117,
    "%s Overriding the RX_COARSE_ADAPT_SKIP_B0/B1/B2 to 1 to skip the RX coarse adaptation",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    637,
    60,
    v134);
  sub_F2F24(a1, a3, 77, (int)"$u20$as$u20$core..clone..Clone$GT$5clone17hc0de32827086aebdE");
  sub_F2F24(a1, a3, 78, -2144243377);
  sub_F2F24(a1, a3, 77, (int)"$u20$as$u20$core..clone..Clone$GT$5clone17hc0de32827086aebdE");
  sub_F2F24(a1, a3, 78, -2144243377);
  sub_F2F24(a1, a3, 77, (int)"rch..arm_shared..neon..uint8x8_t$u20$as$u20$core..fmt..Debug$GT$3fmt17h36b73b959a5f5a1bE");
  sub_F2F24(a1, a3, 78, -2144243377);
  V_LOCK();
  V_INT((int)v118, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v119,
    v118[0],
    v118[1],
    v118[2],
    v118[3],
    v118[4],
    v118[5],
    v118[6],
    v119,
    "%s Toggle rx resets",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    641,
    60,
    v134);
  sub_F2F24(a1, a3, 77, -2136244053);
  sub_F2F24(a1, a3, 78, -2144247776);
  sub_F2F24(a1, a3, 77, -2136244053);
  sub_F2F24(a1, a3, 78, -2144247776);
  usleep(0xAu);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 81);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 81);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 81);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 81);
  sub_F2F24(a1, a3, 77, -2136309590);
  sub_F2F24(a1, a3, 78, -2144247776);
  sub_F2F24(a1, a3, 77, -2136309590);
  sub_F2F24(a1, a3, 78, -2144247776);
  usleep(0x64u);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 84);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 84);
  usleep(0x3Cu);
  V_LOCK();
  V_INT((int)v120, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v121,
    v120[0],
    v120[1],
    v120[2],
    v120[3],
    v120[4],
    v120[5],
    v120[6],
    v121,
    "%s Enable rxX_data_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    657,
    60,
    v134);
  sub_F2F24(a1, a3, 77, -1062551382);
  sub_F2F24(a1, a3, 78, -2144247776);
  usleep(0x32u);
  V_LOCK();
  V_INT((int)v122, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v123,
    v122[0],
    v122[1],
    v122[2],
    v122[3],
    v122[4],
    v122[5],
    v122[6],
    v123,
    "%s Reading RX ACK and RX VALID at PMA level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    660,
    60,
    v134);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 86);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 86);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 86);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 86);
  V_LOCK();
  V_INT((int)v124, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v125,
    v124[0],
    v124[1],
    v124[2],
    v124[3],
    v124[4],
    v124[5],
    v124[6],
    v125,
    "%s Overriding rx_adapt_req",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    666,
    60,
    v134);
  if ( a4 == 2 )
  {
    sub_F2F24(a1, a3, 77, 196611);
    sub_F2F24(a1, a3, 78, -2144247798);
    sub_F2F24(a1, a3, 77, 196611);
    sub_F2F24(a1, a3, 78, -2144247798);
    usleep(1u);
    serdes_wait_status_rvn(a1, a2, a3, 8218, 1);
    serdes_wait_status_rvn(a1, a2, a3, 8730, 1);
    serdes_wait_status_rvn(a1, a2, a3, 9242, 1);
    serdes_wait_status_rvn(a1, a2, a3, 9754, 1);
    sub_F2F24(a1, a3, 77, 131074);
    sub_F2F24(a1, a3, 78, -2144247798);
    sub_F2F24(a1, a3, 77, 131074);
    sub_F2F24(a1, a3, 78, -2144247798);
    usleep(0x64u);
    serdes_wait_status_rvn(a1, a2, a3, 8218, 0);
    serdes_wait_status_rvn(a1, a2, a3, 8730, 0);
    serdes_wait_status_rvn(a1, a2, a3, 9242, 0);
    serdes_wait_status_rvn(a1, a2, a3, 9754, 0);
  }
  V_LOCK();
  V_INT((int)v126, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v127,
    v126[0],
    v126[1],
    v126[2],
    v126[3],
    v126[4],
    v126[5],
    v126[6],
    v127,
    "%s Disable rxX_data_en after adaptation done",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    685,
    60,
    v134);
  sub_F2F24(a1, a3, 77, -2136309590);
  sub_F2F24(a1, a3, 78, -2144247776);
  V_LOCK();
  V_INT((int)v128, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v129,
    v128[0],
    v128[1],
    v128[2],
    v128[3],
    v128[4],
    v128[5],
    v128[6],
    v129,
    "%s Re-enable rxX_data_en to track receive data",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    687,
    60,
    v134);
  sub_F2F24(a1, a3, 77, -1062551382);
  sub_F2F24(a1, a3, 78, -2144247776);
  usleep(0x32u);
  V_LOCK();
  V_INT((int)v130, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v131,
    v130[0],
    v130[1],
    v130[2],
    v130[3],
    v130[4],
    v130[5],
    v130[6],
    v131,
    "%s Reading RX ACK and RX VALID at PMA level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    691,
    60,
    v134);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 82);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 86);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 82);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 86);
  V_LOCK();
  V_INT((int)v132, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v134,
    0x1000u,
    0,
    v133,
    v132[0],
    v132[1],
    v132[2],
    v132[3],
    v132[4],
    v132[5],
    v132[6],
    v133,
    "%s Enabling RX LBERT in LFSR31 and setting RX LBERT SYNC to 1",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "serdes_external_loop_ate_init_rvn",
    33,
    697,
    60,
    v134);
  sub_F2F24(a1, a3, 77, 65537);
  sub_F2F24(a1, a3, 78, -2144251757);
  sub_F2F24(a1, a3, 77, 65537);
  sub_F2F24(a1, a3, 78, -2144251757);
  sub_F2F24(a1, a3, 77, 1114129);
  sub_F2F24(a1, a3, 78, -2144251757);
  sub_F2F24(a1, a3, 77, 65537);
  sub_F2F24(a1, a3, 78, -2144251757);
  sub_F2F24(a1, a3, 77, 1114129);
  sub_F2F24(a1, a3, 78, -2144251757);
  sub_F2F24(a1, a3, 77, 65537);
  sub_F2F24(a1, a3, 78, -2144251757);
  usleep(0xAu);
  return 0;
}
