char **__fastcall std::os::unix::net::addr::sockaddr_un(_DWORD *a1, _BYTE *a2, size_t a3)
{
  int v6; // r0
  char **result; // r0
  int v8; // r1
  int v9; // r5
  _BYTE v10[112]; // [sp+0h] [bp-70h] BYREF

  memset(v10, 0, 0x6Cu);
  if ( a3 >= 8 )
  {
    v6 = core::slice::memchr::memchr_aligned(0, a2);
  }
  else
  {
    if ( !a3 )
      goto LABEL_13;
    v6 = 1;
    if ( !*a2 )
      goto LABEL_15;
    if ( a3 == 1 )
      goto LABEL_13;
    if ( !a2[1] )
      goto LABEL_15;
    if ( a3 == 2 )
      goto LABEL_13;
    if ( !a2[2] )
      goto LABEL_15;
    if ( a3 == 3 )
      goto LABEL_13;
    if ( !a2[3] )
      goto LABEL_15;
    if ( a3 == 4 )
      goto LABEL_13;
    if ( !a2[4] )
      goto LABEL_15;
    if ( a3 == 5 )
    {
LABEL_13:
      v6 = 0;
    }
    else if ( a2[5] )
    {
      v6 = 0;
      if ( a3 != 6 )
        v6 = a2[6] == 0;
    }
  }
LABEL_15:
  if ( v6 == 1 )
  {
    result = &off_2DEDF0;
LABEL_19:
    *a1 = 1;
    a1[1] = 2;
    a1[2] = result;
    return result;
  }
  if ( a3 >= 0x6C )
  {
    result = &off_2DEDFC;
    goto LABEL_19;
  }
  memcpy(v10, a2, a3);
  if ( a3 )
  {
    v8 = 3;
    if ( !*a2 )
      v8 = 2;
    v9 = v8 + a3;
  }
  else
  {
    v9 = 2;
  }
  memcpy((char *)a1 + 6, v10, 0x6Cu);
  a1[29] = v9;
  *((_WORD *)a1 + 2) = 1;
  *a1 = 0;
  return 0;
}
