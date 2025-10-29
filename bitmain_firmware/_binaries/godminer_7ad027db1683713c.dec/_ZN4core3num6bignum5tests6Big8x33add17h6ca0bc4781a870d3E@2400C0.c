unsigned int *__fastcall core::num::bignum::tests::Big8x3::add(unsigned int *a1, unsigned int *a2)
{
  unsigned int v3; // r0
  unsigned int *v4; // lr
  unsigned int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r3
  int v8; // t1
  int v9; // r4
  __int64 v10; // r4
  char *v11; // r1

  v3 = *a2;
  v4 = a1 + 1;
  if ( *a1 > *a2 )
    v3 = *a1;
  if ( v3 >= 4 )
    core::slice::index::slice_end_index_len_fail(v3, 3, (int)&off_2CF618);
  if ( v3 )
  {
    v5 = a2 + 1;
    LOBYTE(v6) = 0;
    v7 = v3;
    do
    {
      v8 = *(unsigned __int8 *)v5;
      v5 = (unsigned int *)((char *)v5 + 1);
      v9 = *(unsigned __int8 *)v4 + v8;
      HIDWORD(v10) = (unsigned __int8)v9 ^ v9;
      LODWORD(v10) = (v6 & 1) + (unsigned __int8)v9;
      *(_BYTE *)v4 = v10;
      v4 = (unsigned int *)((char *)v4 + 1);
      v6 = HIDWORD(v10) | (unsigned __int8)v10 ^ (unsigned int)v10;
      if ( v10 != (unsigned __int8)v10 )
        v6 = 1;
      --v7;
    }
    while ( v7 );
    if ( v6 )
    {
      if ( v3 > 2 )
        core::panicking::panic_bounds_check(v3, 3, (int)&off_2CF618);
      v11 = (char *)a1 + v3++;
      v11[4] = 1;
    }
    *a1 = v3;
    return a1;
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}
