_DWORD *__fastcall object::read::pe::export::ExportTable::parse(_DWORD *result, _DWORD *a2, unsigned int a3, int a4)
{
  int v4; // r2
  const char *v5; // r1
  unsigned int v6; // r12
  int v7; // r6
  unsigned int v8; // lr
  const char *v9; // r5
  const char *v10; // r4
  int v11; // r4
  int v12; // r7
  const char *v13; // r6
  int v14; // r6
  int v15; // r9
  unsigned int v16; // r6

  if ( a3 < 0x28 )
  {
    v4 = 26;
    v5 = aInvalidPeExpor_1;
LABEL_21:
    *result = 0;
    result[1] = v5;
    result[2] = v4;
    return result;
  }
  v6 = 0;
  v7 = a2[7];
  v8 = 0;
  v9 = aRustc9eb3afe9e_0;
  v10 = aRustc9eb3afe9e_0;
  if ( v7 )
  {
    v11 = v7 - a4;
    if ( v7 - a4 > a3 || (v8 = a2[5], v8 >> 30) || a3 - v11 < 4 * v8 )
    {
      v5 = (const char *)&unk_292C4A;
LABEL_20:
      v4 = 31;
      goto LABEL_21;
    }
    v10 = (char *)a2 + v11;
  }
  v12 = a2[8];
  v13 = aRustc9eb3afe9e_0;
  if ( !v12 )
  {
LABEL_16:
    result[8] = a4;
    result[9] = a2;
    *result = a2;
    result[1] = a3;
    result[2] = v10;
    result[3] = v8;
    result[4] = v9;
    result[5] = v6;
    result[6] = v13;
    result[7] = v6;
    return result;
  }
  v14 = a2[9];
  if ( !v14 )
  {
    v5 = aMissingPeExpor;
    goto LABEL_20;
  }
  v15 = v12 - a4;
  if ( v12 - a4 > a3 || (v6 = a2[6], v6 >> 30) || a3 - v15 < 4 * v6 )
  {
    v4 = 36;
    v5 = aInvalidPeExpor;
    goto LABEL_21;
  }
  v16 = v14 - a4;
  if ( a3 >= v16 && a3 - v16 >= 2 * v6 )
  {
    v9 = (char *)a2 + v15;
    v13 = (char *)a2 + v16;
    goto LABEL_16;
  }
  *result = 0;
  result[1] = aInvalidPeExpor_0;
  result[2] = 31;
  return result;
}
