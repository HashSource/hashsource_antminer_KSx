int __fastcall std::net::socket_addr::SocketAddrV4::new(int result, int a2, __int16 a3)
{
  *(_WORD *)(result + 4) = a3;
  *(_DWORD *)result = a2;
  return result;
}
