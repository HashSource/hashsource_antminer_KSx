int __fastcall phy_external_bist(int a1, int a2, int a3, unsigned int a4)
{
  int v8; // r0
  char *v9; // r4
  int v10; // r0
  unsigned __int16 v11; // t1
  int v12; // r0
  int v13; // r0
  char *v14; // r5
  char v15; // t1
  char *v16; // r4
  unsigned __int16 v17; // t1
  int v18; // r0
  int v19; // r0
  unsigned __int16 v20; // r5
  int v21; // r1
  int v22; // r0
  char *v23; // r11
  char *v24; // r4
  unsigned int v25; // r3
  _DWORD *v26; // r2
  int v27; // r1
  bool v28; // zf
  unsigned int v29; // r3
  int v30; // r0
  int v31; // r0
  int v32; // r0
  unsigned __int16 v33; // r5
  int v34; // r0
  char *v35; // r11
  char *v36; // r4
  unsigned int v37; // r3
  _DWORD *v38; // r2
  int v39; // r1
  unsigned int v40; // r3
  int v41; // r0
  int v42; // r0
  int v43; // r0
  unsigned __int16 v44; // r5
  int v45; // r0
  char *v46; // r11
  char *v47; // r4
  unsigned int v48; // r3
  _DWORD *v49; // r2
  int v50; // r1
  unsigned int v51; // r3
  int v52; // r0
  int v53; // r0
  int v54; // r0
  unsigned int v55; // r9
  unsigned int v56; // r6
  int v57; // r11
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  char *v66; // [sp+38h] [bp-125Ch]
  char *v67; // [sp+44h] [bp-1250h]
  int v68; // [sp+48h] [bp-124Ch]
  char *v69; // [sp+48h] [bp-124Ch]
  char *v70; // [sp+48h] [bp-124Ch]
  unsigned __int8 *v71; // [sp+60h] [bp-1234h]
  char *ptr; // [sp+6Ch] [bp-1228h]
  int v73; // [sp+70h] [bp-1224h] BYREF
  char v74[32]; // [sp+90h] [bp-1204h] BYREF
  int v75; // [sp+B0h] [bp-11E4h] BYREF
  char v76[32]; // [sp+D0h] [bp-11C4h] BYREF
  int v77; // [sp+F0h] [bp-11A4h] BYREF
  char v78[32]; // [sp+110h] [bp-1184h] BYREF
  int v79; // [sp+130h] [bp-1164h] BYREF
  char v80[32]; // [sp+150h] [bp-1144h] BYREF
  int v81; // [sp+170h] [bp-1124h] BYREF
  char v82[32]; // [sp+190h] [bp-1104h] BYREF
  int v83; // [sp+1B0h] [bp-10E4h] BYREF
  __int16 v84; // [sp+1D0h] [bp-10C4h] BYREF
  int v85; // [sp+1F0h] [bp-10A4h] BYREF
  int v86; // [sp+1F4h] [bp-10A0h] BYREF
  int v87; // [sp+210h] [bp-1084h] BYREF
  int v88; // [sp+214h] [bp-1080h] BYREF
  double v89[4]; // [sp+230h] [bp-1064h] BYREF
  double v90[4]; // [sp+250h] [bp-1044h] BYREF
  double v91[4]; // [sp+270h] [bp-1024h] BYREF
  _DWORD v92[1025]; // [sp+290h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v73, "chain", *(int *)(a1 + 248));
  v8 = logfmt_raw((int)v92, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "phy_external_bist",
    17,
    2037,
    60,
    v92);
  memset(v91, 0, sizeof(v91));
  memset(v90, 0, sizeof(v90));
  memset(v89, 0, sizeof(v89));
  if ( a4 )
  {
    v66 = (char *)(a3 - 1);
    v67 = (char *)(a3 + (unsigned __int8)(a4 - 1));
    v9 = (char *)(a3 - 1);
    do
    {
      v11 = (unsigned __int8)*++v9;
      v12 = check_core_reg_with_expect_data_eth(a1, a2, v11, 64, 0xFF000100);
      if ( v12 )
      {
        V_LOCK(v12);
        V_INT((int)v74, "chain", *(int *)(a1 + 248));
        v10 = logfmt_raw((int)v92, 0x1000u);
        V_UNLOCK(v10);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          190,
          "phy_external_bist",
          17,
          2181,
          100,
          v92);
      }
      else
      {
        V_LOCK(0);
        V_INT((int)&v75, "chain", *(int *)(a1 + 248));
        v13 = logfmt_raw((int)v92, 0x1000u);
        V_UNLOCK(v13);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          190,
          "phy_external_bist",
          17,
          2183,
          100,
          v92);
      }
    }
    while ( v67 != v9 );
    v14 = v66;
    do
    {
      v15 = *++v14;
      sub_D85AC(a1, v15, 133, 0xFFFF);
      sub_D85AC(a1, *v14, 134, 1342177279);
    }
    while ( v9 != v14 );
    v71 = (unsigned __int8 *)v14;
    sub_D856C(a1, 132, -2147483647);
    sleep(0xAu);
    v16 = v66;
    ptr = (char *)malloc(0x600u);
    do
    {
      while ( 1 )
      {
        v17 = (unsigned __int8)*++v16;
        v18 = check_core_reg_with_expect_data_eth(a1, a2, v17, 139, 0xFF0000FF);
        if ( v18 )
          break;
        if ( v14 == v16 )
          goto LABEL_13;
      }
      V_LOCK(v18);
      V_INT((int)v76, "chain", *(int *)(a1 + 248));
      v19 = logfmt_raw((int)v92, 0x1000u);
      V_UNLOCK(v19);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
        190,
        "phy_external_bist",
        17,
        2217,
        100,
        v92);
    }
    while ( v14 != v16 );
    do
    {
LABEL_13:
      v20 = 67;
      v21 = (unsigned __int8)v66[1];
      v68 = 0;
      ++v66;
      sub_D85FC(a1, v21, 132, ptr);
      v84 = 17475;
      while ( 1 )
      {
        v22 = sub_D85FC(a1, (unsigned __int8)*v66, v20, ptr);
        if ( v22 )
        {
          v23 = &ptr[12 * v22];
          v24 = ptr;
          do
          {
            while ( 1 )
            {
              if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v24 + 3)) == v20 )
              {
                v25 = bswap32(*(_DWORD *)v24);
                v26 = &v92[(unsigned __int8)v24[4]];
                v27 = (unsigned __int16)v25;
                v28 = (unsigned __int16)v25 == 0;
                v29 = HIWORD(v25);
                v30 = *(v26 - 8);
                *(v26 - 8) = v30 + v27 + v29;
                if ( !v28 )
                {
                  ++dword_30112C;
                  V_LOCK(v30);
                  V_INT((int)&v77, "chain", *(int *)(a1 + 248));
                  v32 = logfmt_raw((int)v92, 0x1000u);
                  V_UNLOCK(v32);
                  v30 = zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                          190,
                          "phy_external_bist",
                          17,
                          2254,
                          40,
                          v92);
                  v29 = bswap32(*(_DWORD *)v24) >> 16;
                }
                if ( v29 )
                  break;
              }
              v24 += 12;
              if ( v23 == v24 )
                goto LABEL_22;
            }
            v24 += 12;
            ++dword_30112C;
            V_LOCK(v30);
            V_INT((int)v78, "chain", *(int *)(a1 + 248));
            v31 = logfmt_raw((int)v92, 0x1000u);
            V_UNLOCK(v31);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
              190,
              "phy_external_bist",
              17,
              2259,
              40,
              v92);
          }
          while ( v23 != v24 );
        }
