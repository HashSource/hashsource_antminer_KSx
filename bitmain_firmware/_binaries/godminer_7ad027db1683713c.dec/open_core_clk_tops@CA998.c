int __fastcall open_core_clk_tops(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[7]; // [sp+28h] [bp-1024h] BYREF
  int v5; // [sp+44h] [bp-1008h]
  _DWORD v6[2]; // [sp+48h] [bp-1004h] BYREF
  __int64 v7; // [sp+50h] [bp-FFCh]

  V_LOCK();
  V_INT((int)v4, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    (char *)v6,
    0x1000u,
    0,
    v5,
    v4[0],
    v4[1],
    v4[2],
    v4[3],
    v4[4],
    v4[5],
    v4[6],
    v5,
    "%s...",
    "open_core_clk_tops");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "open_core_clk_tops",
    18,
    124,
    60,
    v6);
  v6[1] = 0;
  v6[0] = -2147483641;
  v7 = 0;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 248);
  WORD1(v7) = 22;
  LOBYTE(v7) = 1;
  v2(a1, v6);
  usleep(0x2710u);
  return 0;
}
