int __fastcall <alloc::collections::TryReserveError as core::fmt::Display>::fmt(int a1, _DWORD *a2)
{
  if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2) )
    return 1;
  else
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2);
}
