int __fastcall fan_pwm_set(unsigned int a1)
{
  int result; // r0
  unsigned int v3; // r1
  int v4; // r0

  if ( !byte_2D3534 )
  {
    v4 = pwm_init(0, 100);
    byte_2D3534 = 1;
    dword_2D3538 = v4;
  }
  if ( a1 >= 0x64 )
    a1 = 100;
  result = fan_pwm_get();
  if ( result != a1 )
  {
    if ( fan_pwm_fixed )
      v3 = fan_pwm;
    else
      v3 = a1;
    return pwm_set(dword_2D3538, v3);
  }
  return result;
}
