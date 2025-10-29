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
  char var1000[4104]; // [sp+38h] [bp-1000h] BYREF
  int varg_r0; // [sp+1048h] [bp+10h]
  int varg_r1; // [sp+104Ch] [bp+14h]
  int varg_r2; // [sp+1050h] [bp+18h]
  int varg_r3; // [sp+1054h] [bp+1Ch]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  *(_QWORD *)&flt_2D3588 = 0;
  *(_QWORD *)&flt_2D3590 = 0;
  dword_2D0994 = a1;
  dword_2D0998 = a2;
  dword_2D099C = a3;
  dword_2D09A0 = a4;
  dbl_2D3598 = 0.0;
  dword_2D09A4 = a5;
  dword_2D09A8 = a6;
  flt_2D09AC = a7;
  dword_2D09B0 = a8;
  dword_2D09B4 = a9;
  qword_2D09B8 = __PAIR64__(a11, a10);
  qword_2D09C0 = __PAIR64__(a13, a12);
  dbl_2D35A8 = 0.0;
  dbl_2D35A0 = 0.0;
  *(double *)((char *)&dbl_2D35A8 + 4) = 0.0;
  if ( a1 == 2 )
  {
    *(_QWORD *)&dbl_2D3598 = qword_2D09B8;
    *(_QWORD *)&dbl_2D35A0 = qword_2D09C0;
    flt_2D3590 = (float)SLODWORD(flt_2D09AC);
    flt_2D358C = (float)dword_2D0998;
    flt_2D3588 = (float)dword_2D099C;
  }
  V_LOCK();
  logfmt_raw(
    var1000,
    0x1000u,
    0,
    "startup P: %f, p: %f, i: %f, d: %f   target: %f, min %f, max %f",
    *(float *)&dbl_2D3598,
    *((float *)&dbl_2D3598 + 1),
    *(float *)&dbl_2D35A0,
    *((float *)&dbl_2D35A0 + 1),
    flt_2D3590,
    flt_2D358C,
    flt_2D3588);
  V_UNLOCK();
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
