const char *__fastcall gimli::constants::DwChildren::static_string(unsigned __int8 *a1)
{
  int v1; // r0

  v1 = *a1;
  if ( !v1 )
    return aDwChildrenNo;
  if ( v1 == 1 )
    return aDwChildrenYes;
  return 0;
}
