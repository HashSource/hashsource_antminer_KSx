int __fastcall set_fuart_cfg_kas(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[2]; // [sp+10h] [bp-1000h] BYREF
  __int64 v5; // [sp+18h] [bp-FF8h]

  V_LOCK();
  logfmt_raw((char *)v4, 0x1000u, 0, "%s...", "set_fuart_cfg_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    187,
    "set_fuart_cfg_kas",
    17,
    138,
    40,
    v4);
  v4[1] = 0;
  v4[0] = 32;
  v5 = 0;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 248);
  WORD1(v5) = 96;
  LOBYTE(v5) = 1;
  v2(a1, v4);
  usleep(0x2710u);
  return 0;
}
