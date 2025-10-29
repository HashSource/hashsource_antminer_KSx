int i2c_sim_uninit()
{
  int result; // r0

  if ( dword_2D10A8 > 0 )
    close(dword_2D10A8);
  if ( dword_2D10A0 > 0 )
    close(dword_2D10A0);
  result = dword_2D10A4;
  if ( dword_2D10A4 > 0 )
    return close(dword_2D10A4);
  return result;
}
