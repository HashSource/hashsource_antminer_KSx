_DWORD *__fastcall object::read::pe::resource::ResourceDirectoryEntryData::table(_DWORD *result, int *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r1

  if ( *a2 )
  {
    v2 = *a2;
    v3 = a2[1];
    v4 = a2[2];
    *result = v2;
    result[1] = v3;
    result[2] = v4;
  }
  else
  {
    *result = 0;
  }
  return result;
}
