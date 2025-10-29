int __fastcall godminer_chip_status_monitor(int a1)
{
  int flag_from_monitor; // r4
  int current_pool; // r5
  int miner_working_status_p; // r7
  __int64 v5; // r0
  int v6; // r0
  int v8; // [sp+28h] [bp-1024h] BYREF
  _BYTE v9[4100]; // [sp+48h] [bp-1004h] BYREF

  flag_from_monitor = get_flag_from_monitor();
  current_pool = get_current_pool(flag_from_monitor);
  miner_working_status_p = get_miner_working_status_p();
  if ( (*(_DWORD *)(flag_from_monitor + 48) & 2) != 0 )
  {
    if ( !pool_tget(current_pool, current_pool + 1904) )
    {
      set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 248), 1);
      *(_BYTE *)(miner_working_status_p + 9) = 1;
    }
    *(_QWORD *)(flag_from_monitor + 56) |= 2uLL;
  }
  else
  {
    set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 248), 0);
  }
  if ( (*(_DWORD *)(flag_from_monitor + 48) & 4) != 0 )
  {
    if ( !pool_tget(current_pool, current_pool + 1904) )
    {
      V_LOCK(0);
      V_INT((int)&v8, "chain");
      v6 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "godminer_chip_status_monitor",
        28,
        731,
        20,
        v9);
      set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 248), 1);
      *(_BYTE *)(miner_working_status_p + 10) = 1;
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
