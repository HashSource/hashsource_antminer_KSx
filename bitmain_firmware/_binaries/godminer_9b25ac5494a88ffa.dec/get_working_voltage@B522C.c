int __fastcall get_working_voltage(int a1)
{
  int v2; // r0
  _BYTE v3[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( byte_2E85C8 )
    return dword_2E85D4;
  V_LOCK(a1);
  v2 = logfmt_raw((int)v3, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/power_api.c",
    171,
    "get_working_voltage",
    19,
    515,
    100,
    v3);
  return -1;
}
