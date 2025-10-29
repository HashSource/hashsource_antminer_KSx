_DWORD *__fastcall core::num::bignum::Big32x40::mul_pow5(_DWORD *result, unsigned int a2)
{
  unsigned int v2; // r12
  int v3; // r3
  unsigned int v4; // r4
  _DWORD *v5; // r5
  unsigned int v6; // r2
  int i; // r2
  int v8; // r3
  unsigned int v9; // r1
  _DWORD *v10; // r4
  unsigned int v11; // r5

  if ( a2 >= 0xD )
  {
    v2 = result[40];
    while ( v2 < 0x29 )
    {
      if ( v2 )
      {
        v3 = 4 * v2;
        v4 = 0;
        v5 = result;
        do
        {
          v3 -= 4;
          v6 = (1220703125LL * (unsigned int)*v5 + (unsigned __int64)v4) >> 32;
          *v5 = 1220703125 * *v5 + v4;
          ++v5;
          v4 = v6;
        }
        while ( v3 );
        if ( v6 )
        {
          if ( v2 > 0x27 )
            goto LABEL_23;
          result[v2++] = v6;
        }
      }
      else
      {
        v2 = 0;
      }
      a2 -= 13;
      result[40] = v2;
      if ( a2 <= 0xC )
        goto LABEL_12;
    }
LABEL_24:
    core::slice::index::slice_end_index_len_fail();
  }
LABEL_12:
  for ( i = 1; a2; i *= 5 )
    --a2;
  v2 = result[40];
  if ( v2 >= 0x29 )
    goto LABEL_24;
  if ( v2 )
  {
    v8 = 4 * v2;
    v9 = 0;
    v10 = result;
    do
    {
      v8 -= 4;
      v11 = ((unsigned int)*v10 * (unsigned __int64)(unsigned int)i + v9) >> 32;
      *v10 = *v10 * i + v9;
      ++v10;
      v9 = v11;
    }
    while ( v8 );
    if ( v11 )
    {
      if ( v2 > 0x27 )
LABEL_23:
        core::panicking::panic_bounds_check(v2, 40, (int)&off_2D0600);
      result[v2++] = v11;
    }
    result[40] = v2;
  }
  else
  {
    result[40] = 0;
  }
  return result;
}
