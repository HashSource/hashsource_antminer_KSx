bool is_power_protocal_v2()
{
  bool v0; // cc

  v0 = (unsigned int)dword_30BCF8 > 0x62;
  if ( dword_30BCF8 != 98 )
    v0 = (unsigned int)(dword_30BCF8 - 100) > 2;
  return !v0;
}
