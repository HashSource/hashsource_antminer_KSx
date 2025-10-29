int set_pwm_by_temp()
{
  int v0; // r3
  bool v1; // cf
  signed int v2; // r0
  double v3; // r8
  __int64 v4; // r2
  int v5; // r0
  int v6; // r4
  double v7; // d18
  int v8; // r0
  int result; // r0
  int v10; // r0

  if ( !byte_2E861C )
  {
    clock_gettime(1, &stru_2E8620);
    byte_2E861C = 1;
    v0 = dword_2E4E04;
    v1 = dword_2E4E04 != 0;
    dbl_2E8630 = 0.0;
    if ( dword_2E4E04 != 1 )
    {
LABEL_3:
      if ( v1 )
      {
        if ( v0 == 2 )
          v2 = sub_B6AF8(*(_QWORD *)&dbl_2E8630 < 21LL);
        else
          v2 = 100;
        return fan_pwm_set(v2);
      }
      v10 = sub_B6388();
      if ( v10 <= 18 )
      {
        v6 = 40;
        goto LABEL_16;
      }
      if ( (unsigned int)(v10 - 19) <= 0xE )
      {
        v6 = (int)((double)(v10 - 18) * 0.666666667 + 40.0);
        goto LABEL_16;
      }
      if ( (unsigned int)(v10 - 34) <= 4 )
      {
        v6 = 50;
        goto LABEL_16;
      }
      if ( (unsigned int)(v10 - 39) <= 9 )
      {
        v6 = (int)((double)(v10 - 38) + 50.0);
        goto LABEL_16;
      }
      if ( (unsigned int)(v10 - 49) > 6 )
      {
        v6 = 100;
        goto LABEL_16;
      }
      v8 = v10 - 48;
      v7 = 5.71428571;
      goto LABEL_15;
    }
LABEL_11:
    v5 = sub_B6388();
    if ( v5 <= 13 )
    {
      v6 = 20;
LABEL_16:
      if ( get_temp(dword_2E4E10) >= dword_2E4E14 )
        v6 = 100;
      if ( v6 < dword_2E4E08 )
        v2 = dword_2E4E08;
      else
        v2 = v6;
      if ( v2 >= dword_2E4E0C )
        v2 = dword_2E4E0C;
      return fan_pwm_set(v2);
    }
    if ( (unsigned int)(v5 - 14) <= 0x12 )
    {
      v6 = (int)((double)(v5 - 13) * 2.10526316 + 20.0);
      goto LABEL_16;
    }
    v7 = 1.42857143;
    v8 = v5 - 32;
LABEL_15:
    v6 = (int)((double)v8 * v7 + 60.0);
    goto LABEL_16;
  }
  clock_gettime(1, (struct timespec *)&dword_2E8628);
  v3 = dbl_2E8630;
  v4 = 1000LL * (dword_2E8628 - stru_2E8620.tv_sec) + (dword_2E862C - stru_2E8620.tv_nsec) / 1000000;
  if ( *(__int64 *)&dbl_2E8630 >= 20 )
  {
    result = dword_2E4E24;
    if ( v4 >= dword_2E4E24 )
    {
LABEL_10:
      clock_gettime(1, &stru_2E8620);
      v0 = dword_2E4E04;
      v1 = dword_2E4E04 != 0;
      *(_QWORD *)&dbl_2E8630 = *(_QWORD *)&v3 + 1LL;
      if ( dword_2E4E04 != 1 )
        goto LABEL_3;
      goto LABEL_11;
    }
  }
  else
  {
    result = dword_2E4E20;
    if ( v4 >= dword_2E4E20 )
      goto LABEL_10;
  }
  return result;
}
