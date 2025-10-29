void *std::io::stdio::stdin()
{
  int v0; // r0

  v0 = dword_30DF5C;
  __dmb(0xBu);
  if ( v0 != 4 )
    sub_7A1A8();
  return &unk_30DF60;
}
