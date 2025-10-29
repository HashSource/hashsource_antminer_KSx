int bitmain_power_open()
{
  int result; // r0

  result = dword_30BCF0;
  if ( !dword_30BCF0 || !dword_30BCF4 )
    return sub_11A4DC();
  return result;
}
