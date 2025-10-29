int i2c_sim_uninit()
{
  int result; // r0

  if ( dword_2E8F98 > 0 )
    close(dword_2E8F98);
  if ( dword_2E8F90 > 0 )
    close(dword_2E8F90);
  result = dword_2E8F94;
  if ( dword_2E8F94 > 0 )
    return close(dword_2E8F94);
  return result;
}
