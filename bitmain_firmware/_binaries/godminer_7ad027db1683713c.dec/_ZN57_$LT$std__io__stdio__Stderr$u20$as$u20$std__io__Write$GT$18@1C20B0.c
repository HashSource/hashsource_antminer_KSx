int __fastcall <std::io::stdio::Stderr as std::io::Write>::write_all_vectored(
        int a1,
        unsigned int **a2,
        int a3,
        unsigned int a4)
{
  unsigned int **v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  return <&std::io::stdio::Stderr as std::io::Write>::write_all_vectored(a1, &v5, a3, a4);
}
