int uart_uninit()
{
  int result; // r0

  result = dword_3077D0;
  if ( dword_3077D0 )
  {
    result = delete_c_map((void **)dword_3077D0);
    dword_3077D0 = 0;
  }
  return result;
}
