int __fastcall print_chip_temperature_base(int a1, int a2)
{
  int v2; // r3
  int v3; // r5
  _DWORD *v4; // r7
  int v6; // r6
  int v7; // r4
  int v8; // r3
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  _BYTE v16[32]; // [sp+28h] [bp-2084h] BYREF
  _BYTE v17[32]; // [sp+48h] [bp-2064h] BYREF
  _BYTE v18[32]; // [sp+68h] [bp-2044h] BYREF
  _BYTE v19[32]; // [sp+88h] [bp-2024h] BYREF
  char v20[4056]; // [sp+A8h] [bp-2004h] BYREF
  _BYTE v21[4100]; // [sp+10A8h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 332);
  v3 = 0;
  v4 = (_DWORD *)a1;
  v20[0] = 0;
  if ( v2 > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      ++v6;
      v8 = *(_DWORD *)(v4[132] + v3);
      v3 += 44;
      a1 = snprintf(&v20[v7], 4096 - v7, "%d ", v8);
      v7 += a1;
    }
    while ( v4[83] > v6 );
  }
  if ( !a2 )
  {
    V_LOCK(a1);
    V_INT((int)v16, "chain");
    v13 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_base.c",
      171,
      "print_chip_temperature_base",
      27,
      405,
      60,
      v21);
    return 0;
  }
  if ( a2 == 1 )
  {
    V_LOCK(a1);
    V_INT((int)v17, "chain");
    v15 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_temp_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_base.c",
      171,
      "print_chip_temperature_base",
      27,
      409,
      40,
      v21);
    return 0;
  }
  if ( a2 != 2 )
  {
    if ( a2 != 3 )
    {
      V_LOCK(a1);
      v9 = logfmt_raw((int)v21, 0x1000u);
      V_UNLOCK(v9);
      v10 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/backend_base.c",
              171,
              "print_chip_temperature_base",
              27,
              420,
              80,
              v21);
      V_LOCK(v10);
      V_INT((int)v19, "chain");
      v11 = logfmt_raw((int)v21, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_base.c",
        171,
        "print_chip_temperature_base",
        27,
        421,
        60,
        v21);
      return 0;
    }
    V_LOCK(a1);
    V_INT((int)v18, "chain");
    v14 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_base.c",
      171,
      "print_chip_temperature_base",
      27,
      417,
      40,
      v21);
    return 0;
  }
  printf("chain %d, chip temp list: %s", v4[62], v20);
  return 0;
}
