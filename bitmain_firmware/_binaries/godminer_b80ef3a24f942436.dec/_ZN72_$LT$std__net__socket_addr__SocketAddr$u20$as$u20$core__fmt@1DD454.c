// Alternative name is '_ZN70_$LT$std..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Debug$GT$3fmt17hb32fb75ffbbd6eb3E'
int __fastcall <std::net::socket_addr::SocketAddr as core::fmt::Display>::fmt(_WORD *a1, int *a2)
{
  if ( *a1 )
    return <std::net::socket_addr::SocketAddrV6 as core::fmt::Display>::fmt((int)(a1 + 2), a2);
  else
    return <std::net::socket_addr::SocketAddrV4 as core::fmt::Display>::fmt((int)(a1 + 1), a2);
}
