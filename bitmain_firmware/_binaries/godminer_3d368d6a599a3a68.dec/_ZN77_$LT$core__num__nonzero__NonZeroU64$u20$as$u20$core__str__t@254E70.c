int __fastcall <core::num::nonzero::NonZeroU64 as core::str::traits::FromStr>::from_str(
        int result,
        unsigned __int8 *a2,
        unsigned int a3)
{
  unsigned int v3; // r5
  int v4; // r3
  char v5; // r6
  int v6; // r5
  unsigned int v7; // r3
  int v8; // r7
  int v9; // r4
  __int64 v10; // kr10_8
  int v11; // t1
  unsigned int v12; // r7
  int v13; // r6
  unsigned __int64 v14; // kr20_8
  int v15; // r4
  unsigned __int64 v16; // kr18_8

  if ( !a3 )
  {
    *(_BYTE *)(result + 1) = 0;
    *(_BYTE *)result = 1;
    return result;
  }
  v4 = *a2;
  if ( v4 == 45 )
  {
    v5 = 1;
    if ( a3 == 1 )
    {
LABEL_26:
      *(_BYTE *)(result + 1) = v5;
      *(_BYTE *)result = 1;
      return result;
    }
  }
  else if ( v4 == 43 )
  {
    if ( !--a3 )
    {
LABEL_24:
      *(_BYTE *)(result + 1) = 1;
      *(_BYTE *)result = 1;
      return result;
    }
    ++a2;
  }
  if ( a3 < 0x11 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = *a2;
      if ( (unsigned int)(v8 - 48) > 9 )
        goto LABEL_24;
      --a3;
      ++a2;
      v7 = (10LL * (unsigned int)v6 + __PAIR64__(10 * v7, v8 - 48)) >> 32;
      v9 = 10 * v6 + v8 - 48;
      v6 = v9;
      if ( !a3 )
        goto LABEL_22;
    }
  }
  v9 = 0;
  v7 = 0;
  do
  {
    v10 = 10LL * (unsigned int)v9;
    v11 = *a2++;
    v12 = v11 - 48;
    v13 = (10 * (unsigned __int64)v7) >> 32;
    v14 = HIDWORD(v10) + (unsigned __int64)(10 * v7);
    if ( !is_mul_ok(v7, 0xAu) )
      v13 = 1;
    if ( v12 < 0xA )
      v3 = v12;
    if ( v12 > 9 )
    {
      v5 = 1;
      goto LABEL_26;
    }
    v15 = v13 | HIDWORD(v14);
    v5 = 2;
    if ( v15 )
      goto LABEL_26;
    v16 = v10 + __PAIR64__(10 * v7, v3);
    v7 = HIDWORD(v16);
    v9 = v16;
    if ( __CFADD__(__CFADD__((_DWORD)v10, v3), (_DWORD)v14) )
      goto LABEL_26;
    --a3;
    v3 = v12;
  }
  while ( a3 );
LABEL_22:
  if ( v9 | v7 )
  {
    *(_DWORD *)(result + 8) = v9;
    *(_DWORD *)(result + 12) = v7;
    *(_BYTE *)result = 0;
  }
  else
  {
    *(_BYTE *)(result + 1) = 4;
    *(_BYTE *)result = 1;
  }
  return result;
}
