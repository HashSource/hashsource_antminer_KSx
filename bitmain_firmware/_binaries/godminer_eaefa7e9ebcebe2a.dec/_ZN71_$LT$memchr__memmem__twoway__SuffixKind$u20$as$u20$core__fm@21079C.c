int __fastcall <memchr::memmem::twoway::SuffixKind as core::fmt::Debug>::fmt(_BYTE *a1, int a2)
{
  const char *v3; // r1

  v3 = aMinimal;
  if ( *a1 )
    v3 = (const char *)&unk_2AA09A;
  return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v3, 7);
}
