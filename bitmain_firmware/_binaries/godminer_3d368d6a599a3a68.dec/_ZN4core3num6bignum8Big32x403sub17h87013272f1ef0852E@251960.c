_DWORD *__fastcall core::num::bignum::Big32x40::sub(_DWORD *a1, int *a2)
{
  unsigned int v3; // r0
  int v4; // r3
  _DWORD *v5; // r2
  unsigned int v6; // r4
  int v7; // t1
  bool v8; // cf
  int v9; // r3

  v3 = a2[40];
  if ( a1[40] > v3 )
    v3 = a1[40];
  if ( v3 > 0x28 )
    core::slice::index::slice_end_index_len_fail();
  if ( v3 )
  {
    LOBYTE(v4) = 1;
    v5 = a1;
    v6 = v3;
    do
    {
      v7 = *a2++;
      v8 = __CFADD__((v4 & 1) != 0, *v5);
      v9 = ((v4 & 1) != 0) + *v5;
      *v5++ = ~v7 + v9;
      v4 = v8 | __CFADD__(~v7, v9);
      --v6;
    }
    while ( v6 );
    if ( !v4 )
      core::panicking::panic((int)aAssertionFaile_49, 26, (int)&off_2E4600);
  }
  a1[40] = v3;
  return a1;
}
