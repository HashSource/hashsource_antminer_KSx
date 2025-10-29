void *std::io::stdio::stdin()
{
  int v0; // r0

  v0 = dword_2EAAC4;
  __dmb(0xBu);
  if ( v0 != 4 )
    sub_785D8();
  return &unk_2EAAC8;
}
