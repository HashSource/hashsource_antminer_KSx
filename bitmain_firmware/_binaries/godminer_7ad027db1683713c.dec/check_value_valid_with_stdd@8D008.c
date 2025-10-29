bool __fastcall check_value_valid_with_stdd(double a1, int a2)
{
  double v2; // d0
  int *v4; // r3
  int v5; // r2
  int v6; // t1
  double v7; // d16
  double v8; // d8
  double v9; // d9
  double v10; // d11
  double v11; // d8
  double v13; // [sp+0h] [bp-1028h]
  char v14[4096]; // [sp+28h] [bp-1000h] BYREF

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
  calc_stdd(a1);
  V_LOCK();
  v9 = (double)a2;
  v10 = v8 - v2;
  v13 = v8;
  v11 = v2 + v8;
  logfmt_raw(
    v14,
    0x1000u,
    0,
    "mean:%.4f, stdd:%.4f, min_value:%.4f, max_value:%.4f, to_check:%.4f",
    v13,
    v2,
    v10,
    v11,
    v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/util.c",
    150,
    "check_value_valid_with_stdd",
    27,
    559,
    20,
    v14);
  return v9 >= v10 && v9 <= v11 || v2 < 2.0;
}
