int bitmain_power_off_0()
{
  if ( !is_gpio_exist(dword_2F1790) )
  {
    gpio_export(dword_2F1790);
    gpio_direction(dword_2F1790, 1);
  }
  return gpio_write(dword_2F1790, 1);
}
