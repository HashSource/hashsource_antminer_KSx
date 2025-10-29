int fan_pwm_set_max()
{
  int result; // r0
  int v1; // r0

  if ( !byte_2F3DF4 )
  {
    v1 = pwm_init(0, 100);
    byte_2F3DF4 = 1;
    dword_2F3DF8 = v1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_2F3DF8, 0x64u);
  return result;
}
