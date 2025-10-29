_DWORD *__fastcall object::read::pe::data_directory::<impl object::pe::ImageDataDirectory>::file_range(
        _DWORD *result,
        unsigned int *a2,
        _DWORD *a3)
{
  int v3; // r5
  unsigned int v4; // r12
  _DWORD *v5; // r3
  int v6; // r2
  unsigned int v7; // lr
  unsigned int v8; // r4
  int v9; // r5
  bool v10; // cf
  int v11; // r5
  unsigned int v12; // r1
  int v13; // r2
  const char *v14; // r1

  v3 = a3[1];
  if ( !v3 )
  {
LABEL_11:
    v13 = 32;
    v14 = "Invalid data dir virtual addressMissing PE forwarded export namecritical_section_default_timeoutdynamic_value_"
          "reloc_table_offsetImageAlpha64RuntimeFunctionEntry\a";
    goto LABEL_12;
  }
  v4 = *a2;
  v5 = (_DWORD *)(*a3 + 12);
  v6 = 40 * v3;
  while ( 1 )
  {
    v7 = v4 - *v5;
    if ( v4 >= *v5 )
    {
      v8 = v5[1];
      if ( *(v5 - 1) < v8 )
        v8 = *(v5 - 1);
      if ( v8 > v7 )
      {
        v9 = v5[2];
        v10 = __CFADD__(v9, v7);
        v11 = v9 + v7;
        if ( !v10 )
          break;
      }
    }
    v6 -= 40;
    v5 += 10;
    if ( !v6 )
      goto LABEL_11;
  }
  v12 = a2[1];
  if ( v12 > v8 - v7 )
  {
    v13 = 21;
    v14 = aInvalidDataDir_0;
LABEL_12:
    result[1] = v14;
    result[2] = v13;
    *result = 1;
    return result;
  }
  result[2] = v12;
  result[1] = v11;
  *result = 0;
  return result;
}
