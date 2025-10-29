_DWORD *__fastcall object::read::pe::import::ImportTable::descriptors(_DWORD *result, _DWORD *a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3

  v2 = a2[1];
  v3 = a2[3] - a2[2];
  if ( v2 >= v3 )
  {
    result[1] = *a2 + v3;
    result[2] = v2 - v3;
    *result = 0;
  }
  else
  {
    result[1] = &unk_2A7556;
    result[2] = 36;
    *result = 1;
  }
  return result;
}
