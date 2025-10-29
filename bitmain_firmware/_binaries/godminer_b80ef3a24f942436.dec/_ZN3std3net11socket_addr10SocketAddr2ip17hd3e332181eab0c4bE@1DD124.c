int __fastcall std::net::socket_addr::SocketAddr::ip(int result, int a2)
{
  int v2; // r12
  int v3; // r3
  int v4; // r2

  if ( *(_WORD *)a2 )
  {
    v2 = *(_DWORD *)(a2 + 4);
    v3 = *(_DWORD *)(a2 + 8);
    v4 = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(result + 13) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(result + 9) = v4;
    *(_DWORD *)(result + 5) = v3;
    *(_DWORD *)(result + 1) = v2;
    *(_BYTE *)result = 1;
  }
  else
  {
    *(_DWORD *)(result + 1) = *(_DWORD *)(a2 + 2);
    *(_BYTE *)result = 0;
  }
  return result;
}
