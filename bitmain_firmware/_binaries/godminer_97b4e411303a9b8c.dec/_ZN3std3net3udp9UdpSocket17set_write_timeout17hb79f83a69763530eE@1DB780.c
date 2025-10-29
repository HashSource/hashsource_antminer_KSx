// Alternative name is '_ZN3std3net3tcp9TcpStream17set_write_timeout17h106890304746ef79E'
int __fastcall std::net::udp::UdpSocket::set_write_timeout(int a1, int *a2, __int64 a3, unsigned int a4)
{
  int v5; // r0
  unsigned int v6; // r1
  int v7; // r4
  bool v8; // zf
  int result; // r0
  _DWORD optval[2]; // [sp+8h] [bp-8h] BYREF

  v5 = *a2;
  v6 = 0;
  v7 = 0;
  if ( a4 != 1000000000 )
  {
    v8 = a3 == 0;
    if ( !a3 )
      v8 = a4 == 0;
    if ( v8 )
    {
      *(_DWORD *)a1 = 2;
      *(_DWORD *)(a1 + 4) = &off_2E0880;
      return (int)&off_2E0880;
    }
    if ( (unsigned int)a3 >= 0x7FFFFFFF )
      LODWORD(a3) = 0x7FFFFFFF;
    if ( HIDWORD(a3) )
      LODWORD(a3) = 0x7FFFFFFF;
    v7 = a3;
    v6 = a4 / 0x3E8;
    if ( !(_DWORD)a3 )
      v6 = 1;
    if ( a4 >= 0x3E8 )
      v6 = a4 / 0x3E8;
  }
  optval[1] = v6;
  optval[0] = v7;
  if ( setsockopt(v5, 1, 21, optval, 8u) == -1 )
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
