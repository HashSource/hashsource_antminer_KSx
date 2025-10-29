unsigned int __fastcall <&std::fs::File as std::io::Read>::read_to_end(_DWORD *a1, int **a2, unsigned int *a3)
{
  int *v3; // r5
  unsigned int v6; // r2
  int v7; // r1

  v3 = *a2;
  v6 = sub_1BB2FC(*a2);
  v7 = a3[2];
  if ( *a3 - v7 < v6 )
    sub_77DD8(a3, v7, v6);
  return sub_1C3C44(a1, v3, a3);
}
