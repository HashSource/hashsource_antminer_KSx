int __fastcall <rustc_demangle::v0::ParseError as core::fmt::Debug>::fmt(_BYTE *a1, int a2)
{
  void *v3; // r1
  int v4; // r2

  v3 = &unk_2B0DAF;
  if ( *a1 )
    v3 = &unk_2B0DA0;
  v4 = 15;
  if ( !*a1 )
    v4 = 7;
  return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v3, v4);
}
