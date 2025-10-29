int __fastcall top_init_rvn(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  _QWORD v6[4]; // [sp+28h] [bp-1044h] BYREF
  int v7; // [sp+48h] [bp-1024h] BYREF
  _BYTE v8[4100]; // [sp+68h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v6, "chain");
  v2 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "top_init_rvn",
    12,
    2283,
    60,
    v8);
  v3 = sub_FA648(a1);
  if ( !v3 )
  {
    reset_chip_reg_rvn(a1);
    sleep(0xAu);
    **(_BYTE **)(a1 + 480) = 0;
    *(_DWORD *)(a1 + 420) = 8;
    (*(void (__fastcall **)(int, _DWORD, int))(a1 + 252))(a1, *(_DWORD *)(a1 + 480), 1);
    sub_FA648(a1);
    setup_clk_rvn(a1);
    set_baud_rvn(a1);
    sub_F9798(a1, 5250832);
    usleep(0x2710u);
    cache_and_dag_gen_rvn(a1);
    while ( 1 )
      ;
  }
  V_LOCK(v3);
  V_INT((int)&v7, "chain");
  v4 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "top_init_rvn",
    12,
    2287,
    100,
    v8);
  return 12;
}
