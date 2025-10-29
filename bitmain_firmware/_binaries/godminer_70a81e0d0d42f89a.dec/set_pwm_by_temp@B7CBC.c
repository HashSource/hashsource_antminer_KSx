int set_pwm_by_temp()
{
  float v0; // s0
  int v1; // r3
  bool v2; // cf
  __int64 v3; // r8
  int temp; // s16
  int v5; // r0
  float v6; // s14
  int v7; // r7
  float v8; // s13
  float v9; // s11
  int v10; // r6
  int v11; // r0
  signed int v12; // r0
  double v13; // r8
  __int64 v14; // r2
  int result; // r0
  int v16; // r0
  int v17; // r4
  double v18; // d18
  int v19; // r0
  int v20; // r0

  if ( !byte_2EB910 )
  {
    clock_gettime(1, &stru_2EB914);
    byte_2EB910 = 1;
    v1 = g_fan_control_info;
    v2 = g_fan_control_info != 0;
    dbl_2EB928 = 0.0;
    if ( g_fan_control_info != 1 )
      goto LABEL_3;
    goto LABEL_22;
  }
  clock_gettime(1, (struct timespec *)&dword_2EB91C);
  v13 = dbl_2EB928;
  v14 = 1000LL * (dword_2EB91C - stru_2EB914.tv_sec) + (dword_2EB920 - stru_2EB914.tv_nsec) / 1000000;
  if ( *(__int64 *)&dbl_2EB928 >= 20 )
  {
    result = dword_2E7E38;
    if ( v14 >= dword_2E7E38 )
    {
LABEL_21:
      clock_gettime(1, &stru_2EB914);
      v1 = g_fan_control_info;
      v2 = g_fan_control_info != 0;
      *(_QWORD *)&dbl_2EB928 = *(_QWORD *)&v13 + 1LL;
      if ( g_fan_control_info != 1 )
      {
LABEL_3:
        if ( !v2 )
        {
          v20 = sub_B7430();
          if ( v20 <= 18 )
          {
            v17 = 40;
            goto LABEL_27;
          }
          if ( (unsigned int)(v20 - 19) <= 0xE )
          {
            v17 = (int)((double)(v20 - 18) * 0.666666667 + 40.0);
            goto LABEL_27;
          }
          if ( (unsigned int)(v20 - 34) <= 4 )
          {
            v17 = 50;
            goto LABEL_27;
          }
          if ( (unsigned int)(v20 - 39) <= 9 )
          {
            v17 = (int)((double)(v20 - 38) + 50.0);
            goto LABEL_27;
          }
          if ( (unsigned int)(v20 - 49) > 6 )
          {
            v17 = 100;
            goto LABEL_27;
          }
          v19 = v20 - 48;
          v18 = 5.71428571;
          goto LABEL_26;
        }
        if ( v1 == 2 )
        {
          v3 = *(_QWORD *)&dbl_2EB928;
          temp = get_temp(dword_2E7E2C);
          if ( eeprom_get_strategy(temp) == 107 )
            v0 = 0.0;
          else
            sub_B7680();
          flt_2EB93C = (float)temp;
          flt_2EB938 = (float)dword_2E7E30 + v0;
          v5 = fan_pwm_get();
          v6 = flt_2EB938 - flt_2EB93C;
          v7 = v5;
          *(float *)&dbl_2EB950 = flt_2EB938 - flt_2EB93C;
          v8 = (float)((float)(flt_2EB938 - flt_2EB93C)
                     - (float)(*((float *)&dbl_2EB950 + 1) + *((float *)&dbl_2EB950 + 1)))
             + flt_2EB958;
          v9 = (float)(flt_2EB938 - flt_2EB93C) - *((float *)&dbl_2EB950 + 1);
          if ( v3 < 21 )
          {
            flt_2EB958 = *((float *)&dbl_2EB950 + 1);
            *((float *)&dbl_2EB950 + 1) = flt_2EB938 - flt_2EB93C;
            v10 = (int)(float)((float)((float)(v6 * *(float *)&dbl_2EB948) + (float)(v9 * *(float *)&dbl_2EB940))
                             + (float)(v8 * *((float *)&dbl_2EB948 + 1)));
            if ( v10 < -20 )
              v10 = -20;
          }
          else
          {
            flt_2EB958 = *((float *)&dbl_2EB950 + 1);
            *((float *)&dbl_2EB950 + 1) = flt_2EB938 - flt_2EB93C;
            v10 = (int)(float)((float)((float)(v6 * *(float *)&dbl_2EB948) + (float)(v9 * *((float *)&dbl_2EB940 + 1)))
                             + (float)(v8 * *((float *)&dbl_2EB948 + 1)));
          }
          v11 = get_temp(dword_2E7E24);
          if ( v11 >= dword_2E7E28 )
            v6 = 100.0;
          else
            v10 += v7;
          if ( v11 < dword_2E7E28 )
            v6 = (float)v10;
          if ( v6 < flt_2EB934 )
          {
            if ( flt_2EB930 >= flt_2EB934 )
            {
              v12 = (int)flt_2EB934;
              return fan_pwm_set(v12);
            }
          }
          else if ( flt_2EB930 >= v6 )
          {
            v12 = (int)v6;
            return fan_pwm_set(v12);
          }
          v12 = (int)flt_2EB930;
          return fan_pwm_set(v12);
        }
        v12 = 100;
        return fan_pwm_set(v12);
      }
LABEL_22:
      v16 = sub_B7430();
      if ( v16 <= 13 )
      {
        v17 = 20;
LABEL_27:
        if ( get_temp(dword_2E7E24) >= dword_2E7E28 )
          v17 = 100;
        if ( v17 < dword_2E7E1C )
          v12 = dword_2E7E1C;
        else
          v12 = v17;
        if ( v12 >= dword_2E7E20 )
          v12 = dword_2E7E20;
        return fan_pwm_set(v12);
      }
      if ( (unsigned int)(v16 - 14) <= 0x12 )
      {
        v17 = (int)((double)(v16 - 13) * 2.10526316 + 20.0);
        goto LABEL_27;
      }
      v18 = 1.42857143;
      v19 = v16 - 32;
LABEL_26:
      v17 = (int)((double)v19 * v18 + 60.0);
      goto LABEL_27;
    }
  }
  else
  {
    result = dword_2E7E34;
    if ( v14 >= dword_2E7E34 )
      goto LABEL_21;
  }
  return result;
}
