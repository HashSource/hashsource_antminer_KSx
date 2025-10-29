int get_working_voltage()
{
  int v0; // r4
  char v2[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = (unsigned __int8)byte_2D3540;
  if ( byte_2D3540 )
    return dword_2D354C;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, v0, "Sweep error string = %s.", "V:1");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "get_working_voltage",
    19,
    507,
    100,
    v2);
  return -1;
}
