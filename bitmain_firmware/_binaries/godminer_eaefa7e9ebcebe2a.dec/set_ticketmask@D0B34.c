int __fastcall set_ticketmask(int a1, int a2)
{
  int v4; // r0
  _BYTE v6[32]; // [sp+30h] [bp-1020h] BYREF
  _BYTE v7[4096]; // [sp+50h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)v6, "chain");
  v4 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
    192,
    "set_ticketmask",
    14,
    115,
    40,
    v7);
  sub_D0AF4(a1, 10, a2);
  *(_DWORD *)(a1 + 432) = a2;
  usleep(0x2710u);
  return 0;
}
