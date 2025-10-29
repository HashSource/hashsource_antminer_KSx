ssize_t __fastcall std::os::unix::net::stream::UnixStream::recv_vectored_with_ancillary(
        _DWORD *a1,
        int *a2,
        struct iovec *a3,
        size_t a4,
        int a5)
{
  int v7; // r8
  ssize_t result; // r0
  char msg_flags; // r1
  _BYTE v11[112]; // [sp+0h] [bp-8Ch] BYREF
  struct msghdr message; // [sp+70h] [bp-1Ch] BYREF

  v7 = *a2;
  memset(v11, 0, 0x6Eu);
  message.msg_flags = 0;
  message.msg_control = 0;
  message.msg_controllen = *(_DWORD *)(a5 + 4);
  message.msg_iovlen = a4;
  if ( message.msg_controllen )
    message.msg_control = *(void **)a5;
  message.msg_iov = a3;
  message.msg_namelen = 110;
  message.msg_name = v11;
  result = recvmsg(v7, &message, 0x40000000);
  if ( result == -1 )
  {
    result = *_errno_location();
    *a1 = 0;
  }
  else
  {
    msg_flags = message.msg_flags;
    *(_DWORD *)(a5 + 8) = message.msg_controllen;
    *(_BYTE *)(a5 + 12) = (msg_flags & 8) != 0;
    *(_BYTE *)a1 = 4;
  }
  a1[1] = result;
  return result;
}
