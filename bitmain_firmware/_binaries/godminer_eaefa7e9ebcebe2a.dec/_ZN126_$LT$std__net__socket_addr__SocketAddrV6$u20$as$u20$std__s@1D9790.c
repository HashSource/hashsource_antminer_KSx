int __fastcall <std::net::socket_addr::SocketAddrV6 as std::sys_common::IntoInner<libc::unix::linux_like::sockaddr_in6>>::into_inner(
        int result,
        int *a2)
{
  unsigned int v2; // r12
  int v3; // r2
  int v4; // lr
  int v5; // r3
  int v6; // r4
  int v7; // r5

  v2 = *((unsigned __int16 *)a2 + 12);
  v3 = a2[1];
  v4 = a2[2];
  v5 = *a2;
  v6 = a2[3];
  v7 = a2[4];
  *(_DWORD *)(result + 24) = a2[5];
  *(_WORD *)result = 10;
  *(_DWORD *)(result + 4) = v7;
  *(_DWORD *)(result + 8) = v5;
  *(_DWORD *)(result + 12) = v3;
  *(_DWORD *)(result + 16) = v4;
  *(_DWORD *)(result + 20) = v6;
  *(_WORD *)(result + 2) = __rev16(v2);
  return result;
}
