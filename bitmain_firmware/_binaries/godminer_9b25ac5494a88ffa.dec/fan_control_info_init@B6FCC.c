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
  _BYTE var1004[4104]; // [sp+38h] [bp-1004h] BYREF
  int varg_r0; // [sp+1048h] [bp+Ch]
  int varg_r1; // [sp+104Ch] [bp+10h]
  int varg_r2; // [sp+1050h] [bp+14h]
  int varg_r3; // [sp+1054h] [bp+18h]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  *(_QWORD *)&flt_2E85F0 = 0;
  *(_QWORD *)&flt_2E85F8 = 0;
  dword_2E4E04 = a1;
  dword_2E4E08 = a2;
  dword_2E4E0C = a3;
  dword_2E4E10 = a4;
  dbl_2E8600 = 0.0;
  dword_2E4E14 = a5;
  dword_2E4E18 = a6;
  flt_2E4E1C = a7;
  dword_2E4E20 = a8;
  dword_2E4E24 = a9;
  qword_2E4E28 = __PAIR64__(a11, a10);
  qword_2E4E30 = __PAIR64__(a13, a12);
  dbl_2E8610 = 0.0;
  dbl_2E8608 = 0.0;
  *(double *)((char *)&dbl_2E8610 + 4) = 0.0;
  if ( a1 == 2 )
  {
    *(_QWORD *)&dbl_2E8600 = qword_2E4E28;
    *(_QWORD *)&dbl_2E8608 = qword_2E4E30;
    flt_2E85F8 = (float)SLODWORD(flt_2E4E1C);
    flt_2E85F4 = (float)dword_2E4E08;
    flt_2E85F0 = (float)dword_2E4E0C;
  }
  V_LOCK(a9);
  v13 = logfmt_raw((int)var1004, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/set_pwm_by_temp.c",
    177,
    "fan_control_info_init",
    21,
    397,
    40,
    var1004);
  return 0;
}
