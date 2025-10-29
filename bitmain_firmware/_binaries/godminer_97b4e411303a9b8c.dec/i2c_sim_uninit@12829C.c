int i2c_sim_uninit()
{
  int result; // r0

  if ( dword_2E7C90 > 0 )
    close(dword_2E7C90);
  if ( dword_2E7C88 > 0 )
    close(dword_2E7C88);
  result = dword_2E7C8C;
  if ( dword_2E7C8C > 0 )
    return close(dword_2E7C8C);
  return result;
}
