int __fastcall sub_11C5E4(int a1)
{
  int v1; // r0
  int v2; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  _BYTE v5[4096]; // [sp+810h] [bp-1000h] BYREF

  v1 = snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
  V_LOCK(v1);
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/tsensor/bitmain_tsensor.c",
    193,
    "find_index",
    10,
    208,
    100,
    v5);
  return -2147482111;
}
