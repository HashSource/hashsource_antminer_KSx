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
  *(_QWORD *)&flt_2F3E48 = 0;
  *(_QWORD *)&flt_2F3E50 = 0;
  dword_2F09D8 = a1;
  dword_2F09DC = a2;
  dword_2F09E0 = a3;
  dword_2F09E4 = a4;
  dbl_2F3E58 = 0.0;
  dword_2F09E8 = a5;
  dword_2F09EC = a6;
  flt_2F09F0 = a7;
  dword_2F09F4 = a8;
  dword_2F09F8 = a9;
  qword_2F09FC = __PAIR64__(a11, a10);
  qword_2F0A04 = __PAIR64__(a13, a12);
  dbl_2F3E68 = 0.0;
  dbl_2F3E60 = 0.0;
  *(double *)((char *)&dbl_2F3E68 + 4) = 0.0;
  if ( a1 == 2 )
  {
    *(_QWORD *)&dbl_2F3E58 = qword_2F09FC;
    *(_QWORD *)&dbl_2F3E60 = qword_2F0A04;
    flt_2F3E50 = (float)SLODWORD(flt_2F09F0);
    flt_2F3E4C = (float)dword_2F09DC;
    flt_2F3E48 = (float)dword_2F09E0;
  }
  V_LOCK(a9);
  v13 = logfmt_raw((int)var1000, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/set_pwm_by_temp.c",
    172,
    "fan_control_info_init",
    21,
    344,
    40,
    var1000);
  return 0;
}
