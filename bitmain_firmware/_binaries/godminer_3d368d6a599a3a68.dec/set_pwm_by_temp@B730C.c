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

  if ( !byte_2E9600 )
  {
    clock_gettime(1, &stru_2E9604);
    byte_2E9600 = 1;
    v1 = dword_2E5E10;
    v2 = dword_2E5E10 != 0;
    dbl_2E9618 = 0.0;
    if ( dword_2E5E10 != 1 )
      goto LABEL_3;
    goto LABEL_19;
  }
  clock_gettime(1, (struct timespec *)&dword_2E960C);
  v13 = dbl_2E9618;
  v14 = 1000LL * (dword_2E960C - stru_2E9604.tv_sec) + (dword_2E9610 - stru_2E9604.tv_nsec) / 1000000;
  if ( *(__int64 *)&dbl_2E9618 >= 20 )
  {
    result = dword_2E5E30;
    if ( v14 >= dword_2E5E30 )
    {
LABEL_18:
      clock_gettime(1, &stru_2E9604);
      v1 = dword_2E5E10;
      v2 = dword_2E5E10 != 0;
      *(_QWORD *)&dbl_2E9618 = *(_QWORD *)&v13 + 1LL;
      if ( dword_2E5E10 != 1 )
      {
LABEL_3:
        if ( !v2 )
        {
          v20 = sub_B6A80();
          if ( v20 <= 18 )
          {
            v17 = 40;
            goto LABEL_24;
          }
          if ( (unsigned int)(v20 - 19) <= 0xE )
          {
            v17 = (int)((double)(v20 - 18) * 0.666666667 + 40.0);
            goto LABEL_24;
          }
          if ( (unsigned int)(v20 - 34) <= 4 )
          {
            v17 = 50;
            goto LABEL_24;
          }
          if ( (unsigned int)(v20 - 39) <= 9 )
          {
            v17 = (int)((double)(v20 - 38) + 50.0);
            goto LABEL_24;
          }
          if ( (unsigned int)(v20 - 49) > 6 )
          {
            v17 = 100;
            goto LABEL_24;
          }
          v19 = v20 - 48;
          v18 = 5.71428571;
          goto LABEL_23;
        }
        if ( v1 == 2 )
        {
          v3 = *(_QWORD *)&dbl_2E9618;
          temp = get_temp(dword_2E5E24);
          sub_B6CD0();
          flt_2E962C = (float)temp;
          flt_2E9628 = (float)SLODWORD(flt_2E5E28) + v0;
          v5 = fan_pwm_get();
          v6 = flt_2E9628 - flt_2E962C;
          v7 = v5;
          *(float *)&dbl_2E9640 = flt_2E9628 - flt_2E962C;
          v8 = (float)((float)(flt_2E9628 - flt_2E962C)
                     - (float)(*((float *)&dbl_2E9640 + 1) + *((float *)&dbl_2E9640 + 1)))
             + flt_2E9648;
          v9 = (float)(flt_2E9628 - flt_2E962C) - *((float *)&dbl_2E9640 + 1);
          if ( v3 < 21 )
          {
            flt_2E9648 = *((float *)&dbl_2E9640 + 1);
            *((float *)&dbl_2E9640 + 1) = flt_2E9628 - flt_2E962C;
            v10 = (int)(float)((float)((float)(v6 * *(float *)&dbl_2E9638) + (float)(v9 * *(float *)&dbl_2E9630))
                             + (float)(v8 * *((float *)&dbl_2E9638 + 1)));
            if ( v10 < -20 )
              v10 = -20;
          }
          else
          {
            flt_2E9648 = *((float *)&dbl_2E9640 + 1);
            *((float *)&dbl_2E9640 + 1) = flt_2E9628 - flt_2E962C;
            v10 = (int)(float)((float)((float)(v6 * *(float *)&dbl_2E9638) + (float)(v9 * *((float *)&dbl_2E9630 + 1)))
                             + (float)(v8 * *((float *)&dbl_2E9638 + 1)));
          }
          v11 = get_temp(dword_2E5E1C);
          if ( v11 >= dword_2E5E20 )
            v6 = 100.0;
          else
            v10 += v7;
          if ( v11 < dword_2E5E20 )
            v6 = (float)v10;
          if ( v6 < flt_2E9624 )
          {
            if ( flt_2E9620 >= flt_2E9624 )
            {
              v12 = (int)flt_2E9624;
              return fan_pwm_set(v12);
            }
          }
          else if ( v6 <= flt_2E9620 )
          {
            v12 = (int)v6;
            return fan_pwm_set(v12);
          }
          v12 = (int)flt_2E9620;
          return fan_pwm_set(v12);
        }
        v12 = 100;
        return fan_pwm_set(v12);
      }
LABEL_19:
      v16 = sub_B6A80();
      if ( v16 <= 13 )
      {
        v17 = 20;
LABEL_24:
        if ( get_temp(dword_2E5E1C) >= dword_2E5E20 )
          v17 = 100;
        if ( v17 < dword_2E5E14 )
          v12 = dword_2E5E14;
        else
          v12 = v17;
        if ( v12 >= dword_2E5E18 )
          v12 = dword_2E5E18;
        return fan_pwm_set(v12);
      }
      if ( (unsigned int)(v16 - 14) <= 0x12 )
      {
        v17 = (int)((double)(v16 - 13) * 2.10526316 + 20.0);
        goto LABEL_24;
      }
      v18 = 1.42857143;
      v19 = v16 - 32;
LABEL_23:
      v17 = (int)((double)v19 * v18 + 60.0);
      goto LABEL_24;
    }
  }
  else
  {
    result = dword_2E5E2C;
    if ( v14 >= dword_2E5E2C )
      goto LABEL_18;
  }
  return result;
}
