int __fastcall sub_113904(unsigned int a1)
{
  if ( a1 == 2 )
  {
    if ( hal_led_green_addr() < 0 )
      return 0;
    return hal_led_green_addr();
  }
  else if ( a1 <= 2 )
  {
    if ( a1 != 1 )
      return 0;
    return sub_1138E4();
  }
  else
  {
    if ( a1 != 256 )
    {
      if ( a1 == 257 && hal_key_ipreport_addr() >= 0 )
        return hal_key_ipreport_addr();
      return 0;
    }
    if ( hal_key_reset_addr() < 0 )
      return 0;
    return hal_key_reset_addr();
  }
}
