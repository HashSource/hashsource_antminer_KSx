int __fastcall set_check_asic_voltage(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r0
  _BYTE v5[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/power_api.c",
    171,
    "set_check_asic_voltage",
    22,
    557,
    40,
    v5);
  if ( a1 )
    result = set_voltage_by_steps(dword_2E85DC, (unsigned __int8)byte_2E85C8, 0x64u);
  else
    result = set_voltage(dword_2E85DC, (unsigned __int8)byte_2E85C8);
  if ( result )
  {
    V_LOCK(result);
    v4 = logfmt_raw((int)v5, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
      171,
      "set_check_asic_voltage",
      22,
      565,
      100,
      v5);
    return -1;
  }
  return result;
}
