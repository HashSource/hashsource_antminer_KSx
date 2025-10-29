int bitmain_power_open()
{
  int result; // r0

  result = dword_2E8B58;
  if ( !dword_2E8B58 || !dword_2E8B5C )
    return sub_10C79C();
  return result;
}
