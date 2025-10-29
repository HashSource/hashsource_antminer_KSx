// Alternative name is '_ZN64_$LT$core..ffi..c_str..CStr$u20$as$u20$core..cmp..PartialOrd$GT$11partial_cmp17hbe9c95252662bd14E'
int __fastcall <core::ffi::c_str::CStr as core::cmp::Ord>::cmp(const void *a1, int a2, void *s2, int a4)
{
  size_t v5; // r2
  unsigned int v6; // r1
  int v7; // r4
  int v8; // r0
  bool v9; // nf
  int result; // r0

  v5 = a4 - 1;
  v6 = a2 - 1;
  v7 = v6 - (a4 - 1);
  if ( v6 < a4 - 1 )
    v5 = v6;
  v8 = memcmp(a1, s2, v5);
  if ( !v8 )
    v8 = v7;
  v9 = v8 < 0;
  result = v8 != 0;
  if ( v9 )
    return -1;
  return result;
}
