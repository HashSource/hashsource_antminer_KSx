int __fastcall <std::net::socket_addr::SocketAddrV4 as std::sys_common::FromInner<libc::unix::linux_like::sockaddr_in>>::from_inner(
        int result,
        int a2)
{
  unsigned int v2; // r2

  v2 = *(unsigned __int16 *)(a2 + 2);
  *(_DWORD *)result = *(_DWORD *)(a2 + 4);
  *(_WORD *)(result + 4) = __rev16(v2);
  return result;
}
