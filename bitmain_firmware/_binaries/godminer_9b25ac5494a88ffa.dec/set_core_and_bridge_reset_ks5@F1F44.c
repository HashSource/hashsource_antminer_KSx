int __fastcall set_core_and_bridge_reset_ks5(int a1, char a2)
{
  int v4; // r0
  char v5; // r3
  void (__fastcall *v6)(int, _DWORD *); // r2
  _DWORD v8[2]; // [sp+10h] [bp-1004h] BYREF
  __int64 v9; // [sp+18h] [bp-FFCh]

  V_LOCK(a1);
  v4 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
    192,
    "set_core_and_bridge_reset_ks5",
    29,
    353,
    40,
    v8);
  v5 = *(_DWORD *)(a1 + 348) * a2;
  v8[1] = 0;
  v8[0] = 1;
  v9 = 0;
  v6 = *(void (__fastcall **)(int, _DWORD *))(a1 + 260);
  WORD1(v9) = 68;
  BYTE1(v9) = v5;
  v6(a1, v8);
  usleep(0x2710u);
  sub_EE940(a1, 10, 0);
  sub_EECF0(a1, 37);
  return 0;
}
