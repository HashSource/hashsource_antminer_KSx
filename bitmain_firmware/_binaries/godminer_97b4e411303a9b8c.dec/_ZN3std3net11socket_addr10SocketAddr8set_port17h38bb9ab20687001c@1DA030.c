_WORD *__fastcall std::net::socket_addr::SocketAddr::set_port(_WORD *result, __int16 a2)
{
  if ( *result )
    result[14] = a2;
  else
    result[3] = a2;
  return result;
}
