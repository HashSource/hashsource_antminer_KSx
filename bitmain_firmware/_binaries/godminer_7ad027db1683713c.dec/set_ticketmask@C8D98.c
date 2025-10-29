int __fastcall set_ticketmask(int a1, int a2)
{
  _DWORD v5[7]; // [sp+30h] [bp-1020h] BYREF
  int v6; // [sp+4Ch] [bp-1004h]
  char v7[4096]; // [sp+50h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v5, "chain", *(int *)(a1 + 232));
  logfmt_raw(v7, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "%s 0x%08x", "set_ticketmask", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "set_ticketmask",
    14,
    115,
    40,
    v7);
  sub_C8D58(a1, 10, a2);
  *(_DWORD *)(a1 + 408) = a2;
  usleep(0x2710u);
  return 0;
}
