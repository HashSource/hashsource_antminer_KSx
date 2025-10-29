int bitmain_power_open()
{
  int result; // r0

  result = dword_306CA0;
  if ( !dword_306CA0 || !dword_306CA4 )
    return sub_119CE4();
  return result;
}
