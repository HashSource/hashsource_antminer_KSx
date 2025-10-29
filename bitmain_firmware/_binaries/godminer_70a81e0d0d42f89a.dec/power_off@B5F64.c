unsigned int __fastcall power_off(int a1)
{
  byte_2EB900 = 0;
  bitmain_power_off(a1);
  return sleep(1u);
}
