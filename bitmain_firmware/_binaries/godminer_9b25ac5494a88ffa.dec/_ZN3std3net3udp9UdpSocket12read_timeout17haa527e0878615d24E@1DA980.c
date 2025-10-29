// Alternative name is '_ZN3std3net3tcp9TcpStream12read_timeout17hdb3d79d2477b8820E'
int __fastcall std::net::udp::UdpSocket::read_timeout(_DWORD *a1, int *a2)
{
  int v3; // r0
  int v4; // r0
  unsigned __int64 v5; // kr00_8
  unsigned __int64 v6; // kr08_8
  int result; // r0
  socklen_t optlen; // [sp+4h] [bp-1Ch] BYREF
  __int64 optval; // [sp+8h] [bp-18h] BYREF
  char **v10; // [sp+10h] [bp-10h]
  int v11; // [sp+14h] [bp-Ch]
  const char *v12; // [sp+18h] [bp-8h]
  int v13; // [sp+1Ch] [bp-4h]

  v3 = *a2;
  optlen = 8;
  optval = 0;
  if ( getsockopt(v3, 1, 20, &optval, &optlen) == -1 )
  {
    result = *_errno_location();
    *a1 = 0;
    a1[1] = result;
    a1[2] = 1000000001;
  }
  else if ( optval )
  {
    v4 = 1000 * HIDWORD(optval);
    v5 = ((unsigned int)(1000 * HIDWORD(optval)) >> 9) * (unsigned __int64)(unsigned int)"$3fmt17hb9280b5b2efb8a46E";
    v6 = __CFADD__((_DWORD)optval, HIDWORD(v5) >> 7) + (unsigned __int64)(unsigned int)((int)optval >> 31);
    if ( HIDWORD(v6) == 1 )
    {
      v10 = &off_2DD1E0;
      v11 = 1;
      v13 = 0;
      LODWORD(optval) = 0;
      v12 = aRustc9eb3afe9e;
      core::panicking::panic_fmt((int)&optval, (int)&off_2DD1E8);
    }
    *a1 = optval + (HIDWORD(v5) >> 7);
    a1[1] = v6;
    result = v4 - 1000000000 * (HIDWORD(v5) >> 7);
    a1[2] = result;
  }
  else
  {
    a1[2] = 1000000000;
    return 1000000000;
  }
  return result;
}
