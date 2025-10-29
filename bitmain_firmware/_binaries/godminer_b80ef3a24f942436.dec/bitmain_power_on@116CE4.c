int bitmain_power_on()
{
  if ( !is_gpio_exist(dword_2F1790) )
  {
    gpio_export(dword_2F1790);
    gpio_direction(dword_2F1790, 1);
  }
  return gpio_write(dword_2F1790, 0);
}
