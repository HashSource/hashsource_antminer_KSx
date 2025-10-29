int __fastcall custom_param_check(int a1)
{
  if ( opt_algo != 12 || !fan_pwm_fixed )
    return 0;
  sub_8BB08(a1);
  return 0;
}
