int *__fastcall object::read::pe::section::<impl object::pe::ImageSectionHeader>::pe_file_range_at(
        int *result,
        _DWORD *a2,
        unsigned int a3)
{
  unsigned int v3; // r3
  int v4; // lr
  unsigned int v5; // r12
  unsigned int v6; // r2
  int v7; // r1
  bool v8; // cf
  int v9; // r1

  v3 = a2[3];
  v4 = 0;
  if ( a3 >= v3 )
  {
    v5 = a3 - v3;
    v6 = a2[4];
    if ( a2[2] < v6 )
      v6 = a2[2];
    if ( v6 > v5 )
    {
      v7 = a2[5];
      v8 = __CFADD__(v7, v5);
      v9 = v7 + v5;
      if ( !v8 )
      {
        v4 = 1;
        result[1] = v9;
        result[2] = v6 - v5;
      }
    }
  }
  *result = v4;
  return result;
}
