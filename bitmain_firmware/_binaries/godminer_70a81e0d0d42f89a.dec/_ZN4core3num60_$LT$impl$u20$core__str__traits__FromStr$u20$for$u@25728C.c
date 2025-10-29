int __fastcall core::num::<impl core::str::traits::FromStr for u64>::from_str(
        int result,
        unsigned __int8 *a2,
        unsigned int a3)
{
  unsigned int v3; // r5
  int v4; // r3
  int v5; // r5
  unsigned int v6; // r3
  int v7; // r7
  int v8; // r4
  __int64 v9; // kr10_8
  int v10; // t1
  unsigned int v11; // r6
  int v12; // r7
  unsigned __int64 v13; // kr20_8
  unsigned __int64 v14; // kr18_8

  if ( !a3 )
  {
    *(_BYTE *)(result + 1) = 0;
    *(_BYTE *)result = 1;
    return result;
  }
  v4 = *a2;
  if ( v4 == 45 )
  {
    if ( a3 != 1 )
    {
LABEL_9:
      if ( a3 >= 0x11 )
      {
        v8 = 0;
        v6 = 0;
        while ( 1 )
        {
          v9 = 10LL * (unsigned int)v8;
          v10 = *a2++;
          v11 = v10 - 48;
          v12 = (10 * (unsigned __int64)v6) >> 32;
          v13 = HIDWORD(v9) + (unsigned __int64)(10 * v6);
          if ( !is_mul_ok(v6, 0xAu) )
            v12 = 1;
          if ( v11 < 0xA )
            v3 = v11;
          if ( v11 > 9 )
            break;
          if ( v12 | HIDWORD(v13)
            || (v14 = v9 + __PAIR64__(10 * v6, v3),
                v6 = HIDWORD(v14),
                v8 = v14,
                __CFADD__(__CFADD__((_DWORD)v9, v3), (_DWORD)v13)) )
          {
            *(_BYTE *)(result + 1) = 2;
            *(_BYTE *)result = 1;
            return result;
          }
          --a3;
          v3 = v11;
          if ( !a3 )
          {
LABEL_23:
            *(_DWORD *)(result + 8) = v8;
            *(_DWORD *)(result + 12) = v6;
            *(_BYTE *)result = 0;
            return result;
          }
        }
      }
      else
      {
        v5 = 0;
        v6 = 0;
        while ( 1 )
        {
          v7 = *a2;
          if ( (unsigned int)(v7 - 48) > 9 )
            break;
          --a3;
          ++a2;
          v6 = (10LL * (unsigned int)v5 + __PAIR64__(10 * v6, v7 - 48)) >> 32;
          v8 = 10 * v5 + v7 - 48;
          v5 = v8;
          if ( !a3 )
            goto LABEL_23;
        }
      }
    }
  }
  else
  {
    if ( v4 != 43 )
      goto LABEL_9;
    if ( --a3 )
    {
      ++a2;
      goto LABEL_9;
    }
  }
  *(_BYTE *)(result + 1) = 1;
  *(_BYTE *)result = 1;
  return result;
}
