size_t __fastcall sub_1AF5FC(size_t *a1)
{
  size_t result; // r0
  size_t v3; // r9
  size_t v4; // r11
  size_t v5; // r7
  size_t v6; // r5
  unsigned __int8 *v7; // r1
  unsigned int v8; // r2
  int *v9; // r8
  size_t v10; // r10
  int v11; // r6
  int v12; // r0
  int v13; // r3
  int v14; // r1
  int v15; // r0
  bool v16; // zf
  unsigned int v17; // r0
  int v18; // r6
  int v19; // r0
  int v20; // r3
  int v21; // r1
  int v22; // r0
  unsigned int v23; // r0
  size_t v24; // r1
  size_t v25; // r2
  int v26; // r3
  size_t v27; // r7
  size_t v28; // r0
  size_t v29; // [sp+0h] [bp-4h]

  if ( *((_BYTE *)a1 + 37) )
    return 0;
  v3 = a1[5];
  v4 = a1[2];
  v29 = a1[3];
  if ( v3 <= v29 )
  {
    v5 = a1[4];
    if ( v3 >= v5 )
    {
      v6 = a1[6];
      v7 = (unsigned __int8 *)(v4 + v5);
      v8 = v3 - v5;
      v9 = (int *)(a1 + 7);
      v10 = v6 - 1;
      if ( v6 > 4 )
      {
        while ( 1 )
        {
          v11 = *((unsigned __int8 *)v9 + v10);
          if ( v8 >= 8 )
          {
            v12 = core::slice::memchr::memchr_aligned(*((unsigned __int8 *)v9 + v10), v7);
            v13 = v14;
          }
          else if ( v8 )
          {
            v12 = 1;
            if ( *v7 == v11 )
            {
              v13 = 0;
            }
            else
            {
              if ( v8 != 1 )
              {
                v12 = 1;
                if ( v7[1] == v11 )
                {
                  v13 = 1;
                  goto LABEL_18;
                }
                if ( v8 != 2 )
                {
                  v13 = 2;
                  if ( v7[2] == v11 )
                    goto LABEL_18;
                  if ( v8 != 3 )
                  {
                    v13 = 3;
                    if ( v7[3] == v11 )
                      goto LABEL_18;
                    if ( v8 != 4 )
                    {
                      v13 = 4;
                      if ( v7[4] == v11 )
                        goto LABEL_18;
                      if ( v8 != 5 )
                      {
                        v13 = 5;
                        if ( v7[5] == v11 )
                          goto LABEL_18;
                        if ( v8 != 6 )
                        {
                          v15 = v7[6];
                          v16 = v15 == v11;
                          v17 = __clz(v15 - v11);
                          if ( v16 )
                            v8 = 6;
                          v13 = v8;
                          v12 = v17 >> 5;
                          goto LABEL_18;
                        }
                      }
                    }
                  }
                }
              }
              v13 = v8;
              v12 = 0;
            }
          }
          else
          {
            v13 = 0;
            v12 = 0;
          }
LABEL_18:
          if ( v12 != 1 )
            goto LABEL_62;
          v5 += v13 + 1;
          a1[4] = v5;
          if ( v5 >= v6 && v5 <= v29 )
            core::slice::index::slice_end_index_len_fail();
          v8 = v3 - v5;
          v7 = (unsigned __int8 *)(v4 + v5);
          if ( v3 < v5 )
            goto LABEL_63;
        }
      }
      while ( 1 )
      {
        v18 = *((unsigned __int8 *)v9 + v10);
        if ( v8 >= 8 )
        {
          v19 = core::slice::memchr::memchr_aligned(*((unsigned __int8 *)v9 + v10), v7);
          v20 = v21;
          goto LABEL_45;
        }
        if ( !v8 )
        {
          v20 = 0;
          v19 = 0;
          goto LABEL_45;
        }
        v19 = 1;
        if ( *v7 == v18 )
        {
          v20 = 0;
          goto LABEL_45;
        }
        if ( v8 == 1 )
          break;
        v19 = 1;
        if ( v7[1] == v18 )
        {
          v20 = 1;
        }
        else
        {
          if ( v8 == 2 )
            break;
          v20 = 2;
          if ( v7[2] != v18 )
          {
            if ( v8 == 3 )
              break;
            v20 = 3;
            if ( v7[3] != v18 )
            {
              if ( v8 == 4 )
                break;
              v20 = 4;
              if ( v7[4] != v18 )
              {
                if ( v8 == 5 )
                  break;
                v20 = 5;
                if ( v7[5] != v18 )
                {
                  if ( v8 == 6 )
                    break;
                  v22 = v7[6];
                  v16 = v22 == v18;
                  v23 = __clz(v22 - v18);
                  if ( v16 )
                    v8 = 6;
                  v20 = v8;
                  v19 = v23 >> 5;
                }
              }
            }
          }
        }
LABEL_45:
        if ( v19 != 1 )
        {
LABEL_62:
          a1[4] = v3;
          goto LABEL_63;
        }
        v5 += v20 + 1;
        a1[4] = v5;
        if ( v5 >= v6 && v5 <= v29 && !bcmp((const void *)(v4 + v5 - v6), a1 + 7, v6) )
        {
          v28 = *a1;
          *a1 = v5;
          return v4 + v28;
        }
        v8 = v3 - v5;
        v7 = (unsigned __int8 *)(v4 + v5);
        if ( v3 < v5 )
          goto LABEL_63;
      }
      v20 = v8;
      v19 = 0;
      goto LABEL_45;
    }
  }
LABEL_63:
  v24 = *a1;
  v25 = a1[1];
  v26 = *((unsigned __int8 *)a1 + 36);
  v27 = v4 + *a1;
  *((_BYTE *)a1 + 37) = 1;
  result = v25 - v24;
  if ( v25 != v24 )
    result = v27;
  if ( v26 )
    return v27;
  return result;
}
