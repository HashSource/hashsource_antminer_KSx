void __noreturn heartbeat_on_device()
{
  char *all_created_runtime; // r0
  char *v1; // r5
  int i; // r4
  int v3; // r0
  int v4; // t1
  int v5; // [sp+34h] [bp-1028h] BYREF
  __int64 v6; // [sp+38h] [bp-1024h] BYREF
  int v7; // [sp+40h] [bp-101Ch]
  int v8; // [sp+44h] [bp-1018h]
  int v9; // [sp+48h] [bp-1014h]
  int v10; // [sp+4Ch] [bp-1010h]
  int v11; // [sp+50h] [bp-100Ch]
  int v12; // [sp+54h] [bp-1008h]
  char v13[4100]; // [sp+58h] [bp-1004h] BYREF

  v5 = 0;
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "heartbeat_on_device");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/check_heartbeat.c",
    172,
    "heartbeat_on_device",
    19,
    54,
    60,
    v13);
  while ( 1 )
  {
    do
      all_created_runtime = (char *)get_all_created_runtime(&v5);
    while ( v5 <= 0 );
    v1 = all_created_runtime - 4;
    for ( i = 0; i < v5; ++i )
    {
      v3 = dev_ctrl(all_created_runtime);
      v4 = *((_DWORD *)v1 + 1);
      v1 += 4;
      if ( !(*(int (__fastcall **)(_DWORD))(v3 + 80))(*(_DWORD *)(v4 + 228)) )
      {
        V_LOCK();
        V_STR(&v6, "error", "pic lost");
        logfmt_raw(v13, 0x1000u, 0, v12, v6, v7, v8, v9, v10, v11, v12, "heartbeat failed!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/check_heartbeat.c",
          172,
          "heartbeat_on_device",
          19,
          62,
          100,
          v13);
      }
      all_created_runtime = (char *)sleep(5u);
    }
  }
}
