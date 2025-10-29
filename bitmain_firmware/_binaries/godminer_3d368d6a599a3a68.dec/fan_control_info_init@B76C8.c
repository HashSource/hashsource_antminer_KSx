int __fastcall fan_control_info_init(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        float a7,
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
  *(_QWORD *)&flt_2E9620 = 0;
  *(_QWORD *)&flt_2E9628 = 0;
  dword_2E5E10 = a1;
  dword_2E5E14 = a2;
  dword_2E5E18 = a3;
  dword_2E5E1C = a4;
  dbl_2E9630 = 0.0;
  dword_2E5E20 = a5;
  dword_2E5E24 = a6;
  flt_2E5E28 = a7;
  dword_2E5E2C = a8;
  dword_2E5E30 = a9;
  qword_2E5E34 = __PAIR64__(a11, a10);
  qword_2E5E3C = __PAIR64__(a13, a12);
  dbl_2E9640 = 0.0;
  dbl_2E9638 = 0.0;
  *(double *)((char *)&dbl_2E9640 + 4) = 0.0;
  if ( a1 == 2 )
  {
    *(_QWORD *)&dbl_2E9630 = qword_2E5E34;
    *(_QWORD *)&dbl_2E9638 = qword_2E5E3C;
    flt_2E9628 = (float)SLODWORD(flt_2E5E28);
    flt_2E9624 = (float)dword_2E5E14;
    flt_2E9620 = (float)dword_2E5E18;
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
    409,
    40,
    var1000);
  return 0;
}
