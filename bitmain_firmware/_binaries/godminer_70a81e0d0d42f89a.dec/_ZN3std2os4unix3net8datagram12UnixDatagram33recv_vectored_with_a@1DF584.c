int __fastcall std::os::unix::net::datagram::UnixDatagram::recv_vectored_with_ancillary_from(
        int a1,
        int *a2,
        struct iovec *a3,
        size_t a4,
        int a5)
{
  int v7; // r5
  ssize_t v9; // r0
  socklen_t msg_namelen; // r7
  ssize_t v11; // r5
  char msg_flags; // r1
  char **v13; // r10
  bool v14; // zf
  int v15; // r4
  char v17; // [sp+4h] [bp-170h]
  _BYTE v18[108]; // [sp+8h] [bp-16Ch] BYREF
  _DWORD s[28]; // [sp+78h] [bp-FCh] BYREF
  struct msghdr message; // [sp+E8h] [bp-8Ch] BYREF
  _BYTE dest[108]; // [sp+108h] [bp-6Ch] BYREF

  v7 = *a2;
  memset(s, 0, 0x6Eu);
  message.msg_flags = 0;
  message.msg_control = 0;
  message.msg_controllen = *(_DWORD *)(a5 + 4);
  message.msg_iovlen = a4;
  if ( message.msg_controllen )
    message.msg_control = *(void **)a5;
  message.msg_iov = a3;
  message.msg_namelen = 110;
  message.msg_name = s;
  v9 = recvmsg(v7, &message, 0x40000000);
  if ( v9 == -1 )
  {
    *(_DWORD *)(a1 + 12) = *_errno_location();
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 4) = 2;
    return 2;
  }
  msg_namelen = message.msg_namelen;
  v11 = v9;
  msg_flags = message.msg_flags;
  v13 = (char **)s[0];
  v14 = message.msg_namelen == 0;
  *(_DWORD *)(a5 + 8) = message.msg_controllen;
  v17 = msg_flags;
  *(_BYTE *)(a5 + 12) = (msg_flags & 8) != 0;
  if ( v14 )
  {
    msg_namelen = 2;
  }
  else if ( (unsigned __int16)v13 != 1 )
  {
    v15 = 0;
    msg_namelen = 2;
    v13 = &off_2E0E08;
    goto LABEL_10;
  }
  memcpy(dest, &s[1], 0x6Au);
  v15 = 1;
LABEL_10:
  memcpy(v18, dest, sizeof(v18));
  memcpy(s, v18, 0x6Cu);
  *(_DWORD *)(a1 + 8) = msg_namelen;
  if ( v15 )
  {
    *(_BYTE *)(a1 + 4) = (v17 & 0x20) != 0;
    *(_DWORD *)a1 = v11;
    *(_DWORD *)(a1 + 12) = v13;
    return (int)memcpy((void *)(a1 + 16), s, 0x6Cu);
  }
  else
  {
    *(_BYTE *)(a1 + 4) = 2;
    *(_DWORD *)(a1 + 12) = v13;
    return 2;
  }
}
