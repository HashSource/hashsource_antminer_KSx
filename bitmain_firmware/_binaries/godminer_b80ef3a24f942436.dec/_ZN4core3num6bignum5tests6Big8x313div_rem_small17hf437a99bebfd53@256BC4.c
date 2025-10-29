unsigned int *__fastcall core::num::bignum::tests::Big8x3::div_rem_small(unsigned int *a1, __int16 a2)
{
  unsigned int v3; // r0
  unsigned int *v4; // r5
  int v5; // r9
  unsigned int *v7; // r4
  __int16 v8; // r7
  __int16 v9; // r0
  unsigned int *v10; // r4
  __int16 v11; // t1
  unsigned __int16 v12; // r6
  __int16 v13; // r0

  if ( !(_BYTE)a2 )
    core::panicking::panic((int)aAssertionFaile_51, 27, (int)&off_2EF618);
  v4 = a1 + 1;
  v3 = *a1;
  if ( v3 >= 4 )
    core::slice::index::slice_end_index_len_fail();
  if ( !v3 )
    return a1;
  v5 = (unsigned __int8)a2;
  v7 = (unsigned int *)((char *)v4 + v3 - 1);
  v8 = *(unsigned __int8 *)v7;
  v9 = sub_270BA8(*(unsigned __int8 *)v7, (unsigned __int8)a2);
  *(_BYTE *)v7 = v9;
  if ( v4 != v7 )
  {
    v11 = *((unsigned __int8 *)v7 - 1);
    v10 = (unsigned int *)((char *)v7 - 1);
    v12 = v11 | ((v8 - v9 * a2) << 8);
    v13 = sub_270BA8(v12, v5);
    *(_BYTE *)v10 = v13;
    if ( v4 != v10 )
      *((_BYTE *)v10 - 1) = sub_270BA8(
                              (unsigned __int16)(*((unsigned __int8 *)v10 - 1)
                                               | (unsigned __int16)((v12 - v13 * (_WORD)v5) << 8)),
                              v5);
  }
  return a1;
}
