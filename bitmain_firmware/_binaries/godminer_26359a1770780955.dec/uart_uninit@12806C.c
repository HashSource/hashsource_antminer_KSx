int uart_uninit()
{
  int result; // r0

  result = dword_3077C8;
  if ( dword_3077C8 )
  {
    result = delete_c_map((void **)dword_3077C8);
    dword_3077C8 = 0;
  }
  return result;
}
