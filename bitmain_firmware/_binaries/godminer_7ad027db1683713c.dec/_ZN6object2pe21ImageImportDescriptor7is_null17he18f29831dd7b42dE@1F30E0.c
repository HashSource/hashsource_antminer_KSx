bool __fastcall object::pe::ImageImportDescriptor::is_null(int *a1)
{
  int v1; // r2
  _BOOL4 result; // r0
  int v4; // r2
  bool v5; // zf

  v1 = *a1;
  result = 0;
  if ( !v1 )
  {
    v4 = a1[1];
    v5 = v4 == 0;
    if ( !v4 )
      v5 = a1[2] == 0;
    if ( v5 && !a1[3] )
      return a1[4] == 0;
  }
  return result;
}
