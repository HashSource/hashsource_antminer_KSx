int fan_pwm_set_max()
{
  int result; // r0
  int v1; // r0

  if ( !byte_2D3534 )
  {
    v1 = pwm_init(0, 100);
    byte_2D3534 = 1;
    dword_2D3538 = v1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_2D3538, 0x64u);
  return result;
}
