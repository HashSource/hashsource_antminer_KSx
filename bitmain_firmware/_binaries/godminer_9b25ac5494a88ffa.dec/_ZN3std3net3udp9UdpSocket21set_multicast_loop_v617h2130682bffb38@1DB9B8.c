int __fastcall std::net::udp::UdpSocket::set_multicast_loop_v6(int a1, int *a2, int a3)
{
  int v4; // r0
  int result; // r0
  int optval; // [sp+4h] [bp-4h] BYREF

  v4 = *a2;
  optval = a3;
  result = setsockopt(v4, 41, 19, &optval, 4u);
  if ( result == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 4) = result;
  }
  else
  {
    *(_BYTE *)a1 = 4;
  }
  return result;
}
