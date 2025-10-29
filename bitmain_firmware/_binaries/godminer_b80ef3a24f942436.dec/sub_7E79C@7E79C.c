int sub_7E79C()
{
  int result; // r0

  if ( !byte_2F2B5C )
  {
    result = deregister_tm_clones();
    byte_2F2B5C = 1;
  }
  return result;
}
