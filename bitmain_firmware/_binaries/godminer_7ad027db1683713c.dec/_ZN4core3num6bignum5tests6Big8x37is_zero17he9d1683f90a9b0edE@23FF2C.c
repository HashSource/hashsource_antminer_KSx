bool __fastcall core::num::bignum::tests::Big8x3::is_zero(int a1)
{
  int v1; // r3
  _BOOL4 v2; // r1
  int v4; // r2

  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 >= 4u )
    core::slice::index::slice_end_index_len_fail(*(_DWORD *)a1, 3, (int)&off_2CF618);
  v2 = v1 == 0;
  if ( !v1 )
    return v2;
  if ( *(_BYTE *)(a1 + 4) )
    return v2;
  v4 = a1 + v1 + 4;
  v2 = v1 == 1;
  if ( v1 == 1 )
    return v2;
  if ( *(_BYTE *)(a1 + 5) )
    return v2;
  v2 = a1 + 6 == v4;
  if ( a1 + 6 == v4 )
    return v2;
  if ( !*(_BYTE *)(a1 + 6) )
    return v1 == 3;
  return v2;
}
