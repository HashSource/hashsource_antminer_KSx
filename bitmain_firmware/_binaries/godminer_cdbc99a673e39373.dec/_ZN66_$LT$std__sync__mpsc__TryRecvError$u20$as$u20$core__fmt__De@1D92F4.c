int __fastcall <std::sync::mpsc::TryRecvError as core::fmt::Debug>::fmt(_BYTE *a1, int a2)
{
  void *v3; // r1
  int v4; // r2

  v3 = &unk_291EA8;
  if ( *a1 )
    v3 = &unk_292D7A;
  v4 = 12;
  if ( !*a1 )
    v4 = 5;
  return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v3, v4);
}
