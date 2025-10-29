int __fastcall <std::io::stdio::Stderr as std::io::Write>::flush(int a1, int a2)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = a2;
  return <&std::io::stdio::Stderr as std::io::Write>::flush(a1, &v3);
}
