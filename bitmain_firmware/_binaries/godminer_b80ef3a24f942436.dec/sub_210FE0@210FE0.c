int __fastcall sub_210FE0(_BYTE **a1, int a2)
{
  const char *v3; // r1

  v3 = aNone_0;
  if ( **a1 )
    v3 = (const char *)&unk_2B5483;
  return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v3, 4);
}
