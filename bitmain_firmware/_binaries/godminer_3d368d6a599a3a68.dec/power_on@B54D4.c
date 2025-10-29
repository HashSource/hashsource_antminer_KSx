int power_on()
{
  int result; // r0

  result = bitmain_power_on();
  byte_2E95F0 = 1;
  return result;
}
