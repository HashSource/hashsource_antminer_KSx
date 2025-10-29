void *__fastcall sub_22F758(
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
  char **v15; // r2
  int v16; // r1
  char *v17; // r2
  char v18; // r5

  v9 = a4;
  result = (void *)a8;
  if ( a9 >= a8 || a9 >= a8 - a9 )
    goto LABEL_7;
  v14 = a5;
  if ( a7 >= a8 - a7 || (v14 = a5, a8 - 2 * a7 < 2 * a9) )
  {
    if ( a9 >= a7 || a7 - a9 < a8 - (a7 - a9) )
    {
LABEL_7:
      *(_DWORD *)a1 = 0;
      return 0;
    }
    if ( a4 > a3 )
    {
      v15 = &off_2CEDD4;
    }
    else
    {
      v16 = 0;
      result = a2;
      while ( a4 != v16 )
      {
        v17 = (char *)result + a4;
        result = (char *)result - 1;
        ++v16;
        if ( *(v17 - 1) != 57 )
        {
          ++*((_BYTE *)result + a4);
          if ( a4 - v16 + 1 < a4 )
            result = memset((char *)result + a4 + 1, 48, v16 - 1);
          goto LABEL_23;
        }
      }
      if ( a4 )
      {
        *a2 = 49;
        v18 = 48;
        if ( a4 != 1 )
          memset(a2 + 1, 48, a4 - 1);
      }
      else
      {
        v18 = 49;
      }
      result = (void *)(v14 + 1);
      v14 = (__int16)(v14 + 1);
      if ( v9 < a3 )
      {
        result = (void *)a6;
        if ( v14 > a6 )
          a2[v9++] = v18;
      }
LABEL_23:
      if ( v9 <= a3 )
        goto LABEL_24;
      v15 = &off_2CEDE4;
    }
LABEL_27:
    core::slice::index::slice_end_index_len_fail(v9, a3, (int)v15);
  }
  if ( a4 > a3 )
  {
    v15 = &off_2CEDC4;
    goto LABEL_27;
  }
LABEL_24:
  *(_WORD *)(a1 + 8) = v14;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = v9;
  return result;
}
