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
  int v11; // r3
  int v12; // r0
  int *v13; // r9
  int *v14; // r8
  unsigned int v15; // r7
  int v16; // t1
  char *format; // [sp+14h] [bp-1818h]
  int c; // [sp+18h] [bp-1814h]
  char v19; // [sp+27h] [bp-1805h] BYREF
  char v20[2040]; // [sp+28h] [bp-1804h] BYREF
  char v21[4100]; // [sp+828h] [bp-1004h] BYREF

  if ( platform_inited[0] )
    return 0;
  if ( fpga_init() )
  {
    c = -1;
    strcpy(v20, "fpga init failed\n");
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, v20);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
      194,
      "platform_init",
      13,
      45,
      100,
      v21);
    return c;
  }
  if ( gpio_init() )
  {
    c = -2;
    strcpy(v20, "gpio init failed\n");
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, v20);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
      194,
      "platform_init",
      13,
      50,
      100,
      v21);
    return c;
  }
  LOWORD(v1) = (unsigned __int16)&g_zc;
  memset(&dword_2E8590, 0, 0x124u);
  v2 = hal_chain_max_num();
  if ( v2 > 0 )
  {
    HIWORD(v1) = (unsigned int)&g_zc >> 16;
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
        snprintf(v20, 0x800u, "fail to get reset for chain %d\n", v3);
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, v20);
        V_UNLOCK();
        v12 = *v1;
        v11 = 72;
        goto LABEL_14;
      }
      gpio_export(v9);
      gpio_direction(v10, 1);
      v19 = 0;
      gpio_read(v8, &v19);
      if ( v19 == 1 )
      {
        v4 = dword_2E8590++;
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
        snprintf(v20, 0x800u, "no board pluged in socket %d", v8);
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, v20);
        V_UNLOCK();
        v11 = 89;
        v12 = *v1;
LABEL_14:
        ++v3;
        zlog(
          v12,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
          194,
          "platform_init",
          13,
          v11,
          80,
          v21);
        if ( v2 == v3 )
          goto LABEL_15;
      }
    }
    snprintf(v20, 0x800u, "fail to get socket for chain %d\n", v3);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, v20);
    V_UNLOCK();
    v12 = *v1;
    v11 = 63;
    goto LABEL_14;
  }
  HIWORD(v1) = (unsigned int)&g_zc >> 16;
LABEL_15:
  strcpy(v20, "==========================capability start==========================\n");
  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, v20);
  V_UNLOCK();
  zlog(
    *v1,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
    194,
    "platform_dump_capability",
    24,
    26,
    20,
    v21);
  snprintf(v20, 0x800u, "board num = %d\n", dword_2E8590);
  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, v20);
  V_UNLOCK();
  zlog(
    *v1,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
    194,
    "platform_dump_capability",
    24,
    27,
    20,
    v21);
  if ( dword_2E8590 )
  {
    v13 = &dword_2E8590;
    format = 0;
    do
    {
      snprintf(v20, 0x800u, "board id = %d, chain num = %d\n", v13[1], v13[2]);
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, v20);
      V_UNLOCK();
      zlog(
        *v1,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
        194,
        "platform_dump_capability",
        24,
        30,
        20,
        v21);
      if ( v13[2] )
      {
        v14 = v13 + 2;
        v15 = 0;
        do
        {
          v16 = v14[1];
          ++v14;
          snprintf(v20, 0x800u, "\tchain id = %d\n", v16);
          ++v15;
          V_LOCK();
          logfmt_raw(v21, 0x1000u, 0, v20);
          V_UNLOCK();
          zlog(
            *v1,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
            194,
            "platform_dump_capability",
            24,
            33,
            20,
            v21);
        }
        while ( v13[2] > v15 );
      }
      v13 += 18;
      ++format;
    }
    while ( dword_2E8590 > (unsigned int)format );
  }
  strcpy(v20, "==========================capability end============================\n");
  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, v20);
  V_UNLOCK();
  zlog(
    *v1,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
    194,
    "platform_dump_capability",
    24,
    36,
    20,
    v21);
  platform_inited[0] = 1;
  fan_init();
  uart_init();
  return 0;
}
