unsigned int power_off()
{
  bitmain_power_off();
  byte_2E85E0 = 0;
  return sleep(1u);
}
