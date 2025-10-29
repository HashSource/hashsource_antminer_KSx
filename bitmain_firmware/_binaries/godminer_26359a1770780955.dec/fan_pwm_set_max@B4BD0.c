int fan_pwm_set_max()
{
  int result; // r0
  int v1; // r0

  if ( !byte_2E95C4 )
  {
    v1 = pwm_init();
    byte_2E95C4 = 1;
    dword_2E95C8 = v1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_2E95C8, 100);
  return result;
}
