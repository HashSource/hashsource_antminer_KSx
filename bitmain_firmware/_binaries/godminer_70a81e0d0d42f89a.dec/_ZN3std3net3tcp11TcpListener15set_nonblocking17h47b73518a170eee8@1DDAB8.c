// Alternative name is '_ZN3std3net3udp9UdpSocket15set_nonblocking17h34c62529bb5927f4E'
// Alternative name is '_ZN3std3net3tcp9TcpStream15set_nonblocking17he03116b1ff3dab7aE'
int __fastcall std::net::tcp::TcpListener::set_nonblocking(_DWORD *a1, int *a2, int a3)
{
  int v4; // r0
  int result; // r0
  int v6; // [sp+4h] [bp-4h] BYREF

  v4 = *a2;
  v6 = a3;
  if ( ioctl(v4, 0x5421u, &v6) == -1 )
  {
    result = *_errno_location();
    *a1 = 0;
    a1[1] = result;
  }
  else
  {
    *(_BYTE *)a1 = 4;
    return 4;
  }
  return result;
}
