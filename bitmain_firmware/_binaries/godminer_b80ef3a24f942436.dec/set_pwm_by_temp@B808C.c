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

  if ( !byte_2F3E28 )
  {
    clock_gettime(1, &stru_2F3E2C);
    byte_2F3E28 = 1;
    v0 = dword_2F09D8;
    v1 = dword_2F09D8 != 0;
    dbl_2F3E40 = 0.0;
    if ( dword_2F09D8 != 1 )
      goto LABEL_3;
    goto LABEL_19;
  }
  clock_gettime(1, (struct timespec *)&dword_2F3E34);
  v11 = dbl_2F3E40;
  v12 = 1000LL * (dword_2F3E34 - stru_2F3E2C.tv_sec) + (dword_2F3E38 - stru_2F3E2C.tv_nsec) / 1000000;
  if ( *(__int64 *)&dbl_2F3E40 < 20 )
  {
    result = dword_2F09F4;
    if ( v12 < dword_2F09F4 )
      return result;
LABEL_18:
    clock_gettime(1, &stru_2F3E2C);
    v0 = dword_2F09D8;
    v1 = dword_2F09D8 != 0;
    *(_QWORD *)&dbl_2F3E40 = *(_QWORD *)&v11 + 1LL;
    if ( dword_2F09D8 != 1 )
    {
LABEL_3:
      if ( !v1 )
      {
        v18 = sub_B7990();
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
        v2 = *(_QWORD *)&dbl_2F3E40;
        flt_2F3E54 = (float)get_temp(dword_2F09EC);
        v3 = fan_pwm_get();
        v4 = flt_2F3E50 - flt_2F3E54;
        v5 = v3;
        *(float *)&dbl_2F3E68 = flt_2F3E50 - flt_2F3E54;
        v6 = (float)((float)(flt_2F3E50 - flt_2F3E54)
                   - (float)(*((float *)&dbl_2F3E68 + 1) + *((float *)&dbl_2F3E68 + 1)))
           + flt_2F3E70;
        v7 = (float)(flt_2F3E50 - flt_2F3E54) - *((float *)&dbl_2F3E68 + 1);
        if ( v2 < 21 )
        {
          flt_2F3E70 = *((float *)&dbl_2F3E68 + 1);
          *((float *)&dbl_2F3E68 + 1) = flt_2F3E50 - flt_2F3E54;
          v8 = (int)(float)((float)((float)(v4 * *(float *)&dbl_2F3E60) + (float)(v7 * *(float *)&dbl_2F3E58))
                          + (float)(v6 * *((float *)&dbl_2F3E60 + 1)));
          if ( v8 < -20 )
            v8 = -20;
        }
        else
        {
          flt_2F3E70 = *((float *)&dbl_2F3E68 + 1);
          *((float *)&dbl_2F3E68 + 1) = flt_2F3E50 - flt_2F3E54;
          v8 = (int)(float)((float)((float)(v4 * *(float *)&dbl_2F3E60) + (float)(v7 * *((float *)&dbl_2F3E58 + 1)))
                          + (float)(v6 * *((float *)&dbl_2F3E60 + 1)));
        }
        temp = get_temp(dword_2F09E4);
        if ( temp >= dword_2F09E8 )
          v4 = 100.0;
        else
          v8 += v5;
        if ( temp < dword_2F09E8 )
          v4 = (float)v8;
        if ( v4 < flt_2F3E4C )
        {
          if ( flt_2F3E48 >= flt_2F3E4C )
          {
            v10 = (int)flt_2F3E4C;
            return fan_pwm_set(v10);
          }
        }
        else if ( v4 <= flt_2F3E48 )
        {
          v10 = (int)v4;
          return fan_pwm_set(v10);
        }
        v10 = (int)flt_2F3E48;
        return fan_pwm_set(v10);
      }
      v10 = 100;
      return fan_pwm_set(v10);
    }
LABEL_19:
    v14 = sub_B7990();
    if ( v14 <= 13 )
    {
      v15 = 20;
LABEL_24:
      if ( get_temp(dword_2F09E4) >= dword_2F09E8 )
        v15 = 100;
      if ( v15 < dword_2F09DC )
        v10 = dword_2F09DC;
      else
        v10 = v15;
      if ( v10 >= dword_2F09E0 )
        v10 = dword_2F09E0;
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
  result = dword_2F09F8;
  if ( v12 >= dword_2F09F8 )
    goto LABEL_18;
  return result;
}
