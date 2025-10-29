int bitmain_power_on()
{
  if ( !is_gpio_exist(dword_2E5BA8) )
  {
    gpio_export(dword_2E5BA8);
    gpio_direction(dword_2E5BA8, 1);
  }
  return gpio_write(dword_2E5BA8, 1);
}
