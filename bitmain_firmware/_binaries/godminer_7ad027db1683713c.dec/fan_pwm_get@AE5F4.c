int fan_pwm_get()
{
  int v0; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  if ( byte_2D3534 )
  {
    v0 = dword_2D3538;
  }
  else
  {
    v0 = pwm_init(0, 1);
    byte_2D3534 = 1;
    dword_2D3538 = v0;
  }
  pwm_get(v0, &v2);
  return v2;
}
