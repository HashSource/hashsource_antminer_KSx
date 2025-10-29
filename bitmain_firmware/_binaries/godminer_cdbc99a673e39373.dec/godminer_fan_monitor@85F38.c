int __fastcall godminer_fan_monitor(int a1)
{
  __int64 v1; // r6
  int v2; // r5
  __int64 v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _BYTE v9[32]; // [sp+28h] [bp-1044h] BYREF
  int v10; // [sp+48h] [bp-1024h] BYREF
  _BYTE v11[4100]; // [sp+68h] [bp-1004h] BYREF

  ++*((_DWORD *)&max_timeout_value[10] + *(_DWORD *)(a1 + 228));
  LODWORD(v3) = get_flag_from_monitor();
  v1 = *(_QWORD *)(v3 + 32);
  v2 = v3;
  LODWORD(v3) = v1 & 2;
  if ( (v1 & 2) != 0 )
  {
    V_LOCK(v3);
    V_STR((int)v9, "error");
    v5 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v5);
    v6 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/god-miner.c",
           155,
           "godminer_fan_monitor",
           20,
           747,
           20,
           v11);
    V_LOCK(v6);
    v7 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/god-miner.c",
      155,
      "godminer_fan_monitor",
      20,
      748,
      100,
      v11);
    v3 = *(_QWORD *)(v2 + 40);
    v1 = *(_QWORD *)(v2 + 32);
    *(_QWORD *)(v2 + 40) = v3 | 2;
  }
  if ( (v1 & 1) != 0 )
  {
    V_LOCK(v3);
    V_STR((int)&v10, "error");
    v4 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/god-miner.c",
      155,
      "godminer_fan_monitor",
      20,
      756,
      20,
      v11);
    v3 = *(_QWORD *)(v2 + 40) | 1LL;
    *(_QWORD *)(v2 + 40) = v3;
  }
  return v3;
}
