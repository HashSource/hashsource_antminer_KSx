int __fastcall <std::sync::mpsc::RecvTimeoutError as core::fmt::Debug>::fmt(_BYTE *a1, int a2)
{
  void *v3; // r1
  int v4; // r2

  v3 = &unk_2A6616;
  if ( *a1 )
    v3 = &unk_2A660A;
  v4 = 12;
  if ( !*a1 )
    v4 = 7;
  return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v3, v4);
}
