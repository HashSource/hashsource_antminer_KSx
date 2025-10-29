// Alternative name is '_ZN3std3net3tcp9TcpStream10take_error17h36bd75dac5f94f26E'
// Alternative name is '_ZN3std3net3tcp11TcpListener10take_error17h9db6c1e849bc7520E'
int __fastcall std::net::udp::UdpSocket::take_error(int a1, int *a2)
{
  int v3; // r0
  int result; // r0
  int optval; // [sp+8h] [bp-8h] BYREF
  socklen_t optlen; // [sp+Ch] [bp-4h] BYREF

  v3 = *a2;
  optlen = 4;
  optval = 0;
  if ( getsockopt(v3, 1, 4, &optval, &optlen) == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 7) = 0;
    *(_WORD *)(a1 + 5) = 0;
    *(_BYTE *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = result;
    *(_DWORD *)a1 = 1;
  }
  else
  {
    result = optval;
    if ( optval )
    {
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)(a1 + 8) = result;
    }
    else
    {
      result = 4;
      *(_BYTE *)(a1 + 4) = 4;
    }
    *(_DWORD *)a1 = 0;
  }
  return result;
}
