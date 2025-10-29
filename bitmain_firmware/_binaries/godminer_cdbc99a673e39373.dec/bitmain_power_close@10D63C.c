int bitmain_power_close()
{
  if ( dword_2EA050 && dword_2EA054 )
    return 0;
  sub_10D48C();
  return 0;
}
