unsigned int __fastcall power_off(int a1)
{
  byte_2E95F0 = 0;
  bitmain_power_off(a1);
  return sleep(1u);
}
