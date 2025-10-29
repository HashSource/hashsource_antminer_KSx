int fan_pwm_get()
{
  int v0; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  if ( byte_2EA5D4 )
  {
    v0 = dword_2EA5D8;
  }
  else
  {
    v0 = pwm_init();
    byte_2EA5D4 = 1;
    dword_2EA5D8 = v0;
  }
  pwm_get(v0, &v2);
  return v2;
}
