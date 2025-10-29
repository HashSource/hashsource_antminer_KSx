int power_on()
{
  int result; // r0

  result = bitmain_power_on();
  byte_2EA5F8 = 1;
  return result;
}
