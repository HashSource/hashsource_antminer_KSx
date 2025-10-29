void *std::io::stdio::stdin()
{
  int v0; // r0

  v0 = dword_307BF4;
  __dmb(0xBu);
  if ( v0 != 4 )
    sub_79EF0();
  return &unk_307BF8;
}
