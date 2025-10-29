int __fastcall <std::io::stdio::Stdout as std::io::Write>::write(int a1, unsigned int **a2, char *a3, size_t a4)
{
  unsigned int **v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  return <&std::io::stdio::Stdout as std::io::Write>::write(a1, &v5, a3, a4);
}
