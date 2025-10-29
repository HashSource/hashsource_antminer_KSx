int __fastcall core::num::bignum::tests::Big8x3::mul_pow5(int result, unsigned int a2)
{
  _BYTE *v2; // r12
  unsigned int v3; // r3
  _BYTE *v4; // lr
  _BYTE *v5; // r2
  _BYTE *v6; // r6
  unsigned int v7; // r5
  unsigned int v8; // r5
  bool v9; // zf
  unsigned int v10; // r5
  unsigned int v11; // r5
  int v12; // r6
  unsigned __int8 i; // r3
  unsigned int v14; // r1
  __int16 v15; // r5
  int v16; // r2
  int v17; // r4
  unsigned int v18; // r3
  unsigned int v19; // r3
  _BYTE *v20; // r6
  unsigned __int16 v21; // r3
  unsigned __int16 v22; // r3

  if ( a2 >= 3 )
  {
    v2 = (_BYTE *)(result + 6);
    v4 = (_BYTE *)(result + 5);
    v3 = *(_DWORD *)result;
    v5 = (_BYTE *)(result + 4);
    do
    {
      if ( v3 >= 4 )
        core::slice::index::slice_end_index_len_fail(v3, 3, (int)&off_2CF618);
      if ( v3 )
      {
        v6 = &v5[v3];
        v7 = 125 * (unsigned __int8)*v5;
        *v5 *= 125;
        v8 = v7 >> 8;
        if ( v4 != &v5[v3] )
        {
          v9 = v2 == v6;
          if ( v2 != v6 )
            LOWORD(v6) = (unsigned __int8)*v2;
          v10 = 125 * (unsigned __int8)*v4 + v8;
          *v4 = v10;
          v8 = v10 >> 8;
          if ( !v9 )
          {
            v11 = 125 * (__int16)v6 + v8;
            *v2 = v11;
            v8 = v11 >> 8;
          }
        }
        if ( v8 )
        {
          if ( v3 > 2 )
            core::panicking::panic_bounds_check(v3, 3, (int)&off_2CF618);
          v12 = result + v3++;
          *(_BYTE *)(v12 + 4) = v8;
        }
      }
      else
      {
        v3 = 0;
      }
      a2 -= 3;
      *(_DWORD *)result = v3;
    }
    while ( a2 > 2 );
  }
  for ( i = 1; a2; i *= 5 )
    --a2;
  v14 = *(_DWORD *)result;
  if ( *(_DWORD *)result >= 4u )
    core::slice::index::slice_end_index_len_fail(*(_DWORD *)result, 3, (int)&off_2CF618);
  if ( v14 )
  {
    v15 = i;
    v16 = result + v14;
    v17 = result + v14 + 4;
    v18 = *(unsigned __int8 *)(result + 4) * i;
    *(_BYTE *)(result + 4) = v18;
    v19 = v18 >> 8;
    if ( result + 5 != v17 )
    {
      v20 = (_BYTE *)(result + 6);
      v21 = *(unsigned __int8 *)(result + 5) * v15 + v19;
      *(_BYTE *)(result + 5) = v21;
      v19 = HIBYTE(v21);
      if ( result + 6 != v17 )
      {
        v22 = (unsigned __int8)*v20 * v15 + v19;
        *v20 = v22;
        v19 = HIBYTE(v22);
      }
    }
    if ( v19 )
    {
      if ( v14 > 2 )
        core::panicking::panic_bounds_check(v14, 3, (int)&off_2CF618);
      ++v14;
      *(_BYTE *)(v16 + 4) = v19;
    }
    *(_DWORD *)result = v14;
  }
  else
  {
    *(_DWORD *)result = 0;
  }
  return result;
}
