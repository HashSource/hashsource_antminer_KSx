unsigned int *std::io::stdio::stdout()
{
  int v0; // r0

  v0 = dword_312478;
  __dmb(0xBu);
  if ( v0 != 4 )
    sub_79C34();
  return &dword_312458;
}