LABEL_22:
        if ( v68 == 1 )
          break;
        v20 = HIBYTE(v84);
        v68 = 1;
      }
      v33 = 128;
      v69 = (char *)&v85 + 1;
      v85 = -2088599168;
      while ( 1 )
      {
        v34 = sub_D85FC(a1, (unsigned __int8)*v66, v33, ptr);
        if ( v34 )
        {
          v35 = &ptr[12 * v34];
          v36 = ptr;
          do
          {
            while ( 1 )
            {
              if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v36 + 3)) == v33 )
              {
                v37 = bswap32(*(_DWORD *)v36);
                v38 = &v92[(unsigned __int8)v36[4]];
                v39 = (unsigned __int16)v37;
                v28 = (unsigned __int16)v37 == 0;
                v40 = HIWORD(v37);
                v41 = *(v38 - 16);
                *(v38 - 16) = v41 + v39 + v40;
                if ( !v28 )
                {
                  ++dword_301130;
                  V_LOCK(v41);
                  V_INT((int)&v79, "chain", *(int *)(a1 + 248));
                  v43 = logfmt_raw((int)v92, 0x1000u);
                  V_UNLOCK(v43);
                  v41 = zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                          190,
                          "phy_external_bist",
                          17,
                          2288,
                          40,
                          v92);
                  v40 = bswap32(*(_DWORD *)v36) >> 16;
                }
                if ( v40 )
                  break;
              }
              v36 += 12;
              if ( v35 == v36 )
                goto LABEL_33;
            }
            v36 += 12;
            ++dword_301130;
            V_LOCK(v41);
            V_INT((int)v80, "chain", *(int *)(a1 + 248));
            v42 = logfmt_raw((int)v92, 0x1000u);
            V_UNLOCK(v42);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
              190,
              "phy_external_bist",
              17,
              2293,
              40,
              v92);
          }
          while ( v35 != v36 );
        }
