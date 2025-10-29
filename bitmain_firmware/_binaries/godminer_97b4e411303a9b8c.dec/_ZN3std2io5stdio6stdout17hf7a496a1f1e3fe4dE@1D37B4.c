unsigned int *std::io::stdio::stdout()
{
  int v0; // r0

  v0 = dword_30CD10;
  __dmb(0xBu);
  if ( v0 != 4 )
    sub_79F54();
  return &dword_30CCF0;
}
