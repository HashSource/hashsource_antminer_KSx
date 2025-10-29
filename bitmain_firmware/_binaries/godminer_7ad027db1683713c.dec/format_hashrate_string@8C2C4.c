int __fastcall format_hashrate_string(const char *a1, char *a2)
{
  double v2; // d0
  double v5; // d8
  double v6; // d0
  int v7; // r3
  double v8; // d8
  char v10[4096]; // [sp+10h] [bp-1000h] BYREF

  v5 = v2;
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "format hashrate string %f %s", v2, a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/util.c",
    150,
    "format_hashrate_string",
    22,
    55,
    20,
    v10);
  if ( v2 < 10000.0 )
    return sprintf(a2, "%.2f %s/s", v2, a1);
  if ( v2 < 10000000.0 )
  {
    v7 = 75;
    v8 = v2 * 0.001;
  }
  else
  {
    if ( v2 >= 1.0e10 )
    {
      v7 = 71;
      v6 = 0.000000001;
    }
    else
    {
      v6 = 0.000001;
      v7 = 77;
    }
    v8 = v5 * v6;
  }
  return sprintf(a2, "%.2f %c%s/s", v8, v7, a1);
}
