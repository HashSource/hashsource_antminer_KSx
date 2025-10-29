void *std::io::stdio::stdin()
{
  int v0; // r0

  v0 = dword_3123AC;
  __dmb(0xBu);
  if ( v0 != 4 )
    sub_79C88();
  return &unk_3123B0;
}
