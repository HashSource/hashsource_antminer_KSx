int __fastcall <std::net::socket_addr::SocketAddrV6 as std::sys_common::FromInner<libc::unix::linux_like::sockaddr_in6>>::from_inner(
        int result,
        int a2)
{
  int v2; // r12
  int v3; // r3
  int v4; // r4
  int v5; // r5
  int v6; // r2
  int v7; // lr
  unsigned int v8; // r1

  v2 = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 20);
  v5 = *(_DWORD *)(a2 + 24);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = *(_DWORD *)(a2 + 16);
  v8 = *(unsigned __int16 *)(a2 + 2);
  *(_DWORD *)result = v3;
  *(_DWORD *)(result + 4) = v6;
  *(_DWORD *)(result + 8) = v7;
  *(_DWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 16) = v2;
  *(_DWORD *)(result + 20) = v5;
  *(_WORD *)(result + 24) = __rev16(v8);
  return result;
}
