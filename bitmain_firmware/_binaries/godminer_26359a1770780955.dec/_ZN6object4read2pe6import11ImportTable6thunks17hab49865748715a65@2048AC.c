_DWORD *__fastcall object::read::pe::import::ImportTable::thunks(_DWORD *result, int *a2, int a3)
{
  unsigned int v3; // r12
  unsigned int v4; // r3
  int v5; // r1
  bool v6; // cf
  unsigned int v7; // r12
  int v8; // r1

  v3 = a2[1];
  v4 = a3 - a2[2];
  if ( v3 >= v4 )
  {
    v5 = *a2;
    v6 = v3 >= v4;
    v7 = v3 - v4;
    *result = 0;
    v8 = v5 + v4;
    if ( !v6 )
      v7 = 0;
    result[1] = v8;
    result[2] = v7;
  }
  else
  {
    result[1] = &unk_2A7A3B;
    result[2] = 37;
    *result = 1;
  }
  return result;
}
