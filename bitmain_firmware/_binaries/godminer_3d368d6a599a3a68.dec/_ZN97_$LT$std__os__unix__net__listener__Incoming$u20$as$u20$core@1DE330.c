int __fastcall <std::os::unix::net::listener::Incoming as core::iter::traits::iterator::Iterator>::next(
        int *a1,
        int **a2)
{
  int v3; // r2
  int result; // r0
  unsigned __int8 v5; // r1
  int v6; // [sp+0h] [bp-78h] BYREF
  __int64 v7; // [sp+4h] [bp-74h]

  std::os::unix::net::listener::UnixListener::accept((int)&v6, *a2);
  result = v6;
  if ( v6 == -1 )
  {
    result = HIDWORD(v7);
    v5 = v7;
    v3 = v7 >> 8;
  }
  else
  {
    v5 = 4;
  }
  a1[1] = result;
  *a1 = v5 | (v3 << 8);
  return result;
}
