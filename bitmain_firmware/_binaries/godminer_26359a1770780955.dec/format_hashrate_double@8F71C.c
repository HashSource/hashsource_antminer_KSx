int __fastcall format_hashrate_double(const char *a1, double *a2, char *a3)
{
  double v3; // d0
  int v7; // r0
  double v9; // d9
  int v10; // r2
  _BYTE v11[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v7 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/util.c",
    155,
    "format_hashrate_double",
    22,
    91,
    20,
    v11);
  if ( v3 >= 10000.0 )
  {
    if ( v3 < 10000000.0 )
    {
      v10 = 75;
      *a2 = v3 * 0.001;
    }
    else
    {
      if ( v3 < 1.0e10 )
      {
        v10 = 77;
        v9 = 0.000001;
      }
      else
      {
        v9 = 0.000000001;
        v10 = 71;
      }
      *a2 = v3 * v9;
    }
    return sprintf(a3, "%c%s/s", v10, a1);
  }
  else
  {
    *a2 = v3;
    return sprintf(a3, "%s/s", a1);
  }
}
