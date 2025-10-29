int *__fastcall std::net::tcp::TcpStream::connect_timeout(
        int *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  int v5; // r7
  int *v7; // r5
  int v11; // r0
  int v12; // r10
  int *v13; // r11
  int *v14; // r3
  int v15; // lr
  __int16 v16; // r1
  int v17; // r0
  int v18; // r6
  unsigned int v19; // r12
  socklen_t v20; // r2
  sa_family_t v21; // r5
  int v22; // r0
  int v23; // r3
  int *result; // r0
  int v25; // r9
  char **v26; // r9
  int v27; // r11
  bool v28; // zf
  __int64 v29; // kr08_8
  int v30; // r2
  int v31; // r2
  unsigned int v32; // r0
  unsigned int v33; // r2
  unsigned int v34; // r1
  int v35; // r3
  int v36; // r3
  unsigned int v37; // r5
  __int64 v38; // r0
  unsigned int v39; // r2
  int v40; // r3
  int v41; // r5
  unsigned int v42; // kr00_4
  __int64 v43; // kr20_8
  unsigned __int64 v44; // r0
  unsigned int v45; // r2
  int v46; // r1
  int v47; // r0
  int v48; // [sp+10h] [bp-64h]
  unsigned int v49; // [sp+1Ch] [bp-58h]
  struct sockaddr addr; // [sp+28h] [bp-4Ch] BYREF
  unsigned int v51; // [sp+38h] [bp-3Ch]
  int v52; // [sp+3Ch] [bp-38h]
  int v53; // [sp+40h] [bp-34h]
  struct pollfd fds; // [sp+48h] [bp-2Ch] BYREF
  __int64 v55; // [sp+50h] [bp-24h] BYREF
  int v56; // [sp+58h] [bp-1Ch]
  __int64 optval; // [sp+60h] [bp-14h] BYREF
  int v58; // [sp+68h] [bp-Ch]

  v7 = (int *)(a2 + 4);
  if ( !*(_WORD *)a2 )
  {
    v22 = socket(2, (int)&loc_80000 + 1, 0);
    if ( v22 != -1 )
    {
      v12 = v22;
      *(_DWORD *)&addr.sa_family = 1;
      if ( ioctl(v22, 0x5421u, &addr) == -1 )
        goto LABEL_18;
      v13 = a1;
      v14 = (int *)(a2 + 2);
      v20 = 16;
      v16 = __rev16(*(unsigned __int16 *)(a2 + 6));
      v17 = 0;
      v21 = 2;
      v18 = 0;
      goto LABEL_8;
    }
LABEL_11:
    result = _errno_location();
    v25 = *result;
    *a1 = 0;
    a1[1] = v25;
    return result;
  }
  v11 = socket(10, (int)&loc_80000 + 1, 0);
  if ( v11 == -1 )
    goto LABEL_11;
  v12 = v11;
  *(_DWORD *)&addr.sa_family = 1;
  if ( ioctl(v11, 0x5421u, &addr) == -1 )
    goto LABEL_18;
  v13 = a1;
  v5 = v7[3];
  v14 = (int *)(a2 + 20);
  v15 = *(_DWORD *)(a2 + 24);
  v16 = __rev16(*(unsigned __int16 *)(a2 + 28));
  v17 = *v7;
  v18 = v7[1];
  v19 = v7[2];
  v20 = 28;
  v21 = 10;
LABEL_8:
  *(_WORD *)addr.sa_data = v16;
  v23 = *v14;
  *(_DWORD *)&addr.sa_data[6] = v17;
  *(_DWORD *)&addr.sa_data[10] = v18;
  v51 = v19;
  v52 = v5;
  *(_DWORD *)&addr.sa_data[2] = v23;
  addr.sa_family = v21;
  v53 = v15;
  if ( connect(v12, &addr, v20) != -1 )
  {
    *(_DWORD *)&addr.sa_family = 0;
    a1 = v13;
    if ( ioctl(v12, 0x5421u, &addr) != -1 )
    {
LABEL_10:
      a1[1] = v12;
      *(_BYTE *)a1 = 4;
      return (int *)4;
    }
    goto LABEL_18;
  }
  v49 = a4;
  v26 = (char **)*_errno_location();
  *(_DWORD *)&addr.sa_family = 0;
  a1 = v13;
  if ( ioctl(v12, 0x5421u, &addr) == -1 )
  {
LABEL_18:
    v26 = (char **)*_errno_location();
    goto LABEL_19;
  }
  if ( v26 == (char **)115 )
  {
    *(_DWORD *)&fds.events = 4;
    v27 = 2;
    fds.fd = v12;
    v28 = (a3 | v49) == 0;
    if ( !(a3 | v49) )
      v28 = a5 == 0;
    if ( v28 )
    {
      v26 = &off_2DF880;
    }
    else
    {
      v29 = sub_1F457C(1);
      v48 = v30;
      do
      {
        while ( 1 )
        {
          v55 = sub_1F457C(1);
          v56 = v31;
          optval = v29;
          v58 = v48;
          sub_1F43FC(&addr, &v55, &optval);
          v32 = v51;
          v33 = *(_DWORD *)&addr.sa_data[6];
          if ( *(_QWORD *)&addr.sa_family )
            v32 = 1000000000;
          v34 = *(_DWORD *)&addr.sa_data[10];
          if ( v32 == 1000000000 )
          {
            v34 = 0;
            v32 = 0;
            v33 = 0;
          }
          v35 = v33 ^ a3 | v34 ^ v49;
          v36 = v35 != 0;
          if ( __PAIR64__(v34, v33) < __PAIR64__(v49, a3) )
            v36 = -1;
          v37 = 0;
          if ( v32 < a5 )
            v37 = -1;
          if ( v36 )
            v37 = v36;
          if ( v37 < 2 )
          {
            v26 = &off_2DF88C;
            goto LABEL_20;
          }
          v38 = <core::time::Duration as core::ops::arith::Sub>::sub(a3, v49, a5, v36, v33, v34, v32);
          v40 = 1000 * v38;
          v42 = HIDWORD(v38);
          v41 = (1000 * (unsigned __int64)HIDWORD(v38)) >> 32;
          v43 = 1125899907LL * v39;
          v44 = ((1000 * (unsigned __int64)(unsigned int)v38) >> 32) + (unsigned int)(1000 * HIDWORD(v38));
          if ( !is_mul_ok(0x3E8u, v42) )
            v41 = 1;
          if ( v41 | HIDWORD(v44) )
          {
            LODWORD(v44) = -1;
            v40 = -1;
          }
          v45 = v40 + v39 / 0xF4240;
          v46 = __CFADD__(v40, HIDWORD(v43) >> 18) + (_DWORD)v44;
          if ( __CFADD__(__CFADD__(v40, HIDWORD(v43) >> 18), (_DWORD)v44) )
          {
            v46 = -1;
            v45 = -1;
          }
          if ( v45 >= 0x7FFFFFFF )
            v45 = 0x7FFFFFFF;
          if ( v46 )
            v45 = 0x7FFFFFFF;
          if ( !(v40 | (HIDWORD(v43) >> 18) | (unsigned int)v44) )
            v45 = 1;
          v47 = poll(&fds, 1u, v45);
          if ( v47 != -1 )
            break;
          v26 = (char **)*_errno_location();
          if ( (unsigned __int8)std::sys::unix::decode_error_kind(v26) != 35 )
            goto LABEL_19;
        }
      }
      while ( !v47 );
      if ( (fds.revents & 0x10) == 0 )
        goto LABEL_10;
      v27 = 0;
      LODWORD(optval) = 0;
      *(_DWORD *)&addr.sa_family = 4;
      if ( getsockopt(v12, 1, 4, &optval, (socklen_t *)&addr.sa_family) == -1 )
      {
        v26 = (char **)*_errno_location();
      }
      else
      {
        v26 = (char **)optval;
        v27 = 4 * ((_DWORD)optval == 0);
        if ( v27 == 4 )
        {
          v26 = &off_2DF898;
          v27 = 2;
        }
      }
    }
    goto LABEL_20;
  }
LABEL_19:
  v27 = 0;
LABEL_20:
  result = (int *)close(v12);
  *a1 = v27;
  a1[1] = (int)v26;
  return result;
}
