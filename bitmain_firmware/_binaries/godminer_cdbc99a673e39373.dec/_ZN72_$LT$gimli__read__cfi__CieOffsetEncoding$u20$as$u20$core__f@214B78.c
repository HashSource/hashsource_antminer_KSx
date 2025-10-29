int __fastcall <gimli::read::cfi::CieOffsetEncoding as core::fmt::Debug>::fmt(_BYTE *a1, int a2)
{
  const char *v3; // r1

  v3 = aU32_1;
  if ( *a1 )
    v3 = (const char *)&unk_29BFBB;
  return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v3, 3);
}
