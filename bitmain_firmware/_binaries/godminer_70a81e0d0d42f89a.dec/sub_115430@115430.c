int sub_115430()
{
  if ( hal_led_red_addr() >= 0 )
    return hal_led_red_addr();
  else
    return 0;
}
