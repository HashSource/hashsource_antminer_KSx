bool is_power_protocal_v2()
{
  bool v0; // cc

  v0 = (unsigned int)dword_2EA058 > 0x62;
  if ( dword_2EA058 != 98 )
    v0 = (unsigned int)(dword_2EA058 - 100) > 2;
  return !v0;
}
