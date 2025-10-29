int __fastcall <std::io::stdio::Stdout as std::io::Write>::write_all_vectored(int a1, int a2)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = a2;
  return <&std::io::stdio::Stdout as std::io::Write>::write_all_vectored(a1, &v3);
}
