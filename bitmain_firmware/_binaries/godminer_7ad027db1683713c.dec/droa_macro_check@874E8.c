int droa_macro_check()
{
  int result; // r0

  result = access("/nvdata/droaswitch", 0);
  if ( !result )
    return sub_86038();
  return result;
}
