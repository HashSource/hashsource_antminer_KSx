int __fastcall sub_87390(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int result; // r0
  int v7; // r0
  int v8; // r0
  _BYTE v9[4096]; // [sp+10h] [bp-1000h] BYREF

  v1 = a1 - 2;
  switch ( v1 )
  {
    case 0:
      V_LOCK(v1);
      v3 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "signal_handler",
        14,
        351,
        80,
        v9);
      goto LABEL_3;
    case 1:
      V_LOCK(v1);
      v4 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "signal_handler",
        14,
        356,
        80,
        v9);
      goto LABEL_3;
    case 8:
      V_LOCK(v1);
      v5 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "signal_handler",
        14,
        371,
        80,
        v9);
      return log_reload();
    case 9:
      V_LOCK(v1);
      v7 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v7);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "signal_handler",
        14,
        366,
        80,
        v9);
      goto LABEL_3;
    case 13:
      V_LOCK(v1);
      v2 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v2);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "signal_handler",
        14,
        361,
        80,
        v9);
LABEL_3:
      print_summary();
      exit(0);
      return result;
    default:
      V_LOCK(v1);
      v8 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v8);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/god-miner.c",
               155,
               "signal_handler",
               14,
               375,
               80,
               v9);
  }
}
