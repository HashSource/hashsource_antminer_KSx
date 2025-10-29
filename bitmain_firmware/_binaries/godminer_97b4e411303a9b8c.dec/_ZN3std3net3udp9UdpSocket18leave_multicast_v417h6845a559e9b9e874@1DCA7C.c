int __fastcall std::net::udp::UdpSocket::leave_multicast_v4(int a1, int *a2, int *a3, int *a4)
{
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int result; // r0
  _DWORD optval[2]; // [sp+8h] [bp-8h] BYREF

  v5 = *a2;
  v6 = *a3;
  v7 = *a4;
  optval[0] = v6;
  optval[1] = v7;
  if ( setsockopt(v5, 0, 36, optval, 8u) == -1 )
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
    return 4;
  }
  return result;
}
