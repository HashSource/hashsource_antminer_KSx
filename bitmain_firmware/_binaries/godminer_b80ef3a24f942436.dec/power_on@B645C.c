int power_on()
{
  int result; // r0

  result = bitmain_power_off_0();
  byte_2F3E18 = 1;
  return result;
}
