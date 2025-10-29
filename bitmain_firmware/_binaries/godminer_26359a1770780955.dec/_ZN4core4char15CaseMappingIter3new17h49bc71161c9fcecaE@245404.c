_DWORD *__fastcall core::char::CaseMappingIter::new(_DWORD *result, int *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r1

  v2 = a2[2];
  if ( v2 )
  {
    v3 = *a2;
    v4 = a2[1];
    *result = v3;
    result[1] = v4;
    result[2] = v2;
  }
  else
  {
    v5 = *a2;
    v6 = a2[1];
    *result = v5;
    if ( v6 )
    {
      result[1] = v6;
      result[2] = 1114112;
    }
    else
    {
      result[2] = 1114113;
    }
  }
  return result;
}
