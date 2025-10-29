void *std::io::stdio::stdin()
{
  int v0; // r0

  v0 = dword_2E95CC;
  __dmb(0xBu);
  if ( v0 != 4 )
    sub_784D0();
  return &unk_2E95D0;
}
