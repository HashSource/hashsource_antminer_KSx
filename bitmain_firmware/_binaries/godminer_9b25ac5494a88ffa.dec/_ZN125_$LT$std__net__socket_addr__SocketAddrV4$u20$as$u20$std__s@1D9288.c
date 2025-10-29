int __fastcall <std::net::socket_addr::SocketAddrV4 as std::sys_common::IntoInner<libc::unix::linux_like::sockaddr_in>>::into_inner(
        int result,
        int *a2)
{
  unsigned int v2; // r3
  int v3; // r1

  v2 = *((unsigned __int16 *)a2 + 2);
  v3 = *a2;
  *(_WORD *)result = 2;
  *(_DWORD *)(result + 4) = v3;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_WORD *)(result + 2) = __rev16(v2);
  return result;
}
