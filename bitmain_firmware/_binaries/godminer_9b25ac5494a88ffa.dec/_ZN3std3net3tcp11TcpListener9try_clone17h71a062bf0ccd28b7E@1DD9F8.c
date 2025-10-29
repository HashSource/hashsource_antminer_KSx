// Alternative name is '_ZN3std2os4unix3net8listener12UnixListener9try_clone17h38d63083aa1216e3E'
// Alternative name is '_ZN3std2os4unix3net6stream10UnixStream9try_clone17h31b02d4bcd5b1febE'
// Alternative name is '_ZN3std2os4unix3net8datagram12UnixDatagram9try_clone17hc2cc33ad2e8098bfE'
// Alternative name is '_ZN3std3net3udp9UdpSocket9try_clone17h7e9d23eb35f06b59E'
// Alternative name is '_ZN3std3net3tcp9TcpStream9try_clone17haaf9c3625c4404d7E'
int __fastcall std::net::tcp::TcpListener::try_clone(_DWORD *a1, int *a2)
{
  int result; // r0

  if ( *a2 == -1 )
    core::panicking::panic((int)aAssertionFaile_13, 41, (int)&off_2DDE9C);
  result = fcntl(*a2, 1030, 3);
  if ( result == -1 )
  {
    result = *_errno_location();
    *a1 = 0;
    a1[1] = result;
  }
  else
  {
    a1[1] = result;
    *(_BYTE *)a1 = 4;
  }
  return result;
}
