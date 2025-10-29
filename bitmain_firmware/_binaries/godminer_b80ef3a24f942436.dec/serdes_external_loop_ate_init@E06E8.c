int __fastcall serdes_external_loop_ate_init(int a1, unsigned int a2, int a3)
{
  FILE *v3; // r7
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r3
  char *v11; // r0
  int v12; // r0
  int v13; // r0
  char *v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r3
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r3
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
  int v80; // r3
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
  int v127; // r3
  int v128; // r0
  int v129; // r0
  int v130; // r0
  int v131; // r0
  int v132; // r0
  int v133; // r0
  int v134; // r0
  int v135; // r0
  int v136; // r0
  int v137; // r0
  int v138; // r0
  int v139; // r0
  char *v141; // r0
  int v142; // r0
  int v143; // r0
  char *v144; // r0
  int v145; // r0
  int v146; // r0
  int v147; // r0
  int v148; // r0
  int v149; // r0
  int v150; // r0
  char *v151; // r0
  int v152; // r0
  int v153; // r0
  int v154; // r0
  int v156; // [sp+48h] [bp-18ACh] BYREF
  char v157; // [sp+4Ch] [bp-18A8h] BYREF
  int v158; // [sp+50h] [bp-18A4h] BYREF
  _BYTE v159[32]; // [sp+70h] [bp-1884h] BYREF
  int v160; // [sp+90h] [bp-1864h] BYREF
  _BYTE v161[32]; // [sp+B0h] [bp-1844h] BYREF
  int v162; // [sp+D0h] [bp-1824h] BYREF
  _BYTE v163[32]; // [sp+F0h] [bp-1804h] BYREF
  int v164; // [sp+110h] [bp-17E4h] BYREF
  _BYTE v165[32]; // [sp+130h] [bp-17C4h] BYREF
  int v166; // [sp+150h] [bp-17A4h] BYREF
  _BYTE v167[32]; // [sp+170h] [bp-1784h] BYREF
  int v168; // [sp+190h] [bp-1764h] BYREF
  _BYTE v169[32]; // [sp+1B0h] [bp-1744h] BYREF
  int v170; // [sp+1D0h] [bp-1724h] BYREF
  _BYTE v171[32]; // [sp+1F0h] [bp-1704h] BYREF
  int v172; // [sp+210h] [bp-16E4h] BYREF
  _BYTE v173[32]; // [sp+230h] [bp-16C4h] BYREF
  int v174; // [sp+250h] [bp-16A4h] BYREF
  _BYTE v175[32]; // [sp+270h] [bp-1684h] BYREF
  int v176; // [sp+290h] [bp-1664h] BYREF
  _BYTE v177[32]; // [sp+2B0h] [bp-1644h] BYREF
  int v178; // [sp+2D0h] [bp-1624h] BYREF
  _BYTE v179[32]; // [sp+2F0h] [bp-1604h] BYREF
  int v180; // [sp+310h] [bp-15E4h] BYREF
  _BYTE v181[32]; // [sp+330h] [bp-15C4h] BYREF
  int v182; // [sp+350h] [bp-15A4h] BYREF
  _BYTE v183[32]; // [sp+370h] [bp-1584h] BYREF
  int v184; // [sp+390h] [bp-1564h] BYREF
  _BYTE v185[32]; // [sp+3B0h] [bp-1544h] BYREF
  int v186; // [sp+3D0h] [bp-1524h] BYREF
  _BYTE v187[32]; // [sp+3F0h] [bp-1504h] BYREF
  int v188; // [sp+410h] [bp-14E4h] BYREF
  _BYTE v189[32]; // [sp+430h] [bp-14C4h] BYREF
  int v190; // [sp+450h] [bp-14A4h] BYREF
  _BYTE v191[32]; // [sp+470h] [bp-1484h] BYREF
  int v192; // [sp+490h] [bp-1464h] BYREF
  _BYTE v193[32]; // [sp+4B0h] [bp-1444h] BYREF
  int v194; // [sp+4D0h] [bp-1424h] BYREF
  _BYTE v195[32]; // [sp+4F0h] [bp-1404h] BYREF
  int v196; // [sp+510h] [bp-13E4h] BYREF
  _BYTE v197[32]; // [sp+530h] [bp-13C4h] BYREF
  int v198; // [sp+550h] [bp-13A4h] BYREF
  _BYTE v199[32]; // [sp+570h] [bp-1384h] BYREF
  int v200; // [sp+590h] [bp-1364h] BYREF
  _BYTE v201[32]; // [sp+5B0h] [bp-1344h] BYREF
  int v202; // [sp+5D0h] [bp-1324h] BYREF
  _BYTE v203[32]; // [sp+5F0h] [bp-1304h] BYREF
  int v204; // [sp+610h] [bp-12E4h] BYREF
  _BYTE v205[32]; // [sp+630h] [bp-12C4h] BYREF
  int v206; // [sp+650h] [bp-12A4h] BYREF
  _BYTE v207[32]; // [sp+670h] [bp-1284h] BYREF
  int v208; // [sp+690h] [bp-1264h] BYREF
  _BYTE v209[32]; // [sp+6B0h] [bp-1244h] BYREF
  int v210; // [sp+6D0h] [bp-1224h] BYREF
  _BYTE v211[32]; // [sp+6F0h] [bp-1204h] BYREF
  int v212; // [sp+710h] [bp-11E4h] BYREF
  _BYTE v213[32]; // [sp+730h] [bp-11C4h] BYREF
  int v214; // [sp+750h] [bp-11A4h] BYREF
  _BYTE v215[32]; // [sp+770h] [bp-1184h] BYREF
  int v216; // [sp+790h] [bp-1164h] BYREF
  _BYTE v217[32]; // [sp+7B0h] [bp-1144h] BYREF
  int v218; // [sp+7D0h] [bp-1124h] BYREF
  char s[256]; // [sp+7F0h] [bp-1104h] BYREF
  _BYTE v220[4100]; // [sp+8F0h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v158, "chain", *(int *)(a1 + 248));
  v6 = logfmt_raw((int)v220, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_external_loop_ate_init",
    29,
    1191,
    60,
    v220);
  sub_D85AC(a1, a3, 240, 0x80000000);
  usleep(0x258u);
  sub_D8A48(a1, a3, 240);
  sub_D85AC(a1, a3, 86, 3670024);
  usleep(0x258u);
  sub_D8A48(a1, a3, 86);
  sub_D85AC(a1, a3, 85, 109905420);
  usleep(0x258u);
  sub_D8A48(a1, a3, 85);
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
  v7 = sub_D8A48(a1, a3, 88);
  v157 = 0;
  v156 = 0;
  V_LOCK(v7);
  v8 = logfmt_raw((int)v220, 0x1000u);
  V_UNLOCK(v8);
  v9 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
         190,
         "phy_read_config_ini",
         19,
         153,
         40,
         v220);
  v10 = (unsigned __int8)case_select;
  if ( case_select )
  {
    if ( case_select != 1 )
      goto LABEL_3;
  }
  else
  {
    v9 = fopen64("/config/phy_adapt_0.ini", "r");
    v10 = (unsigned __int8)case_select;
    v3 = (FILE *)v9;
    if ( case_select != 1 )
    {
LABEL_3:
      if ( v10 != 2 )
        goto LABEL_4;
      goto LABEL_54;
    }
  }
  v9 = fopen64("/config/phy_adapt_1.ini", "r");
  v10 = (unsigned __int8)case_select;
  v3 = (FILE *)v9;
  if ( case_select != 2 )
  {
LABEL_4:
    if ( v10 != 3 )
      goto LABEL_5;
    goto LABEL_55;
  }
