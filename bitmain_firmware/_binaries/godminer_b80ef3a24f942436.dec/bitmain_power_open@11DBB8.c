int bitmain_power_open()
{
  int result; // r0

  result = dword_3114C8;
  if ( !dword_3114C8 || !dword_3114CC )
    return sub_11D9F4();
  return result;
}
