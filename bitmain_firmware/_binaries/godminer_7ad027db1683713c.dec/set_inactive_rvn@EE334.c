int __fastcall set_inactive_rvn(int a1)
{
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "set_inactive_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "set_inactive_rvn",
    16,
    216,
    40,
    v3);
  (*(void (__fastcall **)(int))(a1 + 244))(a1);
  usleep(0x2710u);
  return 0;
}
