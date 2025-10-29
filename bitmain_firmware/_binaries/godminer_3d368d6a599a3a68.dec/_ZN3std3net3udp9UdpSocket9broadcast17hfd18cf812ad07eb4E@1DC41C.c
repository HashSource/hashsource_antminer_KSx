int __fastcall std::net::udp::UdpSocket::broadcast(int a1, int *a2)
{
  int v3; // r0
  int v4; // r0
  int result; // r0
  int optval; // [sp+8h] [bp-8h] BYREF
  socklen_t optlen; // [sp+Ch] [bp-4h] BYREF

  v3 = *a2;
  optval = 0;
  optlen = 4;
  if ( getsockopt(v3, 1, 6, &optval, &optlen) == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_DWORD *)(a1 + 4) = result;
    *(_BYTE *)a1 = 0;
  }
  else
  {
    v4 = optval;
    *(_BYTE *)a1 = 4;
    result = v4 != 0;
    *(_BYTE *)(a1 + 1) = result;
  }
  return result;
}
