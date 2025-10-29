int __fastcall top_init_eth(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r2
  int v5; // r3
  void (__fastcall *v6)(int, int); // r3
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r3
  int result; // r0
  int v13; // r0
  int v14; // [sp+28h] [bp-1060h] BYREF
  _DWORD v15[2]; // [sp+48h] [bp-1040h] BYREF
  __int64 v16; // [sp+50h] [bp-1038h]
  int v17; // [sp+68h] [bp-1020h] BYREF
  _BYTE v18[4096]; // [sp+88h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)&v14, "chain");
  v2 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
    192,
    "top_init_eth",
    12,
    1795,
    60,
    v18);
  v3 = sub_D1FB8(a1);
  if ( v3 )
  {
    V_LOCK(v3);
    V_INT((int)v15, "chain");
    v13 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
      192,
      "top_init_eth",
      12,
      1799,
      100,
      v18);
    return 12;
  }
  else
  {
    setup_clk(a1);
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 480) - 1;
    do
      *(_BYTE *)++v5 = v4++;
    while ( v4 != 8 );
    v6 = *(void (__fastcall **)(int, int))(a1 + 252);
    v7 = *(_DWORD *)(a1 + 480);
    *(_DWORD *)(a1 + 420) = 1;
    v6(a1, v7);
    sub_D1FB8(a1);
    v8 = set_debug_ctrl(a1, 19);
    v15[0] = 3;
    v15[1] = 0;
    v16 = 4718593;
    V_LOCK(v8);
    V_INT((int)&v17, "chain");
    v9 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
      171,
      "ChipSetting_analog_mux_ETH",
      26,
      924,
      40,
      v18);
    (*(void (__fastcall **)(int, _DWORD *))(a1 + 260))(a1, v15);
    v10 = sub_D0544(a1);
    v11 = *(unsigned __int8 *)(a1 + 452);
    if ( !v10 )
      *(_DWORD *)(a1 + 504) = 1;
    result = 0;
    if ( !v11 )
      *(_DWORD *)(a1 + 456) = (int)*(float *)(a1 + 956);
  }
  return result;
}
