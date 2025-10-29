int __fastcall godminer_fan_monitor(int a1)
{
  int miner_working_status_p; // r5
  __int64 v3; // r6
  int v4; // r4
  __int64 v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  _BYTE v11[32]; // [sp+28h] [bp-1040h] BYREF
  int v12; // [sp+48h] [bp-1020h] BYREF
  _BYTE v13[4096]; // [sp+68h] [bp-1000h] BYREF

  ++*((_DWORD *)&max_timeout_value[10] + *(_DWORD *)(a1 + 244));
  miner_working_status_p = get_miner_working_status_p();
  LODWORD(v5) = get_flag_from_monitor(a1);
  v3 = *(_QWORD *)(v5 + 32);
  v4 = v5;
  LODWORD(v5) = v3 & 2;
  if ( (v3 & 2) != 0 )
  {
    V_LOCK(v5);
    V_STR((int)v11, "error");
    v7 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v7);
    v8 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/god-miner.c",
           160,
           "godminer_fan_monitor",
           20,
           759,
           20,
           v13);
    V_LOCK(v8);
    v9 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/god-miner.c",
      160,
      "godminer_fan_monitor",
      20,
      760,
      100,
      v13);
    v5 = *(_QWORD *)(v4 + 40);
    v3 = *(_QWORD *)(v4 + 32);
    *(_QWORD *)(v4 + 40) = v5 | 2;
    *(_BYTE *)(miner_working_status_p + 11) = 1;
  }
  if ( (v3 & 1) != 0 )
  {
    V_LOCK(v5);
    V_STR((int)&v12, "error");
    v6 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v6);
    LODWORD(v5) = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-kas_2382/god-miner.c",
                    160,
                    "godminer_fan_monitor",
                    20,
                    768,
                    20,
                    v13);
    *(_QWORD *)(v4 + 40) |= 1uLL;
    *(_BYTE *)(miner_working_status_p + 12) = 1;
  }
  return v5;
}
