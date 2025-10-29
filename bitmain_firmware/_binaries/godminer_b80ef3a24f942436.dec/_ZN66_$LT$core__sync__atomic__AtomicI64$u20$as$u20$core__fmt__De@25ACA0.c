int __fastcall <core::sync::atomic::AtomicI64 as core::fmt::Debug>::fmt(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v2; // r2
  unsigned __int64 v4; // [sp+0h] [bp-8h] BYREF

  v2 = __ldrexd(a1);
  __clrex();
  v4 = v2;
  return sub_25C870(&v4, a2);
}
