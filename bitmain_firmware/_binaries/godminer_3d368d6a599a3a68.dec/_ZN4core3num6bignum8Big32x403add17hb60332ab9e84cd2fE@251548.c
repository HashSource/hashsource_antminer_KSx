_DWORD *__fastcall core::num::bignum::Big32x40::add(_DWORD *a1, int *a2)
{
  unsigned int v3; // r0
  _DWORD *v4; // r2
  unsigned int v5; // r3
  int v6; // r4
  int v7; // t1
  bool v8; // cf
  int v9; // r4

  v3 = a2[40];
  if ( a1[40] > v3 )
    v3 = a1[40];
  if ( v3 > 0x28 )
    core::slice::index::slice_end_index_len_fail();
  if ( v3 )
  {
    v4 = a1;
    v5 = v3;
    LOBYTE(v6) = 0;
    do
    {
      v7 = *a2++;
      v8 = __CFADD__((v6 & 1) != 0, *v4);
      v9 = ((v6 & 1) != 0) + *v4;
      *v4++ = v7 + v9;
      v6 = v8 | __CFADD__(v7, v9);
      --v5;
    }
    while ( v5 );
    if ( v6 )
    {
      if ( v3 > 0x27 )
        core::panicking::panic_bounds_check(v3, 40, (int)&off_2E4600);
      a1[v3++] = 1;
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
