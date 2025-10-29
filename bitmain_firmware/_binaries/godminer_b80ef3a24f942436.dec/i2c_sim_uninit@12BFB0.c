int i2c_sim_uninit()
{
  int result; // r0

  if ( dword_2F187C > 0 )
    close(dword_2F187C);
  if ( dword_2F1874 > 0 )
    close(dword_2F1874);
  result = dword_2F1878;
  if ( dword_2F1878 > 0 )
    return close(dword_2F1878);
  return result;
}
