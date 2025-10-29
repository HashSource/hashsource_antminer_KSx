int get_hash_on_plug()
{
  int v0; // r4
  int v1; // r8
  int v2; // r5
  int v3; // r0
  int v4; // r7
  int v5; // r0
  int v6; // r0
  int v8; // r0
  int v9; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _BYTE v11[4100]; // [sp+818h] [bp-1004h] BYREF

  v0 = 0;
  v9 = 0;
  if ( platform_inited[0] )
  {
    v1 = hal_chain_max_num();
    if ( v1 <= 0 )
      return 0;
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v9 = 0;
        v3 = hal_chain_plug_addr(v0);
        v4 = v3;
        if ( v3 < 0 )
          break;
        gpio_export(v3);
        gpio_direction(v4, 0);
        gpio_read(v4, &v9);
        v2 |= v9 << v0++;
        if ( v1 == v0 )
          return v2;
      }
      v5 = snprintf(s, 0x800u, "fail to get slot for chain %d", v0++);
      V_LOCK(v5);
      v6 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_common.c",
        199,
        "get_hash_on_plug",
        16,
        249,
        80,
        v11);
    }
    while ( v1 != v0 );
    return v2;
  }
  else
  {
    strcpy(s, "platform not inited");
    V_LOCK(*(_DWORD *)"platform not inited");
    v8 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_common.c",
      199,
      "get_hash_on_plug",
      16,
      238,
      100,
      v11);
    return 0;
  }
}
