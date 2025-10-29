char *__fastcall sub_1AF70C(char *result, int a2)
{
  int v2; // r12
  char *v3; // r2
  int v4; // r1
  char *v5; // r4
  int v6; // lr
  unsigned int v7; // r5
  char *v8; // r3
  int v9; // t1
  int v10; // r1
  int v11; // r7
  int v12; // r7
  unsigned int v13; // r3
  unsigned int v14; // r7
  char *v15; // r10
  unsigned int v16; // t1
  char v17; // r5
  char v18; // r3
  char v19; // r7
  char v20; // r6
  int v21; // r3
  unsigned int v22; // r5
  int v23; // r1

  v3 = &result[a2];
  if ( a2 )
  {
    v4 = 0;
    v5 = result;
    v6 = 1;
    while ( 1 )
    {
      v8 = v5;
      v2 = v4;
      v9 = *v5++;
      v7 = (unsigned __int8)v9;
      if ( v9 <= -1 )
      {
        v10 = v7 & 0x1F;
        v11 = v8[1] & 0x3F;
        if ( v7 <= 0xDF )
        {
          v7 = v11 | (v10 << 6);
          v5 = v8 + 2;
        }
        else
        {
          v12 = v8[2] & 0x3F | (v11 << 6);
          if ( v7 < 0xF0 )
          {
            v7 = v12 | (v10 << 12);
            v5 = v8 + 3;
          }
          else
          {
            v5 = v8 + 4;
            v7 = v8[3] & 0x3F | (v12 << 6) | ((v7 & 7) << 18);
            if ( v7 == 1114112 )
            {
              v6 = 0;
              if ( v5 != v3 )
              {
                while ( 1 )
                {
LABEL_34:
                  v15 = v3;
                  v16 = (unsigned __int8)*--v3;
                  v14 = v16;
                  v17 = v16;
                  if ( (char)v16 <= -1 )
                  {
                    v3 = v15 - 2;
                    v18 = *(v15 - 2);
                    v19 = v18;
                    if ( v18 >= -64 )
                    {
                      v14 = v17 & 0x3F | ((v18 & 0x1F) << 6);
                      if ( v14 == 1114112 )
                        goto LABEL_55;
                    }
                    else
                    {
                      v3 = v15 - 3;
                      v20 = *(v15 - 3);
                      if ( v20 >= -64 )
                      {
                        v21 = v20 & 0xF;
                      }
                      else
                      {
                        v3 = v15 - 4;
                        v21 = v20 & 0x3F | ((*(v15 - 4) & 7) << 6);
                      }
                      v14 = v17 & 0x3F | ((v19 & 0x3F | (v21 << 6)) << 6);
                      if ( v14 == 1114112 )
                        goto LABEL_55;
                    }
                  }
                  if ( v14 - 9 >= 5 && v14 != 32 )
                  {
                    if ( v14 < 0x80 )
                      goto LABEL_55;
                    v22 = v14 >> 8;
                    if ( v14 >> 8 > 0x1F )
                    {
                      if ( v22 == 32 )
                      {
                        if ( (core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v14] & 2) == 0 )
                          goto LABEL_55;
                      }
                      else if ( v22 != 48 || v14 != 12288 )
                      {
                        goto LABEL_55;
                      }
                    }
                    else if ( v22 )
                    {
                      if ( v22 != 22 || v14 != 5760 )
                        goto LABEL_55;
                    }
                    else if ( (core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v14] & 1) == 0 )
                    {
                      goto LABEL_55;
                    }
                  }
                  if ( v5 == v3 )
                    goto LABEL_55;
                }
              }
              goto LABEL_55;
            }
          }
        }
      }
      v4 = v5 - v8 + v2;
      if ( v7 - 9 >= 5 && v7 != 32 )
      {
        if ( v7 < 0x80 )
          goto LABEL_26;
        v13 = v7 >> 8;
        if ( v7 >> 8 > 0x1F )
        {
          if ( v13 == 32 )
          {
            if ( (core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v7] & 2) == 0 )
              goto LABEL_26;
          }
          else if ( v13 != 48 || v7 != 12288 )
          {
LABEL_26:
            if ( v5 != v3 )
              goto LABEL_34;
            goto LABEL_55;
          }
        }
        else if ( v13 )
        {
          if ( v13 != 22 || v7 != 5760 )
            goto LABEL_26;
        }
        else if ( (core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v7] & 1) == 0 )
        {
          goto LABEL_26;
        }
      }
      if ( v5 == v3 )
        return result;
    }
  }
  v6 = 0;
  v5 = result;
  if ( result != v3 )
    goto LABEL_34;
LABEL_55:
  v23 = 0;
  if ( v6 )
    v23 = v2;
  result += v23;
  return result;
}
