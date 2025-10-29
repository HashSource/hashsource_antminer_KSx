const char *__fastcall <std::sync::mpsc::RecvTimeoutError as core::error::Error>::description(_BYTE *a1)
{
  const char *v1; // r2

  v1 = aTimedOutWaitin;
  if ( *a1 )
    return aChannelIsEmpty;
  return v1;
}
