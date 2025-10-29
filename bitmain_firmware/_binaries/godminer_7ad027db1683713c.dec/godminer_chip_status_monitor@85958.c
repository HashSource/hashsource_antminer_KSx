int __fastcall godminer_chip_status_monitor(int a1)
{
  char *flag_from_monitor; // r4
  __int64 v3; // r0
  __int64 v4; // r10
  pthread_mutex_t *v5; // r5
  _DWORD v7[7]; // [sp+28h] [bp-1044h] BYREF
  int v8; // [sp+44h] [bp-1028h]
  _DWORD v9[7]; // [sp+48h] [bp-1024h] BYREF
  int v10; // [sp+64h] [bp-1008h]
  char v11[4100]; // [sp+68h] [bp-1004h] BYREF

  flag_from_monitor = get_flag_from_monitor(a1);
  LODWORD(v3) = get_current_pool();
  v4 = *((_QWORD *)flag_from_monitor + 6);
  v5 = (pthread_mutex_t *)v3;
  if ( (v4 & 2) != 0 )
  {
    if ( !pool_tget((pthread_mutex_t *)v3, (unsigned __int8 *)(v3 + 1904)) )
    {
      V_LOCK();
      V_INT((int)v7, "chain", *(int *)(a1 + 232));
      logfmt_raw(v11, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "some chip not working");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "godminer_chip_status_monitor",
        28,
        707,
        20,
        v11);
      set_miner_6060info_some_chip_not_working_err(*(_DWORD *)(a1 + 232), 1);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "Sweep error string = J%d:1.", *(_DWORD *)(a1 + 232));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "godminer_chip_status_monitor",
        28,
        709,
        100,
        v11);
    }
    v3 = *((_QWORD *)flag_from_monitor + 7);
    v4 = *((_QWORD *)flag_from_monitor + 6);
    *((_QWORD *)flag_from_monitor + 7) = v3 | 2;
  }
  if ( (v4 & 4) != 0 )
  {
    if ( !pool_tget(v5, (unsigned __int8 *)&v5[79].__size[8]) )
    {
      V_LOCK();
      V_INT((int)v9, "chain", *(int *)(a1 + 232));
      logfmt_raw(v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, "some chip working slow");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "godminer_chip_status_monitor",
        28,
        723,
        20,
        v11);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "Sweep error string = J%d:1.", *(_DWORD *)(a1 + 232));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "godminer_chip_status_monitor",
        28,
        724,
        100,
        v11);
    }
    v3 = *((_QWORD *)flag_from_monitor + 7) | 4LL;
    *((_QWORD *)flag_from_monitor + 7) = v3;
  }
  return v3;
}
