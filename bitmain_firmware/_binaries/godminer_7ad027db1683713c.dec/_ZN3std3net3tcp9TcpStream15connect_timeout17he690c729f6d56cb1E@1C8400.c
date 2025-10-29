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
  unsigned int v35; // r3
  int v36; // r3
  unsigned int v37; // r5
  unsigned int v38; // r2
  int v39; // r3
  __int64 v40; // kr10_8
  unsigned int v41; // r1
  int v42; // r5
  unsigned int v43; // kr00_4
  __int64 v44; // kr20_8
  unsigned __int64 v45; // r0
  unsigned int v46; // r2
  int v47; // r1
  int v48; // r0
  int v49; // [sp+10h] [bp-64h]
  unsigned int v50; // [sp+1Ch] [bp-58h]
  struct sockaddr addr; // [sp+28h] [bp-4Ch] BYREF
  unsigned int v52; // [sp+38h] [bp-3Ch]
  int v53; // [sp+3Ch] [bp-38h]
  int v54; // [sp+40h] [bp-34h]
  struct pollfd fds; // [sp+48h] [bp-2Ch] BYREF
  __int64 v56; // [sp+50h] [bp-24h] BYREF
  int v57; // [sp+58h] [bp-1Ch]
  __int64 optval; // [sp+60h] [bp-14h] BYREF
  int v59; // [sp+68h] [bp-Ch]

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
  v52 = v19;
  v53 = v5;
  *(_DWORD *)&addr.sa_data[2] = v23;
  addr.sa_family = v21;
  v54 = v15;
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
  v50 = a4;
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
    v28 = (a3 | v50) == 0;
    if ( !(a3 | v50) )
      v28 = a5 == 0;
    if ( v28 )
    {
      v26 = &off_2CA880;
    }
    else
    {
      v29 = sub_1E1A08(1);
      v49 = v30;
      do
      {
        while ( 1 )
        {
          v56 = sub_1E1A08(1);
          v57 = v31;
          optval = v29;
          v59 = v49;
          sub_1E1888((int)&addr, (unsigned int *)&v56, (unsigned int *)&optval);
          v32 = v52;
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
          v35 = v33 ^ a3 | v34 ^ v50;
          v36 = v35 != 0;
          if ( __PAIR64__(v34, v33) < __PAIR64__(v50, a3) )
            v36 = -1;
          v37 = 0;
          if ( v32 < a5 )
            v37 = -1;
          if ( v36 )
            v37 = v36;
          if ( v37 < 2 )
          {
            v26 = &off_2CA88C;
            goto LABEL_20;
          }
          v40 = 1000LL
              * (unsigned int)<core::time::Duration as core::ops::arith::Sub>::sub(
                                __PAIR64__(v50, a3),
                                a5,
                                v36,
                                __PAIR64__(v34, v33),
                                v32);
          v39 = v40;
          v43 = v41;
          v42 = (1000 * (unsigned __int64)v41) >> 32;
          v44 = 1125899907LL * v38;
          v45 = HIDWORD(v40) + (unsigned __int64)(1000 * v41);
          if ( !is_mul_ok(0x3E8u, v43) )
            v42 = 1;
          if ( v42 | HIDWORD(v45) )
          {
            LODWORD(v45) = -1;
            v39 = -1;
          }
          v46 = v39 + v38 / 0xF4240;
          v47 = __CFADD__(v39, HIDWORD(v44) >> 18) + (_DWORD)v45;
          if ( __CFADD__(__CFADD__(v39, HIDWORD(v44) >> 18), (_DWORD)v45) )
          {
            v47 = -1;
            v46 = -1;
          }
          if ( v46 >= 0x7FFFFFFF )
            v46 = 0x7FFFFFFF;
          if ( v47 )
            v46 = 0x7FFFFFFF;
          if ( !(v39 | (HIDWORD(v44) >> 18) | (unsigned int)v45) )
            v46 = 1;
          v48 = poll(&fds, 1u, v46);
          if ( v48 != -1 )
            break;
          v26 = (char **)*_errno_location();
          if ( (unsigned __int8)std::sys::unix::decode_error_kind((int)v26) != 35 )
            goto LABEL_19;
        }
      }
      while ( !v48 );
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
          v26 = &off_2CA898;
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
