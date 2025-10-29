int *__fastcall object::read::pe::section::<impl object::read::coff::section::SectionTable>::pe_file_range_at(
        int *result,
        _DWORD *a2,
        unsigned int a3)
{
  int v3; // r3
  int v4; // r12
  _DWORD *v5; // r1
  int v6; // r3
  unsigned int v7; // lr
  unsigned int v8; // r4
  int v9; // r5
  bool v10; // cf
  int v11; // r5

  v3 = a2[1];
  v4 = 0;
  if ( v3 )
  {
    v5 = (_DWORD *)(*a2 + 12);
    v6 = 40 * v3;
    while ( 1 )
    {
      v7 = a3 - *v5;
      if ( a3 >= *v5 )
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
        goto LABEL_10;
    }
    v4 = 1;
    result[1] = v11;
    result[2] = v8 - v7;
  }
LABEL_10:
  *result = v4;
  return result;
}
