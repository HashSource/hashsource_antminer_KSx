int __fastcall <core::sync::atomic::AtomicBool as core::fmt::Debug>::fmt(_BYTE *a1, int *a2)
{
  if ( *a1 )
    return core::fmt::Formatter::pad(a2, aTrue_0, 4u);
  else
    return core::fmt::Formatter::pad(a2, aFalse_0, 5u);
}
