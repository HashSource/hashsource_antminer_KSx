void *__fastcall sub_2308C8(
        int a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int16 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9)
{
  unsigned int v9; // r4
  void *result; // r0
  int v14; // r8
  int v15; // r1
  char *v16; // r2
  char v17; // r5

  v9 = a4;
  result = (void *)a8;
  if ( a9 >= a8 || a9 >= a8 - a9 )
    goto LABEL_7;
  v14 = a5;
  if ( a7 < a8 - a7 )
  {
    v14 = a5;
    if ( a8 - 2 * a7 >= 2 * a9 )
    {
      if ( a4 <= a3 )
        goto LABEL_24;
LABEL_25:
      core::slice::index::slice_end_index_len_fail();
    }
  }
  if ( a9 >= a7 || a7 - a9 < a8 - (a7 - a9) )
  {
LABEL_7:
    *(_DWORD *)a1 = 0;
    return 0;
  }
  if ( a4 > a3 )
    goto LABEL_25;
  v15 = 0;
  result = a2;
  while ( a4 != v15 )
  {
    v16 = (char *)result + a4;
    result = (char *)result - 1;
    ++v15;
    if ( *(v16 - 1) != 57 )
    {
      ++*((_BYTE *)result + a4);
      if ( a4 - v15 + 1 < a4 )
        result = memset((char *)result + a4 + 1, 48, v15 - 1);
      goto LABEL_23;
    }
  }
  if ( a4 )
  {
    *a2 = 49;
    v17 = 48;
    if ( a4 != 1 )
      memset(a2 + 1, 48, a4 - 1);
  }
  else
  {
    v17 = 49;
  }
  result = (void *)(v14 + 1);
  v14 = (__int16)(v14 + 1);
  if ( v9 < a3 )
  {
    result = (void *)a6;
    if ( v14 > a6 )
      a2[v9++] = v17;
  }
LABEL_23:
  if ( v9 > a3 )
    goto LABEL_25;
LABEL_24:
  *(_WORD *)(a1 + 8) = v14;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = v9;
  return result;
}
