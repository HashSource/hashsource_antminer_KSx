_DWORD *__fastcall sub_1BD144(_DWORD *result, int *a2)
{
  unsigned int v2; // r6
  unsigned int v4; // r9
  unsigned int v5; // r7
  _DWORD *v6; // r11
  unsigned int v7; // r4
  unsigned int v8; // r8
  int v9; // r1
  int v10; // r1
  unsigned int v11; // r10
  _DWORD *v12; // [sp+4h] [bp-10h]
  int v13; // [sp+8h] [bp-Ch]
  size_t n; // [sp+10h] [bp-4h]

  v2 = a2[2];
  v4 = a2[3];
  if ( v4 >= v2 )
  {
    v5 = a2[1];
    if ( v4 <= v5 )
    {
      v12 = result;
      v6 = a2 + 5;
      v13 = *a2;
      v7 = *a2 + v2;
      n = a2[4];
      v8 = n - 1;
      if ( n <= 4 )
      {
        while ( core::slice::memchr::memrchr(*((unsigned __int8 *)v6 + v8), v7, v4 - v2) == 1 )
        {
          v4 = v2 + v10;
          if ( v2 + v10 >= v8 )
          {
            v11 = v4 - v8;
            if ( !__CFADD__(v4 - v8, n) && v4 + 1 <= v5 && !bcmp((const void *)(v13 + v11), a2 + 5, n) )
            {
              a2[3] = v11;
              v12[2] = v4 + 1;
              v12[1] = v11;
              *v12 = 1;
              return v12;
            }
          }
          a2[3] = v4;
          if ( v4 < v2 || v4 > v5 )
            goto LABEL_20;
        }
      }
      else
      {
        while ( core::slice::memchr::memrchr(*((unsigned __int8 *)v6 + v8), v7, v4 - v2) == 1 )
        {
          v4 = v2 + v9;
          if ( v2 + v9 >= v8 && !__CFADD__(v4 - v8, n) && v4 + 1 <= v5 )
            core::slice::index::slice_end_index_len_fail();
          a2[3] = v4;
          if ( v4 < v2 || v4 > v5 )
            goto LABEL_20;
        }
      }
      a2[3] = v2;
LABEL_20:
      result = v12;
    }
  }
  *result = 0;
  return result;
}
