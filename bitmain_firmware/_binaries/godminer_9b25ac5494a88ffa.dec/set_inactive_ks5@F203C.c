int __fastcall set_inactive_ks5(int a1)
{
  int v2; // r0
  _BYTE v4[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
    192,
    "set_inactive_ks5",
    16,
    364,
    40,
    v4);
  (*(void (__fastcall **)(int))(a1 + 256))(a1);
  usleep(0x2710u);
  return 0;
}
