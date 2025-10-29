int __fastcall godminer_chip_status_monitor(int a1)
{
  int flag_from_monitor; // r4
  __int64 v3; // r0
  __int64 v4; // r10
  int v5; // r5
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  _BYTE v14[32]; // [sp+28h] [bp-1044h] BYREF
  int v15; // [sp+48h] [bp-1024h] BYREF
  _BYTE v16[4100]; // [sp+68h] [bp-1004h] BYREF

  flag_from_monitor = get_flag_from_monitor();
  LODWORD(v3) = get_current_pool(flag_from_monitor);
  v4 = *(_QWORD *)(flag_from_monitor + 48);
  v5 = v3;
  if ( (v4 & 2) != 0 )
  {
    if ( !pool_tget(v3, v3 + 1904) )
    {
      V_LOCK(0);
      V_INT((int)v14, "chain");
      v9 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v9);
      v10 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/god-miner.c",
              155,
              "godminer_chip_status_monitor",
              28,
              707,
              20,
              v16);
      if ( *(int *)(a1 + 232) > 15 )
      {
        V_LOCK(v10);
        v12 = logfmt_raw((int)v16, 0x1000u);
        V_UNLOCK(v12);
        v10 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/miner_util/miner_monitor/miner_6060info.h",
                185,
                "set_miner_6060info_some_chip_not_working_err",
                44,
                59,
                40,
                v16);
      }
      V_LOCK(v10);
      v11 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "godminer_chip_status_monitor",
        28,
        709,
        100,
        v16);
    }
    v3 = *(_QWORD *)(flag_from_monitor + 56);
    v4 = *(_QWORD *)(flag_from_monitor + 48);
    *(_QWORD *)(flag_from_monitor + 56) = v3 | 2;
  }
  if ( (v4 & 4) != 0 )
  {
    if ( !pool_tget(v5, v5 + 1904) )
    {
      V_LOCK(0);
      V_INT((int)&v15, "chain");
      v6 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v6);
      v7 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/god-miner.c",
             155,
             "godminer_chip_status_monitor",
             28,
             723,
             20,
             v16);
      V_LOCK(v7);
      v8 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "godminer_chip_status_monitor",
        28,
        724,
        100,
        v16);
    }
    v3 = *(_QWORD *)(flag_from_monitor + 56) | 4LL;
    *(_QWORD *)(flag_from_monitor + 56) = v3;
  }
  return v3;
}
