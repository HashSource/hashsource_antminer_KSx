int __fastcall <std::io::stdio::Stdout as std::io::Write>::flush(_DWORD *a1, unsigned int **a2)
{
  unsigned int **v3; // [sp+4h] [bp-4h] BYREF

  v3 = a2;
  return <&std::io::stdio::Stdout as std::io::Write>::flush(a1, &v3);
}
