int __fastcall sub_85DF8(int a1)
{
  int result; // r0
  char v2[4096]; // [sp+10h] [bp-1000h] BYREF

  switch ( a1 )
  {
    case 2:
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "SIGINT received, exiting");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "signal_handler",
        14,
        565,
        80,
        v2);
      goto LABEL_3;
    case 3:
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "SIGQUIT received, exiting");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "signal_handler",
        14,
        570,
        80,
        v2);
      goto LABEL_3;
    case 10:
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "SIGUSR1 received, reload log");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "signal_handler",
        14,
        585,
        80,
        v2);
      return log_reload();
    case 11:
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "SIGSEGV received, exiting");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "signal_handler",
        14,
        580,
        80,
        v2);
      goto LABEL_3;
    case 15:
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "SIGTERM received, exiting");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "signal_handler",
        14,
        575,
        80,
        v2);
LABEL_3:
      print_summary();
      exit(0);
      return result;
    default:
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "catch signal %d, it should not be here");
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/god-miner.c",
               155,
               "signal_handler",
               14,
               589,
               80,
               v2);
  }
}
