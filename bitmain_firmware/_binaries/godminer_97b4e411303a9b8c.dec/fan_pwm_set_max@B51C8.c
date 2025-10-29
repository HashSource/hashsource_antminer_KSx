int fan_pwm_set_max()
{
  int result; // r0
  int v1; // r0

  if ( !byte_2EA5D4 )
  {
    v1 = pwm_init();
    byte_2EA5D4 = 1;
    dword_2EA5D8 = v1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_2EA5D8, 100);
  return result;
}
