unsigned int *std::io::stdio::stdout()
{
  int v0; // r0

  v0 = dword_30E028;
  __dmb(0xBu);
  if ( v0 != 4 )
    sub_7A154();
  return &dword_30E008;
}
