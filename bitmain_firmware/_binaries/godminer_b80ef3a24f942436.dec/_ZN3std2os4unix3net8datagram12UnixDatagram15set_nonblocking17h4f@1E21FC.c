// Alternative name is '_ZN3std2os4unix3net8listener12UnixListener15set_nonblocking17hbe31074f5147f1a7E'
// Alternative name is '_ZN3std2os4unix3net6stream10UnixStream15set_nonblocking17h4298304af00dbef9E'
int __fastcall std::os::unix::net::datagram::UnixDatagram::set_nonblocking(_DWORD *a1, int *a2, int a3)
{
  int v4; // r0
  int result; // r0
  int v6; // [sp+4h] [bp-4h] BYREF

  v4 = *a2;
  v6 = a3;
  if ( ioctl(v4, 0x5421u, &v6) == -1 )
  {
    result = *_errno_location();
    *a1 = 0;
    a1[1] = result;
  }
  else
  {
    *(_BYTE *)a1 = 4;
    return 4;
  }
  return result;
}
