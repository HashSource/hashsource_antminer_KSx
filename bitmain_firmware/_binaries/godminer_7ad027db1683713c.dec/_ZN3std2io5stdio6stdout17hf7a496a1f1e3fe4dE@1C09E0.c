unsigned int *std::io::stdio::stdout()
{
  int v0; // r0

  v0 = dword_2E9698;
  __dmb(0xBu);
  if ( v0 != 4 )
    sub_7847C();
  return &dword_2E9678;
}
