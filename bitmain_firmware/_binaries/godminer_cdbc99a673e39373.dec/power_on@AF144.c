int power_on()
{
  int result; // r0

  result = bitmain_power_on();
  byte_2D4A48 = 1;
  return result;
}
