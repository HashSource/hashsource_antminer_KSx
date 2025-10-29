// Alternative name is '_ZN4core3fmt3num51_$LT$impl$u20$core..fmt..Binary$u20$for$u20$u64$GT$3fmt17h7075017f1e4c84bdE'
int __fastcall core::fmt::num::<impl core::fmt::Binary for i64>::fmt(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r4
  int v3; // r0
  char v4; // cf
  unsigned int v5; // r0
  _BYTE v7[128]; // [sp+8h] [bp-80h] BYREF

  v2 = *a1;
  v3 = 127;
  do
  {
    if ( v3 == -1 )
    {
      v5 = 0;
      return core::fmt::Formatter::pad_integral(a2, 1, a0b, 2u, (int)&v7[v5], 128 - v5);
    }
    v4 = BYTE4(v2) & 1;
    HIDWORD(v2) >>= 1;
    v7[v3--] = v2 & 1 | 0x30;
    LODWORD(v2) = ((unsigned int)v2 >> 1) | (v4 << 31);
  }
  while ( v2 );
  v5 = v3 + 1;
  if ( v5 >= 0x81 )
    core::slice::index::slice_start_index_len_fail();
  return core::fmt::Formatter::pad_integral(a2, 1, a0b, 2u, (int)&v7[v5], 128 - v5);
}
