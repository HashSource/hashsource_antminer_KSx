int __fastcall <std::net::socket_addr::SocketAddrV4 as core::cmp::PartialOrd>::partial_cmp(
        unsigned __int16 *a1,
        unsigned __int16 *a2)
{
  int v4; // r0
  bool v5; // nf
  unsigned int v6; // r1
  unsigned int v7; // r2
  int result; // r0
  int v9; // r3

  v4 = memcmp(a1, a2, 4u);
  v5 = v4 < 0;
  v6 = a2[2];
  v7 = a1[2];
  result = v4 != 0;
  if ( v5 )
    result = -1;
  v9 = v7 != v6;
  if ( v7 < v6 )
    v9 = -1;
  if ( !result )
    return v9;
  return result;
}
