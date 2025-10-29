int sub_106464()
{
  if ( hal_led_red_addr() >= 0 )
    return hal_led_red_addr();
  else
    return 0;
}
