int __fastcall sub_2425C4(int result, unsigned __int8 *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // lr
  int v5; // r7
  char v6; // r1
  bool v7; // cf
  unsigned __int64 v8; // r4
  int v9; // lr
  int v10; // r6
  int v11; // t1
  unsigned int v12; // kr10_4
  int v13; // kr20_4
  unsigned int v14; // r7
  unsigned int v16; // kr28_4
  unsigned int v17; // r6
  int v18; // r6
  int v19; // t1
  unsigned int v20; // r7
  unsigned __int64 v21; // kr38_8
  int v22; // t1
  unsigned int v23; // r6
  unsigned __int64 v24; // kr40_8
  __int64 v25; // r4
  unsigned int v26; // r6
  unsigned int v27; // [sp+4h] [bp-24h] BYREF
  _DWORD v28[6]; // [sp+8h] [bp-20h] BYREF
  _DWORD v29[2]; // [sp+20h] [bp-8h] BYREF

  v27 = a4;
  if ( a4 - 2 > 0x22 )
  {
    v28[3] = 1;
    v28[5] = 1;
    v28[4] = v29;
    v28[0] = 0;
    v28[2] = &off_2E3F14;
    v29[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v29[0] = &v27;
    core::panicking::panic_fmt((int)v28, (int)&off_2E3F1C);
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
          v7 = a3 >= 0x11;
        if ( v7 )
        {
          if ( a4 <= 0xA )
          {
            v8 = 0;
            while ( 1 )
            {
              v21 = (unsigned int)v8 * (unsigned __int64)a4;
              v22 = *a2++;
              v23 = v22 - 48;
              v24 = HIDWORD(v8) * (unsigned __int64)a4;
              if ( v22 - 48 < a4 )
                v4 = v23;
              if ( v23 >= a4 )
                break;
              HIDWORD(v25) = HIDWORD(v24) != 0;
              LODWORD(v25) = (HIDWORD(v21) + (unsigned __int64)(unsigned int)v24) >> 32;
              if ( v25
                || (v8 = v21 + __PAIR64__(v24, v4),
                    (__CFADD__((_DWORD)v21, v4) + (unsigned __int64)(unsigned int)(HIDWORD(v21) + v24)) >> 32) )
              {
LABEL_42:
                v6 = 2;
                goto LABEL_43;
              }
              --a3;
              v4 = v23;
              if ( !a3 )
              {
LABEL_47:
                *(_QWORD *)(result + 8) = v8;
                *(_BYTE *)result = 0;
                return result;
              }
            }
          }
          else
          {
            v8 = 0;
            while ( 1 )
            {
              v9 = v8 * a4;
              v11 = *a2++;
              v10 = v11;
              v12 = HIDWORD(v8);
              v13 = HIDWORD(v8) * a4;
              HIDWORD(v8) = (HIDWORD(v8) * (unsigned __int64)a4) >> 32;
              v14 = v11 - 48;
              v16 = (((unsigned int)v8 * (unsigned __int64)a4) >> 32) + v13;
              LODWORD(v8) = ((((unsigned int)v8 * (unsigned __int64)a4) >> 32) + (unsigned int)v13) >> 32;
              if ( !is_mul_ok(v12, a4) )
                HIDWORD(v8) = 1;
              if ( v14 >= 0xA )
              {
                v17 = (v10 | 0x20) - 97;
                v14 = v17 + 10;
                if ( v17 >= 0xFFFFFFF6 )
                  v14 = -1;
                if ( v14 >= a4 )
                  break;
              }
              if ( v8 )
                goto LABEL_42;
              LODWORD(v8) = v9 + v14;
              HIDWORD(v8) = __CFADD__(v9, v14) + v16;
              if ( (__CFADD__(v9, v14) + (unsigned __int64)v16) >> 32 )
                goto LABEL_42;
              if ( !--a3 )
                goto LABEL_47;
            }
          }
        }
        else if ( a4 <= 0xA )
        {
          v26 = 0;
          HIDWORD(v8) = 0;
          while ( 1 )
          {
            LODWORD(v8) = *a2 - 48;
            if ( (unsigned int)v8 >= a4 )
              break;
            HIDWORD(v8) *= a4;
            --a3;
            ++a2;
            v8 += v26 * (unsigned __int64)a4;
            v26 = v8;
            if ( !a3 )
              goto LABEL_47;
          }
        }
        else
        {
          v8 = 0;
          while ( 1 )
          {
            v19 = *a2++;
            v18 = v19;
            v20 = v19 - 48;
            if ( (unsigned int)(v19 - 48) >= 0xA )
            {
              v20 = (v18 | 0x20) - 87;
              if ( (v18 | 0x20u) - 97 >= 0xFFFFFFF6 )
                v20 = -1;
              if ( v20 >= a4 )
                break;
            }
            v8 = v8 * a4 + v20;
            if ( !--a3 )
              goto LABEL_47;
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