LABEL_54:
  v9 = fopen64("/config/phy_adapt_2.ini", "r");
  v10 = (unsigned __int8)case_select;
  v3 = (FILE *)v9;
  if ( case_select != 3 )
  {
LABEL_5:
    if ( v10 != 4 )
      goto LABEL_6;
    goto LABEL_56;
  }
LABEL_55:
  v9 = fopen64("/config/phy_adapt_3.ini", "r");
  v10 = (unsigned __int8)case_select;
  v3 = (FILE *)v9;
  if ( case_select != 4 )
  {
LABEL_6:
    if ( v10 != 5 )
      goto LABEL_7;
    goto LABEL_57;
  }
LABEL_56:
  v9 = fopen64("/config/phy_adapt_4.ini", "r");
  v10 = (unsigned __int8)case_select;
  v3 = (FILE *)v9;
  if ( case_select != 5 )
  {
LABEL_7:
    if ( v10 != 6 )
      goto LABEL_8;
    goto LABEL_58;
  }
LABEL_57:
  v9 = fopen64("/config/phy_adapt_5.ini", "r");
  v10 = (unsigned __int8)case_select;
  v3 = (FILE *)v9;
  if ( case_select != 6 )
  {
LABEL_8:
    if ( v10 != 7 )
      goto LABEL_9;
    goto LABEL_59;
  }
LABEL_58:
  v9 = fopen64("/config/phy_adapt_6.ini", "r");
  v10 = (unsigned __int8)case_select;
  v3 = (FILE *)v9;
  if ( case_select != 7 )
  {
LABEL_9:
    if ( v10 != 8 )
      goto LABEL_10;
    goto LABEL_60;
  }
LABEL_59:
  v9 = fopen64("/config/phy_adapt_7.ini", "r");
  v10 = (unsigned __int8)case_select;
  v3 = (FILE *)v9;
  if ( case_select != 8 )
  {
LABEL_10:
    if ( v10 != 9 )
      goto LABEL_11;
LABEL_61:
    v9 = fopen64("/config/phy_adapt_9.ini", "r");
    v3 = (FILE *)v9;
    if ( case_select != 10 )
      goto LABEL_12;
    goto LABEL_62;
  }
LABEL_60:
  v9 = fopen64("/config/phy_adapt_8.ini", "r");
  v10 = (unsigned __int8)case_select;
  v3 = (FILE *)v9;
  if ( case_select == 9 )
    goto LABEL_61;
