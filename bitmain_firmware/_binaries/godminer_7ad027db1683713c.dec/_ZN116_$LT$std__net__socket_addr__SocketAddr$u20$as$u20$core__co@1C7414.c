int __fastcall <std::net::socket_addr::SocketAddr as core::convert::From<std::net::socket_addr::SocketAddrV4>>::from(
        int result,
        int *a2)
{
  int v2; // r2
  __int16 v3; // r1

  v2 = *a2;
  v3 = *((_WORD *)a2 + 2);
  *(_WORD *)result = 0;
  *(_WORD *)(result + 6) = v3;
  *(_DWORD *)(result + 2) = v2;
  return result;
}
