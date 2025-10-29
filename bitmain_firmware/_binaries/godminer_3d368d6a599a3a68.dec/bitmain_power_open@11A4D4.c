int bitmain_power_open()
{
  int result; // r0

  result = dword_306CA8;
  if ( !dword_306CA8 || !dword_306CAC )
    return sub_11A27C();
  return result;
}
