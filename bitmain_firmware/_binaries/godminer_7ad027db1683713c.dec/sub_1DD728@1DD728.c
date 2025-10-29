int __fastcall sub_1DD728(int a1, int fd, unsigned int *a3, int a4, unsigned int *a5)
{
  int v8; // r6
  char v9; // r0
  int v10; // r1
  int v11; // r2
  bool v12; // zf
  char v13; // r0
  bool v14; // zf
  int v15; // r0
  char v16; // r0
  int v18; // r1
  int v19; // r0
  int v20; // [sp+0h] [bp-24h] BYREF
  int fda; // [sp+4h] [bp-20h] BYREF
  struct pollfd fds; // [sp+8h] [bp-1Ch] BYREF
  int v23; // [sp+10h] [bp-14h]
  int v24; // [sp+14h] [bp-10h]
  int v25; // [sp+18h] [bp-Ch] BYREF
  int v26; // [sp+1Ch] [bp-8h]

  v20 = fd;
  fda = a4;
  fds.fd = 1;
  if ( ioctl(fd, 0x5421u, &fds) == -1 || (fds.fd = 1, ioctl(a4, 0x5421u, &fds) == -1) )
  {
    v15 = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_DWORD *)(a1 + 4) = v15;
    *(_BYTE *)a1 = 0;
    goto LABEL_25;
  }
  v23 = fda;
  fds.revents = 0;
  fds.fd = v20;
  fds.events = 1;
  v24 = 1;
  while ( 1 )
  {
    while ( poll(&fds, 2u, -1) == -1 )
    {
      v8 = *_errno_location();
      if ( (unsigned __int8)std::sys::unix::decode_error_kind(v8) != 35 )
      {
        v16 = 0;
        *(_DWORD *)(a1 + 4) = v8;
        *(_BYTE *)(a1 + 3) = 0;
        *(_WORD *)(a1 + 1) = 0;
        goto LABEL_24;
      }
    }
    if ( fds.revents )
    {
      std::sys::unix::fd::FileDesc::read_to_end(&v25, &v20, a3);
      v9 = 1;
      if ( (unsigned __int8)v25 != 4 )
      {
        v10 = v25;
        v11 = v26;
        v12 = (unsigned __int8)v25 == 0;
        if ( !(_BYTE)v25 )
        {
          v9 = 0;
          v12 = v26 == 11;
        }
        if ( !v12 )
        {
          v9 = BYTE1(v25);
          if ( (unsigned __int8)v25 != 4 )
          {
LABEL_22:
            *(_DWORD *)(a1 + 4) = v11;
            *(_DWORD *)a1 = v10;
            goto LABEL_25;
          }
        }
      }
      if ( (v9 & 1) != 0 )
        break;
    }
    if ( HIWORD(v24) )
    {
      std::sys::unix::fd::FileDesc::read_to_end(&v25, &fda, a5);
      v13 = 1;
      if ( (unsigned __int8)v25 != 4 )
      {
        v10 = v25;
        v11 = v26;
        v14 = (unsigned __int8)v25 == 0;
        if ( !(_BYTE)v25 )
        {
          v13 = 0;
          v14 = v26 == 11;
        }
        if ( !v14 )
        {
          v13 = BYTE1(v25);
          v14 = (unsigned __int8)v25 == 4;
        }
        if ( !v14 )
          goto LABEL_22;
      }
      if ( (v13 & 1) != 0 )
      {
        v25 = 0;
        if ( ioctl(v20, 0x5421u, &v25) == -1 )
          goto LABEL_33;
        std::sys::unix::fd::FileDesc::read_to_end(&v25, &v20, a3);
LABEL_30:
        if ( (unsigned __int8)v25 != 4 )
        {
          v18 = v26;
          *(_DWORD *)a1 = v25;
          *(_DWORD *)(a1 + 4) = v18;
          goto LABEL_25;
        }
        v16 = 4;
LABEL_24:
        *(_BYTE *)a1 = v16;
        goto LABEL_25;
      }
    }
  }
  v25 = 0;
  if ( ioctl(fda, 0x5421u, &v25) != -1 )
  {
    std::sys::unix::fd::FileDesc::read_to_end(&v25, &fda, a5);
    goto LABEL_30;
  }
LABEL_33:
  v19 = *_errno_location();
  *(_BYTE *)(a1 + 3) = 0;
  *(_WORD *)(a1 + 1) = 0;
  *(_DWORD *)(a1 + 4) = v19;
  *(_BYTE *)a1 = 0;
LABEL_25:
  close(fda);
  return close(v20);
}
