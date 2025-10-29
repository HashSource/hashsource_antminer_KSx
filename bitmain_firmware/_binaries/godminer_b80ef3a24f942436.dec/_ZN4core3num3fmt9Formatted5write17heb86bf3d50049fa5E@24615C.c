int __fastcall core::num::fmt::Formatted::write(int a1, void *dest, size_t a3)
{
  size_t v3; // r4
  int v4; // r8
  int v8; // r0
  unsigned __int16 *v9; // r7
  int v10; // r6
  int v11; // r1

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 <= a3 )
  {
    memcpy(dest, *(const void **)a1, v3);
    v8 = *(_DWORD *)(a1 + 12);
    v4 = 1;
    if ( !v8 )
      return v4;
    v9 = *(unsigned __int16 **)(a1 + 8);
    v10 = 12 * v8;
    while ( 1 )
    {
      if ( v3 > a3 )
        core::slice::index::slice_start_index_len_fail();
      if ( !core::num::fmt::Part::write(v9, (char *)dest + v3, a3 - v3) )
        break;
      v9 += 6;
      v3 += v11;
      v10 -= 12;
      if ( !v10 )
        return v4;
    }
  }
  return 0;
}
