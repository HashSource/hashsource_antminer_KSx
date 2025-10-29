// Alternative name is '_ZN3std2os4unix3net8datagram12UnixDatagram28send_vectored_with_ancillary17h42c2b3c3b9364bbbE'
ssize_t __fastcall std::os::unix::net::stream::UnixStream::send_vectored_with_ancillary(
        int a1,
        int *a2,
        struct iovec *a3,
        size_t a4,
        int a5)
{
  size_t msg_controllen; // r0
  int v10; // r0
  ssize_t result; // r0
  _BYTE v12[112]; // [sp+0h] [bp-90h] BYREF
  struct msghdr message; // [sp+70h] [bp-20h] BYREF

  memset(v12, 0, 0x6Eu);
  message.msg_flags = 0;
  message.msg_control = 0;
  message.msg_controllen = *(_DWORD *)(a5 + 8);
  msg_controllen = message.msg_controllen;
  *(_BYTE *)(a5 + 12) = 0;
  if ( msg_controllen )
    message.msg_control = *(void **)a5;
  v10 = *a2;
  message.msg_iovlen = a4;
  message.msg_iov = a3;
  message.msg_namelen = 0;
  message.msg_name = v12;
  result = sendmsg(v10, &message, 0);
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
