_DWORD *__fastcall object::read::pe::resource::<impl object::pe::ImageResourceDirectoryEntry>::data(
        _DWORD *result,
        int a2,
        int a3,
        unsigned int a4)
{
  unsigned int v4; // r4
  int v5; // r1
  bool v6; // cf
  unsigned int v7; // r3
  unsigned int v8; // r1
  int v9; // lr
  const char *v10; // r12
  unsigned int v11; // r4
  int v12; // r1
  int v13; // r5

  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 < 0 )
  {
    v8 = v5 & 0x7FFFFFFF;
    v9 = 29;
    if ( a4 >= v8 )
      v4 = a4 - v8;
    v10 = aInvalidResourc;
    if ( a4 < v8
      || v4 < 0x10
      || (v11 = v8 + 16, v9 = 30, v10 = aInvalidResourc_0, a4 < v8 + 16)
      || (v12 = a3 + v8, v13 = *(unsigned __int16 *)(v12 + 12) + *(unsigned __int16 *)(v12 + 14), a4 - v11 < 8 * v13) )
    {
      result[1] = v10;
      result[2] = v9;
      *result = 1;
    }
    else
    {
      result[3] = v12;
      result[1] = a3 + v11;
      result[2] = v13;
      *result = 0;
    }
  }
  else
  {
    v6 = a4 >= v5;
    v7 = a4 - v5;
    if ( v6 && v7 >= 0x10 )
    {
      result[1] = 0;
      result[2] = a3 + v5;
      *result = 0;
    }
    else
    {
      result[1] = aInvalidResourc_1;
      result[2] = 22;
      *result = 1;
    }
  }
  return result;
}
