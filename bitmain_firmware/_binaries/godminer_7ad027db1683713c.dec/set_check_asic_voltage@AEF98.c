int __fastcall set_check_asic_voltage(int a1)
{
  int result; // r0
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "set_check_asic_voltage");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "set_check_asic_voltage",
    22,
    549,
    40,
    v3);
  if ( a1 )
    result = set_voltage_by_steps(dword_2D3554, (unsigned __int8)byte_2D3540);
  else
    result = set_voltage(dword_2D3554, (unsigned __int8)byte_2D3540);
  if ( result )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "set_check_asic_voltage error!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/power_api.c",
      166,
      "set_check_asic_voltage",
      22,
      557,
      100,
      v3);
    return -1;
  }
  return result;
}
