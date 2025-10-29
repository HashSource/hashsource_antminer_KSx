unsigned int *__fastcall core::num::bignum::tests::Big8x3::sub(unsigned int *a1, unsigned int *a2)
{
  unsigned int v3; // r0
  unsigned int *v4; // lr
  unsigned int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r3
  int v8; // t1
  __int64 v9; // r4

  v3 = *a2;
  v4 = a1 + 1;
  if ( *a1 > *a2 )
    v3 = *a1;
  if ( v3 >= 4 )
    core::slice::index::slice_end_index_len_fail(v3, 3, (int)&off_2CF618);
  if ( v3 )
  {
    v5 = a2 + 1;
    LOBYTE(v6) = 1;
    v7 = v3;
    do
    {
      v8 = *(unsigned __int8 *)v5;
      v5 = (unsigned int *)((char *)v5 + 1);
      HIDWORD(v9) = (unsigned __int8)(*(_BYTE *)v4 + ~(_BYTE)v8) ^ (*(unsigned __int8 *)v4 + (v8 ^ 0xFF));
      LODWORD(v9) = (v6 & 1) + (unsigned __int8)(*(_BYTE *)v4 + ~(_BYTE)v8);
      *(_BYTE *)v4 = v9;
      v4 = (unsigned int *)((char *)v4 + 1);
      v6 = HIDWORD(v9) | (unsigned __int8)v9 ^ (unsigned int)v9;
      if ( v9 != (unsigned __int8)v9 )
        v6 = 1;
      --v7;
    }
    while ( v7 );
    if ( !v6 )
      core::panicking::panic((int)aAssertionFaile_49, 26, (int)&off_2CF618);
  }
  *a1 = v3;
  return a1;
}
