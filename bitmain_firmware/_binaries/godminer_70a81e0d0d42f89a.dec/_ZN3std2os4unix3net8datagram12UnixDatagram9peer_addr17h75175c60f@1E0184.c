// Alternative name is '_ZN3std2os4unix3net6stream10UnixStream9peer_addr17h45ae91ce93893b77E'
int __fastcall std::os::unix::net::datagram::UnixDatagram::peer_addr(int a1, int *a2)
{
  int v3; // r6
  socklen_t v4; // r6
  int result; // r0
  struct sockaddr v6; // [sp+0h] [bp-78h] BYREF
  socklen_t len; // [sp+74h] [bp-4h] BYREF

  v3 = *a2;
  memset(&v6, 0, 0x6Eu);
  len = 110;
  if ( getpeername(v3, &v6, &len) == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 7) = 0;
    *(_WORD *)(a1 + 5) = 0;
    *(_BYTE *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 8) = result;
  }
  else
  {
    v4 = len;
    if ( len )
    {
      if ( v6.sa_family != 1 )
      {
        *(_DWORD *)(a1 + 4) = 2;
        *(_DWORD *)(a1 + 8) = &off_2E0E08;
        *(_DWORD *)a1 = 1;
        return 1;
      }
    }
    else
    {
      v4 = 2;
    }
    *(_WORD *)(a1 + 8) = v6.sa_family;
    memcpy((void *)(a1 + 10), v6.sa_data, 0x6Cu);
    *(_DWORD *)(a1 + 4) = v4;
    *(_DWORD *)a1 = 0;
    return 0;
  }
  return result;
}
