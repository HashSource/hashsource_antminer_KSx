int __fastcall core::num::bignum::tests::Big8x3::mul_small(int a1, unsigned __int8 a2)
{
  unsigned int v3; // r0
  __int16 v4; // r3
  int v5; // r12
  int v6; // lr
  unsigned int v7; // r1
  unsigned int v8; // r1
  _BYTE *v9; // r5
  unsigned __int16 v10; // r1
  unsigned __int16 v11; // r1

  v3 = *(_DWORD *)a1;
  if ( v3 >= 4 )
    core::slice::index::slice_end_index_len_fail();
  if ( v3 )
  {
    v4 = a2;
    v5 = a1 + v3;
    v6 = a1 + v3 + 4;
    v7 = *(unsigned __int8 *)(a1 + 4) * a2;
    *(_BYTE *)(a1 + 4) = v7;
    v8 = v7 >> 8;
    if ( a1 + 5 != v6 )
    {
      v9 = (_BYTE *)(a1 + 6);
      v10 = *(unsigned __int8 *)(a1 + 5) * v4 + v8;
      *(_BYTE *)(a1 + 5) = v10;
      v8 = HIBYTE(v10);
      if ( a1 + 6 != v6 )
      {
        v11 = (unsigned __int8)*v9 * v4 + v8;
        *v9 = v11;
        v8 = HIBYTE(v11);
      }
    }
    if ( v8 )
    {
      if ( v3 > 2 )
        core::panicking::panic_bounds_check(v3, 3, (int)&off_2E4618);
      ++v3;
      *(_BYTE *)(v5 + 4) = v8;
    }
    *(_DWORD *)a1 = v3;
    return a1;
  }
  else
  {
    *(_DWORD *)a1 = 0;
    return a1;
  }
}
