int __fastcall set_debug_ctrl(int a1, int a2)
{
  void (__fastcall *v4)(int, _DWORD *); // r3
  _DWORD v6[7]; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+44h] [bp-1004h]
  _DWORD v8[2]; // [sp+48h] [bp-1000h] BYREF
  __int64 v9; // [sp+50h] [bp-FF8h]

  V_LOCK();
  V_INT((int)v6, "chain", *(int *)(a1 + 232));
  logfmt_raw((char *)v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "%s...", "set_debug_ctrl");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "set_debug_ctrl",
    14,
    140,
    60,
    v8);
  v4 = *(void (__fastcall **)(int, _DWORD *))(a1 + 248);
  v8[1] = 0;
  v8[0] = a2;
  v9 = 5242881;
  v4(a1, v8);
  usleep(0x2710u);
  return 0;
}
