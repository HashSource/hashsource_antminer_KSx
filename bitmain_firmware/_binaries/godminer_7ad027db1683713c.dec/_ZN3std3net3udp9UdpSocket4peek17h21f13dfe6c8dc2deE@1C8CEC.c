// Alternative name is '_ZN3std3net3tcp9TcpStream4peek17h02bd4d5d520a60e2E'
ssize_t __fastcall std::net::udp::UdpSocket::peek(int a1, int *a2, void *buf, size_t n)
{
  ssize_t result; // r0

  result = recv(*a2, buf, n, 2);
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
