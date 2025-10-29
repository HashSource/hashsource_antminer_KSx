int __fastcall sub_242920(int result, unsigned __int8 *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // lr
  int v5; // r5
  char v6; // r1
  bool v7; // cf
  unsigned int v8; // r12
  int v9; // r12
  int v10; // lr
  unsigned int v11; // kr00_4
  int v12; // r5
  int v13; // t1
  unsigned int v14; // r4
  unsigned int v15; // r5
  int v16; // r5
  int v17; // t1
  unsigned int v18; // r4
  unsigned int v19; // r5
  int v20; // kr10_4
  int v21; // t1
  unsigned int v22; // r4
  unsigned int v23; // [sp+4h] [bp-24h] BYREF
  _DWORD v24[6]; // [sp+8h] [bp-20h] BYREF
  _DWORD v25[2]; // [sp+20h] [bp-8h] BYREF

  v23 = a4;
  if ( a4 - 2 > 0x22 )
  {
    v24[3] = 1;
    v24[5] = 1;
    v24[4] = v25;
    v24[0] = 0;
    v24[2] = &off_2E3F14;
    v25[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v25[0] = &v23;
    core::panicking::panic_fmt((int)v24, (int)&off_2E3F1C);
  }
  if ( a3 )
  {
    v5 = *a2;
    if ( v5 == 45 )
    {
      if ( a3 != 1 )
      {
LABEL_10:
        v7 = a4 >= 0x10;
        if ( a4 <= 0x10 )
          v7 = a3 >= 9;
        if ( v7 )
        {
          v8 = 0;
          if ( a4 <= 0xA )
          {
            while ( 1 )
            {
              v20 = v8 * a4;
              v21 = *a2++;
              v22 = v21 - 48;
              if ( v21 - 48 < a4 )
                v4 = v22;
              if ( v22 >= a4 )
                break;
              if ( !is_mul_ok(v8, a4) || (v8 = v20 + v4, __CFADD__(v20, v4)) )
              {
LABEL_42:
                v6 = 2;
                goto LABEL_43;
              }
              --a3;
              v4 = v22;
              if ( !a3 )
              {
LABEL_41:
                *(_DWORD *)(result + 4) = v8;
                *(_BYTE *)result = 0;
                return result;
              }
            }
          }
          else
          {
            while ( 1 )
            {
              v11 = v8;
              v10 = (v8 * (unsigned __int64)a4) >> 32;
              v9 = v8 * a4;
              v13 = *a2++;
              v12 = v13;
              v14 = v13 - 48;
              if ( !is_mul_ok(v11, a4) )
                v10 = 1;
              if ( v14 >= 0xA )
              {
                v14 = (v12 | 0x20) - 87;
                if ( (v12 | 0x20u) - 97 >= 0xFFFFFFF6 )
                  v14 = -1;
                if ( v14 >= a4 )
                  break;
              }
              if ( v10 )
                goto LABEL_42;
              v7 = __CFADD__(v9, v14);
              v8 = v9 + v14;
              if ( v7 )
                goto LABEL_42;
              if ( !--a3 )
                goto LABEL_41;
            }
          }
        }
        else
        {
          v8 = 0;
          if ( a4 > 0xA )
          {
            while ( 1 )
            {
              v17 = *a2++;
              v16 = v17;
              v18 = v17 - 48;
              if ( (unsigned int)(v17 - 48) >= 0xA )
              {
                v19 = (v16 | 0x20) - 97;
                v18 = v19 + 10;
                if ( v19 >= 0xFFFFFFF6 )
                  v18 = -1;
                if ( v18 >= a4 )
                  break;
              }
              --a3;
              v8 = v18 + v8 * a4;
              if ( !a3 )
                goto LABEL_41;
            }
          }
          else
          {
            while ( 1 )
            {
              v15 = *a2 - 48;
              if ( v15 >= a4 )
                break;
              v8 = v15 + v8 * a4;
              --a3;
              ++a2;
              if ( !a3 )
                goto LABEL_41;
            }
          }
        }
      }
    }
    else
    {
      if ( v5 != 43 )
        goto LABEL_10;
      if ( --a3 )
      {
        ++a2;
        goto LABEL_10;
      }
    }
    *(_BYTE *)(result + 1) = 1;
    *(_BYTE *)result = 1;
    return result;
  }
  v6 = 0;
LABEL_43:
  *(_BYTE *)(result + 1) = v6;
  *(_BYTE *)result = 1;
  return result;
}
