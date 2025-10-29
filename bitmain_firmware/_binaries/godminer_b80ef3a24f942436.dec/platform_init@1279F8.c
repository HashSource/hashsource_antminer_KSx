int platform_init()
{
  _DWORD *v1; // r6
  int v2; // r10
  int v3; // r7
  int v4; // r3
  int *v5; // r2
  int v6; // r1
  int v7; // r0
  int v8; // r8
  int v9; // r0
  int v10; // r9
  int v11; // r0
  int v12; // r0
  int v13; // r3
  int v14; // r0
  void *v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int *v19; // r9
  int v20; // r0
  int v21; // r0
  int *v22; // r8
  unsigned int v23; // r7
  int v24; // t1
  int v25; // r0
  int v26; // r0
  void *v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int *v34; // r3
  int v35; // r2
  int v36; // r0
  char *format; // [sp+14h] [bp-1818h]
  int c; // [sp+18h] [bp-1814h]
  char v39; // [sp+27h] [bp-1805h] BYREF
  char v40[2040]; // [sp+28h] [bp-1804h] BYREF
  _BYTE v41[4100]; // [sp+828h] [bp-1004h] BYREF

  if ( platform_inited[0] )
    return 0;
  if ( fpga_init() )
  {
    c = -1;
    strcpy(v40, "fpga init failed\n");
    V_LOCK(*(_DWORD *)"fpga init failed\n");
    v36 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v36);
    v34 = &g_zc;
    v35 = 45;
    goto LABEL_26;
  }
  if ( gpio_init() )
  {
    c = -2;
    strcpy(v40, "gpio init failed\n");
    V_LOCK(*(_DWORD *)"gpio init failed\n");
    v33 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v33);
    v34 = &g_zc;
    v35 = 50;
LABEL_26:
    zlog(
      *v34,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
      194,
      "platform_init",
      13,
      v35,
      100,
      v41);
    return c;
  }
  LOWORD(v1) = 9076;
  memset(&dword_311E08, 0, 0x124u);
  v2 = hal_chain_max_num();
  if ( v2 > 0 )
  {
    HIWORD(v1) = 49;
    v3 = 0;
    while ( 1 )
    {
      v7 = hal_chain_plug_addr(v3);
      v8 = v7;
      if ( v7 < 0 )
        break;
      gpio_export(v7);
      gpio_direction(v8, 0);
      v9 = hal_chain_reset_addr(v3);
      v10 = v9;
      if ( v9 < 0 )
      {
        v31 = snprintf(v40, 0x800u, "fail to get reset for chain %d\n", v3);
        V_LOCK(v31);
        v32 = logfmt_raw((int)v41, 0x1000u);
        V_UNLOCK(v32);
        v14 = *v1;
        v13 = 72;
        goto LABEL_14;
      }
      gpio_export(v9);
      gpio_direction(v10, 1);
      v39 = 0;
      gpio_read(v8, &v39);
      if ( v39 == 1 )
      {
        v4 = dword_311E08++;
        v5 = &platform_inited[18 * v4];
        v6 = v5[3];
        v5[2] = v3;
        v5[3] = v6 + 1;
        platform_inited[18 * v4 + 4 + v6] = v3++;
        if ( v2 == v3 )
          goto LABEL_15;
      }
      else
      {
        v11 = snprintf(v40, 0x800u, "no board pluged in socket %d", v8);
        V_LOCK(v11);
        v12 = logfmt_raw((int)v41, 0x1000u);
        V_UNLOCK(v12);
        v13 = 89;
        v14 = *v1;
LABEL_14:
        ++v3;
        zlog(
          v14,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
          194,
          "platform_init",
          13,
          v13,
          80,
          v41);
        if ( v2 == v3 )
          goto LABEL_15;
      }
    }
    v29 = snprintf(v40, 0x800u, "fail to get socket for chain %d\n", v3);
    V_LOCK(v29);
    v30 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v30);
    v14 = *v1;
    v13 = 63;
    goto LABEL_14;
  }
  HIWORD(v1) = 49;
LABEL_15:
  v15 = memcpy(v40, "==========================capability start==========================\n", 0x46u);
  V_LOCK(v15);
  v16 = logfmt_raw((int)v41, 0x1000u);
  V_UNLOCK(v16);
  zlog(
    *v1,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
    194,
    "platform_dump_capability",
    24,
    26,
    20,
    v41);
  v17 = snprintf(v40, 0x800u, "board num = %d\n", dword_311E08);
  V_LOCK(v17);
  v18 = logfmt_raw((int)v41, 0x1000u);
  V_UNLOCK(v18);
  zlog(
    *v1,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
    194,
    "platform_dump_capability",
    24,
    27,
    20,
    v41);
  if ( dword_311E08 )
  {
    v19 = &dword_311E08;
    format = 0;
    do
    {
      v20 = snprintf(v40, 0x800u, "board id = %d, chain num = %d\n", v19[1], v19[2]);
      V_LOCK(v20);
      v21 = logfmt_raw((int)v41, 0x1000u);
      V_UNLOCK(v21);
      zlog(
        *v1,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
        194,
        "platform_dump_capability",
        24,
        30,
        20,
        v41);
      if ( v19[2] )
      {
        v22 = v19 + 2;
        v23 = 0;
        do
        {
          v24 = v22[1];
          ++v22;
          v25 = snprintf(v40, 0x800u, "\tchain id = %d\n", v24);
          ++v23;
          V_LOCK(v25);
          v26 = logfmt_raw((int)v41, 0x1000u);
          V_UNLOCK(v26);
          zlog(
            *v1,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
            194,
            "platform_dump_capability",
            24,
            33,
            20,
            v41);
        }
        while ( v19[2] > v23 );
      }
      v19 += 18;
      ++format;
    }
    while ( dword_311E08 > (unsigned int)format );
  }
  v27 = memcpy(v40, "==========================capability end============================\n", 0x46u);
  V_LOCK(v27);
  v28 = logfmt_raw((int)v41, 0x1000u);
  V_UNLOCK(v28);
  zlog(
    *v1,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
    194,
    "platform_dump_capability",
    24,
    36,
    20,
    v41);
  platform_inited[0] = 1;
  fan_init();
  uart_init();
  return 0;
}
