int __fastcall top_init_rvn(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r2
  int v5; // r3
  void (__fastcall *v6)(int, _DWORD); // r3
  int result; // r0
  int v8; // r0
  _BYTE v9[32]; // [sp+28h] [bp-1044h] BYREF
  _BYTE v10[32]; // [sp+48h] [bp-1024h] BYREF
  _BYTE v11[4100]; // [sp+68h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v9, "chain");
  v2 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "top_init_rvn",
    12,
    2069,
    60,
    v11);
  v3 = sub_EEC30((_DWORD *)a1);
  if ( v3 )
  {
    V_LOCK(v3);
    V_INT((int)v10, "chain");
    v8 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      187,
      "top_init_rvn",
      12,
      2073,
      100,
      v11);
    return 12;
  }
  else
  {
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 464) - 1;
    do
      *(_BYTE *)++v5 = v4++;
    while ( v4 != 8 );
    v6 = *(void (__fastcall **)(int, _DWORD))(a1 + 240);
    *(_DWORD *)(a1 + 404) = 1;
    v6(a1, *(_DWORD *)(a1 + 464));
    setup_clk_rvn(a1);
    set_baud_rvn(a1, (char *)&stru_1C1FC.st_value);
    open_core_dram_clk(a1);
    result = 0;
    if ( !*(_BYTE *)(a1 + 436) )
      *(_DWORD *)(a1 + 440) = (int)*(float *)(a1 + 940);
  }
  return result;
}
