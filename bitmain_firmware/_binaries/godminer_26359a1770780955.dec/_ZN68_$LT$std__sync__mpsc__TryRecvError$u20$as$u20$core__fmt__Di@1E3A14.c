int __fastcall <std::sync::mpsc::TryRecvError as core::fmt::Display>::fmt(_BYTE *a1, int a2)
{
  const char *v3; // r1

  v3 = (const char *)&unk_2A5A1D;
  if ( *a1 )
    v3 = aReceivingOnACl;
  return <str as core::fmt::Display>::fmt(v3, 29, a2);
}
