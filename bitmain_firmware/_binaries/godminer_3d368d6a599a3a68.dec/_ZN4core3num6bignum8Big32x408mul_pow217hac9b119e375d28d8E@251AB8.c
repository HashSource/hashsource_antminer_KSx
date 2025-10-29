_DWORD *__fastcall core::num::bignum::Big32x40::mul_pow2(_DWORD *result, unsigned int a2)
{
  int v2; // r3
  unsigned int v3; // lr
  unsigned int v4; // r4
  int v5; // r2
  bool v6; // zf
  char v7; // r8
  unsigned int v8; // r3
  unsigned int v9; // r2
  char v10; // r9
  unsigned int v11; // r12
  int *v12; // r6
  unsigned int v13; // r4
  bool v14; // zf
  bool v15; // zf
  bool v16; // zf
  bool v17; // zf
  bool v18; // zf
  bool v19; // zf
  bool v20; // zf
  bool v21; // zf
  bool v22; // zf
  bool v23; // zf
  bool v24; // zf
  bool v25; // zf
  bool v26; // zf
  bool v27; // zf
  bool v28; // zf
  bool v29; // zf
  bool v30; // zf
  bool v31; // zf

  if ( a2 >> 8 > 4 )
    core::panicking::panic((int)aAssertionFaile_50, 29, (int)&off_2E4600);
  v2 = result[40];
  v3 = a2 >> 5;
  if ( v2 )
  {
    v4 = v2 - 1;
    do
    {
      if ( v4 > 0x27 )
        core::panicking::panic_bounds_check(v2 - 1, 40, (int)&off_2E4600);
      if ( v3 - 1 + v2 >= 0x28 )
        core::panicking::panic_bounds_check(v3 + v2 - 1, 40, (int)&off_2E4600);
      v6 = v2 == 1;
      result[v3 - 1 + v2] = result[v2 - 1];
      --v2;
    }
    while ( !v6 );
  }
  if ( a2 >= 0x20 )
  {
    v5 = a2 >> 5;
    if ( v3 <= 1 )
      v5 = 1;
    *result = 0;
    if ( a2 >= 0x40 )
    {
      result[1] = 0;
      if ( v5 != 2 )
      {
        v6 = v5 == 3;
        if ( v5 != 3 )
        {
          result[3] = 0;
          v6 = v5 == 4;
        }
        result[2] = 0;
        if ( !v6 )
        {
          v14 = v5 == 5;
          if ( v5 != 5 )
          {
            result[5] = 0;
            v14 = v5 == 6;
          }
          result[4] = 0;
          if ( !v14 )
          {
            v15 = v5 == 7;
            if ( v5 != 7 )
            {
              result[7] = 0;
              v15 = v5 == 8;
            }
            result[6] = 0;
            if ( !v15 )
            {
              v16 = v5 == 9;
              if ( v5 != 9 )
              {
                result[9] = 0;
                v16 = v5 == 10;
              }
              result[8] = 0;
              if ( !v16 )
              {
                v17 = v5 == 11;
                if ( v5 != 11 )
                {
                  result[11] = 0;
                  v17 = v5 == 12;
                }
                result[10] = 0;
                if ( !v17 )
                {
                  v18 = v5 == 13;
                  if ( v5 != 13 )
                  {
                    result[13] = 0;
                    v18 = v5 == 14;
                  }
                  result[12] = 0;
                  if ( !v18 )
                  {
                    v19 = v5 == 15;
                    if ( v5 != 15 )
                    {
                      result[15] = 0;
                      v19 = v5 == 16;
                    }
                    result[14] = 0;
                    if ( !v19 )
                    {
                      v20 = v5 == 17;
                      if ( v5 != 17 )
                      {
                        result[17] = 0;
                        v20 = v5 == 18;
                      }
                      result[16] = 0;
                      if ( !v20 )
                      {
                        v21 = v5 == 19;
                        if ( v5 != 19 )
                        {
                          result[19] = 0;
                          v21 = v5 == 20;
                        }
                        result[18] = 0;
                        if ( !v21 )
                        {
                          v22 = v5 == 21;
                          if ( v5 != 21 )
                          {
                            result[21] = 0;
                            v22 = v5 == 22;
                          }
                          result[20] = 0;
                          if ( !v22 )
                          {
                            v23 = v5 == 23;
                            if ( v5 != 23 )
                            {
                              result[23] = 0;
                              v23 = v5 == 24;
                            }
                            result[22] = 0;
                            if ( !v23 )
                            {
                              v24 = v5 == 25;
                              if ( v5 != 25 )
                              {
                                result[25] = 0;
                                v24 = v5 == 26;
                              }
                              result[24] = 0;
                              if ( !v24 )
                              {
                                v25 = v5 == 27;
                                if ( v5 != 27 )
                                {
                                  result[27] = 0;
                                  v25 = v5 == 28;
                                }
                                result[26] = 0;
                                if ( !v25 )
                                {
                                  v26 = v5 == 29;
                                  if ( v5 != 29 )
                                  {
                                    result[29] = 0;
                                    v26 = v5 == 30;
                                  }
                                  result[28] = 0;
                                  if ( !v26 )
                                  {
                                    v27 = v5 == 31;
                                    if ( v5 != 31 )
                                    {
                                      result[31] = 0;
                                      v27 = v5 == 32;
                                    }
                                    result[30] = 0;
                                    if ( !v27 )
                                    {
                                      v28 = v5 == 33;
                                      if ( v5 != 33 )
                                      {
                                        result[33] = 0;
                                        v28 = v5 == 34;
                                      }
                                      result[32] = 0;
                                      if ( !v28 )
                                      {
                                        v29 = v5 == 35;
                                        if ( v5 != 35 )
                                        {
                                          result[35] = 0;
                                          v29 = v5 == 36;
                                        }
                                        result[34] = 0;
                                        if ( !v29 )
                                        {
                                          v30 = v5 == 37;
                                          if ( v5 != 37 )
                                          {
                                            result[37] = 0;
                                            v30 = v5 == 38;
                                          }
                                          result[36] = 0;
                                          if ( !v30 )
                                          {
                                            v31 = v5 == 39;
                                            if ( v5 != 39 )
                                            {
                                              result[39] = 0;
                                              v31 = v5 == 40;
                                            }
                                            result[38] = 0;
                                            if ( !v31 )
                                              core::panicking::panic_bounds_check(40, 40, (int)&off_2E4600);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v7 = a2 & 0x1F;
  v8 = result[40] + v3;
  if ( (a2 & 0x1F) != 0 )
  {
    if ( v8 - 1 > 0x27 )
      core::panicking::panic_bounds_check(v8 - 1, 40, (int)&off_2E4600);
    v9 = result[v8 - 1];
    v10 = -(char)a2 & 0x1F;
    v11 = result[40] + v3;
    if ( v9 >> v10 )
    {
      if ( v8 > 0x27 )
        core::panicking::panic_bounds_check(result[40] + v3, 40, (int)&off_2E4600);
      v11 = v8 + 1;
      result[v8] = v9 >> v10;
    }
    if ( v3 + 1 < v8 )
    {
      v12 = &result[v8 - 1];
      do
      {
        if ( v8 - 2 >= 0x28 )
          core::panicking::panic_bounds_check(-1, 40, (int)&off_2E4600);
        --v8;
        v13 = *(v12 - 1);
        *v12-- = (v13 >> v10) | (v9 << v7);
        v9 = v13;
      }
      while ( v3 + 1 < v8 );
    }
    result[v3] <<= v7;
    result[40] = v11;
  }
  else
  {
    result[40] = v8;
  }
  return result;
}
