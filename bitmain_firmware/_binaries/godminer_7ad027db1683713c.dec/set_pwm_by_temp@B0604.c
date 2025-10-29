int set_pwm_by_temp()
{
  int v0; // r3
  bool v1; // cf
  __int64 v2; // r8
  int v3; // r0
  float v4; // s14
  int v5; // r7
  float v6; // s13
  float v7; // s11
  int v8; // r6
  int temp; // r0
  signed int v10; // r0
  double v11; // r8
  __int64 v12; // r2
  int result; // r0
  int v14; // r0
  int v15; // r4
  double v16; // d18
  int v17; // r0
  int v18; // r0

  if ( !byte_2D3568 )
  {
    clock_gettime(1, &stru_2D356C);
    byte_2D3568 = 1;
    v0 = dword_2D0994;
    v1 = dword_2D0994 != 0;
    dbl_2D3580 = 0.0;
    if ( dword_2D0994 != 1 )
      goto LABEL_3;
    goto LABEL_19;
  }
  clock_gettime(1, (struct timespec *)&dword_2D3574);
  v11 = dbl_2D3580;
  v12 = 1000LL * (dword_2D3574 - stru_2D356C.tv_sec) + (dword_2D3578 - stru_2D356C.tv_nsec) / 1000000;
  if ( *(__int64 *)&dbl_2D3580 < 20 )
  {
    result = dword_2D09B0;
    if ( v12 < dword_2D09B0 )
      return result;
LABEL_18:
    clock_gettime(1, &stru_2D356C);
    v0 = dword_2D0994;
    v1 = dword_2D0994 != 0;
    *(_QWORD *)&dbl_2D3580 = *(_QWORD *)&v11 + 1LL;
    if ( dword_2D0994 != 1 )
    {
LABEL_3:
      if ( !v1 )
      {
        v18 = sub_AFF08();
        if ( v18 <= 18 )
        {
          v15 = 40;
          goto LABEL_24;
        }
        if ( (unsigned int)(v18 - 19) <= 0xE )
        {
          v15 = (int)((double)(v18 - 18) * 0.666666667 + 40.0);
          goto LABEL_24;
        }
        if ( (unsigned int)(v18 - 34) <= 4 )
        {
          v15 = 50;
          goto LABEL_24;
        }
        if ( (unsigned int)(v18 - 39) <= 9 )
        {
          v15 = (int)((double)(v18 - 38) + 50.0);
          goto LABEL_24;
        }
        if ( (unsigned int)(v18 - 49) > 6 )
        {
          v15 = 100;
          goto LABEL_24;
        }
        v17 = v18 - 48;
        v16 = 5.71428571;
        goto LABEL_23;
      }
      if ( v0 == 2 )
      {
        v2 = *(_QWORD *)&dbl_2D3580;
        flt_2D3594 = (float)get_temp(dword_2D09A8);
        v3 = fan_pwm_get();
        v4 = flt_2D3590 - flt_2D3594;
        v5 = v3;
        *(float *)&dbl_2D35A8 = flt_2D3590 - flt_2D3594;
        v6 = (float)((float)(flt_2D3590 - flt_2D3594)
                   - (float)(*((float *)&dbl_2D35A8 + 1) + *((float *)&dbl_2D35A8 + 1)))
           + flt_2D35B0;
        v7 = (float)(flt_2D3590 - flt_2D3594) - *((float *)&dbl_2D35A8 + 1);
        if ( v2 < 21 )
        {
          flt_2D35B0 = *((float *)&dbl_2D35A8 + 1);
          *((float *)&dbl_2D35A8 + 1) = flt_2D3590 - flt_2D3594;
          v8 = (int)(float)((float)((float)(v4 * *(float *)&dbl_2D35A0) + (float)(v7 * *(float *)&dbl_2D3598))
                          + (float)(v6 * *((float *)&dbl_2D35A0 + 1)));
          if ( v8 < -20 )
            v8 = -20;
        }
        else
        {
          flt_2D35B0 = *((float *)&dbl_2D35A8 + 1);
          *((float *)&dbl_2D35A8 + 1) = flt_2D3590 - flt_2D3594;
          v8 = (int)(float)((float)((float)(v4 * *(float *)&dbl_2D35A0) + (float)(v7 * *((float *)&dbl_2D3598 + 1)))
                          + (float)(v6 * *((float *)&dbl_2D35A0 + 1)));
        }
        temp = get_temp(dword_2D09A0);
        if ( temp >= dword_2D09A4 )
          v4 = 100.0;
        else
          v8 += v5;
        if ( temp < dword_2D09A4 )
          v4 = (float)v8;
        if ( v4 < flt_2D358C )
        {
          if ( flt_2D3588 >= flt_2D358C )
          {
            v10 = (int)flt_2D358C;
            return fan_pwm_set(v10);
          }
        }
        else if ( v4 <= flt_2D3588 )
        {
          v10 = (int)v4;
          return fan_pwm_set(v10);
        }
        v10 = (int)flt_2D3588;
        return fan_pwm_set(v10);
      }
      v10 = 100;
      return fan_pwm_set(v10);
    }
LABEL_19:
    v14 = sub_AFF08();
    if ( v14 <= 13 )
    {
      v15 = 20;
LABEL_24:
      if ( get_temp(dword_2D09A0) >= dword_2D09A4 )
        v15 = 100;
      if ( v15 < dword_2D0998 )
        v10 = dword_2D0998;
      else
        v10 = v15;
      if ( v10 >= dword_2D099C )
        v10 = dword_2D099C;
      return fan_pwm_set(v10);
    }
    if ( (unsigned int)(v14 - 14) <= 0x12 )
    {
      v15 = (int)((double)(v14 - 13) * 2.10526316 + 20.0);
      goto LABEL_24;
    }
    v16 = 1.42857143;
    v17 = v14 - 32;
LABEL_23:
    v15 = (int)((double)v17 * v16 + 60.0);
    goto LABEL_24;
  }
  result = dword_2D09B4;
  if ( v12 >= dword_2D09B4 )
    goto LABEL_18;
  return result;
}
