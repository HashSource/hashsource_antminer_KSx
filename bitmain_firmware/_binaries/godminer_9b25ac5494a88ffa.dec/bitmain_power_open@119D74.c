int bitmain_power_open()
{
  int result; // r0

  result = dword_309CD0;
  if ( !dword_309CD0 || !dword_309CD4 )
    return sub_119B1C();
  return result;
}
