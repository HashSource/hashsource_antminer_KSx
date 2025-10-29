int __fastcall recover_mining_eth(int a1)
{
  void (__fastcall *v2)(int, int *); // r2
  unsigned int eeprom_phy_seq_level; // r0
  _DWORD v5[7]; // [sp+28h] [bp-1020h] BYREF
  int v6; // [sp+44h] [bp-1004h]
  int v7; // [sp+48h] [bp-1000h] BYREF
  __int64 v8[511]; // [sp+4Ch] [bp-FFCh]

  V_LOCK();
  logfmt_raw((char *)&v7, 0x1000u, 0, "%s enter, membist_done: %u", "recover_mining_eth", 0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "recover_mining_eth",
    18,
    1661,
    60,
    &v7);
  v2 = *(void (__fastcall **)(int, int *))(a1 + 248);
  LODWORD(v8[0]) = 0;
  v7 = 272381185;
  *(__int64 *)((char *)v8 + 4) = 1310721;
  v2(a1, &v7);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  disable_mac(a1);
  release_all_phy(a1);
  reset_all_phy(a1);
  eeprom_phy_seq_level = api_get_eeprom_phy_seq_level(*(_DWORD *)(a1 + 228));
  if ( eeprom_phy_seq_level > 0xA )
  {
    V_LOCK();
    V_INT((int)v5, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      (char *)&v7,
      0x1000u,
      0,
      v6,
      v5[0],
      v5[1],
      v5[2],
      v5[3],
      v5[4],
      v5[5],
      v5[6],
      v6,
      "eth phy seq level = P%d is invalid!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      187,
      "recover_mining_eth",
      18,
      1676,
      60,
      &v7);
    return 31;
  }
  else
  {
    setup_serdes_phy(a1, eeprom_phy_seq_level);
    enable_work(a1, 0x80000000);
    set_work_mode(a1, 0);
    setup_count_sync(a1, 255);
    set_logic_core_id(a1);
    set_logic_chip_id(a1);
    setup_mac(a1);
    set_dag_node_num(a1, *(__int64 *)*(_DWORD *)(a1 + 972) >> 6);
    set_ticketmask(a1, 32);
    open_cores(a1);
    set_work_num(a1, 64);
    set_work_timeout(a1, 1);
    set_nonce_num(a1, 0);
    *(_BYTE *)(a1 + 237) = 1;
    *(_BYTE *)(a1 + 238) = 1;
    return 0;
  }
}
