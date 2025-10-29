int __fastcall top_init_eth(int a1)
{
  int v2; // r2
  int v3; // r3
  void (__fastcall *v4)(int, int); // r3
  int v5; // r1
  int v6; // r0
  int v7; // r3
  int result; // r0
  _DWORD v9[7]; // [sp+28h] [bp-1060h] BYREF
  int v10; // [sp+44h] [bp-1044h]
  int v11; // [sp+48h] [bp-1040h] BYREF
  _DWORD v12[6]; // [sp+4Ch] [bp-103Ch]
  int v13; // [sp+64h] [bp-1024h]
  _DWORD v14[7]; // [sp+68h] [bp-1020h] BYREF
  int v15; // [sp+84h] [bp-1004h]
  char v16[4096]; // [sp+88h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v9, "chain", *(int *)(a1 + 232));
  logfmt_raw(v16, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, "%s start", "top_init_eth");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "top_init_eth",
    12,
    1773,
    60,
    v16);
  if ( sub_CA0C8(a1) )
  {
    V_LOCK();
    V_INT((int)&v11, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v16,
      0x1000u,
      0,
      v13,
      v11,
      v12[0],
      v12[1],
      v12[2],
      v12[3],
      v12[4],
      v12[5],
      v13,
      "check asic num failed",
      "top_init_eth");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      187,
      "top_init_eth",
      12,
      1777,
      100,
      v16);
    return 12;
  }
  else
  {
    setup_clk(a1);
    v2 = 0;
    v3 = *(_DWORD *)(a1 + 464) - 1;
    do
      *(_BYTE *)++v3 = v2++;
    while ( v2 != 8 );
    v4 = *(void (__fastcall **)(int, int))(a1 + 240);
    v5 = *(_DWORD *)(a1 + 464);
    *(_DWORD *)(a1 + 404) = 1;
    v4(a1, v5);
    sub_CA0C8(a1);
    set_debug_ctrl(a1, 19);
    v11 = 3;
    v12[0] = 0;
    *(_QWORD *)&v12[1] = 4718593;
    V_LOCK();
    V_INT((int)v14, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v16,
      0x1000u,
      0,
      v15,
      v14[0],
      v14[1],
      v14[2],
      v14[3],
      v14[4],
      v14[5],
      v14[6],
      v15,
      "set analog value %08x",
      v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_analog_mux_ETH",
      26,
      883,
      40,
      v16);
    (*(void (__fastcall **)(int, int *))(a1 + 248))(a1, &v11);
    v6 = sub_C8894(a1);
    v7 = *(unsigned __int8 *)(a1 + 436);
    if ( !v6 )
      *(_DWORD *)(a1 + 488) = 1;
    result = 0;
    if ( !v7 )
      *(_DWORD *)(a1 + 440) = (int)*(float *)(a1 + 940);
  }
  return result;
}
