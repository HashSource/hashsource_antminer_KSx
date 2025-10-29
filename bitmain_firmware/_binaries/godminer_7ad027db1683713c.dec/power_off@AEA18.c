unsigned int power_off()
{
  bitmain_power_on();
  byte_2D3558 = 0;
  return sleep(1u);
}
