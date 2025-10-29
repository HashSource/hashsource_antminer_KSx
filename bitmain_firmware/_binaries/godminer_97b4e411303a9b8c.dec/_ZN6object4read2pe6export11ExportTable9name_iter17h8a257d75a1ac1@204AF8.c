_DWORD *__fastcall object::read::pe::export::ExportTable::name_iter(_DWORD *result, _DWORD *a2)
{
  unsigned int v2; // r2
  int v3; // r3
  int v4; // lr
  unsigned int v5; // r1
  int v6; // r4

  v2 = a2[5];
  v3 = a2[4];
  v4 = a2[6];
  v5 = a2[7];
  *result = v3 + 4 * v2;
  result[4] = 0;
  v6 = v4 + 2 * v5;
  if ( v2 < v5 )
    v5 = v2;
  result[1] = v3;
  result[2] = v6;
  result[3] = v4;
  result[5] = v5;
  result[6] = v2;
  return result;
}
