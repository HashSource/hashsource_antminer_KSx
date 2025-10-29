int bitmain_power_open()
{
  int result; // r0

  result = dword_2EA050;
  if ( !dword_2EA050 || !dword_2EA054 )
    return sub_10D88C();
  return result;
}
