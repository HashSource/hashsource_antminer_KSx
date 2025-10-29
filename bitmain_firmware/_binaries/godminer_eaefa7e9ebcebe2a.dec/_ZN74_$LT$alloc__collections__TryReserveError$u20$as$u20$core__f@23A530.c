int __fastcall <alloc::collections::TryReserveError as core::fmt::Display>::fmt(int a1, int a2)
{
  const char *v5; // r1
  int v6; // r2

  if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2, aMemoryAllocati_0, 24) )
    return 1;
  v5 = aBecauseTheComp;
  v6 = 47;
  if ( *(_DWORD *)(a1 + 4) )
    v5 = (const char *)&unk_2B2255;
  else
    v6 = 64;
  return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v5, v6);
}
