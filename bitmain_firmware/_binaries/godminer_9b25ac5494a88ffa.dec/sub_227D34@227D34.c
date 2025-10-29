_DWORD *__fastcall sub_227D34(_DWORD *result, int *a2)
{
  size_t v2; // r7
  size_t v4; // r11
  size_t v5; // r6
  unsigned int v6; // r2
  int v7; // r8
  _DWORD *v8; // r10
  size_t v9; // r9
  unsigned __int8 *v10; // r1
  int v11; // r4
  int v12; // r0
  int v13; // r3
  int v14; // r1
  int v15; // r0
  bool v16; // zf
  unsigned int v17; // r0
  int v18; // r4
  int v19; // r0
  int v20; // r3
  int v21; // r1
  int v22; // r0
  unsigned int v23; // r0
  _DWORD *v24; // [sp+4h] [bp-8h]
  size_t v25; // [sp+8h] [bp-4h]

  v2 = a2[2];
  v4 = a2[3];
  if ( v4 < v2 )
    goto LABEL_62;
  v25 = a2[1];
  if ( v4 > v25 )
    goto LABEL_62;
  v5 = a2[4];
  v6 = v4 - v2;
  v7 = *a2;
  v8 = a2 + 5;
  v9 = v5 - 1;
  v10 = (unsigned __int8 *)(*a2 + v2);
  v24 = result;
  if ( v5 > 4 )
  {
    while ( 1 )
    {
      v11 = *((unsigned __int8 *)v8 + v9);
      if ( v6 >= 8 )
      {
        v12 = core::slice::memchr::memchr_aligned(*((unsigned __int8 *)v8 + v9), v10);
        v13 = v14;
      }
      else if ( v6 )
      {
        v12 = 1;
        if ( *v10 == v11 )
        {
          v13 = 0;
        }
        else
        {
          if ( v6 != 1 )
          {
            v12 = 1;
            if ( v10[1] == v11 )
            {
              v13 = 1;
              goto LABEL_16;
            }
            if ( v6 != 2 )
            {
              v13 = 2;
              if ( v10[2] == v11 )
                goto LABEL_16;
              if ( v6 != 3 )
              {
                v13 = 3;
                if ( v10[3] == v11 )
                  goto LABEL_16;
                if ( v6 != 4 )
                {
                  v13 = 4;
                  if ( v10[4] == v11 )
                    goto LABEL_16;
                  if ( v6 != 5 )
                  {
                    v13 = 5;
                    if ( v10[5] == v11 )
                      goto LABEL_16;
                    if ( v6 != 6 )
                    {
                      v15 = v10[6];
                      v16 = v15 == v11;
                      v17 = __clz(v15 - v11);
                      if ( v16 )
                        v6 = 6;
                      v13 = v6;
                      v12 = v17 >> 5;
                      goto LABEL_16;
                    }
                  }
                }
              }
            }
          }
          v13 = v6;
          v12 = 0;
        }
      }
      else
      {
        v13 = 0;
        v12 = 0;
      }
LABEL_16:
      if ( v12 != 1 )
        goto LABEL_60;
      v2 += v13 + 1;
      a2[2] = v2;
      if ( v2 >= v5 && v2 <= v25 )
        core::slice::index::slice_end_index_len_fail();
      v6 = v4 - v2;
      v10 = (unsigned __int8 *)(v7 + v2);
      if ( v4 < v2 )
        goto LABEL_61;
    }
  }
  while ( 1 )
  {
    v18 = *((unsigned __int8 *)v8 + v9);
    if ( v6 >= 8 )
    {
      v19 = core::slice::memchr::memchr_aligned(*((unsigned __int8 *)v8 + v9), v10);
      v20 = v21;
      goto LABEL_43;
    }
    if ( !v6 )
    {
      v20 = 0;
      v19 = 0;
      goto LABEL_43;
    }
    v19 = 1;
    if ( *v10 == v18 )
    {
      v20 = 0;
      goto LABEL_43;
    }
    if ( v6 == 1 )
    {
LABEL_40:
      v20 = v6;
      v19 = 0;
      goto LABEL_43;
    }
    v19 = 1;
    if ( v10[1] == v18 )
    {
      v20 = 1;
    }
    else
    {
      if ( v6 == 2 )
        goto LABEL_40;
      v20 = 2;
      if ( v10[2] != v18 )
      {
        if ( v6 == 3 )
          goto LABEL_40;
        v20 = 3;
        if ( v10[3] != v18 )
        {
          if ( v6 == 4 )
            goto LABEL_40;
          v20 = 4;
          if ( v10[4] != v18 )
          {
            if ( v6 == 5 )
              goto LABEL_40;
            v20 = 5;
            if ( v10[5] != v18 )
            {
              if ( v6 == 6 )
                goto LABEL_40;
              v22 = v10[6];
              v16 = v22 == v18;
              v23 = __clz(v22 - v18);
              if ( v16 )
                v6 = 6;
              v20 = v6;
              v19 = v23 >> 5;
            }
          }
        }
      }
    }
LABEL_43:
    if ( v19 != 1 )
      break;
    v2 += v20 + 1;
    a2[2] = v2;
    if ( v2 >= v5 && v2 <= v25 && !bcmp((const void *)(v7 + v2 - v5), a2 + 5, v5) )
    {
      v24[1] = v2 - v5;
      v24[2] = v2;
      *v24 = 1;
      return v24;
    }
    v6 = v4 - v2;
    v10 = (unsigned __int8 *)(v7 + v2);
    if ( v4 < v2 )
      goto LABEL_61;
  }
LABEL_60:
  a2[2] = v4;
LABEL_61:
  result = v24;
LABEL_62:
  *result = 0;
  return result;
}
