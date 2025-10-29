int droa_macro_check()
{
  int result; // r0
  FILE *v1; // r0

  result = access("/nvdata/droaswitch", 0);
  if ( result )
  {
    v1 = (FILE *)fopen64("/nvdata/droaswitch", "w");
    if ( v1 )
      return fclose(v1);
    else
      return sub_87F24(0);
  }
  return result;
}
