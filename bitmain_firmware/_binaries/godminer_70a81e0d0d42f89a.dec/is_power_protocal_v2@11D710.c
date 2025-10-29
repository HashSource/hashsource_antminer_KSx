bool is_power_protocal_v2()
{
  bool v0; // cc

  v0 = (unsigned int)dword_30D010 > 0x62;
  if ( dword_30D010 != 98 )
    v0 = (unsigned int)(dword_30D010 - 100) > 2;
  return !v0;
}
