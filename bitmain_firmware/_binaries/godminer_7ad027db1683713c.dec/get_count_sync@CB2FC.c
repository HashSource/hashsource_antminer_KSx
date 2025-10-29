int __fastcall get_count_sync(int a1, int a2)
{
  char *v4; // r11
  int v5; // r0
  char *v6; // r8
  char *v7; // r4
  int v8; // lr
  int v9; // r12
  int v10; // r1
  int v11; // r0
  char v13[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "%s...", "get_count_sync");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "get_count_sync",
    14,
    203,
    20,
    v13);
  v4 = (char *)malloc(0x600u);
  v5 = sub_C911C(a1, a2, 202, v4);
  if ( v5 > 0 )
  {
    v6 = &v4[12 * v5];
    v7 = v4;
    do
    {
      V_LOCK();
      v8 = *(_DWORD *)v7;
      v9 = (unsigned __int8)v7[4];
      v10 = *((unsigned __int16 *)v7 + 3);
      v11 = (unsigned __int8)v7[8];
      v7 += 12;
      logfmt_raw(v13, 0x1000u, 0, "chip %02x core %02x reg %02x cnt %08x", v9, v11, v10, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
        187,
        "get_count_sync",
        14,
        209,
        20,
        v13);
    }
    while ( v7 != v6 );
  }
  free(v4);
  return 0;
}
