int __fastcall prepare_for_pcba_test_eth(int a1, int *a2)
{
  int v4; // r0
  int v5; // r8
  void (__fastcall *v6)(int, _DWORD *); // r3
  _DWORD v8[2]; // [sp+10h] [bp-1000h] BYREF
  __int64 v9; // [sp+18h] [bp-FF8h]

  V_LOCK(a1);
  v4 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
    192,
    "prepare_for_pcba_test_eth",
    25,
    1986,
    60,
    v8);
  v5 = *a2;
  if ( (unsigned int)*a2 > 0xA )
  {
    printf("%s: error! wrong PHY sequence parameter\n", "prepare_for_pcba_test_eth");
    return 15;
  }
  else
  {
    printf("%s: start to do prepare for pcba test\n", "prepare_for_pcba_test_eth");
    membist1(a1);
    stop_mining_eth(a1);
    v8[1] = 0;
    v8[0] = 272381185;
    v9 = 0;
    v6 = *(void (__fastcall **)(int, _DWORD *))(a1 + 264);
    WORD1(v9) = 20;
    LOBYTE(v9) = 1;
    v6(a1, v8);
    usleep((__useconds_t)&elf_hash_chain[4398]);
    disable_mac(a1);
    release_all_phy(a1);
    reset_all_phy(a1);
    setup_serdes_phy(a1, v5);
    enable_work(a1, 0x80000000);
    set_work_mode(a1, 0);
    setup_count_sync(a1, 255);
    set_logic_core_id(a1);
    set_logic_chip_id(a1);
    setup_mac(a1);
    set_dag_node_num(a1, 117440506);
    set_ticketmask(a1, 32);
    open_cores(a1);
    set_work_num(a1, 64);
    set_work_timeout(a1, 1);
    set_nonce_num(a1, 127);
    *(_BYTE *)(a1 + 253) = 1;
    *(_BYTE *)(a1 + 254) = 1;
    printf("%s: do prepare finished\n", "prepare_for_pcba_test_eth");
    return 0;
  }
}
