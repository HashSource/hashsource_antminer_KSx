bool is_power_protocal_v2()
{
  bool v0; // cc

  v0 = (unsigned int)dword_2E8B60 > 0x62;
  if ( dword_2E8B60 != 98 )
    v0 = (unsigned int)(dword_2E8B60 - 100) > 2;
  return !v0;
}
