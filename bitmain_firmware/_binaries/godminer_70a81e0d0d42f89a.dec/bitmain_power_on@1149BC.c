int bitmain_power_on()
{
  if ( !is_gpio_exist(dword_2E8EBC) )
  {
    gpio_export(dword_2E8EBC);
    gpio_direction(dword_2E8EBC, 1);
  }
  return gpio_write(dword_2E8EBC, 1);
}
