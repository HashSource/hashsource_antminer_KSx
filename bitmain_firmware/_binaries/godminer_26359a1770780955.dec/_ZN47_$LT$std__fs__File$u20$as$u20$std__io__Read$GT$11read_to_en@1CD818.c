int __fastcall <std::fs::File as std::io::Read>::read_to_end(int a1, int *a2, size_t *a3)
{
  unsigned int v6; // r2
  int v7; // r1

  v6 = sub_1CD5C0(a2);
  v7 = a3[2];
  if ( *a3 - v7 < v6 )
    sub_797F8(a3, v7, v6);
  return sub_1D5CDC(a1, *a2);
}
