ssize_t __fastcall std::os::unix::net::datagram::UnixDatagram::send_to_addr(
        int a1,
        int *a2,
        void *buf,
        size_t n,
        struct sockaddr *a5)
{
  ssize_t result; // r0

  result = sendto(*a2, buf, n, 0x4000, (const struct sockaddr *)&a5->sa_data[2], *(_DWORD *)&a5->sa_family);
  if ( result == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
  }
  else
  {
    *(_BYTE *)a1 = 4;
  }
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
