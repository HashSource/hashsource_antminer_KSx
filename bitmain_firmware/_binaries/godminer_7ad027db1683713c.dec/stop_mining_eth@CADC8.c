int __fastcall stop_mining_eth(int a1)
{
  int v2; // r0
  int (**v3)(); // r0
  void (__fastcall *v4)(int, unsigned int *); // r3
  unsigned int v6; // [sp+10h] [bp-1004h] BYREF
  int v7; // [sp+14h] [bp-1000h]
  __int64 v8; // [sp+18h] [bp-FFCh]

  V_LOCK();
  logfmt_raw((char *)&v6, 0x1000u, 0, "%s ...", "stop_mining_eth");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "stop_mining_eth",
    15,
    1632,
    60,
    &v6);
  v2 = (*(int (__fastcall **)(int))(a1 + 56))(a1);
  v3 = dev_ctrl(v2);
  ((void (__fastcall *)(_DWORD))v3[11])(*(_DWORD *)(a1 + 228));
  *(_BYTE *)(a1 + 237) = 0;
  *(_BYTE *)(a1 + 238) = 0;
  set_ticketmask(a1, 1);
  set_core_reset(a1);
  v7 = 0;
  v8 = 1310721;
  v6 = 274347265;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 248))(a1, &v6);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  v7 = 0;
  v8 = 5373952;
  v6 = 9;
  v4 = *(void (__fastcall **)(int, unsigned int *))(a1 + 248);
  LOBYTE(v8) = 1;
  v4(a1, &v6);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  v7 = 0;
  v6 = 1;
  v8 = 5701633;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 248))(a1, &v6);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  v7 = 0;
  v8 = 5636097;
  v6 = 0x80000000;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 248))(a1, &v6);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  sub_C8D58(a1, 12, 2);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  return 0;
}
