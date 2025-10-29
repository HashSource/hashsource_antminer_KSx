bool is_power_protocal_v2()
{
  bool v0; // cc

  v0 = (unsigned int)dword_306CB0 > 0x62;
  if ( dword_306CB0 != 98 )
    v0 = (unsigned int)(dword_306CB0 - 100) > 2;
  return !v0;
}
