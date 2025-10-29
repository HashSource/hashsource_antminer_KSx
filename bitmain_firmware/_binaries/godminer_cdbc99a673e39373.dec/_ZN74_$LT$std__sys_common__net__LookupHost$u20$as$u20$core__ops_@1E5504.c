void __fastcall <std::sys_common::net::LookupHost as core::ops::drop::Drop>::drop(struct addrinfo **a1)
{
  freeaddrinfo(*a1);
}
