unsigned int power_off()
{
  bitmain_power_on();
  byte_2F3E18 = 0;
  return sleep(1u);
}
