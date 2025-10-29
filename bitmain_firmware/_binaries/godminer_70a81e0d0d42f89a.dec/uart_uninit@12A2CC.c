int uart_uninit()
{
  int result; // r0

  result = dword_30DB30;
  if ( dword_30DB30 )
  {
    result = delete_c_map((void **)dword_30DB30);
    dword_30DB30 = 0;
  }
  return result;
}
