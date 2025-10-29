int __fastcall std::os::unix::net::datagram::UnixDatagram::recv_from(_DWORD *a1, int *a2, void *a3, size_t a4)
{
  int v8; // r9
  int v9; // r0
  ssize_t v10; // r0
  socklen_t v11; // r5
  ssize_t v12; // r6
  int sa_family; // r9
  int v14; // r0
  int v15; // r1
  int v17; // r10
  struct sockaddr s[7]; // [sp+8h] [bp-78h] BYREF
  socklen_t addr_len; // [sp+7Ch] [bp-4h] BYREF

  v8 = 0;
  memset(s, 0, 0x6Eu);
  v9 = *a2;
  addr_len = 110;
  v10 = recvfrom(v9, a3, a4, 0, s, &addr_len);
  if ( v10 <= -1 )
  {
    v15 = *_errno_location();
    v14 = v15;
    goto LABEL_6;
  }
  v11 = addr_len;
  v12 = v10;
  sa_family = s[0].sa_family;
  if ( addr_len )
  {
    if ( s[0].sa_family != 1 )
    {
      v8 = 2;
      v14 = (int)&off_2DDE08;
      LOWORD(v15) = (unsigned __int16)&off_2DDE08;
LABEL_6:
      a1[2] = v14 & 0xFFFF0000 | (unsigned __int16)v15;
      a1[1] = v8;
      *a1 = 1;
      return 1;
    }
  }
  else
  {
    v11 = 2;
  }
  v17 = *(unsigned __int16 *)s[0].sa_data;
  memcpy(a1 + 4, &s[0].sa_data[2], 0x6Au);
  a1[3] = sa_family | (v17 << 16);
  a1[2] = v11;
  a1[1] = v12;
  *a1 = 0;
  return 0;
}
