int __fastcall set_debug_ctrl_rvn(int a1, int a2)
{
  int v4; // r0
  void (__fastcall *v5)(int, _DWORD *); // r3
  _BYTE v7[32]; // [sp+28h] [bp-1020h] BYREF
  _DWORD v8[2]; // [sp+48h] [bp-1000h] BYREF
  __int64 v9; // [sp+50h] [bp-FF8h]

  V_LOCK(a1);
  V_INT((int)v7, "chain");
  v4 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "set_debug_ctrl_rvn",
    18,
    188,
    60,
    v8);
  v5 = *(void (__fastcall **)(int, _DWORD *))(a1 + 260);
  v8[1] = 0;
  v8[0] = a2;
  v9 = 5242881;
  v5(a1, v8);
  usleep(0x2710u);
  return 0;
}
