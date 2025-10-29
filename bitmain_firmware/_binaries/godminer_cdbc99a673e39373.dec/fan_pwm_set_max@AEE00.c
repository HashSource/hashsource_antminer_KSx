int fan_pwm_set_max()
{
  int result; // r0
  int v1; // r0

  if ( !byte_2D4A24 )
  {
    v1 = pwm_init();
    byte_2D4A24 = 1;
    dword_2D4A28 = v1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_2D4A28, 100);
  return result;
}
