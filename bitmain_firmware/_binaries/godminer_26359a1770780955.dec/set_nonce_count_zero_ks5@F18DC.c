int __fastcall set_nonce_count_zero_ks5(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, _DWORD *); // r3
  _DWORD v5[2]; // [sp+10h] [bp-1004h] BYREF
  __int64 v6; // [sp+18h] [bp-FFCh]

  V_LOCK(a1);
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
    192,
    "set_nonce_count_zero_ks5",
    24,
    328,
    40,
    v5);
  v3 = *(void (__fastcall **)(int, _DWORD *))(a1 + 264);
  v5[1] = 0;
  v5[0] = 0;
  v6 = 3932161;
  v3(a1, v5);
  usleep(0x2710u);
  return 0;
}
