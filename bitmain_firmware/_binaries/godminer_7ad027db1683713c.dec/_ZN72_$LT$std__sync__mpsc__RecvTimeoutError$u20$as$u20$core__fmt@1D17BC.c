int __fastcall <std::sync::mpsc::RecvTimeoutError as core::fmt::Display>::fmt(_BYTE *a1, int *a2)
{
  unsigned int v3; // r1
  char *v4; // r0

  if ( *a1 )
  {
    v3 = 43;
    v4 = aChannelIsEmpty;
  }
  else
  {
    v3 = 28;
    v4 = aTimedOutWaitin;
  }
  return <str as core::fmt::Display>::fmt(v4, v3, a2);
}
