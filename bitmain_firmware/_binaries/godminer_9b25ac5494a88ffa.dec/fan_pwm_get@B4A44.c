int fan_pwm_get()
{
  int v0; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  if ( byte_2E85BC )
  {
    v0 = dword_2E85C0;
  }
  else
  {
    v0 = pwm_init();
    byte_2E85BC = 1;
    dword_2E85C0 = v0;
  }
  pwm_get(v0, &v2);
  return v2;
}
