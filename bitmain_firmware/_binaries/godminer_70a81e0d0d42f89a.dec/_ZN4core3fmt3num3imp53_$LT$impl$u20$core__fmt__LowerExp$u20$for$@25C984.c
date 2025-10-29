int __fastcall core::fmt::num::imp::<impl core::fmt::LowerExp for i64>::fmt(_DWORD *a1, _DWORD *a2)
{
  int v2; // r3
  __int64 v3; // r0

  v2 = a1[1];
  LODWORD(v3) = *a1 ^ (v2 >> 31);
  HIDWORD(v3) = v2 ^ (v2 >> 31);
  return sub_25C5CC(v3 - (v2 >> 31), (v3 - __PAIR64__(v2 >> 31, v2 >> 31)) >> 32, v2 > -1, 0, a2);
}
