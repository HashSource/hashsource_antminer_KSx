unsigned int power_off()
{
  bitmain_power_off();
  byte_2D4A48 = 0;
  return sleep(1u);
}
