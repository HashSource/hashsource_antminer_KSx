int __fastcall setup_clk(int a1)
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
    "setup_clk",
    9,
    263,
    60,
    &v7);
  v8 = 0;
  v9 = 2097153;
  v7 = 11;
  (*(void (__fastcall **)(int, int *))(a1 + 264))(a1, &v7);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  v8 = 0;
  v9 = 1179649;
  v7 = 276305409;
  (*(void (__fastcall **)(int, int *))(a1 + 264))(a1, &v7);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  v8 = 0;
  v9 = 1310721;
  v7 = 272381185;
  (*(void (__fastcall **)(int, int *))(a1 + 264))(a1, &v7);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  sub_D21C4(a1, 240, 0x80000000);
  usleep(0x2710u);
  v8 = 0;
  v9 = 1441792;
  v7 = -2147483641;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 264);
  LOBYTE(v9) = 1;
  v3(a1, &v7);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  v8 = 0;
  v9 = 3211264;
  v7 = 0;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 264);
  LOBYTE(v9) = 1;
  v4(a1, &v7);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  return 0;
}
