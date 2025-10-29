int __fastcall <core::sync::atomic::AtomicI64 as core::fmt::Debug>::fmt(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r2
  unsigned __int64 v3; // [sp+0h] [bp-8h] BYREF

  v1 = __ldrexd(a1);
  __clrex();
  v3 = v1;
  return sub_2593E8(&v3);
}
