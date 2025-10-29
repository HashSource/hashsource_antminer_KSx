int __fastcall <std::fs::File as std::io::Read>::read_to_end(_DWORD *a1, int *a2, unsigned int *a3)
{
  unsigned int v6; // r2
  int v7; // r1

  v6 = sub_1D12FC(a2);
  v7 = a3[2];
  if ( *a3 - v7 < v6 )
    sub_79590(a3, v7, v6);
  return sub_1D9A18((int)a1, *a2);
}
