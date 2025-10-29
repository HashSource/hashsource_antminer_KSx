int __fastcall close_one_chip_cores_ks5(int a1, char a2)
{
  int v4; // r0
  void (__fastcall *v5)(int, _DWORD *); // r4
  char v6; // r3
  _BYTE v8[32]; // [sp+28h] [bp-1024h] BYREF
  _DWORD v9[2]; // [sp+48h] [bp-1004h] BYREF
  __int64 v10; // [sp+50h] [bp-FFCh]

  V_LOCK(a1);
  V_INT((int)v8, "chain");
  v4 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
    192,
    "close_one_chip_cores_ks5",
    24,
    971,
    40,
    v9);
  v5 = *(void (__fastcall **)(int, _DWORD *))(a1 + 264);
  v6 = *(_DWORD *)(a1 + 352) * a2;
  v9[1] = 0;
  v10 = 1835008;
  v9[0] = -1069408496;
  BYTE1(v10) = v6;
  v5(a1, v9);
  return 0;
}
