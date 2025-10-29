unsigned int __fastcall <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at_until(
        int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned __int8 a7)
{
  unsigned int v7; // r5
  _BOOL4 v8; // r1
  unsigned int v9; // r6
  unsigned int v10; // r1

  if ( a4 | a6 )
    return 0;
  v7 = a1 + a3;
  v8 = a5 < a3 || a5 > a2;
  if ( v8 )
    v7 = 0;
  if ( a5 == a3 )
    return 0;
  if ( v8 )
    return 0;
  v9 = a5 - a3;
  if ( !memchr::memchr::fallback::memchr(a7, v7, a5 - a3) )
    return 0;
  if ( v10 > v9 )
    return 0;
  return v7;
}
