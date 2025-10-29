int i2c_sim_uninit()
{
  int result; // r0

  if ( dword_2E5C84 > 0 )
    close(dword_2E5C84);
  if ( dword_2E5C7C > 0 )
    close(dword_2E5C7C);
  result = dword_2E5C80;
  if ( dword_2E5C80 > 0 )
    return close(dword_2E5C80);
  return result;
}
