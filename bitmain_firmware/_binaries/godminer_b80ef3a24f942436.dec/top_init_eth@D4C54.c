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
  int v11; // r0
  int v12; // r3
  int result; // r0
  int v14; // r0
  int v15; // r0
  _BYTE v16[32]; // [sp+28h] [bp-1080h] BYREF
  int v17; // [sp+48h] [bp-1060h] BYREF
  _DWORD v18[2]; // [sp+68h] [bp-1040h] BYREF
  __int64 v19; // [sp+70h] [bp-1038h]
  int v20; // [sp+88h] [bp-1020h] BYREF
  _BYTE v21[4096]; // [sp+A8h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)v16, "chain", *(int *)(a1 + 248));
  v2 = logfmt_raw((int)v21, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "top_init_eth",
    12,
    1969,
    60,
    v21);
  v3 = sub_D35A8(a1);
  if ( v3 )
  {
    V_LOCK(v3);
    V_INT((int)&v17, "chain", *(int *)(a1 + 248));
    v15 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      187,
      "top_init_eth",
      12,
      1973,
      100,
      v21);
    return 12;
  }
  else
  {
    setup_clk(a1);
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 488) - 1;
    do
      *(_BYTE *)++v5 = v4++;
    while ( v4 != 8 );
    v6 = *(void (__fastcall **)(int, int))(a1 + 256);
    v7 = *(_DWORD *)(a1 + 488);
    *(_DWORD *)(a1 + 428) = 1;
    v6(a1, v7);
    v8 = sub_D35A8(a1);
    if ( v8 )
    {
      V_LOCK(v8);
      V_INT((int)v18, "chain", *(int *)(a1 + 248));
      v14 = logfmt_raw((int)v21, 0x1000u);
      V_UNLOCK(v14);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
        187,
        "top_init_eth",
        12,
        1987,
        100,
        v21);
      return 12;
    }
    else
    {
      v9 = set_debug_ctrl(a1, 19);
      v18[1] = 0;
      v18[0] = 3;
      v19 = 4718593;
      V_LOCK(v9);
      V_INT((int)&v20, "chain", *(int *)(a1 + 248));
      v10 = logfmt_raw((int)v21, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/chip_setting.c",
        166,
        "ChipSetting_analog_mux_ETH",
        26,
        997,
        40,
        v21);
      (*(void (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v18);
      v11 = sub_D174C(a1);
      v12 = *(unsigned __int8 *)(a1 + 460);
      if ( !v11 )
        *(_DWORD *)(a1 + 512) = 1;
      result = 0;
      if ( !v12 )
        *(_DWORD *)(a1 + 464) = (int)*(float *)(a1 + 976);
    }
  }
  return result;
}
