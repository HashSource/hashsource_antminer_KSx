int __fastcall sub_211C6C(_BYTE **a1, int a2)
{
  char *v3; // r1

  v3 = aDwarf64;
  if ( **a1 != 8 )
    v3 = &aUnknownSection[3759];
  return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v3, 7);
}
