int __fastcall platform_init(int a1, int a2, int a3)
{
  _DWORD *v4; // r6
  void *v5; // r0
  int v6; // r10
  int v7; // r7
  int v8; // r3
  int *v9; // r2
  int v10; // r1
  int v11; // r8
  int v12; // r9
  int v13; // r0
  int v14; // r0
  int v15; // r3
  int v16; // r0
  void *v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int *v21; // r9
  int v22; // r0
  int v23; // r0
  int *v24; // r8
  unsigned int v25; // r7
  int v26; // t1
  int v27; // r0
  int v28; // r0
  void *v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  char *format; // [sp+14h] [bp-1818h]
  int c; // [sp+18h] [bp-1814h]
  char v41; // [sp+27h] [bp-1805h] BYREF
  char v42[2040]; // [sp+28h] [bp-1804h] BYREF
  _BYTE v43[4100]; // [sp+828h] [bp-1004h] BYREF

  if ( platform_inited[0] )
    return 0;
  if ( fpga_init(a1, a2, a3, platform_inited) )
  {
    c = -1;
    strcpy(v42, "fpga init failed\n");
    V_LOCK(*(_DWORD *)"fpga init failed\n");
    v38 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v38);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
      194,
      "platform_init",
      13,
      45,
      100,
      v43);
    return c;
  }
  if ( gpio_init() )
  {
    c = -2;
    strcpy(v42, "gpio init failed\n");
    V_LOCK(*(_DWORD *)"gpio init failed\n");
    v37 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v37);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
      194,
      "platform_init",
      13,
      50,
      100,
      v43);
    return c;
  }
  LOWORD(v4) = (unsigned __int16)&g_zc;
  v5 = memset(&dword_2E9A88, 0, 0x124u);
  v6 = hal_chain_max_num(v5);
  if ( v6 > 0 )
  {
    HIWORD(v4) = (unsigned int)&g_zc >> 16;
    v7 = 0;
    while ( 1 )
    {
      v11 = hal_chain_plug_addr(v7);
      if ( v11 < 0 )
        break;
      gpio_export();
      gpio_direction(v11, 0);
      v12 = hal_chain_reset_addr(v7);
      if ( v12 < 0 )
      {
        v35 = snprintf(v42, 0x800u, "fail to get reset for chain %d\n", v7);
        V_LOCK(v35);
        v36 = logfmt_raw((int)v43, 0x1000u);
        V_UNLOCK(v36);
        v16 = *v4;
        v15 = 72;
        goto LABEL_14;
      }
      gpio_export();
      gpio_direction(v12, 1);
      v41 = 0;
      gpio_read(v11, &v41);
      if ( v41 == 1 )
      {
        v8 = dword_2E9A88++;
        v9 = &platform_inited[18 * v8];
        v10 = v9[3];
        v9[2] = v7;
        v9[3] = v10 + 1;
        platform_inited[18 * v8 + 4 + v10] = v7++;
        if ( v6 == v7 )
          goto LABEL_15;
      }
      else
      {
        v13 = snprintf(v42, 0x800u, "no board pluged in socket %d", v11);
        V_LOCK(v13);
        v14 = logfmt_raw((int)v43, 0x1000u);
        V_UNLOCK(v14);
        v15 = 89;
        v16 = *v4;
LABEL_14:
        ++v7;
        zlog(
          v16,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
          194,
          "platform_init",
          13,
          v15,
          80,
          v43);
        if ( v6 == v7 )
          goto LABEL_15;
      }
    }
    v33 = snprintf(v42, 0x800u, "fail to get socket for chain %d\n", v7);
    V_LOCK(v33);
    v34 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v34);
    v16 = *v4;
    v15 = 63;
    goto LABEL_14;
  }
  HIWORD(v4) = (unsigned int)&g_zc >> 16;
LABEL_15:
  v17 = memcpy(v42, "==========================capability start==========================\n", 0x46u);
  V_LOCK(v17);
  v18 = logfmt_raw((int)v43, 0x1000u);
  V_UNLOCK(v18);
  zlog(
    *v4,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
    194,
    "platform_dump_capability",
    24,
    26,
    20,
    v43);
  v19 = snprintf(v42, 0x800u, "board num = %d\n", dword_2E9A88);
  V_LOCK(v19);
  v20 = logfmt_raw((int)v43, 0x1000u);
  V_UNLOCK(v20);
  zlog(
    *v4,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
    194,
    "platform_dump_capability",
    24,
    27,
    20,
    v43);
  if ( dword_2E9A88 )
  {
    v21 = &dword_2E9A88;
    format = 0;
    do
    {
      v22 = snprintf(v42, 0x800u, "board id = %d, chain num = %d\n", v21[1], v21[2]);
      V_LOCK(v22);
      v23 = logfmt_raw((int)v43, 0x1000u);
      V_UNLOCK(v23);
      zlog(
        *v4,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
        194,
        "platform_dump_capability",
        24,
        30,
        20,
        v43);
      if ( v21[2] )
      {
        v24 = v21 + 2;
        v25 = 0;
        do
        {
          v26 = v24[1];
          ++v24;
          v27 = snprintf(v42, 0x800u, "\tchain id = %d\n", v26);
          ++v25;
          V_LOCK(v27);
          v28 = logfmt_raw((int)v43, 0x1000u);
          V_UNLOCK(v28);
          zlog(
            *v4,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
            194,
            "platform_dump_capability",
            24,
            33,
            20,
            v43);
        }
        while ( v21[2] > v25 );
      }
      v21 += 18;
      ++format;
    }
    while ( dword_2E9A88 > (unsigned int)format );
  }
  v29 = memcpy(v42, "==========================capability end============================\n", 0x46u);
  V_LOCK(v29);
  v30 = logfmt_raw((int)v43, 0x1000u);
  V_UNLOCK(v30);
  v31 = zlog(
          *v4,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_common.c",
          194,
          "platform_dump_capability",
          24,
          36,
          20,
          v43);
  platform_inited[0] = 1;
  v32 = fan_init(v31);
  uart_init(v32);
  return 0;
}
