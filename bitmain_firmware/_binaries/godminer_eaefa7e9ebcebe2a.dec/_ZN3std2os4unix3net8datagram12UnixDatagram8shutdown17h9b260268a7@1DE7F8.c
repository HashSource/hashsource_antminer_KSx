// Alternative name is '_ZN3std2os4unix3net6stream10UnixStream8shutdown17ha973af5df8b2da9cE'
int __fastcall std::os::unix::net::datagram::UnixDatagram::shutdown(int a1, int *a2, unsigned __int8 a3)
{
  int result; // r0

  if ( shutdown(*a2, a3) == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 4) = result;
  }
  else
  {
    *(_BYTE *)a1 = 4;
    return 4;
  }
  return result;
}
