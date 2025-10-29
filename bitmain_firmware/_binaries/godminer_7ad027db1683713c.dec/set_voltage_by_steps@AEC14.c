int __fastcall set_voltage_by_steps(int a1, int a2)
{
  int v3; // r4
  int v4; // r5
  int v5; // r6
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( !a2 )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/power_api.c",
      166,
      "set_voltage_by_steps",
      20,
      460,
      100,
      v7);
    return -1;
  }
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "set_voltage_by_steps to %d", a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/power_api.c",
    166,
    "set_voltage_by_steps",
    20,
    464,
    40,
    v7);
  if ( byte_2D3540 )
    v3 = dword_2D355C;
  else
    v3 = sub_AE708();
  v4 = a1 - v3;
  if ( a1 != v3 )
  {
    if ( a1 - v3 < 0 )
    {
      v5 = -10;
      if ( (int)abs32(v4) <= 10 )
      {
LABEL_11:
        if ( a1 != v3 )
          sub_AE814(a1);
        return 0;
      }
    }
    else
    {
      v5 = 10;
      if ( (int)abs32(v4) <= 10 )
        goto LABEL_11;
    }
    do
    {
      v3 += v5;
      v4 -= v5;
      sub_AE814(v3);
    }
    while ( (int)abs32(v4) > 10 );
    goto LABEL_11;
  }
  return 0;
}
