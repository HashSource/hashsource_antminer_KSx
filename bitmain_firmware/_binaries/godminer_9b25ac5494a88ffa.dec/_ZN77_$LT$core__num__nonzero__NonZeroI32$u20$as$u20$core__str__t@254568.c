// Alternative name is '_ZN79_$LT$core..num..nonzero..NonZeroIsize$u20$as$u20$core..str..traits..FromStr$GT$8from_str17hf1a0cccd810dd201E'
int __fastcall <core::num::nonzero::NonZeroI32 as core::str::traits::FromStr>::from_str(
        int result,
        unsigned __int8 *a2,
        unsigned int a3)
{
  unsigned int v3; // r4
  int v4; // r3
  signed int v5; // r3
  unsigned int v6; // r6
  char v7; // r12
  unsigned int v8; // r2
  unsigned __int8 *v9; // r1
  unsigned int v10; // r6
  int v11; // r6
  int v12; // t1
  int v13; // r3
  unsigned int v14; // r5
  _BOOL4 v15; // r6
  bool v16; // vf
  int v17; // r6
  int v18; // t1
  int v19; // r3
  unsigned int v20; // r5
  _BOOL4 v21; // r6

  if ( !a3 )
  {
    v7 = 0;
    goto LABEL_35;
  }
  v4 = *a2;
  if ( v4 == 45 )
  {
    v8 = a3 - 1;
    v7 = 1;
    if ( v8 )
    {
      v9 = a2 + 1;
      v5 = 0;
      if ( v8 >= 8 )
      {
        v7 = 3;
        while ( 1 )
        {
          v17 = (unsigned __int64)(10LL * v5) >> 32;
          v18 = *v9++;
          v19 = 10 * v5;
          v20 = v18 - 48;
          v21 = v17 != v19 >> 31;
          if ( (unsigned int)(v18 - 48) < 0xA )
            v3 = v20;
          if ( v20 > 9 )
            goto LABEL_31;
          if ( v21 )
            goto LABEL_35;
          v16 = __OFSUB__(v19, v3);
          v5 = v19 - v3;
          if ( v16 )
            goto LABEL_35;
          --v8;
          v3 = v20;
          if ( !v8 )
          {
LABEL_29:
            if ( v5 )
            {
              *(_DWORD *)(result + 4) = v5;
              *(_BYTE *)result = 0;
            }
            else
            {
              *(_BYTE *)(result + 1) = 4;
              *(_BYTE *)result = 1;
            }
            return result;
          }
        }
      }
      while ( 1 )
      {
        v10 = *v9 - 48;
        if ( v10 > 9 )
          goto LABEL_35;
        --v8;
        ++v9;
        v5 = 10 * v5 - v10;
        if ( !v8 )
          goto LABEL_29;
      }
    }
    goto LABEL_31;
  }
  if ( v4 == 43 )
  {
    if ( --a3 )
    {
      ++a2;
      goto LABEL_6;
    }
LABEL_31:
    *(_BYTE *)(result + 1) = 1;
    *(_BYTE *)result = 1;
    return result;
  }
LABEL_6:
  v5 = 0;
  if ( a3 < 8 )
  {
    while ( 1 )
    {
      v6 = *a2 - 48;
      if ( v6 > 9 )
        goto LABEL_31;
      --a3;
      ++a2;
      v5 = v6 + 10 * v5;
      if ( !a3 )
        goto LABEL_29;
    }
  }
  while ( 1 )
  {
    v11 = (unsigned __int64)(10LL * v5) >> 32;
    v12 = *a2++;
    v13 = 10 * v5;
    v14 = v12 - 48;
    v15 = v11 != v13 >> 31;
    if ( (unsigned int)(v12 - 48) > 9 || v15 )
      break;
    v16 = __OFADD__(v13, v14);
    v5 = v13 + v14;
    if ( v16 )
    {
      *(_BYTE *)(result + 1) = 2;
      *(_BYTE *)result = 1;
      return result;
    }
    if ( !--a3 )
      goto LABEL_29;
  }
  v7 = 2;
  if ( v14 > 9 )
    v7 = 1;
LABEL_35:
  *(_BYTE *)(result + 1) = v7;
  *(_BYTE *)result = 1;
  return result;
}
