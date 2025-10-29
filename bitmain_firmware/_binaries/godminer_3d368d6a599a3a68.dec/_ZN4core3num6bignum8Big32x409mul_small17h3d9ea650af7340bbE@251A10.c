_DWORD *__fastcall core::num::bignum::Big32x40::mul_small(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // r0
  int v4; // lr
  unsigned __int64 v5; // r2
  _DWORD *v6; // r4

  v3 = a1[40];
  if ( v3 >= 0x29 )
    core::slice::index::slice_end_index_len_fail();
  if ( v3 )
  {
    v4 = 4 * v3;
    LODWORD(v5) = 0;
    v6 = a1;
    do
    {
      v4 -= 4;
      v5 = (unsigned int)*v6 * (unsigned __int64)a2 + (unsigned int)v5;
      *v6++ = v5;
      LODWORD(v5) = HIDWORD(v5);
    }
    while ( v4 );
    if ( HIDWORD(v5) )
    {
      if ( v3 > 0x27 )
        core::panicking::panic_bounds_check(v3, 40, (int)&off_2E4600);
      a1[v3++] = HIDWORD(v5);
    }
    a1[40] = v3;
    return a1;
  }
  else
  {
    a1[40] = 0;
    return a1;
  }
}
