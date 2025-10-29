int __fastcall godminer_chip_status_monitor(int a1)
{
  int flag_from_monitor; // r4
  pthread_mutex_t *current_pool; // r0
  pthread_mutex_t *v4; // r6
  __int64 v5; // r0
  int v6; // r0
  int v8; // [sp+28h] [bp-1024h] BYREF
  _BYTE v9[4100]; // [sp+48h] [bp-1004h] BYREF

  flag_from_monitor = get_flag_from_monitor();
  current_pool = (pthread_mutex_t *)get_current_pool();
  v4 = current_pool;
  if ( (*(_DWORD *)(flag_from_monitor + 48) & 2) != 0 )
  {
    if ( !pool_tget(current_pool, (unsigned __int8 *)&current_pool[79].__size[8]) )
      set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 248), 1);
    *(_QWORD *)(flag_from_monitor + 56) |= 2uLL;
  }
  else
  {
    set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 248), 0);
  }
  if ( (*(_DWORD *)(flag_from_monitor + 48) & 4) != 0 )
  {
    if ( !pool_tget(v4, (unsigned __int8 *)&v4[79].__size[8]) )
    {
      V_LOCK(0);
      V_INT((int)&v8, "chain", *(int *)(a1 + 248));
      v6 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "godminer_chip_status_monitor",
        28,
        515,
        20,
        v9);
      set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 248), 1);
    }
    v5 = *(_QWORD *)(flag_from_monitor + 56) | 4LL;
    *(_QWORD *)(flag_from_monitor + 56) = v5;
  }
  else
  {
    LODWORD(v5) = set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 248), 0);
  }
  return v5;
}
