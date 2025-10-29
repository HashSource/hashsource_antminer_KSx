int __fastcall sub_20D3A4(_BYTE **a1, int a2)
{
  const char *v3; // r1

  v3 = aNone_1;
  if ( **a1 )
    v3 = (const char *)&unk_2A9D13;
  return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v3, 4);
}
