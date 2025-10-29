int __fastcall prepare_for_pcba_test_rvn(int a1, int *a2)
{
  int v4; // r0
  int v5; // r8
  void (__fastcall *v6)(int, _DWORD *); // r3
  int v7; // r1
  _DWORD v9[2]; // [sp+10h] [bp-1000h] BYREF
  __int64 v10; // [sp+18h] [bp-FF8h]

  V_LOCK(a1);
  v4 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "prepare_for_pcba_test_rvn",
    25,
    2264,
    60,
    v9);
  v5 = *a2;
  if ( (unsigned int)*a2 > 0xA )
  {
    printf("%s: error! wrong PHY sequence parameter\n", "prepare_for_pcba_test_rvn");
    return 15;
  }
  else
  {
    printf("%s: start to do prepare for pcba test\n", "prepare_for_pcba_test_rvn");
    membist1_rvn(a1);
    stop_mining_rvn(a1);
    v9[1] = 0;
    v9[0] = 272381185;
    v10 = 0;
    v6 = *(void (__fastcall **)(int, _DWORD *))(a1 + 248);
    WORD1(v10) = 20;
    LOBYTE(v10) = 1;
    v6(a1, v9);
    usleep((__useconds_t)&elf_hash_chain[4398]);
    disable_mac_rvn(a1);
    release_all_phy_rvn(a1);
    reset_all_phy_rvn(a1);
    setup_serdes_phy_rvn(a1, v5);
    enable_work_rvn(a1, 0x80000000);
    set_work_mode_rvn(a1, 0);
    setup_count_sync_rvn(a1, 255);
    set_logic_core_id_rvn(a1);
    set_logic_chip_id_rvn(a1);
    setup_mac_rvn(a1);
    set_dag_node_num_rvn(a1, v7, 117440506);
    set_ticketmask_rvn(a1, 9);
    open_cores_rvn(a1);
    set_work_num_rvn(a1, 64);
    set_work_timeout_rvn(a1, 1);
    set_nonce_num_rvn(a1, 127);
    *(_BYTE *)(a1 + 237) = 1;
    *(_BYTE *)(a1 + 238) = 1;
    printf("%s: do prepare finished\n", "prepare_for_pcba_test_rvn");
    return 0;
  }
}
