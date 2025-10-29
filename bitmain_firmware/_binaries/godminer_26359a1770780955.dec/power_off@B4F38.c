unsigned int power_off()
{
  bitmain_power_off();
  byte_2E95E8 = 0;
  return sleep(1u);
}
