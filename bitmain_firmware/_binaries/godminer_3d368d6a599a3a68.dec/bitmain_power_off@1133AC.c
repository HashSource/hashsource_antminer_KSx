int bitmain_power_off()
{
  if ( !is_gpio_exist(dword_2E6BB0) )
  {
    gpio_export(dword_2E6BB0);
    gpio_direction(dword_2E6BB0, 1);
  }
  return gpio_write(dword_2E6BB0, 0);
}
