int uart_uninit()
{
  int result; // r0

  result = dword_30A7F8;
  if ( dword_30A7F8 )
  {
    result = delete_c_map((void **)dword_30A7F8);
    dword_30A7F8 = 0;
  }
  return result;
}
