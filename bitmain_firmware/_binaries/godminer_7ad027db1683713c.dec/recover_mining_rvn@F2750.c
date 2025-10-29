int __fastcall recover_mining_rvn(int a1)
{
  void (__fastcall *v2)(int, int *); // r2
  unsigned int eeprom_phy_seq_level; // r0
  _DWORD v5[7]; // [sp+28h] [bp-1024h] BYREF
  int v6; // [sp+44h] [bp-1008h]
  int v7; // [sp+48h] [bp-1004h] BYREF
  __int64 v8[512]; // [sp+4Ch] [bp-1000h]

  V_LOCK();
  logfmt_raw((char *)&v7, 0x1000u, 0, "%s ...", "recover_mining_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "recover_mining_rvn",
    18,
    1934,
    60,
    &v7);
  get_chip_dag_packet_num_rvn(a1);
  v2 = *(void (__fastcall **)(int, int *))(a1 + 248);
  LODWORD(v8[0]) = 0;
  v7 = 272381185;
  *(__int64 *)((char *)v8 + 4) = 1310721;
  v2(a1, &v7);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  disable_mac_rvn(a1);
  release_all_phy_rvn(a1);
  reset_all_phy_rvn(a1);
  eeprom_phy_seq_level = api_get_eeprom_phy_seq_level(*(_DWORD *)(a1 + 232));
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
      "rvn phy seq level = P%d is invalid!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      187,
      "recover_mining_rvn",
      18,
      1949,
      60,
      &v7);
    return 31;
  }
  else
  {
    setup_serdes_phy_rvn(a1, eeprom_phy_seq_level);
    enable_work_rvn(a1, 0x80000000);
    set_work_mode_rvn(a1, 2);
    setup_count_sync_rvn(a1, 255);
    set_logic_core_id_rvn(a1);
    set_logic_chip_id_rvn(a1);
    setup_mac_rvn(a1);
    set_ticketmask_rvn(a1, 9);
    open_cores_rvn(a1);
    set_work_num_rvn(a1, 64);
    set_work_timeout_rvn(a1, 1);
    set_nonce_num_rvn(a1, 0);
    *(_BYTE *)(a1 + 237) = 1;
    *(_BYTE *)(a1 + 238) = 1;
    return 0;
  }
}
