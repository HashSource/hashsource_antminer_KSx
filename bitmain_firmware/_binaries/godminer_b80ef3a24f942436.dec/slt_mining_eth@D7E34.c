int __fastcall slt_mining_eth(int a1)
{
  int v2; // r0
  int v3; // r3
  int v4; // r0
  void (__fastcall *v5)(int, _DWORD *); // r3
  int v6; // r3
  _DWORD v8[2]; // [sp+10h] [bp-1004h] BYREF
  __int64 v9; // [sp+18h] [bp-FFCh]

  V_LOCK(a1);
  v2 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "slt_mining_eth",
    14,
    1756,
    60,
    v8);
  v3 = *(_DWORD *)a1;
  v8[1] = 0;
  v4 = v3;
  v8[0] = 272381185;
  v9 = 0;
  v5 = *(void (__fastcall **)(int, _DWORD *))(v3 + 264);
  WORD1(v9) = 20;
  LOBYTE(v9) = 1;
  v5(v4, v8);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  disable_mac(*(_DWORD *)a1);
  release_all_phy(*(_DWORD *)a1);
  reset_all_phy(*(_DWORD *)a1);
  setup_serdes_phy(*(_DWORD *)a1, 11);
  enable_work(*(_DWORD *)a1, 0x80000000);
  set_work_mode(*(_DWORD *)a1, 0);
  setup_count_sync(*(_DWORD *)a1, 255);
  set_logic_core_id(*(_DWORD *)a1);
  set_logic_chip_id(*(_DWORD *)a1);
  setup_mac(*(_DWORD *)a1);
  set_dag_node_num(*(_DWORD *)a1, *(__int64 *)(a1 + 8) >> 6);
  set_ticketmask(*(_DWORD *)a1, 32);
  open_cores(*(_DWORD *)a1);
  set_work_num(*(_DWORD *)a1, 64);
  set_work_timeout(*(_DWORD *)a1, 1);
  set_nonce_num(*(_DWORD *)a1, 0);
  v6 = *(_DWORD *)a1;
  *(_BYTE *)(v6 + 253) = 1;
  *(_BYTE *)(v6 + 254) = 1;
  return 0;
}
