int __fastcall set_nonce_count_zero_kas(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[2]; // [sp+10h] [bp-1004h] BYREF
  __int64 v5; // [sp+18h] [bp-FFCh]

  V_LOCK();
  logfmt_raw((char *)v4, 0x1000u, 0, "%s...", "set_nonce_count_zero_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    187,
    "set_nonce_count_zero_kas",
    24,
    153,
    40,
    v4);
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 248);
  v4[1] = 0;
  v4[0] = 0;
  v5 = 3932161;
  v2(a1, v4);
  usleep(0x2710u);
  return 0;
}
