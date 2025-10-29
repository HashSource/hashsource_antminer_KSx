int __fastcall std::net::socket_addr::SocketAddr::new(int result, int a2, __int16 a3)
{
  int v3; // r12
  int v4; // lr
  int v5; // r3
  int v6; // r1

  if ( *(_BYTE *)a2 )
  {
    v3 = *(_DWORD *)(a2 + 1);
    v4 = *(_DWORD *)(a2 + 5);
    v5 = *(_DWORD *)(a2 + 9);
    v6 = *(_DWORD *)(a2 + 13);
    *(_WORD *)(result + 28) = a3;
    *(_DWORD *)(result + 16) = v6;
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 24) = 0;
    *(_DWORD *)(result + 12) = v5;
    *(_DWORD *)(result + 8) = v4;
    *(_DWORD *)(result + 4) = v3;
    *(_WORD *)result = 1;
  }
  else
  {
    *(_DWORD *)(result + 2) = *(_DWORD *)(a2 + 1);
    *(_WORD *)(result + 6) = a3;
    *(_WORD *)result = 0;
  }
  return result;
}
