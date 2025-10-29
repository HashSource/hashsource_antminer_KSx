int __fastcall godminer_fan_monitor(int a1)
{
  __int64 v1; // r6
  int v2; // r5
  __int64 v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _QWORD v9[4]; // [sp+28h] [bp-1044h] BYREF
  _QWORD v10[4]; // [sp+48h] [bp-1024h] BYREF
  _BYTE v11[4100]; // [sp+68h] [bp-1004h] BYREF

  ++dword_2F2BA0[*(_DWORD *)(a1 + 240)];
  LODWORD(v3) = get_flag_from_monitor();
  v1 = *(_QWORD *)(v3 + 32);
  v2 = v3;
  LODWORD(v3) = v1 & 2;
  if ( (v1 & 2) != 0 )
  {
    V_LOCK(v3);
    V_STR(v9, "error", "fan lost");
    v5 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v5);
    v6 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/god-miner.c",
           155,
           "godminer_fan_monitor",
           20,
           543,
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
      544,
      100,
      v11);
    v3 = *(_QWORD *)(v2 + 40);
    v1 = *(_QWORD *)(v2 + 32);
    *(_QWORD *)(v2 + 40) = v3 | 2;
  }
  if ( (v1 & 1) != 0 )
  {
    V_LOCK(v3);
    V_STR(v10, "error", "fan slow");
    v4 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/god-miner.c",
      155,
      "godminer_fan_monitor",
      20,
      552,
      20,
      v11);
    v3 = *(_QWORD *)(v2 + 40) | 1LL;
    *(_QWORD *)(v2 + 40) = v3;
  }
  return v3;
}
