int __fastcall sub_87E34(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int result; // r0
  int v8; // r0
  int v9; // r0
  _BYTE v10[4096]; // [sp+10h] [bp-1000h] BYREF

  v1 = a1 - 2;
  switch ( v1 )
  {
    case 0:
      V_LOCK(v1);
      v3 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "signal_handler",
        14,
        567,
        80,
        v10);
      goto LABEL_3;
    case 1:
      V_LOCK(v1);
      v4 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "signal_handler",
        14,
        572,
        80,
        v10);
      goto LABEL_3;
    case 8:
      V_LOCK(v1);
      v5 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v5);
      v6 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/god-miner.c",
             160,
             "signal_handler",
             14,
             587,
             80,
             v10);
      return log_reload(v6);
    case 9:
      V_LOCK(v1);
      v8 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "signal_handler",
        14,
        582,
        80,
        v10);
      goto LABEL_3;
    case 13:
      V_LOCK(v1);
      v2 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v2);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "signal_handler",
        14,
        577,
        80,
        v10);
LABEL_3:
      print_summary();
      exit(0);
      return result;
    default:
      V_LOCK(v1);
      v9 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v9);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/god-miner.c",
               160,
               "signal_handler",
               14,
               591,
               80,
               v10);
  }
}
