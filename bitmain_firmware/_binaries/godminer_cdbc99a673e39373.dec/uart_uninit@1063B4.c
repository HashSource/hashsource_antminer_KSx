int uart_uninit()
{
  int result; // r0

  result = dword_2E9C44;
  if ( dword_2E9C44 )
  {
    result = delete_c_map(dword_2E9C44);
    dword_2E9C44 = 0;
  }
  return result;
}
