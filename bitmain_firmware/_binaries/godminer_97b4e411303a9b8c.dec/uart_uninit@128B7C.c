int uart_uninit()
{
  int result; // r0

  result = dword_30C818;
  if ( dword_30C818 )
  {
    result = delete_c_map((void **)dword_30C818);
    dword_30C818 = 0;
  }
  return result;
}
