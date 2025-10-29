int i2c_sim_uninit()
{
  int result; // r0

  if ( dword_2D2598 > 0 )
    close(dword_2D2598);
  if ( dword_2D2590 > 0 )
    close(dword_2D2590);
  result = dword_2D2594;
  if ( dword_2D2594 > 0 )
    return close(dword_2D2594);
  return result;
}
