char *__fastcall sub_1BCC5C(int a1, char **a2, char *dest, size_t n)
{
  char *v4; // r6
  size_t v5; // r7
  char *v6; // r4
  char *v7; // r11
  int v11; // r4
  char *result; // r0
  void *v13; // r10
  unsigned int v14; // r0
  size_t v15; // r2
  size_t v16; // r4
  char *v17; // r1

  v4 = a2[3];
  v5 = n;
  v6 = a2[1];
  v7 = a2[2];
  if ( v7 == v4 && (unsigned int)v6 <= n )
  {
    v11 = 0;
    if ( n >= 0x7FFFFFFF )
      v5 = 0x7FFFFFFF;
    a2[2] = 0;
    a2[3] = 0;
    result = (char *)read(0, dest, v5);
    if ( result == (char *)-1 )
    {
      result = (char *)*_errno_location();
      if ( result == (char *)9 )
      {
        *(_BYTE *)a1 = 4;
        *(_DWORD *)(a1 + 4) = 0;
        return 0;
      }
    }
    else
    {
      v11 = 4;
    }
    *(_DWORD *)a1 = v11;
    *(_DWORD *)(a1 + 4) = result;
  }
  else
  {
    if ( v7 >= v4 )
    {
      v14 = (unsigned int)a2[4];
      if ( (unsigned int)v6 < v14 )
        core::slice::index::slice_start_index_len_fail(v14, (int)a2[1], (int)&off_2C9AB4);
      v13 = *a2;
      v7 = 0;
      memset(&(*a2)[v14], 0, (size_t)&v6[-v14]);
      v15 = (size_t)v6;
      if ( (unsigned int)v6 >= 0x7FFFFFFF )
        v15 = 0x7FFFFFFF;
      v4 = (char *)read(0, v13, v15);
      if ( v4 == (char *)-1 )
      {
        result = (char *)*_errno_location();
        v4 = 0;
        if ( result != (char *)9 )
        {
          *(_DWORD *)a1 = 0;
          *(_DWORD *)(a1 + 4) = result;
          return result;
        }
      }
      a2[2] = 0;
      if ( v6 <= v4 )
        v6 = v4;
      a2[3] = v4;
      a2[4] = v6;
    }
    else
    {
      v13 = *a2;
    }
    v16 = v4 - v7;
    v17 = &v7[(_DWORD)v13];
    if ( v5 < v4 - v7 )
      v16 = v5;
    if ( v16 == 1 )
    {
      if ( !v5 )
        core::panicking::panic_bounds_check(0, 0, (int)&off_2C9A94);
      *dest = *v17;
    }
    else
    {
      memcpy(dest, v17, v16);
    }
    *(_DWORD *)(a1 + 4) = v16;
    *(_BYTE *)a1 = 4;
    result = &v7[v16];
    if ( &v7[v16] < v4 )
      v4 = &v7[v16];
    a2[2] = v4;
  }
  return result;
}
