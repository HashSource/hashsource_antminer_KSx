int __fastcall core::fmt::num::<impl core::fmt::LowerExp for u128>::fmt(int a1, int *a2)
{
  int v2; // lr
  unsigned __int64 v3; // r2
  unsigned __int64 v4; // r0

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_QWORD *)(a1 + 8);
  LODWORD(v4) = *(_DWORD *)a1;
  HIDWORD(v4) = v2;
  return sub_248524(v4, v3, 1, 0, a2);
}
