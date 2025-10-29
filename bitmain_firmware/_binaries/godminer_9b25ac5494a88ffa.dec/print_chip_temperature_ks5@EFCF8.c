int __fastcall print_chip_temperature_ks5(int a1, int a2)
{
  int v2; // r3
  int v3; // r5
  _DWORD *v4; // r7
  int v6; // r6
  int v7; // r4
  int v8; // r3
  int v10; // r0
  int v11; // r0
  _BYTE v12[32]; // [sp+28h] [bp-2044h] BYREF
  _BYTE v13[32]; // [sp+48h] [bp-2024h] BYREF
  char v14[4056]; // [sp+68h] [bp-2004h] BYREF
  _BYTE v15[4100]; // [sp+1068h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 328);
  v3 = 0;
  v4 = (_DWORD *)a1;
  v14[0] = 0;
  if ( v2 > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      ++v6;
      v8 = *(_DWORD *)(v4[130] + v3);
      v3 += 44;
      a1 = snprintf(&v14[v7], 4096 - v7, "%d ", v8);
      v7 += a1;
    }
    while ( v4[82] > v6 );
  }
  switch ( a2 )
  {
    case 0:
      V_LOCK(a1);
      V_INT((int)v12, "chain");
      v10 = logfmt_raw((int)v15, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
        192,
        "print_chip_temperature_ks5",
        26,
        985,
        60,
        v15);
      return 0;
    case 1:
      V_LOCK(a1);
      V_INT((int)v13, "chain");
      v11 = logfmt_raw((int)v15, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_temp_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
        192,
        "print_chip_temperature_ks5",
        26,
        989,
        40,
        v15);
      return 0;
    case 2:
      printf("chain %d, chip temp list: %s", v4[61], v14);
      break;
  }
  return 0;
}
