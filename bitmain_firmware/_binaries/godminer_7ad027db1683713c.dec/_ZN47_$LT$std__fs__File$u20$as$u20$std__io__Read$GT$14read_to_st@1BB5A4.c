int __fastcall <std::fs::File as std::io::Read>::read_to_string(int *a1, int *a2, unsigned int *a3)
{
  unsigned int v6; // r2
  int v7; // r1

  v6 = sub_1BB2FC(a2);
  v7 = a3[2];
  if ( *a3 - v7 < v6 )
    sub_77DD8(a3, v7, v6);
  return sub_1C3E70(a1, *a2, a3);
}
