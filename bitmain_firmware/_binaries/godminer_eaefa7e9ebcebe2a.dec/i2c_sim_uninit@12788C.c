int i2c_sim_uninit()
{
  int result; // r0

  if ( dword_2E6C8C > 0 )
    close(dword_2E6C8C);
  if ( dword_2E6C84 > 0 )
    close(dword_2E6C84);
  result = dword_2E6C88;
  if ( dword_2E6C88 > 0 )
    return close(dword_2E6C88);
  return result;
}
