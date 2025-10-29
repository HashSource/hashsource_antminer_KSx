int __fastcall <std::net::socket_addr::SocketAddr as core::convert::From<std::net::socket_addr::SocketAddrV6>>::from(
        int result,
        int *a2)
{
  int *v2; // r1
  int v3; // r3
  int v4; // r12
  int v5; // lr
  int v6; // r4
  int v7; // r12
  int v8; // lr

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v2 = a2 + 3;
  *(_DWORD *)(result + 4) = v3;
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 12) = v5;
  v6 = v2[1];
  v7 = v2[2];
  v8 = v2[3];
  *(_DWORD *)(result + 16) = *v2;
  *(_DWORD *)(result + 20) = v6;
  *(_DWORD *)(result + 24) = v7;
  *(_DWORD *)(result + 28) = v8;
  *(_WORD *)result = 1;
  return result;
}
