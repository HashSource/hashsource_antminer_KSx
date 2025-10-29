int __fastcall set_core_reset(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, int *); // r3
  void (__fastcall *v4)(int, int *); // r3
  int v6; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+48h] [bp-1000h] BYREF
  int v8; // [sp+4Ch] [bp-FFCh]
  __int64 v9; // [sp+50h] [bp-FF8h]

  V_LOCK(a1);
  V_INT((int)&v6, "chain");
  v2 = logfmt_raw((int)&v7, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
    192,
    "set_core_reset",
    14,
    148,
    60,
    &v7);
  sub_D11D4(a1, 240, 0x80000000);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  v8 = 0;
  v9 = 0x200000;
  v7 = 13;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 264);
  LOBYTE(v9) = 1;
  v3(a1, &v7);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  v8 = 0;
  v9 = 1;
  v7 = 15;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 264);
  WORD1(v9) = 32;
  v4(a1, &v7);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  return 0;
}
