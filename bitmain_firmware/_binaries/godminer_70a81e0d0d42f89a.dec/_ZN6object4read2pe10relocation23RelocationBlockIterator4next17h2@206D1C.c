_DWORD *__fastcall object::read::pe::relocation::RelocationBlockIterator::next(_DWORD *result, int a2)
{
  unsigned int v2; // r4
  unsigned int v3; // r2
  _DWORD *v4; // lr
  const char *v5; // r3
  int v6; // r2
  const char *v7; // r1
  unsigned int v8; // r4
  unsigned int v9; // r5
  unsigned int v10; // r2
  const char *v11; // r5
  int v12; // r12

  v2 = *(_DWORD *)(a2 + 4);
  if ( !v2 )
  {
    result[2] = 0;
    *result = 0;
    return result;
  }
  v3 = v2 - 8;
  v4 = *(_DWORD **)a2;
  if ( v2 < 8 )
    v3 = 0;
  *(_DWORD *)(a2 + 4) = v3;
  v5 = aRustc9eb3afe9e_0;
  if ( v2 >= 8 )
    v5 = (const char *)(v4 + 2);
  *(_DWORD *)a2 = v5;
  if ( v2 < 8 )
  {
    v6 = 29;
    v7 = aInvalidPeReloc;
LABEL_14:
    result[1] = v7;
    result[2] = v6;
    *result = 1;
    return result;
  }
  v8 = v4[1];
  if ( v8 < 9 || (v8 & 3) != 0 )
  {
    v6 = 27;
    v7 = aInvalidPeReloc_0;
    goto LABEL_14;
  }
  v9 = (v8 - 8) & 0xFFFFFFFE;
  if ( v3 >= v9 )
  {
    v10 = v3 - v9;
    v11 = &v5[v9];
    v12 = *v4;
    *(_DWORD *)a2 = v11;
    *(_DWORD *)(a2 + 4) = v10;
    result[1] = v11;
    result[2] = v5;
    result[3] = v12;
    result[4] = v8;
    *result = 0;
  }
  else
  {
    *(_DWORD *)a2 = aRustc9eb3afe9e_0;
    *(_DWORD *)(a2 + 4) = 0;
    result[1] = aInvalidPeReloc_0;
    result[2] = 27;
    *result = 1;
  }
  return result;
}
