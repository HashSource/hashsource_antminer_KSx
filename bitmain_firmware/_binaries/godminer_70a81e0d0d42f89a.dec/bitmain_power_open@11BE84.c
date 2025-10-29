int bitmain_power_open()
{
  int result; // r0

  result = dword_30D008;
  if ( !dword_30D008 || !dword_30D00C )
    return sub_11BC2C();
  return result;
}
