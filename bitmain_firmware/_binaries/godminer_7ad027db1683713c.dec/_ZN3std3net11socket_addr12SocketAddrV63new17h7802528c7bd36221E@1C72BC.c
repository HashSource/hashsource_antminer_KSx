int __fastcall std::net::socket_addr::SocketAddrV6::new(int result, int *a2, __int16 a3, int a4, int a5)
{
  int v5; // lr
  int v6; // r4
  int v7; // r5
  int v8; // r1

  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[3];
  *(_WORD *)(result + 24) = a3;
  *(_DWORD *)(result + 16) = a4;
  *(_DWORD *)(result + 20) = a5;
  *(_DWORD *)(result + 12) = v8;
  *(_DWORD *)(result + 8) = v7;
  *(_DWORD *)(result + 4) = v6;
  *(_DWORD *)result = v5;
  return result;
}
