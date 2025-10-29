int __fastcall applog_printer(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r4
  int v5; // r0
  int v7; // r0
  char v8[4028]; // [sp+14h] [bp+0h] BYREF
  _BYTE v9[4100]; // [sp+FD0h] [bp+FBCh] BYREF

  v2 = 0;
  do
  {
    while ( 1 )
    {
      v3 = snprintf(v8, 0xFBCu, (const char *)(a1 + v2));
      v4 = v3;
      if ( v3 <= 4027 )
        break;
      v2 += 4027;
      V_LOCK(v3);
      v7 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v7);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/util.c",
        155,
        "applog_printer",
        14,
        34,
        40,
        v9);
    }
    V_LOCK(v3);
    v5 = logfmt_raw((int)v9, 0x1000u);
    v2 += v4;
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/util.c",
      155,
      "applog_printer",
      14,
      34,
      40,
      v9);
  }
  while ( v4 );
  return 0;
}