LABEL_33:
        if ( &v86 == (int *)v69 )
          break;
        v33 = (unsigned __int8)*v69++;
      }
      v44 = 135;
      v70 = (char *)&v87 + 1;
      v87 = -1970698105;
      while ( 1 )
      {
        v45 = sub_D85FC(a1, (unsigned __int8)*v66, v44, ptr);
        if ( v45 )
        {
          v46 = &ptr[12 * v45];
          v47 = ptr;
          do
          {
            while ( 1 )
            {
              if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v47 + 3)) == v44 )
              {
                v48 = bswap32(*(_DWORD *)v47);
                v49 = &v92[(unsigned __int8)v47[4]];
                v50 = (unsigned __int16)v48;
                v28 = (unsigned __int16)v48 == 0;
                v51 = HIWORD(v48);
                v52 = *(v49 - 24);
                *(v49 - 24) = v52 + v50 + v51;
                if ( !v28 )
                {
                  ++dword_301134;
                  V_LOCK(v52);
                  V_INT((int)&v81, "chain", *(int *)(a1 + 248));
                  v54 = logfmt_raw((int)v92, 0x1000u);
                  V_UNLOCK(v54);
                  v52 = zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                          190,
                          "phy_external_bist",
                          17,
                          2322,
                          40,
                          v92);
                  v51 = bswap32(*(_DWORD *)v47) >> 16;
                }
                if ( v51 )
                  break;
              }
              v47 += 12;
              if ( v46 == v47 )
                goto LABEL_44;
            }
            v47 += 12;
            ++dword_301134;
            V_LOCK(v52);
            V_INT((int)v82, "chain", *(int *)(a1 + 248));
            v53 = logfmt_raw((int)v92, 0x1000u);
            V_UNLOCK(v53);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
              190,
              "phy_external_bist",
              17,
              2327,
              40,
              v92);
          }
          while ( v46 != v47 );
        }
LABEL_44:
        if ( &v88 == (int *)v70 )
          break;
        v44 = (unsigned __int8)*v70++;
      }
    }
    while ( v66 != (char *)v71 );
    v55 = LODWORD(v89[0]);
    v56 = LODWORD(v90[0]);
    a4 = LODWORD(v91[0]);
  }
  else
  {
    sub_D856C(a1, 132, -2147483647);
    sleep(0xAu);
    v56 = 0;
    v55 = 0;
    ptr = (char *)malloc(0x600u);
  }
  v57 = 0;
  free(ptr);
  while ( 1 )
  {
    *(_QWORD *)&dbl_301138 += v55;
    *(_QWORD *)&dbl_301140 += v56;
    *(_QWORD *)&dbl_301148 += a4;
    V_LOCK(LODWORD(dbl_301138));
    V_INT((int)&v83, "chain", *(int *)(a1 + 248));
    ++v57;
    v58 = logfmt_raw((int)v92, 0x1000u);
    V_UNLOCK(v58);
    v59 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
            190,
            "phy_external_bist",
            17,
            2345,
            60,
            v92);
    if ( v57 == 8 )
      break;
    v55 = *((_DWORD *)v89 + v57);
    v56 = *((_DWORD *)v90 + v57);
    a4 = *((_DWORD *)v91 + v57);
  }
  V_LOCK(v59);
  V_INT((int)&v84, "chain", *(int *)(a1 + 248));
  v60 = logfmt_raw((int)v92, 0x1000u);
  V_UNLOCK(v60);
  v61 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          190,
          "phy_external_bist",
          17,
          2348,
          60,
          v92);
  V_LOCK(v61);
  V_INT((int)&v85, "chain", *(int *)(a1 + 248));
  v62 = logfmt_raw((int)v92, 0x1000u);
  V_UNLOCK(v62);
  v63 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          190,
          "phy_external_bist",
          17,
          2349,
          60,
          v92);
  V_LOCK(v63);
  V_INT((int)&v87, "chain", *(int *)(a1 + 248));
  v64 = logfmt_raw((int)v92, 0x1000u);
  V_UNLOCK(v64);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "phy_external_bist",
    17,
    2350,
    60,
    v92);
  dword_30112C = 0;
  dword_301130 = 0;
  dbl_301148 = 0.0;
  dword_301134 = 0;
  dbl_301140 = 0.0;
  dbl_301138 = 0.0;
  return 0;
}
