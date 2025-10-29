int __fastcall <core::num::nonzero::NonZeroU128 as core::str::traits::FromStr>::from_str(
        int a1,
        unsigned __int8 *a2,
        unsigned int a3)
{
  unsigned int v3; // r6
  int v4; // r3
  char v5; // r10
  unsigned int v6; // r12
  unsigned int v7; // lr
  unsigned int v8; // r9
  unsigned int v9; // r11
  unsigned int v10; // r0
  int v11; // r6
  int v12; // r12
  int v13; // lr
  int v14; // kr20_4
  __int64 v15; // kr28_8
  unsigned int v16; // r4
  int v17; // r3
  bool v18; // cf
  __int64 v19; // kr40_8
  int v20; // r3
  __int64 v21; // kr50_8
  __int64 v22; // kr58_8
  unsigned int v23; // lr
  int v24; // t1
  int v25; // r8
  unsigned int v26; // r7
  unsigned __int64 v27; // kr68_8
  _BOOL4 v28; // off

  if ( a3 )
  {
    v4 = *a2;
    if ( v4 != 45 )
    {
      if ( v4 == 43 )
      {
        if ( !--a3 )
        {
LABEL_24:
          v5 = 1;
          goto LABEL_25;
        }
        ++a2;
      }
LABEL_8:
      if ( a3 >= 0x21 )
      {
        v6 = 0;
        v7 = 0;
        v8 = 0;
        v9 = 0;
        while ( 1 )
        {
          v19 = 10LL * v8;
          v20 = (10 * (unsigned __int64)v9) >> 32;
          v21 = 10LL * v6;
          v22 = 10LL * v7;
          v23 = (10 * __PAIR64__(v7, v6)) >> 32;
          v24 = *a2++;
          v25 = HIDWORD(v22) + __CFADD__((_DWORD)v22, HIDWORD(v21)) + (_DWORD)v19;
          v26 = v24 - 48;
          v27 = (__CFADD__(__CFADD__((_DWORD)v22, HIDWORD(v21)), (_DWORD)v19)
               | (unsigned __int8)__CFADD__(HIDWORD(v22), __CFADD__((_DWORD)v22, HIDWORD(v21)) + (_DWORD)v19))
              + ((10 * __PAIR64__(v9, v8)) >> 32);
          if ( !is_mul_ok(0xAu, v9) )
            v20 = 1;
          if ( v26 < 0xA )
            v3 = v26;
          if ( v26 > 9 )
            break;
          v5 = 2;
          if ( v20 | ((HIDWORD(v19) + (unsigned __int64)(10 * v9)) >> 32) | HIDWORD(v27) )
            goto LABEL_25;
          v6 = v21 + v3;
          v18 = __CFADD__(__CFADD__((_DWORD)v21, v3), v23);
          v8 = (__PAIR64__(v25, __CFADD__((_DWORD)v21, v3)) + v23) >> 32;
          v7 = __CFADD__((_DWORD)v21, v3) + v23;
          v28 = __CFADD__(v18, v25);
          v9 = v28 + v27;
          if ( __CFADD__(v28, (_DWORD)v27) )
            goto LABEL_25;
          --a3;
          v3 = v26;
          if ( !a3 )
          {
LABEL_22:
            if ( v6 | v8 | v7 | v9 )
            {
              *(_DWORD *)(a1 + 8) = v6;
              *(_DWORD *)(a1 + 12) = v7;
              *(_DWORD *)(a1 + 16) = v8;
              *(_DWORD *)(a1 + 20) = v9;
              *(_BYTE *)a1 = 0;
              return 0;
            }
            else
            {
              *(_BYTE *)(a1 + 1) = 4;
              *(_BYTE *)a1 = 1;
              return 1;
            }
          }
        }
      }
      else
      {
        v6 = 0;
        v7 = 0;
        v8 = 0;
        v9 = 0;
        while ( 1 )
        {
          v10 = *a2 - 48;
          if ( v10 > 9 )
            break;
          v11 = (10 * (unsigned __int64)v6) >> 32;
          v12 = 10 * v6;
          ++a2;
          v14 = 10 * v7;
          v13 = (10 * (unsigned __int64)v7) >> 32;
          v15 = 10LL * v8;
          v16 = v13 + __CFADD__(v14, v11) + (_DWORD)v15;
          v17 = 10 * v9
              + (__CFADD__(__CFADD__(v14, v11), (_DWORD)v15) | __CFADD__(v13, __CFADD__(v14, v11) + (_DWORD)v15))
              + HIDWORD(v15);
          v18 = __CFADD__(v12, v10);
          v7 = (__PAIR64__(v14 + v11, v12) + v10) >> 32;
          v6 = v12 + v10;
          v9 = (__PAIR64__(v17, __CFADD__(v18, v14 + v11)) + v16) >> 32;
          v8 = __CFADD__(v18, v14 + v11) + v16;
          if ( !--a3 )
            goto LABEL_22;
        }
      }
      goto LABEL_24;
    }
    v5 = 1;
    if ( a3 != 1 )
      goto LABEL_8;
  }
  else
  {
    v5 = 0;
  }
LABEL_25:
  *(_BYTE *)(a1 + 1) = v5;
  *(_BYTE *)a1 = 1;
  return 1;
}
