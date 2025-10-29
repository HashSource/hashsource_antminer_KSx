int __fastcall std::os::unix::net::datagram::UnixDatagram::peek_from(_DWORD *a1, int *a2, void *a3, size_t a4)
{
  int v8; // r9
  int v9; // r0
  socklen_t v10; // r5
  ssize_t v11; // r0
  ssize_t v12; // r6
  int sa_family; // r9
  int v14; // r10
  int v16; // r1
  int v17; // r0
  struct sockaddr s[7]; // [sp+8h] [bp-78h] BYREF
  socklen_t addr_len; // [sp+7Ch] [bp-4h] BYREF

  v8 = 0;
  memset(s, 0, 0x6Eu);
  v9 = *a2;
  addr_len = 110;
  v10 = 2;
  v11 = recvfrom(v9, a3, a4, 2, s, &addr_len);
  if ( v11 <= -1 )
  {
    v16 = *_errno_location();
    v17 = v16;
  }
  else
  {
    v12 = v11;
    sa_family = s[0].sa_family;
    if ( !addr_len || (v10 = addr_len, s[0].sa_family == 1) )
    {
      v14 = *(unsigned __int16 *)s[0].sa_data;
      memcpy(a1 + 4, &s[0].sa_data[2], 0x6Au);
      a1[3] = sa_family | (v14 << 16);
      a1[2] = v10;
      a1[1] = v12;
      *a1 = 0;
      return 0;
    }
    v8 = 2;
    v17 = (int)&off_2E0E08;
    LOWORD(v16) = (unsigned __int16)&off_2E0E08;
  }
  a1[2] = v17 & 0xFFFF0000 | (unsigned __int16)v16;
  a1[1] = v8;
  *a1 = 1;
  return 1;
}
