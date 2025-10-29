int __fastcall std::os::unix::net::datagram::UnixDatagram::recv_vectored_with_ancillary(
        int a1,
        int *a2,
        struct iovec *a3,
        size_t a4,
        int a5)
{
  int v7; // r10
  ssize_t v9; // r0
  char msg_flags; // r1
  bool v11; // zf
  int v13; // r1
  char **v14; // r0
  _WORD v15[56]; // [sp+0h] [bp-8Ch] BYREF
  struct msghdr message; // [sp+70h] [bp-1Ch] BYREF

  v7 = *a2;
  memset(v15, 0, 0x6Eu);
  message.msg_flags = 0;
  message.msg_control = 0;
  message.msg_controllen = *(_DWORD *)(a5 + 4);
  message.msg_iovlen = a4;
  if ( message.msg_controllen )
    message.msg_control = *(void **)a5;
  message.msg_iov = a3;
  message.msg_namelen = 110;
  message.msg_name = v15;
  v9 = recvmsg(v7, &message, 0x40000000);
  if ( v9 == -1 )
  {
    v14 = (char **)*_errno_location();
    v13 = 0;
  }
  else
  {
    msg_flags = message.msg_flags;
    v11 = message.msg_namelen == 0;
    if ( message.msg_namelen )
      v11 = v15[0] == 1;
    *(_DWORD *)(a5 + 8) = message.msg_controllen;
    *(_BYTE *)(a5 + 12) = (msg_flags & 8) != 0;
    if ( v11 )
    {
      *(_DWORD *)(a1 + 4) = v9;
      *(_BYTE *)(a1 + 8) = (msg_flags & 0x20) != 0;
      *(_DWORD *)a1 = 0;
      return 0;
    }
    v13 = 2;
    v14 = &off_2E0E08;
  }
  *(_DWORD *)(a1 + 4) = v13;
  *(_DWORD *)(a1 + 8) = v14;
  *(_DWORD *)a1 = 1;
  return 1;
}
