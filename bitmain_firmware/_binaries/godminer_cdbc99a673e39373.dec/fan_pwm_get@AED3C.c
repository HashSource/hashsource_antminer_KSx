int fan_pwm_get()
{
  int v0; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  if ( byte_2D4A24 )
  {
    v0 = dword_2D4A28;
  }
  else
  {
    v0 = pwm_init();
    byte_2D4A24 = 1;
    dword_2D4A28 = v0;
  }
  pwm_get(v0, &v2);
  return v2;
}
