void __fastcall __noreturn heartbeat_on_device(int a1)
{
  int v1; // r0
  char *all_created_runtime; // r0
  char *v3; // r5
  int i; // r4
  int v5; // r0
  int v6; // t1
  int v7; // r0
  int v8; // [sp+34h] [bp-1028h] BYREF
  __int64 v9[4]; // [sp+38h] [bp-1024h] BYREF
  _BYTE v10[4100]; // [sp+58h] [bp-1004h] BYREF

  v8 = 0;
  V_LOCK(a1);
  v1 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/check_heartbeat.c",
    172,
    "heartbeat_on_device",
    19,
    54,
    60,
    v10);
  while ( 1 )
  {
    do
      all_created_runtime = (char *)get_all_created_runtime(&v8);
    while ( v8 <= 0 );
    v3 = all_created_runtime - 4;
    for ( i = 0; i < v8; ++i )
    {
      v5 = dev_ctrl(all_created_runtime);
      v6 = *((_DWORD *)v3 + 1);
      v3 += 4;
      if ( !(*(int (__fastcall **)(_DWORD))(v5 + 96))(*(_DWORD *)(v6 + 240)) )
      {
        V_LOCK(0);
        V_STR(v9, "error", "pic lost");
        v7 = logfmt_raw((int)v10, 0x1000u);
        V_UNLOCK(v7);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/check_heartbeat.c",
          172,
          "heartbeat_on_device",
          19,
          62,
          100,
          v10);
      }
      all_created_runtime = (char *)sleep(5u);
    }
  }
}
