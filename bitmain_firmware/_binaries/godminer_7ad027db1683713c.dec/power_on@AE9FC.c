int power_on()
{
  int result; // r0

  result = bitmain_power_off_0();
  byte_2D3558 = 1;
  return result;
}
