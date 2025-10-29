int sub_7CED0()
{
  int result; // r0

  if ( !byte_2D2384 )
  {
    result = deregister_tm_clones();
    byte_2D2384 = 1;
  }
  return result;
}
