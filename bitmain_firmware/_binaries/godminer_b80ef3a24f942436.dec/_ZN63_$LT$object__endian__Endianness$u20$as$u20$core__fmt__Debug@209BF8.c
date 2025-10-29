int __fastcall <object::endian::Endianness as core::fmt::Debug>::fmt(_BYTE *a1, _DWORD *a2)
{
  const char *v3; // r1
  int v4; // r2

  v3 = aLit;
  if ( *a1 )
    v3 = (const char *)&unk_2B3817;
  v4 = 3;
  if ( !*a1 )
    v4 = 6;
  return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v3, v4);
}
