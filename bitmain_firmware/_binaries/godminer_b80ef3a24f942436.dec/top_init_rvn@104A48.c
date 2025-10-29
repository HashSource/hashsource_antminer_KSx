int __fastcall top_init_rvn(int *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r2
  int v5; // r3
  void (__fastcall *v6)(int *, int); // r3
  int v7; // r0
  _QWORD v9[4]; // [sp+28h] [bp-1044h] BYREF
  int v10; // [sp+48h] [bp-1024h] BYREF
  _BYTE v11[4100]; // [sp+68h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v9, "chain", a1[62]);
  v2 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    187,
    "top_init_rvn",
    12,
    2283,
    60,
    v11);
  v3 = sub_FE340((int)a1);
  if ( !v3 )
  {
    reset_chip_reg_rvn((int)a1);
    sleep(0xAu);
    v4 = 0;
    v5 = a1[122] - 1;
    do
      *(_BYTE *)++v5 = v4++;
    while ( v4 != 8 );
    v6 = (void (__fastcall *)(int *, int))a1[64];
    a1[107] = 1;
    v6(a1, a1[122]);
    sub_FE340((int)a1);
    setup_clk_rvn((int)a1);
    set_baud_rvn((int)a1);
    sub_FD490((int)a1, 5250832);
    usleep(0x2710u);
    cache_and_dag_gen_rvn((int)a1);
    while ( 1 )
      ;
  }
  V_LOCK(v3);
  V_INT((int)&v10, "chain", a1[62]);
  v7 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    187,
    "top_init_rvn",
    12,
    2287,
    100,
    v11);
  return 12;
}
