int __fastcall close_core_clk_tops(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[2]; // [sp+10h] [bp-1000h] BYREF
  __int64 v5; // [sp+18h] [bp-FF8h]

  V_LOCK();
  logfmt_raw((char *)v4, 0x1000u, 0, "%s...", "close_core_clk_tops");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "close_core_clk_tops",
    19,
    132,
    20,
    v4);
  v4[1] = 0;
  v4[0] = -2147483642;
  v5 = 0;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 248);
  WORD1(v5) = 22;
  LOBYTE(v5) = 1;
  v2(a1, v4);
  usleep(0x2710u);
  return 0;
}
