const char *__fastcall <std::sync::mpsc::TryRecvError as core::error::Error>::description(_BYTE *a1)
{
  void *v1; // r1

  v1 = &unk_2B131D;
  if ( *a1 )
    return aReceivingOnACl;
  return (const char *)v1;
}
