int __fastcall open_core_dram_clk(int a1)
{
  int v2; // r0
  int v4; // [sp+28h] [bp-1020h] BYREF
  _BYTE v5[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)&v4, "chain", *(int *)(a1 + 248));
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    187,
    "open_core_dram_clk",
    18,
    1431,
    60,
    v5);
  sub_FD124(a1, 15, 3);
  usleep(0x2710u);
  sub_FD124(a1, 9, 7);
  usleep(0x2710u);
  return 0;
}
