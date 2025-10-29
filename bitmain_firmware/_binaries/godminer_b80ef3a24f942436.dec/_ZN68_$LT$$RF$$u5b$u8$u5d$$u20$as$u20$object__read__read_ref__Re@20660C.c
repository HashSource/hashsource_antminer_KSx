int __fastcall <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(
        int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        int a6)
{
  int result; // r0

  result = 0;
  if ( !a4 && !a6 && a3 <= a2 )
  {
    result = a1 + a3;
    if ( a2 - a3 < a5 )
      return 0;
  }
  return result;
}
