void *std::io::stdio::stdin()
{
  int v0; // r0

  v0 = dword_30CC44;
  __dmb(0xBu);
  if ( v0 != 4 )
    sub_79FA8();
  return &unk_30CC48;
}
