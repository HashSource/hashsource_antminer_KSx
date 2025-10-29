// Alternative name is '_ZN62_$LT$std..net..ip_addr..IpAddr$u20$as$u20$core..fmt..Debug$GT$3fmt17hc8f3640052753e9dE'
int __fastcall <std::net::ip_addr::IpAddr as core::fmt::Display>::fmt(unsigned __int8 *a1, int *a2)
{
  int v2; // r2
  unsigned __int16 *v3; // r0

  v2 = *a1;
  v3 = (unsigned __int16 *)(a1 + 1);
  if ( v2 )
    return <std::net::ip_addr::Ipv6Addr as core::fmt::Display>::fmt(v3, a2);
  else
    return <std::net::ip_addr::Ipv4Addr as core::fmt::Display>::fmt((int *)v3, a2);
}
