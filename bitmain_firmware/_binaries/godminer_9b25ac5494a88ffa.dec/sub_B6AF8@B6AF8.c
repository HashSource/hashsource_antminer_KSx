int __fastcall sub_B6AF8(int a1)
{
  int temp; // s16
  int v3; // r0
  float v4; // s15
  int v5; // r0
  int v6; // r0
  float v7; // s14
  int v8; // r8
  float v9; // s13
  float v10; // s11
  float v11; // s15
  int v12; // r5
  int v13; // r0
  _BYTE v16[4096]; // [sp+10h] [bp-1000h] BYREF

  temp = get_temp(dword_2E4E18);
  v3 = sub_B6388();
  if ( v3 > 47 )
  {
    v4 = (float)SLODWORD(flt_2E4E1C);
    if ( (unsigned int)(v3 - 49) > 3 )
    {
      v3 -= 48;
      if ( (unsigned int)v3 <= 5 )
        v4 = v4 + 1.0;
    }
    else
    {
      v4 = v4 + 2.0;
    }
  }
  else
  {
    v3 = 48 - v3;
    if ( v3 >= 16 )
      v3 = 16;
    v4 = (float)SLODWORD(flt_2E4E1C) - (float)v3 / 1.5;
  }
  flt_2E85F8 = (float)opt_target_temp_bonus + v4;
  V_LOCK(v3);
  v5 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/set_pwm_by_temp.c",
    177,
    "set_pwm_by_pid",
    14,
    315,
    20,
    v16);
  flt_2E85FC = (float)temp;
  v6 = fan_pwm_get();
  v7 = flt_2E85F8 - flt_2E85FC;
  v8 = v6;
  *(float *)&dbl_2E8610 = flt_2E85F8 - flt_2E85FC;
  v9 = (float)((float)(flt_2E85F8 - flt_2E85FC) - (float)(*((float *)&dbl_2E8610 + 1) + *((float *)&dbl_2E8610 + 1)))
     + flt_2E8618;
  v10 = (float)(flt_2E85F8 - flt_2E85FC) - *((float *)&dbl_2E8610 + 1);
  if ( a1 )
  {
    flt_2E8618 = *((float *)&dbl_2E8610 + 1);
    *((float *)&dbl_2E8610 + 1) = flt_2E85F8 - flt_2E85FC;
    LODWORD(v11) = (int)(float)((float)((float)(v7 * *(float *)&dbl_2E8608) + (float)(v10 * *(float *)&dbl_2E8600))
                              + (float)(v9 * *((float *)&dbl_2E8608 + 1)));
    v12 = LODWORD(v11);
    if ( SLODWORD(v11) < -20 )
      v12 = -20;
  }
  else
  {
    flt_2E8618 = *((float *)&dbl_2E8610 + 1);
    *((float *)&dbl_2E8610 + 1) = flt_2E85F8 - flt_2E85FC;
    LODWORD(v11) = (int)(float)((float)((float)(v7 * *(float *)&dbl_2E8608) + (float)(v10 * *((float *)&dbl_2E8600 + 1)))
                              + (float)(v9 * *((float *)&dbl_2E8608 + 1)));
    v12 = LODWORD(v11);
  }
  v13 = get_temp(dword_2E4E10);
  if ( dword_2E4E14 <= v13 )
    v11 = 100.0;
  else
    v12 += v8;
  if ( dword_2E4E14 > v13 )
    v11 = (float)v12;
  if ( flt_2E85F4 > v11 )
  {
    if ( flt_2E85F4 <= flt_2E85F0 )
      return (int)flt_2E85F4;
    return (int)flt_2E85F0;
  }
  if ( flt_2E85F0 < v11 )
    return (int)flt_2E85F0;
  return (int)v11;
}
