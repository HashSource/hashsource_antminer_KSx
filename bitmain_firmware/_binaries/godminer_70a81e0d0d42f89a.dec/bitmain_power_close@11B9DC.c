int bitmain_power_close()
{
  if ( dword_30D008 && dword_30D00C )
    return 0;
  sub_11B80C();
  return 0;
}
