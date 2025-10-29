unsigned int *std::io::stdio::stdout()
{
  int v0; // r0

  v0 = dword_307CC0;
  __dmb(0xBu);
  if ( v0 != 4 )
    sub_79E9C();
  return &dword_307CA0;
}
