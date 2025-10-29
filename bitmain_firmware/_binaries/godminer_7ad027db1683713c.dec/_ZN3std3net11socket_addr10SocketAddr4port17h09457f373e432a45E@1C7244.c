int __fastcall std::net::socket_addr::SocketAddr::port(_WORD *a1)
{
  unsigned __int16 *v1; // r1

  v1 = a1 + 14;
  if ( !*a1 )
    v1 = a1 + 3;
  return *v1;
}
