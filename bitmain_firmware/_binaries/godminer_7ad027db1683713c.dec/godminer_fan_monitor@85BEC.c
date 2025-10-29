int __fastcall godminer_fan_monitor(int a1)
{
  __int64 v1; // r6
  int v2; // r5
  __int64 v3; // r0
  __int64 v5; // [sp+28h] [bp-1044h] BYREF
  int v6; // [sp+30h] [bp-103Ch]
  int v7; // [sp+34h] [bp-1038h]
  int v8; // [sp+38h] [bp-1034h]
  int v9; // [sp+3Ch] [bp-1030h]
  int v10; // [sp+40h] [bp-102Ch]
  int v11; // [sp+44h] [bp-1028h]
  __int64 v12; // [sp+48h] [bp-1024h] BYREF
  int v13; // [sp+50h] [bp-101Ch]
  int v14; // [sp+54h] [bp-1018h]
  int v15; // [sp+58h] [bp-1014h]
  int v16; // [sp+5Ch] [bp-1010h]
  int v17; // [sp+60h] [bp-100Ch]
  int v18; // [sp+64h] [bp-1008h]
  char v19[4100]; // [sp+68h] [bp-1004h] BYREF

  ++*((_DWORD *)&max_timeout_value[10] + *(_DWORD *)(a1 + 228));
  LODWORD(v3) = get_flag_from_monitor(a1);
  v1 = *(_QWORD *)(v3 + 32);
  v2 = v3;
  LODWORD(v3) = v1 & 2;
  if ( (v1 & 2) != 0 )
  {
    V_LOCK();
    V_STR(&v5, "error", "fan lost");
    logfmt_raw(v19, 0x1000u, 0, v11, v5, v6, v7, v8, v9, v10, v11, "fan lost happend");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/god-miner.c",
      155,
      "godminer_fan_monitor",
      20,
      747,
      20,
      v19);
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, "Sweep error string = %s.", "F:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/god-miner.c",
      155,
      "godminer_fan_monitor",
      20,
      748,
      100,
      v19);
    v3 = *(_QWORD *)(v2 + 40);
    v1 = *(_QWORD *)(v2 + 32);
    *(_QWORD *)(v2 + 40) = v3 | 2;
  }
  if ( (v1 & 1) != 0 )
  {
    V_LOCK();
    V_STR(&v12, "error", "fan slow");
    logfmt_raw(v19, 0x1000u, 0, v18, v12, v13, v14, v15, v16, v17, v18, "fan slow happend");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/god-miner.c",
      155,
      "godminer_fan_monitor",
      20,
      756,
      20,
      v19);
    v3 = *(_QWORD *)(v2 + 40) | 1LL;
    *(_QWORD *)(v2 + 40) = v3;
  }
  return v3;
}
