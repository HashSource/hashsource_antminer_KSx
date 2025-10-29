int __fastcall <std::io::stdio::Stderr as std::io::Write>::write_vectored(
        int a1,
        unsigned int **a2,
        const struct iovec *a3,
        unsigned int a4)
{
  unsigned int **v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  return <&std::io::stdio::Stderr as std::io::Write>::write_vectored(a1, &v5, a3, a4);
}
