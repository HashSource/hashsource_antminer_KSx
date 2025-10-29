bool __fastcall check_value_valid_with_stdd(double a1, int a2)
{
  double v2; // d0
  int *v4; // r3
  int v5; // r2
  int v6; // t1
  double v7; // d16
  double v8; // d8
  int v9; // r0
  double v10; // d9
  double v11; // d11
  double v12; // d8
  int v13; // r0
  _BYTE v15[4096]; // [sp+28h] [bp-1000h] BYREF

  if ( *(__int64 *)&a1 <= 0 )
  {
    v7 = 0.0;
  }
  else
  {
    v4 = (int *)LODWORD(a1);
    v5 = 0;
    do
    {
      v6 = *v4++;
      v5 += v6;
    }
    while ( (int *)(LODWORD(a1) + 4 * HIDWORD(a1)) != v4 );
    v7 = (double)v5;
  }
  v8 = v7 / (double)SHIDWORD(a1);
  v9 = calc_stdd(a1);
  V_LOCK(v9);
  v10 = (double)a2;
  v11 = v8 - v2;
  v12 = v2 + v8;
  v13 = logfmt_raw((int)v15, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/util.c",
    155,
    "check_value_valid_with_stdd",
    27,
    620,
    20,
    v15);
  return v10 >= v11 && v10 <= v12 || v2 < 2.0;
}