LABEL_11:
  if ( v10 != 10 )
    goto LABEL_12;
LABEL_62:
  v9 = fopen64("/config/phy_adapt_10.ini", "r");
  v3 = (FILE *)v9;
LABEL_12:
  if ( v3 )
  {
    memset(s, 0, sizeof(s));
    while ( fgets(s, 255, v3) )
    {
      if ( s[0] != 35 && s[1] != 35 )
      {
        v11 = strstr(s, aMode_0);
        if ( v11 )
        {
          v12 = _isoc99_sscanf(v11 + 5, "%d", &v156);
          V_LOCK(v12);
          v13 = logfmt_raw((int)v220, 0x1000u);
          V_UNLOCK(v13);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
            190,
            "phy_read_config_ini",
            19,
            193,
            40,
            v220);
        }
        else
        {
          v14 = strstr(s, "main_eq=");
          if ( v14 )
          {
            v15 = _isoc99_sscanf(v14 + 8, "%d", (char *)&v156 + 1);
            V_LOCK(v15);
            v16 = logfmt_raw((int)v220, 0x1000u);
            V_UNLOCK(v16);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
              190,
              "phy_read_config_ini",
              19,
              197,
              40,
              v220);
          }
          else
          {
            v141 = strstr(s, "pre_eq=");
            if ( v141 )
            {
              v142 = _isoc99_sscanf(v141 + 7, "%d", (char *)&v156 + 2);
              V_LOCK(v142);
              v143 = logfmt_raw((int)v220, 0x1000u);
              V_UNLOCK(v143);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                190,
                "phy_read_config_ini",
                19,
                201,
                40,
                v220);
            }
            else
            {
              v144 = strstr(s, "post_eq=");
              if ( v144 )
              {
                v145 = _isoc99_sscanf(v144 + 8, "%d", (char *)&v156 + 3);
                V_LOCK(v145);
                v146 = logfmt_raw((int)v220, 0x1000u);
                V_UNLOCK(v146);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                  190,
                  "phy_read_config_ini",
                  19,
                  205,
                  40,
                  v220);
              }
              else
              {
                v151 = strstr(s, "adapt_en=");
                if ( v151 )
                {
                  v152 = _isoc99_sscanf(v151 + 9, "%d", &v157);
                  V_LOCK(v152);
                  v153 = logfmt_raw((int)v220, 0x1000u);
                  V_UNLOCK(v153);
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                    190,
                    "phy_read_config_ini",
                    19,
                    209,
                    40,
                    v220);
                }
              }
            }
          }
        }
      }
    }
    fclose(v3);
    phy_external_loop_adapt(a1, a2, a3, BYTE1(v156), BYTE2(v156), HIBYTE(v156), v157);
    v17 = check_core_reg_with_expect_data(a1, a2, a3, 125, 0x70007000u);
    if ( v17 )
    {
      V_LOCK(v17);
      V_INT((int)v159, "chain", *(int *)(a1 + 248));
      v154 = logfmt_raw((int)v220, 0x1000u);
      V_UNLOCK(v154);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
        190,
        "serdes_external_loop_ate_init",
        29,
        1246,
        100,
        v220);
    }
    sub_D85AC(a1, a3, 86, 137889800);
    v18 = usleep(0x12Cu);
    V_LOCK(v18);
    V_INT((int)&v160, "chain", *(int *)(a1 + 248));
    v19 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v19);
    v20 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
            190,
            "serdes_external_loop_ate_init",
            29,
            1252,
            60,
            v220);
    V_LOCK(v20);
    V_INT((int)v161, "chain", *(int *)(a1 + 248));
    v21 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1253,
      60,
      v220);
    sub_D85AC(
      a1,
      a3,
      77,
      (int)"LT$core..str..pattern..SearchStep$u20$as$u20$core..fmt..Debug$GT$3fmt17hdff973c0848d9d67E");
    sub_D85AC(a1, a3, 78, -2144272046);
    sub_D85AC(a1, a3, 77, 33554944);
    sub_D85AC(a1, a3, 78, -2144247742);
    sub_D85AC(a1, a3, 77, 100664832);
    sub_D85AC(a1, a3, 78, -2144247742);
    sub_D85AC(a1, a3, 77, (int)&dword_10000 + 1);
    v22 = sub_D85AC(a1, a3, 78, -2144272003);
    V_LOCK(v22);
    V_INT((int)&v162, "chain", *(int *)(a1 + 248));
    v23 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1260,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 100664832);
    sub_D85AC(a1, a3, 78, -2144247742);
    sub_D8D10(a1, a3, 24643, (unsigned __int8)v156);
    sub_D8D10(a1, a3, 24644, (unsigned __int8)v156 << 7);
    sub_D85AC(a1, a3, 77, 117442304);
    sub_D85AC(a1, a3, 78, -2144247742);
    sub_D8D10(a1, a3, 24643, (unsigned __int8)v156 | 0x100);
    v24 = sub_D8D10(a1, a3, 24644, ((unsigned __int8)v156 << 7) | 0x8000);
    V_LOCK(v24);
    V_INT((int)v163, "chain", *(int *)(a1 + 248));
    v25 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v25);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1268,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 0);
    sub_D85AC(a1, a3, 78, -2144251892);
    sub_D85AC(a1, a3, 77, 268439552);
    sub_D85AC(a1, a3, 78, -2144251892);
    sub_D85AC(a1, a3, 77, 33489407);
    sub_D85AC(a1, a3, 78, -2144272086);
    sub_D85AC(a1, a3, 77, 268374015);
    v26 = sub_D85AC(a1, a3, 78, -2144272085);
    V_LOCK(v26);
    V_INT((int)&v164, "chain", *(int *)(a1 + 248));
    v27 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1274,
      60,
      v220);
    sub_D8D10(a1, a3, 24644, ((unsigned __int8)v156 << 7) | 0x8020);
    sub_D8D10(a1, a3, 24644, ((unsigned __int8)v156 << 7) | 0x8060);
    sub_D85AC(a1, a3, 77, -1);
    sub_D85AC(a1, a3, 78, -2144247719);
    sub_D85AC(a1, a3, 77, -8388737);
    v28 = sub_D85AC(a1, a3, 78, -2144247718);
    V_LOCK(v28);
    V_INT((int)v165, "chain", *(int *)(a1 + 248));
    v29 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v29);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1280,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 0);
    sub_D85AC(a1, a3, 78, -2144247776);
    sub_D85AC(a1, a3, 77, -2136964960);
    v30 = sub_D85AC(a1, a3, 78, -2144247776);
    V_LOCK(v30);
    V_INT((int)&v166, "chain", *(int *)(a1 + 248));
    v31 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v31);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1284,
      60,
      v220);
    if ( (unsigned __int8)v156 == 2 )
      LOWORD(v32) = 4160;
    else
      LOWORD(v32) = 4144;
    if ( (unsigned __int8)v156 == 2 )
      HIWORD(v32) = 4160;
    else
      HIWORD(v32) = 4144;
    sub_D85AC(a1, a3, 77, v32);
    sub_D85AC(a1, a3, 78, -2144247722);
    sub_D85AC(a1, a3, 77, -1);
    v33 = sub_D85AC(a1, a3, 78, -2144247718);
    V_LOCK(v33);
    V_INT((int)v167, "chain", *(int *)(a1 + 248));
    v34 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v34);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1291,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 0);
    sub_D85AC(a1, a3, 78, -2144247771);
    sub_D85AC(a1, a3, 77, (int)&loc_140014);
    v35 = sub_D85AC(a1, a3, 78, -2144247771);
    V_LOCK(v35);
    V_INT((int)&v168, "chain", *(int *)(a1 + 248));
    v36 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v36);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1295,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 33554944);
    sub_D85AC(a1, a3, 78, -2144247760);
    sub_D85AC(a1, a3, 77, 122947412);
    v37 = sub_D85AC(a1, a3, 78, -2144247760);
    V_LOCK(v37);
    V_INT((int)v169, "chain", *(int *)(a1 + 248));
    v38 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v38);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1299,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 1073758208);
    sub_D85AC(a1, a3, 78, -2144247770);
    sub_D85AC(a1, a3, 77, -1072381932);
    v39 = sub_D85AC(a1, a3, 78, -2144247770);
    V_LOCK(v39);
    V_INT((int)&v170, "chain", *(int *)(a1 + 248));
    v40 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v40);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1302,
      60,
      v220);
    if ( (unsigned __int8)v156 == 2 )
      LOWORD(v41) = 4;
    else
      LOWORD(v41) = 3;
    if ( (unsigned __int8)v156 == 2 )
      HIWORD(v41) = 4;
    else
      HIWORD(v41) = 3;
    sub_D85AC(a1, a3, 77, v41);
    sub_D85AC(a1, a3, 78, -2144247739);
    sub_D85AC(a1, a3, 77, -1);
    v42 = sub_D85AC(a1, a3, 78, -2144247732);
    V_LOCK(v42);
    V_INT((int)v171, "chain", *(int *)(a1 + 248));
    v43 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v43);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1309,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 268439552);
    sub_D85AC(a1, a3, 78, -2144247769);
    sub_D85AC(a1, a3, 77, 805318656);
    v44 = sub_D85AC(a1, a3, 78, -2144247769);
    V_LOCK(v44);
    V_INT((int)&v172, "chain", *(int *)(a1 + 248));
    v45 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v45);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1313,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 0);
    sub_D85AC(a1, a3, 78, -2144247751);
    sub_D85AC(a1, a3, 77, 5505108);
    v46 = sub_D85AC(a1, a3, 78, -2144247751);
    V_LOCK(v46);
    V_INT((int)v173, "chain", *(int *)(a1 + 248));
    v47 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v47);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1316,
      60,
      v220);
    sub_D85AC(a1, a3, 77, (int)&dword_10000 + 1);
    sub_D85AC(a1, a3, 78, -2144251903);
    sub_D85AC(a1, a3, 77, (int)&loc_230020 + 3);
    v48 = sub_D85AC(a1, a3, 78, -2144251903);
    V_LOCK(v48);
    V_INT((int)&v174, "chain", *(int *)(a1 + 248));
    v49 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v49);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1319,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 0);
    sub_D85AC(a1, a3, 78, -2144251872);
    sub_D85AC(a1, a3, 77, (int)sub_80008);
    v50 = sub_D85AC(a1, a3, 78, -2144251872);
    V_LOCK(v50);
    V_INT((int)v175, "chain", *(int *)(a1 + 248));
    v51 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v51);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1322,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 0);
    sub_D85AC(a1, a3, 78, -2144272111);
    sub_D85AC(a1, a3, 77, 1073692671);
    v52 = sub_D85AC(a1, a3, 78, -2144272088);
    V_LOCK(v52);
    V_INT((int)&v176, "chain", *(int *)(a1 + 248));
    v53 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v53);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1325,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 234884608);
    sub_D85AC(a1, a3, 78, -2144272382);
    sub_D85AC(a1, a3, 77, 235408904);
    v54 = sub_D85AC(a1, a3, 78, -2144272382);
    V_LOCK(v54);
    V_INT((int)v177, "chain", *(int *)(a1 + 248));
    v55 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v55);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1328,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 234884608);
    sub_D85AC(a1, a3, 78, -2144272381);
    sub_D85AC(a1, a3, 77, 235408904);
    v56 = sub_D85AC(a1, a3, 78, -2144272381);
    V_LOCK(v56);
    V_INT((int)&v178, "chain", *(int *)(a1 + 248));
    v57 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v57);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1331,
      60,
      v220);
    sub_D85AC(a1, a3, 77, (int)&loc_180018);
    v58 = sub_D85AC(a1, a3, 78, -2144272353);
    V_LOCK(v58);
    V_INT((int)v179, "chain", *(int *)(a1 + 248));
    v59 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v59);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1334,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 22348117);
    sub_D85AC(a1, a3, 78, -2144272044);
    sub_D85AC(a1, a3, 77, 67044351);
    v60 = sub_D85AC(a1, a3, 78, -2144272044);
    V_LOCK(v60);
    V_INT((int)&v180, "chain", *(int *)(a1 + 248));
    v61 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v61);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1337,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 61277095);
    sub_D85AC(a1, a3, 78, -2144272380);
    sub_D85AC(a1, a3, 77, 65471463);
    v62 = sub_D85AC(a1, a3, 78, -2144272380);
    V_LOCK(v62);
    V_INT((int)v181, "chain", *(int *)(a1 + 248));
    v63 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v63);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1340,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 235408904);
    sub_D85AC(a1, a3, 78, -2144272382);
    sub_D85AC(a1, a3, 77, 252186376);
    sub_D85AC(a1, a3, 78, -2144272382);
    sub_D85AC(a1, a3, 77, 235408904);
    sub_D85AC(a1, a3, 78, -2144272381);
    sub_D85AC(a1, a3, 77, 252186376);
    v64 = sub_D85AC(a1, a3, 78, -2144272381);
    V_LOCK(v64);
    V_INT((int)&v182, "chain", *(int *)(a1 + 248));
    v65 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v65);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1345,
      60,
      v220);
    sub_D85AC(a1, a3, 77, (int)"sph_blake384_addbits_and_close");
    sub_D85AC(a1, a3, 78, -2144272379);
    sub_D85AC(a1, a3, 77, (int)&loc_C000C);
    v66 = sub_D85AC(a1, a3, 78, -2144272379);
    V_LOCK(v66);
    V_INT((int)v183, "chain", *(int *)(a1 + 248));
    v67 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v67);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1348,
      60,
      v220);
    sub_D85AC(a1, a3, 77, (int)"sph_blake384_addbits_and_close");
    sub_D85AC(a1, a3, 78, -2144272378);
    sub_D85AC(a1, a3, 77, (int)&loc_C000C);
    v68 = sub_D85AC(a1, a3, 78, -2144272378);
    V_LOCK(v68);
    V_INT((int)&v184, "chain", *(int *)(a1 + 248));
    v69 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v69);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1351,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 0);
    sub_D85AC(a1, a3, 78, -2144272372);
    sub_D85AC(a1, a3, 77, (int)&loc_100010);
    v70 = sub_D85AC(a1, a3, 78, -2144272372);
    V_LOCK(v70);
    V_INT((int)v185, "chain", *(int *)(a1 + 248));
    v71 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v71);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1354,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 0);
    sub_D85AC(a1, a3, 78, -2144272360);
    sub_D85AC(a1, a3, 77, (int)&loc_100010);
    v72 = sub_D85AC(a1, a3, 78, -2144272360);
    V_LOCK(v72);
    V_INT((int)&v186, "chain", *(int *)(a1 + 248));
    v73 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v73);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1358,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 0);
    sub_D85AC(a1, a3, 78, -2144272114);
    sub_D85AC(a1, a3, 77, 710158932);
    v74 = sub_D85AC(a1, a3, 78, -2144272114);
    V_LOCK(v74);
    V_INT((int)v187, "chain", *(int *)(a1 + 248));
    v75 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v75);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1361,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 0);
    sub_D85AC(a1, a3, 78, -2144272124);
    sub_D85AC(a1, a3, 77, (int)&stru_1FFF8.st_size + 2);
    v76 = sub_D85AC(a1, a3, 78, -2144272124);
    V_LOCK(v76);
    V_INT((int)&v188, "chain", *(int *)(a1 + 248));
    v77 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v77);
    v78 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
            190,
            "serdes_external_loop_ate_init",
            29,
            1365,
            60,
            v220);
    V_LOCK(v78);
    V_INT((int)v189, "chain", *(int *)(a1 + 248));
    v79 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v79);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1366,
      60,
      v220);
    if ( (unsigned __int8)v156 == 2 )
      LOWORD(v80) = 498;
    else
      LOWORD(v80) = 501;
    if ( (unsigned __int8)v156 == 2 )
      HIWORD(v80) = 498;
    else
      HIWORD(v80) = 501;
    sub_D85AC(a1, a3, 77, v80);
    v81 = sub_D85AC(a1, a3, 78, -2144247559);
    V_LOCK(v81);
    V_INT((int)&v190, "chain", *(int *)(a1 + 248));
    v82 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v82);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1371,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 20971840);
    sub_D85AC(a1, a3, 78, -2144251901);
    sub_D85AC(a1, a3, 77, 88606024);
    v83 = sub_D85AC(a1, a3, 78, -2144251901);
    V_LOCK(v83);
    V_INT((int)v191, "chain", *(int *)(a1 + 248));
    v84 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v84);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1375,
      60,
      v220);
    sub_D85AC(a1, a3, 77, (int)&loc_100010);
    sub_D85AC(a1, a3, 78, -2144251900);
    sub_D85AC(a1, a3, 77, 542122064);
    v85 = sub_D85AC(a1, a3, 78, -2144251900);
    V_LOCK(v85);
    V_INT((int)&v192, "chain", *(int *)(a1 + 248));
    v86 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v86);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1378,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 0);
    sub_D85AC(a1, a3, 78, -2144247761);
    sub_D85AC(a1, a3, 77, (int)&stru_1FFF8.st_size + 2);
    v87 = sub_D85AC(a1, a3, 78, -2144247761);
    V_LOCK(v87);
    V_INT((int)v193, "chain", *(int *)(a1 + 248));
    v88 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v88);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1382,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 537010178);
    v89 = sub_D85AC(a1, a3, 78, -2144247750);
    V_LOCK(v89);
    V_INT((int)&v194, "chain", *(int *)(a1 + 248));
    v90 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v90);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1384,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 872428544);
    sub_D85AC(a1, a3, 78, -2144247769);
    sub_D85AC(a1, a3, 77, 1006648320);
    v91 = sub_D85AC(a1, a3, 78, -2144247769);
    V_LOCK(v91);
    V_INT((int)v195, "chain", *(int *)(a1 + 248));
    v92 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v92);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1387,
      60,
      v220);
    sub_D85AC(a1, a3, 77, (int)sub_80008);
    sub_D85AC(a1, a3, 78, -2144247745);
    sub_D85AC(a1, a3, 77, (int)&loc_180018);
    v93 = sub_D85AC(a1, a3, 78, -2144247745);
    V_LOCK(v93);
    V_INT((int)&v196, "chain", *(int *)(a1 + 248));
    v94 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v94);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1390,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 0);
    sub_D85AC(a1, a3, 78, -2144247798);
    sub_D85AC(a1, a3, 77, (int)&stru_1FFF8.st_size + 2);
    v95 = sub_D85AC(a1, a3, 78, -2144247798);
    V_LOCK(v95);
    V_INT((int)v197, "chain", *(int *)(a1 + 248));
    v96 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v96);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1393,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 65537);
    v97 = sub_D85AC(a1, a3, 78, -2144247604);
    V_LOCK(v97);
    V_INT((int)&v198, "chain", *(int *)(a1 + 248));
    v98 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v98);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1395,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 0);
    sub_D85AC(a1, a3, 78, -2144247796);
    sub_D85AC(a1, a3, 77, 268439552);
    v99 = sub_D85AC(a1, a3, 78, -2144247796);
    V_LOCK(v99);
    V_INT((int)v199, "chain", *(int *)(a1 + 248));
    v100 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v100);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1398,
      60,
      v220);
    sub_D85AC(a1, a3, 77, 0);
    sub_D85AC(a1, a3, 78, -2144243666);
    sub_D85AC(a1, a3, 77, (int)&stru_1FFF8.st_size + 2);
    sub_D85AC(a1, a3, 78, -2144243666);
    sub_D85AC(a1, a3, 77, 4259905);
    sub_D85AC(a1, a3, 78, -2144251869);
    sub_D85AC(a1, a3, 77, 13304011);
    v101 = sub_D85AC(a1, a3, 78, -2144251869);
    V_LOCK(v101);
    V_INT((int)&v200, "chain", *(int *)(a1 + 248));
    v102 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v102);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1403,
      60,
      v220);
    sub_D85AC(a1, a3, 77, (int)"sph_blake384_addbits_and_close");
    v103 = sub_D85AC(a1, a3, 78, -2144243609);
    V_LOCK(v103);
    V_INT((int)v201, "chain", *(int *)(a1 + 248));
    v104 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v104);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1405,
      60,
      v220);
    sub_D85AC(a1, a3, 77, (int)&loc_A0008 + 2);
    v105 = sub_D85AC(a1, a3, 78, -2144247768);
    V_LOCK(v105);
    V_INT((int)&v202, "chain", *(int *)(a1 + 248));
    v106 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v106);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1407,
      60,
      v220);
    sub_D85AC(a1, a3, 77, (int)"16$u20$as$u20$core..fmt..num..DisplayInt$GT$5to_u817hb5a8760e533952aeE");
    v107 = sub_D85AC(a1, a3, 78, -2144272078);
    V_LOCK(v107);
    V_INT((int)v203, "chain", *(int *)(a1 + 248));
    v108 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v108);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1409,
      60,
      v220);
    sub_D85AC(a1, a3, 77, -2136964960);
    sub_D85AC(a1, a3, 78, -2144247776);
    sub_D85AC(a1, a3, 77, -2136309590);
    v109 = sub_D85AC(a1, a3, 78, -2144247776);
    V_LOCK(v109);
    V_INT((int)&v204, "chain", *(int *)(a1 + 248));
    v110 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v110);
    v111 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
             190,
             "serdes_external_loop_ate_init",
             29,
             1412,
             60,
             v220);
    V_LOCK(v111);
    V_INT((int)v205, "chain", *(int *)(a1 + 248));
    v112 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v112);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1413,
      60,
      v220);
    v113 = usleep(0x3E8u);
    V_LOCK(v113);
    V_INT((int)&v206, "chain", *(int *)(a1 + 248));
    v114 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v114);
    v115 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
             190,
             "serdes_external_loop_ate_init",
             29,
             1416,
             60,
             v220);
    V_LOCK(v115);
    V_INT((int)v207, "chain", *(int *)(a1 + 248));
    v116 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v116);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1417,
      60,
      v220);
    serdes_wait_status(a1, a2, a3, 12308, 65537);
    serdes_wait_status(a1, a2, a3, 12820, 65537);
    serdes_wait_status(a1, a2, a3, 13332, 65537);
    v117 = serdes_wait_status(a1, a2, a3, 13844, 65537);
    V_LOCK(v117);
    V_INT((int)&v208, "chain", *(int *)(a1 + 248));
    v118 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v118);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1433,
      60,
      v220);
    serdes_wait_status(a1, a2, a3, 4156, 80);
    serdes_wait_status(a1, a2, a3, 4668, 80);
    serdes_wait_status(a1, a2, a3, 5180, 80);
    v119 = serdes_wait_status(a1, a2, a3, 5692, 80);
    V_LOCK(v119);
    V_INT((int)v209, "chain", *(int *)(a1 + 248));
    v120 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v120);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1438,
      60,
      v220);
    serdes_wait_status(a1, a2, a3, 8217, 0);
    serdes_wait_status(a1, a2, a3, 8729, 0);
    serdes_wait_status(a1, a2, a3, 9241, 0);
    v121 = serdes_wait_status(a1, a2, a3, 9753, 0);
    V_LOCK(v121);
    V_INT((int)&v210, "chain", *(int *)(a1 + 248));
    v122 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v122);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1443,
      60,
      v220);
    serdes_wait_status(a1, a2, a3, 4114, 0);
    serdes_wait_status(a1, a2, a3, 4626, 0);
    serdes_wait_status(a1, a2, a3, 5138, 0);
    v123 = serdes_wait_status(a1, a2, a3, 5650, 0);
    V_LOCK(v123);
    V_INT((int)v211, "chain", *(int *)(a1 + 248));
    v124 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v124);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1448,
      60,
      v220);
    serdes_wait_status(a1, a2, a3, 8196, 0);
    serdes_wait_status(a1, a2, a3, 8708, 0);
    serdes_wait_status(a1, a2, a3, 9220, 0);
    v125 = serdes_wait_status(a1, a2, a3, 9732, 0);
    if ( LFSR31 )
    {
      V_LOCK(v125);
      V_INT((int)&v212, "chain", *(int *)(a1 + 248));
      v147 = logfmt_raw((int)v220, 0x1000u);
      V_UNLOCK(v147);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
        190,
        "serdes_external_loop_ate_init",
        29,
        1456,
        60,
        v220);
      v127 = (int)&dword_10000 + 1;
    }
    else
    {
      V_LOCK(v125);
      V_INT((int)v213, "chain", *(int *)(a1 + 248));
      v126 = logfmt_raw((int)v220, 0x1000u);
      V_UNLOCK(v126);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
        190,
        "serdes_external_loop_ate_init",
        29,
        1461,
        60,
        v220);
      sub_D85AC(a1, a3, 77, 715139744);
      sub_D85AC(a1, a3, 78, -2144251791);
      usleep(0x12Cu);
      v127 = 715729577;
    }
    sub_D85AC(a1, a3, 77, v127);
    sub_D85AC(a1, a3, 78, -2144251791);
    v128 = usleep(0x12Cu);
    V_LOCK(v128);
    V_INT((int)&v214, "chain", *(int *)(a1 + 248));
    v129 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v129);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1469,
      60,
      v220);
    sub_D85AC(a1, a3, 77, (int)&loc_A0008 + 2);
    sub_D85AC(a1, a3, 78, -2144247768);
    sub_D85AC(a1, a3, 77, (int)&loc_A0008 + 2);
    v130 = sub_D85AC(a1, a3, 78, -2144247768);
    V_LOCK(v130);
    V_INT((int)v215, "chain", *(int *)(a1 + 248));
    v131 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v131);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1473,
      60,
      v220);
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
    v132 = sub_D85AC(a1, a3, 78, -2144243377);
    V_LOCK(v132);
    V_INT((int)&v216, "chain", *(int *)(a1 + 248));
    v133 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v133);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1477,
      60,
      v220);
    sub_D85AC(a1, a3, 77, -2136244053);
    sub_D85AC(a1, a3, 78, -2144247776);
    sub_D85AC(a1, a3, 77, -2136244053);
    sub_D85AC(a1, a3, 78, -2144247776);
    usleep(0x2710u);
    serdes_wait_status(a1, a2, a3, 4156, (int)&dword_10050 + 1);
    serdes_wait_status(a1, a2, a3, 4668, (int)&dword_10050 + 1);
    serdes_wait_status(a1, a2, a3, 5180, (int)&dword_10050 + 1);
    serdes_wait_status(a1, a2, a3, 5692, (int)&dword_10050 + 1);
    sub_D85AC(a1, a3, 77, -2136309590);
    sub_D85AC(a1, a3, 78, -2144247776);
    sub_D85AC(a1, a3, 77, -2136309590);
    sub_D85AC(a1, a3, 78, -2144247776);
    usleep((__useconds_t)&elf_hash_chain[4398]);
    serdes_wait_status(a1, a2, a3, 4156, 84);
    serdes_wait_status(a1, a2, a3, 4668, 84);
    serdes_wait_status(a1, a2, a3, 5180, 84);
    serdes_wait_status(a1, a2, a3, 5692, 84);
    v134 = usleep(0xEA60u);
    V_LOCK(v134);
    V_INT((int)v217, "chain", *(int *)(a1 + 248));
    v135 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v135);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1496,
      60,
      v220);
    sub_D85AC(a1, a3, 77, -1062551382);
    sub_D85AC(a1, a3, 78, -2144247776);
    v136 = usleep(0xC350u);
    V_LOCK(v136);
    V_INT((int)&v218, "chain", *(int *)(a1 + 248));
    v137 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v137);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1500,
      60,
      v220);
    serdes_wait_status(a1, a2, a3, 4156, 86);
    serdes_wait_status(a1, a2, a3, 4668, 86);
    serdes_wait_status(a1, a2, a3, 5180, 86);
    v138 = serdes_wait_status(a1, a2, a3, 5692, 86);
    V_LOCK(v138);
    V_INT((int)s, "chain", *(int *)(a1 + 248));
    v139 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v139);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1506,
      60,
      v220);
    if ( (unsigned __int8)v156 == 2 )
    {
      sub_D85AC(a1, a3, 77, 196611);
      sub_D85AC(a1, a3, 78, -2144247798);
      sub_D85AC(a1, a3, 77, 196611);
      sub_D85AC(a1, a3, 78, -2144247798);
      usleep(0x7D0u);
      serdes_wait_status(a1, a2, a3, 8218, 1);
      serdes_wait_status(a1, a2, a3, 8730, 1);
      serdes_wait_status(a1, a2, a3, 9242, 1);
      serdes_wait_status(a1, a2, a3, 9754, 1);
      sub_D85AC(a1, a3, 77, 131074);
      sub_D85AC(a1, a3, 78, -2144247798);
      sub_D85AC(a1, a3, 77, 131074);
      sub_D85AC(a1, a3, 78, -2144247798);
      usleep((__useconds_t)&elf_hash_chain[4398]);
      serdes_wait_status(a1, a2, a3, 8218, 0);
      serdes_wait_status(a1, a2, a3, 8730, 0);
      serdes_wait_status(a1, a2, a3, 9242, 0);
      serdes_wait_status(a1, a2, a3, 9754, 0);
    }
    usleep(0xC350u);
    return 0;
  }
  else
  {
    V_LOCK(v9);
    v148 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v148);
    v149 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
             190,
             "phy_read_config_ini",
             19,
             180,
             100,
             v220);
    V_LOCK(v149);
    v150 = logfmt_raw((int)v220, 0x1000u);
    V_UNLOCK(v150);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "serdes_external_loop_ate_init",
      29,
      1237,
      100,
      v220);
    return 0;
  }
}
