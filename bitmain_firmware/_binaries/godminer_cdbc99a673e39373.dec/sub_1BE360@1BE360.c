ssize_t __fastcall sub_1BE360(int a1, int a2, struct iovec *iovec, unsigned int a4)
{
  struct iovec *v4; // r6
  unsigned int v5; // r10
  struct iovec *v6; // r11
  int v8; // r4
  int v9; // r5
  int v10; // r8
  int v11; // r7
  void *v12; // t1
  ssize_t result; // r0
  unsigned int v14; // r2
  int v15; // r6
  ssize_t v16; // r9
  unsigned int v17; // r1
  size_t v18; // r3
  int v19; // r2
  unsigned int v20; // r7
  unsigned int v21; // r0
  int v22; // r9
  size_t *v23; // r2
  int v24; // r1
  size_t v25; // t1
  unsigned int v26; // r11
  int v27; // r0
  size_t *p_iov_len; // r0
  unsigned int v29; // r5
  size_t v30; // t1
  bool v31; // cf
  unsigned int v32; // r0
  int v33; // r10
  int v34; // r6
  void *iov_base; // r1
  size_t iov_len; // r4
  int v37; // r1
  int v38; // r2
  size_t *v39; // r1
  _BYTE *v40; // r8
  int v41; // r0
  ssize_t v42; // r4
  size_t v43; // t1
  int v44; // r5
  int v45; // r8
  size_t v46; // r6
  int v47; // r7
  ssize_t v48; // r0
  int v49; // r1
  int v50; // r2
  struct iovec *v51; // [sp+4h] [bp-18h]
  int v53; // [sp+Fh] [bp-Dh]
  unsigned __int8 v54; // [sp+14h] [bp-8h] BYREF
  _BYTE v55[7]; // [sp+15h] [bp-7h]

  v4 = &iovec[a4];
  v5 = a4;
  v6 = iovec;
  v8 = 8 * a4;
  v9 = 0;
  v10 = -1;
  v51 = v4;
  do
  {
    v11 = v8 + v9;
    if ( !(v8 + v9) )
    {
      v27 = *(_DWORD *)(a2 + 8);
      if ( v27 )
      {
        if ( *(_BYTE *)(v27 + *(_DWORD *)(a2 + 4) - 1) == 10 )
        {
          sub_1BDF8C((int)&v54, a2);
          result = v54;
          if ( v54 != 4 )
            goto LABEL_34;
        }
      }
      if ( v5 )
      {
        p_iov_len = &v6->iov_len;
        v29 = 0;
        do
        {
          v30 = *p_iov_len;
          p_iov_len += 2;
          v31 = __CFADD__(v29, v30);
          v29 += v30;
          if ( v31 )
            v29 = -1;
          v8 -= 8;
        }
        while ( v8 );
        v32 = *(_DWORD *)a2;
        if ( v29 > *(_DWORD *)a2 - *(_DWORD *)(a2 + 8) )
        {
          sub_1BDF8C((int)&v54, a2);
          result = v54;
          if ( v54 != 4 )
          {
            v37 = *(_DWORD *)v55;
            v38 = *(_DWORD *)&v55[3];
            goto LABEL_35;
          }
          v32 = *(_DWORD *)a2;
        }
        if ( v29 < v32 )
        {
          v33 = *(_DWORD *)(a2 + 4);
          v34 = *(_DWORD *)(a2 + 8);
          do
          {
            iov_base = v6->iov_base;
            iov_len = v6->iov_len;
            ++v6;
            memcpy((void *)(v33 + v34), iov_base, iov_len);
            v34 += iov_len;
          }
          while ( v6 != v51 );
          *(_DWORD *)(a2 + 8) = v34;
          goto LABEL_37;
        }
        v39 = &v6->iov_len;
        *(_BYTE *)(a2 + 12) = 1;
        v40 = (_BYTE *)(a2 + 12);
        v41 = 8 * v5;
        v42 = 0;
        do
        {
          v43 = *v39;
          v39 += 2;
          v41 -= 8;
          v42 += v43;
        }
        while ( v41 );
      }
      else
      {
        v29 = 0;
        if ( *(_DWORD *)a2 )
        {
LABEL_37:
          *(_DWORD *)(a1 + 4) = v29;
          *(_BYTE *)a1 = 4;
          return 4;
        }
        v42 = 0;
        *(_BYTE *)(a2 + 12) = 1;
        v40 = (_BYTE *)(a2 + 12);
      }
      if ( v5 >= 0x400 )
        v5 = 1024;
      v48 = writev(1, v6, v5);
      if ( v48 == -1 )
      {
        v48 = *_errno_location();
        v49 = 0;
        v50 = 4;
        if ( v48 == 9 )
        {
LABEL_59:
          *(_DWORD *)a1 = v50;
          *(_DWORD *)(a1 + 4) = v42;
          *v40 = 0;
          return 0;
        }
      }
      else
      {
        v49 = 4;
      }
      v50 = v49;
      v42 = v48;
      goto LABEL_59;
    }
    v12 = v4[-1].iov_base;
    --v4;
    ++v10;
    v9 -= 8;
  }
  while ( !memchr(v12, 10, v4->iov_len) );
  sub_1BDF8C((int)&v54, a2);
  result = v54;
  if ( v54 != 4 )
  {
LABEL_34:
    v53 = *(_DWORD *)&v55[3];
    LOBYTE(v53) = v55[3];
    v37 = *(_DWORD *)v55;
    v38 = v53;
LABEL_35:
    *(_DWORD *)(a1 + 4) = v38;
    *(_DWORD *)(a1 + 1) = v37;
    *(_BYTE *)a1 = result;
    return result;
  }
  v14 = v5 - v10;
  if ( v5 - v10 > v5 )
    core::panicking::panic((int)aAssertionFaile, 35, (int)&off_2CAA00);
  v15 = a1;
  v16 = 0;
  if ( v5 != v10 )
  {
    v17 = 0;
    v16 = 0;
    do
    {
      v18 = v6[v17 / 8].iov_len;
      v17 += 8;
      v16 += v18;
    }
    while ( v11 != v17 );
  }
  if ( v14 >= 0x400 )
    v14 = 1024;
  result = writev(1, v6, v14);
  if ( result == -1 && (v19 = *_errno_location(), result = v16, v19 != 9) )
  {
    *(_DWORD *)(v15 + 4) = v19;
    *(_BYTE *)(v15 + 3) = 0;
    *(_WORD *)(v15 + 1) = 0;
    *(_BYTE *)v15 = 0;
  }
  else if ( result )
  {
    v20 = result;
    v21 = 0;
    v22 = v15;
    if ( v5 != v10 )
    {
      v23 = &v6->iov_len;
      v24 = v8 + v9 + 8;
      v21 = 0;
      do
      {
        v25 = *v23;
        v23 += 2;
        v24 -= 8;
        v21 += v25;
      }
      while ( v24 );
    }
    v26 = v20;
    if ( v20 >= v21 )
    {
      if ( v10 )
      {
        v44 = -v9;
        v45 = 0;
        while ( 1 )
        {
          v46 = *(size_t *)((char *)&v51[1].iov_len - v44);
          if ( v46 )
          {
            v47 = *(_DWORD *)(a2 + 8);
            if ( *(_DWORD *)a2 - v47 < v46 )
              v46 = *(_DWORD *)a2 - v47;
            memcpy((void *)(*(_DWORD *)(a2 + 4) + v47), *(const void **)((char *)&v51[1].iov_base - v44), v46);
            *(_DWORD *)(a2 + 8) = v46 + v47;
            if ( !v46 )
              goto LABEL_62;
            v45 += v46;
          }
          v44 -= 8;
          if ( v44 == 8 )
            goto LABEL_62;
        }
      }
      v45 = 0;
LABEL_62:
      *(_BYTE *)v22 = 4;
      *(_DWORD *)(v22 + 4) = v45 + v26;
      return v45 + v26;
    }
    else
    {
      *(_DWORD *)(v15 + 4) = v20;
      *(_BYTE *)v15 = 4;
      return 4;
    }
  }
  else
  {
    *(_BYTE *)v15 = 4;
    *(_DWORD *)(v15 + 4) = 0;
    return 0;
  }
  return result;
}
