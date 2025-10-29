unsigned int *std::io::stdio::stdout()
{
  int v0; // r0

  v0 = dword_30ACF0;
  __dmb(0xBu);
  if ( v0 != 4 )
    sub_79DE4();
  return &dword_30ACD0;
}
