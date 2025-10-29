_DWORD *__fastcall object::read::pe::resource::ResourceName::data(
        _DWORD *result,
        unsigned int *a2,
        int a3,
        unsigned int a4)
{
  unsigned int v4; // r1
  bool v5; // cf
  const char *v6; // r1
  unsigned int v7; // r3
  int v8; // lr
  int v9; // r2

  v4 = *a2;
  v5 = a4 >= v4;
  if ( a4 >= v4 )
    v5 = a4 - v4 >= 2;
  if ( !v5 )
  {
    v6 = (const char *)&unk_2A8601;
LABEL_9:
    result[1] = v6;
    result[2] = 28;
    *result = 1;
    return result;
  }
  if ( v4 > 0xFFFFFFFD
    || (v5 = a4 >= v4 + 2, v7 = a4 - (v4 + 2), !v5)
    || (v8 = *(unsigned __int16 *)(a3 + v4), v7 < 2 * v8)
    || (v9 = a3 + v4 + 2, (v9 & 1) != 0) )
  {
    v6 = aInvalidResourc_2;
    goto LABEL_9;
  }
  result[1] = v9;
  result[2] = v8;
  *result = 0;
  return result;
}
