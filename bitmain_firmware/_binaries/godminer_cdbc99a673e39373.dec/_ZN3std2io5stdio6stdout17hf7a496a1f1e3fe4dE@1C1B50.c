unsigned int *std::io::stdio::stdout()
{
  int v0; // r0

  v0 = dword_2EAB90;
  __dmb(0xBu);
  if ( v0 != 4 )
    sub_78584();
  return &dword_2EAB70;
}
