int __fastcall <core::num::bignum::tests::Big8x3 as core::cmp::Ord>::cmp(unsigned int *a1, unsigned int *a2)
{
  unsigned int v3; // r0
  char *v4; // lr
  char *v5; // r12
  char *v6; // r2
  char *v7; // r3
  unsigned int v8; // r4
  unsigned int v9; // r5
  int v10; // r1
  int v12; // r1

  v3 = *a2;
  if ( *a1 > *a2 )
    v3 = *a1;
  if ( v3 >= 4 )
    core::slice::index::slice_end_index_len_fail();
  v4 = (char *)(a2 + 1);
  v5 = (char *)(a2 + 1);
  v6 = (char *)a1 + 3;
  v7 = (char *)a2 + 3;
  while ( v3 )
  {
    v8 = (unsigned __int8)v6[v3];
    v9 = (unsigned __int8)v7[v3--];
    v10 = v9 != v8;
    if ( v9 > v8 )
      v10 = -1;
    if ( v10 )
      return v10;
  }
  v12 = v5 - v4;
  if ( v5 != v4 )
    return -1;
  return v12;
}
