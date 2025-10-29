int __fastcall setup_clk(int a1)
{
  void (__fastcall *v2)(int, int *); // r3
  void (__fastcall *v3)(int, int *); // r3
  _DWORD v5[7]; // [sp+28h] [bp-1020h] BYREF
  int v6; // [sp+44h] [bp-1004h]
  int v7; // [sp+48h] [bp-1000h] BYREF
  int v8; // [sp+4Ch] [bp-FFCh]
  __int64 v9; // [sp+50h] [bp-FF8h]

  V_LOCK();
  V_INT((int)v5, "chain", *(int *)(a1 + 232));
  logfmt_raw((char *)&v7, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "%s...", "setup_clk");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "setup_clk",
    9,
    263,
    60,
    &v7);
  v8 = 0;
  v9 = 2097153;
  v7 = 11;
  (*(void (__fastcall **)(int, int *))(a1 + 248))(a1, &v7);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  v8 = 0;
  v9 = 1179649;
  v7 = 276305409;
  (*(void (__fastcall **)(int, int *))(a1 + 248))(a1, &v7);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  v8 = 0;
  v9 = 1310721;
  v7 = 272381185;
  (*(void (__fastcall **)(int, int *))(a1 + 248))(a1, &v7);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  sub_C8D58(a1, 240, 0x80000000);
  usleep(0x2710u);
  v8 = 0;
  v9 = 1441792;
  v7 = -2147483641;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 248);
  LOBYTE(v9) = 1;
  v2(a1, &v7);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  v8 = 0;
  v9 = 3211264;
  v7 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 248);
  LOBYTE(v9) = 1;
  v3(a1, &v7);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  return 0;
}
