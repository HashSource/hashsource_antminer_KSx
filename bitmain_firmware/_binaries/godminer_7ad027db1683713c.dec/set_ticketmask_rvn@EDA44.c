int __fastcall set_ticketmask_rvn(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s %u...", "set_ticketmask_rvn", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "set_ticketmask_rvn",
    18,
    157,
    40,
    v5);
  sub_EBFA0(a1, 26, a2);
  *(_DWORD *)(a1 + 408) = a2;
  usleep(0x2710u);
  return 0;
}
