int __fastcall std::net::tcp::TcpStream::linger(int *a1, int *a2)
{
  int v3; // r0
  int v4; // r5
  int result; // r0
  int optval; // [sp+4h] [bp-Ch] BYREF
  int v7; // [sp+8h] [bp-8h]
  socklen_t optlen; // [sp+Ch] [bp-4h] BYREF

  v3 = *a2;
  optlen = 8;
  v4 = 0;
  v7 = 0;
  optval = 0;
  if ( getsockopt(v3, 1, 13, &optval, &optlen) == -1 )
  {
    result = *_errno_location();
    *a1 = 0;
    a1[1] = result;
    a1[2] = 1000000001;
  }
  else
  {
    result = v7 >> 31;
    if ( !optval )
      v4 = 1000000000;
    *a1 = v7;
    a1[1] = result;
    a1[2] = v4;
  }
  return result;
}
