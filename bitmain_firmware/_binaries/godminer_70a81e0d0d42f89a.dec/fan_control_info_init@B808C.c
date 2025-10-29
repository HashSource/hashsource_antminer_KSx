int __fastcall fan_control_info_init(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned int a13)
{
  int v13; // r0
  _BYTE var1000[4104]; // [sp+38h] [bp-1000h] BYREF
  int varg_r0; // [sp+1048h] [bp+10h]
  int varg_r1; // [sp+104Ch] [bp+14h]
  int varg_r2; // [sp+1050h] [bp+18h]
  int varg_r3; // [sp+1054h] [bp+1Ch]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  *(_QWORD *)&flt_2EB930 = 0;
  *(_QWORD *)&flt_2EB938 = 0;
  g_fan_control_info = a1;
  dword_2E7E1C = a2;
  dword_2E7E20 = a3;
  dword_2E7E24 = a4;
  dbl_2EB940 = 0.0;
  dword_2E7E28 = a5;
  dword_2E7E2C = a6;
  dword_2E7E30 = a7;
  dword_2E7E34 = a8;
  dword_2E7E38 = a9;
  qword_2E7E3C = __PAIR64__(a11, a10);
  qword_2E7E44 = __PAIR64__(a13, a12);
  dbl_2EB950 = 0.0;
  dbl_2EB948 = 0.0;
  *(double *)((char *)&dbl_2EB950 + 4) = 0.0;
  if ( a1 == 2 )
  {
    *(_QWORD *)&dbl_2EB940 = qword_2E7E3C;
    *(_QWORD *)&dbl_2EB948 = qword_2E7E44;
    flt_2EB938 = (float)dword_2E7E30;
    flt_2EB934 = (float)dword_2E7E1C;
    flt_2EB930 = (float)dword_2E7E20;
  }
  V_LOCK(a9);
  v13 = logfmt_raw((int)var1000, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/set_pwm_by_temp.c",
    177,
    "fan_control_info_init",
    21,
    412,
    40,
    var1000);
  return 0;
}
