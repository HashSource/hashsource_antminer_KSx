int __fastcall format_hashrate_string(const char *a1, char *a2)
{
  double v2; // d0
  double v5; // d8
  int v6; // r0
  double v7; // d0
  int v8; // r3
  double v9; // d8
  _BYTE v11[4096]; // [sp+10h] [bp-1000h] BYREF

  v5 = v2;
  V_LOCK(a1);
  v6 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/util.c",
    155,
    "format_hashrate_string",
    22,
    116,
    20,
    v11);
  if ( v2 < 10000.0 )
    return sprintf(a2, "%.2f %s/s", v2, a1);
  if ( v2 < 10000000.0 )
  {
    v8 = 75;
    v9 = v2 * 0.001;
  }
  else
  {
    if ( v2 >= 1.0e10 )
    {
      v8 = 71;
      v7 = 0.000000001;
    }
    else
    {
      v7 = 0.000001;
      v8 = 77;
    }
    v9 = v5 * v7;
  }
  return sprintf(a2, "%.2f %c%s/s", v9, v8, a1);
}
