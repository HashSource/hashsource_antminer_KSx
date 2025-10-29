int __fastcall <core::sync::atomic::AtomicU64 as core::fmt::Debug>::fmt(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v3; // r0

  v3 = __ldrexd(a1);
  __clrex();
  return sub_258E8C(v3, HIDWORD(v3), a2);
}
