int __fastcall std::net::tcp::TcpStream::set_linger(int a1, int *a2, int a3, int a4, int a5)
{
  int v6; // r0
  int v7; // r1
  int result; // r0
  _DWORD optval[2]; // [sp+8h] [bp-8h] BYREF

  v6 = *a2;
  v7 = a5 - 1000000000;
  if ( a5 == 1000000000 )
    a3 = 0;
  else
    v7 = 1;
  optval[0] = v7;
  optval[1] = a3;
  if ( setsockopt(v6, 1, 13, optval, 8u) == -1 )
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
