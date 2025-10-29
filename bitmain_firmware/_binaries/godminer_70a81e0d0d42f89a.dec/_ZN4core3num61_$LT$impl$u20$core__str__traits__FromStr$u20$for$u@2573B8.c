int __fastcall core::num::<impl core::str::traits::FromStr for u128>::from_str(
        int result,
        unsigned __int8 *a2,
        unsigned int a3)
{
  unsigned int v3; // r5
  int v4; // r3
  unsigned int v5; // r12
  unsigned int v6; // lr
  unsigned int v7; // r11
  unsigned int v8; // r10
  unsigned int v9; // r6
  __int64 v10; // kr10_8
  unsigned int v11; // r5
  int v12; // r12
  bool v13; // cf
  unsigned int v14; // r3
  unsigned int v15; // r5
  unsigned __int64 v16; // kr18_8
  unsigned int v17; // r4
  int v18; // r3
  int v19; // r7
  unsigned int v20; // kr08_4
  unsigned int v21; // r4
  __int64 v22; // r10
  int v23; // r12
  __int64 v24; // kr50_8
  unsigned __int64 v25; // kr58_8
  int v26; // t1
  __int128 v27; // kr60_16
  unsigned int v28; // r7
  unsigned __int64 v29; // kr20_8
  unsigned __int64 v30; // kr28_8

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
LABEL_8:
      if ( a3 >= 0x21 )
      {
        v5 = 0;
        v6 = 0;
        v7 = 0;
        v8 = 0;
        while ( 1 )
        {
          v20 = v8;
          v18 = (10 * (unsigned __int64)v8) >> 32;
          v19 = 10 * v8;
          v21 = (10 * (unsigned __int64)v7) >> 32;
          HIDWORD(v22) = 10 * v7;
          LODWORD(v22) = (10 * (unsigned __int64)v5) >> 32;
          v23 = 10 * v5;
          v24 = 10LL * v6;
          v25 = v21 + (unsigned __int64)(unsigned int)v19;
          *(_QWORD *)&v27 = v24 + v22;
          v26 = *a2++;
          *((_QWORD *)&v27 + 1) = (__CFADD__(__CFADD__((_DWORD)v24, (_DWORD)v22), HIDWORD(v22))
                                 | (unsigned __int8)__CFADD__(HIDWORD(v24), (unsigned __int64)(v24 + v22) >> 32))
                                + (unsigned __int64)(unsigned int)v25;
          v28 = v26 - 48;
          if ( !is_mul_ok(v20, 0xAu) )
            v18 = 1;
          if ( v28 < 0xA )
            v3 = v28;
          if ( v28 > 9 )
            break;
          if ( v18 | HIDWORD(v25) | HIDWORD(v27)
            || (v13 = __CFADD__(v23, v3),
                v29 = __PAIR64__(v27, v23) + v3,
                v6 = HIDWORD(v29),
                v5 = v29,
                v30 = __CFADD__(v13, (_DWORD)v27) + *(_QWORD *)((char *)&v27 + 4),
                v8 = HIDWORD(v30),
                v7 = v30,
                __CFADD__(__CFADD__(__CFADD__(v13, (_DWORD)v27), DWORD1(v27)), DWORD2(v27))) )
          {
            *(_BYTE *)(result + 1) = 2;
            *(_BYTE *)result = 1;
            return result;
          }
          --a3;
          v3 = v28;
          if ( !a3 )
          {
LABEL_22:
            *(_DWORD *)(result + 8) = v5;
            *(_DWORD *)(result + 12) = v6;
            *(_DWORD *)(result + 16) = v7;
            *(_DWORD *)(result + 20) = v8;
            *(_BYTE *)result = 0;
            return result;
          }
        }
      }
      else
      {
        v5 = 0;
        v6 = 0;
        v7 = 0;
        v8 = 0;
        while ( 1 )
        {
          v9 = *a2 - 48;
          if ( v9 > 9 )
            break;
          v10 = 10LL * v6;
          ++a2;
          v11 = (10 * (unsigned __int64)v5) >> 32;
          v12 = 10 * v5;
          v13 = __CFADD__((_DWORD)v10, v11);
          v16 = v10 + __PAIR64__(10 * v7, v11);
          v15 = HIDWORD(v16);
          v14 = v16;
          v17 = 10 * v8
              + (__CFADD__(v13, 10 * v7) | __CFADD__(HIDWORD(v10), v13 + 10 * v7))
              + ((10 * (unsigned __int64)v7) >> 32);
          v13 = __CFADD__(v12, v9);
          v6 = (__PAIR64__(v14, v12) + v9) >> 32;
          v5 = v12 + v9;
          v8 = (__PAIR64__(v17, __CFADD__(v13, v14)) + v15) >> 32;
          v7 = __CFADD__(v13, v14) + v15;
          if ( !--a3 )
            goto LABEL_22;
        }
      }
    }
  }
  else
  {
    if ( v4 != 43 )
      goto LABEL_8;
    if ( --a3 )
    {
      ++a2;
      goto LABEL_8;
    }
  }
  *(_BYTE *)(result + 1) = 1;
  *(_BYTE *)result = 1;
  return result;
}
