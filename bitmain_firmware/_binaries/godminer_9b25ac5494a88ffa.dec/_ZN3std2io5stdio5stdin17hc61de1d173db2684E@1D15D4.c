void *std::io::stdio::stdin()
{
  int v0; // r0

  v0 = dword_30AC24;
  __dmb(0xBu);
  if ( v0 != 4 )
    sub_79E38();
  return &unk_30AC28;
}
