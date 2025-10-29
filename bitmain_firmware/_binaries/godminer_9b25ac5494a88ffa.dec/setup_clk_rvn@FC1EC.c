int __fastcall setup_clk_rvn(int a1)
{
  int v2; // r0
  int v4; // [sp+28h] [bp-1020h] BYREF
  int v5; // [sp+48h] [bp-1000h] BYREF
  int v6; // [sp+4Ch] [bp-FFCh]
  __int64 v7; // [sp+50h] [bp-FF8h]

  V_LOCK(a1);
  V_INT((int)&v4, "chain");
  v2 = logfmt_raw((int)&v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "setup_clk_rvn",
    13,
    333,
    60,
    &v5);
  v6 = 0;
  v7 = 524289;
  v5 = 1076363553;
  (*(void (__fastcall **)(int, int *))(a1 + 260))(a1, &v5);
  usleep(0x2710u);
  v6 = 0;
  v7 = 786433;
  v5 = 1076363537;
  (*(void (__fastcall **)(int, int *))(a1 + 260))(a1, &v5);
  usleep(0x2710u);
  v6 = 0;
  v7 = 14155777;
  v5 = 1077936417;
  (*(void (__fastcall **)(int, int *))(a1 + 260))(a1, &v5);
  usleep(0x2710u);
  return 0;
}
