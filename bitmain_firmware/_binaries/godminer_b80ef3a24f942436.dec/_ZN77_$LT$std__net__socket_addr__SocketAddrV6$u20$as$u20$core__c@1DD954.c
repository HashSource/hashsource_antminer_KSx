// attributes: thunk
int __fastcall <std::net::socket_addr::SocketAddrV6 as core::cmp::PartialOrd>::partial_cmp(
        unsigned __int16 *a1,
        unsigned __int16 *a2)
{
  return <std::net::socket_addr::SocketAddrV6 as core::cmp::Ord>::cmp(a1, a2);
}
