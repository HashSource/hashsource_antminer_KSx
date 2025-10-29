int __fastcall open_core_clk_tops_rvn(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, _DWORD *); // r3
  int v5; // [sp+28h] [bp-1024h] BYREF
  _DWORD v6[2]; // [sp+48h] [bp-1004h] BYREF
  __int64 v7; // [sp+50h] [bp-FFCh]

  V_LOCK(a1);
  V_INT((int)&v5, "chain");
  v2 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "open_core_clk_tops_rvn",
    22,
    166,
    60,
    v6);
  v6[1] = 0;
  v6[0] = -2147483641;
  v7 = 0;
  v3 = *(void (__fastcall **)(int, _DWORD *))(a1 + 248);
  LOBYTE(v7) = 1;
  WORD1(v7) = 22;
  v3(a1, v6);
  usleep(0x2710u);
  return 0;
}
