int __fastcall phy_internal_bist_rvn(int a1, int a2, unsigned __int16 a3, int a4)
{
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  __int16 v17; // r2
  _DWORD *v18; // r4
  int v19; // r0
  _DWORD *v20; // r7
  int v21; // r0
  __int16 v22; // r2
  _DWORD *v23; // r4
  int v24; // r0
  _DWORD *v25; // r7
  int v26; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  _DWORD *v33; // [sp+60h] [bp-1184h]
  int v34; // [sp+64h] [bp-1180h]
  _DWORD *v35; // [sp+6Ch] [bp-1178h]
  _DWORD *v36; // [sp+6Ch] [bp-1178h]
  int v37; // [sp+78h] [bp-116Ch] BYREF
  int v38; // [sp+7Ch] [bp-1168h] BYREF
  int v39; // [sp+80h] [bp-1164h] BYREF
  _BYTE v40[32]; // [sp+A0h] [bp-1144h] BYREF
  int v41; // [sp+C0h] [bp-1124h] BYREF
  _BYTE v42[32]; // [sp+E0h] [bp-1104h] BYREF
  int v43; // [sp+100h] [bp-10E4h] BYREF
  _BYTE v44[32]; // [sp+120h] [bp-10C4h] BYREF
  int v45; // [sp+140h] [bp-10A4h] BYREF
  _BYTE v46[32]; // [sp+160h] [bp-1084h] BYREF
  int v47; // [sp+180h] [bp-1064h] BYREF
  _BYTE v48[32]; // [sp+1A0h] [bp-1044h] BYREF
  int v49; // [sp+1C0h] [bp-1024h] BYREF
  _BYTE v50[4100]; // [sp+1E0h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v39, "chain");
  v8 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "phy_internal_bist_rvn",
    21,
    870,
    20,
    v50);
  v33 = malloc(0x300u);
  sub_105374(a1, a3, 86, 3670024);
  usleep(0x12Cu);
  sub_105374(a1, a3, 85, 109905420);
  usleep(0x12Cu);
  sub_105374(a1, a3, 101, -268374016);
  usleep(0x12Cu);
  sub_105374(a1, a3, 64, 256);
  usleep(0x12Cu);
  sub_105374(a1, a3, 80, 33423870);
  usleep(0x12Cu);
  sub_105374(a1, a3, 81, 832516511);
  usleep(0x12Cu);
  sub_105374(a1, a3, 88, -1);
  usleep(0x12Cu);
  v9 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 125, 0x70007000u);
  if ( v9 )
  {
    V_LOCK(v9);
    V_INT((int)v40, "chain");
    v29 = logfmt_raw((int)v50, 0x1000u);
    V_UNLOCK(v29);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      195,
      "phy_internal_bist_rvn",
      21,
      902,
      100,
      v50);
  }
  sub_105374(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  sub_105374(a1, a3, 80, 0);
  usleep(0x12Cu);
  v10 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 119, 0);
  if ( v10 )
  {
    V_LOCK(v10);
    V_INT((int)&v41, "chain");
    v28 = logfmt_raw((int)v50, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      195,
      "phy_internal_bist_rvn",
      21,
      915,
      100,
      v50);
  }
  sub_105374(a1, a3, 82, 0);
  v11 = usleep(0x64u);
  V_LOCK(v11);
  V_INT((int)v42, "chain");
  v12 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "phy_internal_bist_rvn",
    21,
    921,
    20,
    v50);
  sub_105374(a1, a3, 83, 16711935);
  v13 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 83, 0);
  if ( v13 )
  {
    V_LOCK(v13);
    V_INT((int)&v49, "chain");
    v14 = logfmt_raw((int)v50, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      195,
      "phy_handshake_rvn",
      17,
      827,
      100,
      v50);
  }
  phy_pll_switch_rvn(a1, a2, a3, a4);
  sub_105374(a1, a3, 98, -1426085121);
  usleep(0x64u);
  v15 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 64, 0xFF000100);
  if ( v15 )
  {
    V_LOCK(v15);
    V_INT((int)&v43, "chain");
    v31 = logfmt_raw((int)v50, 0x1000u);
    V_UNLOCK(v31);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      195,
      "phy_internal_bist_rvn",
      21,
      934,
      100,
      v50);
  }
  sub_105374(a1, a3, 133, 255);
  usleep(0x64u);
  sub_105374(a1, a3, 134, 255);
  usleep(0x64u);
  sub_105374(a1, a3, 132, -2147483647);
  sleep(6u);
  v16 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 139, 0xFF0000FF);
  if ( v16 )
  {
    V_LOCK(v16);
    V_INT((int)v44, "chain");
    v30 = logfmt_raw((int)v50, 0x1000u);
    V_UNLOCK(v30);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      195,
      "phy_internal_bist_rvn",
      21,
      950,
      100,
      v50);
  }
  v34 = a3;
  v37 = -1970698105;
  v35 = (int *)((char *)&v37 + 1);
  v17 = 135;
  while ( 1 )
  {
    v18 = v33;
    v19 = sub_1053C4(a1, v34, v17, v33);
    if ( v19 )
    {
      v20 = &v33[3 * v19];
      do
      {
        while ( !*v18 )
        {
          v18 += 3;
          if ( v18 == v20 )
            goto LABEL_17;
        }
        V_LOCK(v19);
        v18 += 3;
        V_INT((int)&v45, "chain");
        V_INT((int)v46, "chain");
        v21 = logfmt_raw((int)v50, 0x1000u);
        V_UNLOCK(v21);
        v19 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
                195,
                "phy_internal_bist_rvn",
                21,
                963,
                60,
                v50);
      }
      while ( v18 != v20 );
    }
LABEL_17:
    if ( v35 == (int *)((char *)&v38 + 1) )
      break;
    v17 = *(unsigned __int8 *)v35;
    v35 = (_DWORD *)((char *)v35 + 1);
  }
  v38 = -2088599168;
  v36 = (int *)((char *)&v38 + 1);
  v22 = 128;
  while ( 1 )
  {
    v23 = v33;
    v24 = sub_1053C4(a1, v34, v22, v33);
    if ( v24 )
    {
      v25 = &v33[3 * v24];
      do
      {
        while ( !*v23 )
        {
          v23 += 3;
          if ( v23 == v25 )
            goto LABEL_25;
        }
        V_LOCK(v24);
        v23 += 3;
        V_INT((int)&v47, "chain");
        V_INT((int)v48, "chain");
        v26 = logfmt_raw((int)v50, 0x1000u);
        V_UNLOCK(v26);
        v24 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
                195,
                "phy_internal_bist_rvn",
                21,
                978,
                60,
                v50);
      }
      while ( v23 != v25 );
    }
LABEL_25:
    if ( (int *)((char *)&v39 + 1) == v36 )
      return 0;
    v22 = *(unsigned __int8 *)v36;
    v36 = (_DWORD *)((char *)v36 + 1);
  }
}
