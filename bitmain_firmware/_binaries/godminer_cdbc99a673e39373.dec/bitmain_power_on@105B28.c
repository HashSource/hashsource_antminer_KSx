int bitmain_power_on()
{
  if ( !is_gpio_exist(dword_2D24BC) )
  {
    gpio_export(dword_2D24BC);
    gpio_direction(dword_2D24BC, 1);
  }
  return gpio_write(dword_2D24BC, 1);
}
