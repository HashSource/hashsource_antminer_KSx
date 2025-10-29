int __fastcall sub_81C10(int a1)
{
  int v1; // r0
  _BYTE v3[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v3, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/api_new.c",
    158,
    "get_warnings",
    12,
    1074,
    100,
    v3);
  return -2147483646;
}
