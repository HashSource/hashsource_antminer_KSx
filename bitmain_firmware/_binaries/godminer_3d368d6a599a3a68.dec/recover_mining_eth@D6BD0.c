int __fastcall recover_mining_eth(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, _DWORD *); // r2
  unsigned int eeprom_phy_seq_level; // r0
  int v6; // r0
  _BYTE v7[32]; // [sp+28h] [bp-1020h] BYREF
  _DWORD v8[2]; // [sp+48h] [bp-1000h] BYREF
  __int64 v9; // [sp+50h] [bp-FF8h]

  V_LOCK(a1);
  v2 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
    192,
    "recover_mining_eth",
    18,
    1683,
    60,
    v8);
  v3 = *(void (__fastcall **)(int, _DWORD *))(a1 + 264);
  v8[1] = 0;
  v8[0] = 272381185;
  v9 = 1310721;
  v3(a1, v8);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  disable_mac(a1);
  release_all_phy(a1);
  reset_all_phy(a1);
  eeprom_phy_seq_level = api_get_eeprom_phy_seq_level(*(_DWORD *)(a1 + 244));
  if ( eeprom_phy_seq_level > 0xA )
  {
    V_LOCK(eeprom_phy_seq_level);
    V_INT((int)v7, "chain");
    v6 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
      192,
      "recover_mining_eth",
      18,
      1698,
      60,
      v8);
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
    set_dag_node_num(a1, *(__int64 *)*(_DWORD *)(a1 + 996) >> 6);
    set_ticketmask(a1, 32);
    open_cores(a1);
    set_work_num(a1, 64);
    set_work_timeout(a1, 1);
    set_nonce_num(a1, 0);
    *(_BYTE *)(a1 + 253) = 1;
    *(_BYTE *)(a1 + 254) = 1;
    return 0;
  }
}
