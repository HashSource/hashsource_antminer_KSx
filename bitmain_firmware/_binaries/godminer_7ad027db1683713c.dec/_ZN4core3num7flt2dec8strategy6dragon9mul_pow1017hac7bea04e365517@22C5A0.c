int *__fastcall core::num::flt2dec::strategy::dragon::mul_pow10(int *result, __int16 a2)
{
  int v2; // r2
  unsigned int v4; // r1
  unsigned __int64 v5; // r4
  int *v6; // r6
  unsigned int v7; // r2
  int v8; // r3
  unsigned int v9; // r12
  int v10; // r2
  int v11; // r3
  int *v12; // r6
  int v13; // r1
  int v14; // r0
  int v15; // r0

  v2 = a2 & 7;
  if ( (a2 & 7) != 0 )
  {
    v4 = result[40];
    if ( v4 >= 0x29 )
    {
      v15 = result[40];
      goto LABEL_37;
    }
    if ( v4 )
    {
      LODWORD(v5) = 0;
      v6 = result;
      v7 = dword_29E1E0[v2];
      v8 = 4 * v4;
      do
      {
        v8 -= 4;
        v5 = (unsigned int)*v6 * (unsigned __int64)v7 + (unsigned int)v5;
        *v6++ = v5;
        LODWORD(v5) = HIDWORD(v5);
      }
      while ( v8 );
      if ( HIDWORD(v5) )
      {
        if ( v4 > 0x27 )
        {
          v14 = v4;
          goto LABEL_34;
        }
        result[v4++] = HIDWORD(v5);
      }
    }
    else
    {
      v4 = 0;
    }
    result[40] = v4;
  }
  if ( (a2 & 8) == 0 )
    goto LABEL_21;
  v9 = result[40];
  if ( v9 >= 0x29 )
  {
    v15 = result[40];
LABEL_37:
    core::slice::index::slice_end_index_len_fail(v15, 40, (int)&off_2CF600);
  }
  if ( !v9 )
  {
    v9 = 0;
    goto LABEL_20;
  }
  v10 = 4 * v9;
  v11 = 0;
  v12 = result;
  do
  {
    v10 -= 4;
    v13 = (100000000LL * (unsigned int)*v12 + (unsigned __int64)(unsigned int)v11) >> 32;
    *v12 = 100000000 * *v12 + v11;
    ++v12;
    v11 = v13;
  }
  while ( v10 );
  if ( !v13 )
    goto LABEL_20;
  if ( v9 > 0x27 )
  {
    v14 = v9;
LABEL_34:
    core::panicking::panic_bounds_check(v14, 40, (int)&off_2CF600);
  }
  result[v9++] = v13;
LABEL_20:
  result[40] = v9;
LABEL_21:
  if ( (a2 & 0x10) != 0 )
  {
    result = core::num::bignum::Big32x40::mul_digits(result, (int *)&unk_29E230, 2u);
    if ( (a2 & 0x20) == 0 )
    {
LABEL_23:
      if ( (a2 & 0x40) == 0 )
        goto LABEL_24;
      goto LABEL_29;
    }
  }
  else if ( (a2 & 0x20) == 0 )
  {
    goto LABEL_23;
  }
  result = core::num::bignum::Big32x40::mul_digits(result, dword_29E238, 4u);
  if ( (a2 & 0x40) == 0 )
  {
LABEL_24:
    if ( (a2 & 0x80) == 0 )
      goto LABEL_25;
    goto LABEL_30;
  }
LABEL_29:
  result = core::num::bignum::Big32x40::mul_digits(result, dword_29E248, 7u);
  if ( (a2 & 0x80) == 0 )
  {
LABEL_25:
    if ( (a2 & 0x100) == 0 )
      return result;
    return core::num::bignum::Big32x40::mul_digits(result, dword_29E29C, 0x1Bu);
  }
LABEL_30:
  result = core::num::bignum::Big32x40::mul_digits(result, dword_29E264, 0xEu);
  if ( (a2 & 0x100) != 0 )
    return core::num::bignum::Big32x40::mul_digits(result, dword_29E29C, 0x1Bu);
  return result;
}
