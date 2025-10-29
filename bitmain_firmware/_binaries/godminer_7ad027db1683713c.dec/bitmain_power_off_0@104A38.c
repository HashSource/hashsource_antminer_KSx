int bitmain_power_off_0()
{
  if ( !is_gpio_exist(dword_2D0FCC) )
  {
    gpio_export(dword_2D0FCC);
    gpio_direction(dword_2D0FCC, 1);
  }
  return gpio_write(dword_2D0FCC, 1);
}
