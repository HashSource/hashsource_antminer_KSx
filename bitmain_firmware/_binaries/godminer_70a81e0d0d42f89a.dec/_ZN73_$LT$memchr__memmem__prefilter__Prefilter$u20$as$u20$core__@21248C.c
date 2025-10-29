int __fastcall <memchr::memmem::prefilter::Prefilter as core::fmt::Debug>::fmt(_BYTE *a1, int a2)
{
  const char *v3; // r1

  v3 = aNone_1;
  if ( *a1 )
    v3 = (const char *)&unk_2AC143;
  return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v3, 4);
}
