int __fastcall <std::sync::mpsc::TryRecvError as core::fmt::Display>::fmt(_BYTE *a1, int *a2)
{
  char *v3; // r1

  v3 = (char *)&unk_290DCD;
  if ( *a1 )
    v3 = aReceivingOnACl;
  return <str as core::fmt::Display>::fmt(v3, 0x1Du, a2);
}
