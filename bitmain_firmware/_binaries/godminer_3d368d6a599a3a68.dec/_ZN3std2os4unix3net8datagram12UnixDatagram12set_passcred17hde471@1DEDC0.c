// Alternative name is '_ZN3std2os4unix3net6stream10UnixStream12set_passcred17h9c2ff94d68744d4aE'
int __fastcall std::os::unix::net::datagram::UnixDatagram::set_passcred(int a1, int *a2, int a3)
{
  int v4; // r0
  int result; // r0
  int optval; // [sp+4h] [bp-4h] BYREF

  v4 = *a2;
  optval = a3;
  result = setsockopt(v4, 1, 16, &optval, 4u);
  if ( result == -1 )
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
  }
  return result;
}
