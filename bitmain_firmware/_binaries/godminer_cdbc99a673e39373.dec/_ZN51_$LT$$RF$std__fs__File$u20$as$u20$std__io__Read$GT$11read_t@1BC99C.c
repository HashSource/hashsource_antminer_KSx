int __fastcall <&std::fs::File as std::io::Read>::read_to_end(int a1, _DWORD **a2, size_t *a3)
{
  int v3; // r5
  unsigned int v6; // r2
  int v7; // r1

  v3 = (int)*a2;
  v6 = sub_1BC46C(*a2);
  v7 = a3[2];
  if ( *a3 - v7 < v6 )
    sub_77EE0(a3, v7, v6);
  return sub_1C4DB4(a1, v3, a3);
}
