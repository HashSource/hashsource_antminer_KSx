_DWORD *__fastcall object::read::pe::resource::ResourceDirectory::root(_DWORD *result, int *a2)
{
  unsigned int v2; // r2
  int v3; // r1
  int v4; // r3

  v2 = a2[1];
  if ( v2 >= 0x10 )
  {
    v3 = *a2;
    v4 = *(unsigned __int16 *)(v3 + 12) + *(unsigned __int16 *)(v3 + 14);
    if ( v2 - 16 >= 8 * v4 )
    {
      result[2] = v3;
      *result = v3 + 16;
      result[1] = v4;
    }
    else
    {
      result[1] = aInvalidResourc_0;
      result[2] = 30;
      *result = 0;
    }
  }
  else
  {
    result[1] = aInvalidResourc;
    result[2] = 29;
    *result = 0;
  }
  return result;
}
