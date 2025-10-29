int power_on()
{
  int result; // r0

  result = bitmain_power_on();
  byte_2EB900 = 1;
  return result;
}
