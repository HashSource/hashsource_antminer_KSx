// Alternative name is '_ZN59_$LT$std..net..tcp..TcpStream$u20$as$u20$std..io..Write$GT$5write17hc9c224382a1f55c6E'
ssize_t __fastcall std::net::udp::UdpSocket::send(int a1, int *a2, void *buf, size_t n)
{
  ssize_t result; // r0

  result = send(*a2, buf, n, 0x4000);
  if ( result == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
  }
  else
  {
    *(_BYTE *)a1 = 4;
  }
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
