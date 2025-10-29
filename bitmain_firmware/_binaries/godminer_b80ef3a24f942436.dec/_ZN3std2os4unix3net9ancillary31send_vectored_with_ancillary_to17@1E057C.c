char **__fastcall std::os::unix::net::ancillary::send_vectored_with_ancillary_to(
        int a1,
        int *a2,
        _BYTE *a3,
        unsigned int a4,
        int a5,
        int a6,
        int *a7)
{
  int v11; // r0
  int v12; // r4
  int v13; // r5
  int v14; // r6
  char **result; // r0
  int v16; // r1
  int v17; // r0
  bool v18; // zf
  int v19; // r0
  _DWORD s[28]; // [sp+8h] [bp-DCh] BYREF
  _BYTE dest[102]; // [sp+78h] [bp-6Ch] BYREF

  if ( !a3 )
  {
    v12 = 0;
    memset(dest, 0, sizeof(dest));
    v13 = 0;
    v14 = 0;
    goto LABEL_28;
  }
  memset(s, 0, 0x6Cu);
  if ( a4 >= 8 )
  {
    v11 = core::slice::memchr::memchr_aligned(0, (int)a3, a4);
    goto LABEL_17;
  }
  if ( !a4 )
    goto LABEL_14;
  v11 = 1;
  if ( *a3 )
  {
    if ( a4 == 1 )
      goto LABEL_14;
    if ( !a3[1] )
      goto LABEL_17;
    if ( a4 == 2 )
      goto LABEL_14;
    if ( !a3[2] )
      goto LABEL_17;
    if ( a4 == 3 )
      goto LABEL_14;
    if ( !a3[3] )
      goto LABEL_17;
    if ( a4 == 4 )
    {
LABEL_14:
      v11 = 0;
      goto LABEL_17;
    }
    if ( a3[4] )
    {
      if ( a4 != 5 )
      {
        if ( a3[5] )
        {
          v11 = 0;
          if ( a4 != 6 )
            v11 = a3[6] == 0;
        }
        goto LABEL_17;
      }
      goto LABEL_14;
    }
  }
LABEL_17:
  if ( v11 == 1 )
  {
    result = &off_2E9DF0;
LABEL_21:
    *(_DWORD *)a1 = 2;
    *(_DWORD *)(a1 + 4) = result;
    return result;
  }
  if ( a4 > 0x6B )
  {
    result = &off_2E9DFC;
    goto LABEL_21;
  }
  memcpy(s, a3, a4);
  if ( a4 )
  {
    v16 = 3;
    if ( !*a3 )
      v16 = 2;
    v14 = v16 + a4;
  }
  else
  {
    v14 = 2;
  }
  v13 = *(_DWORD *)((char *)s + 2);
  memcpy(dest, (const void *)((unsigned int)s | 6), sizeof(dest));
  v12 = (LOWORD(s[0]) << 16) | 1;
LABEL_28:
  s[0] = v12;
  s[1] = v13;
  memcpy(&s[2], dest, 0x66u);
  v17 = a7[2];
  *(_DWORD *)&dest[24] = 0;
  v18 = v17 == 0;
  *(_DWORD *)&dest[20] = v17;
  if ( v17 )
    v17 = *a7;
  *(_DWORD *)&dest[16] = 0;
  if ( !v18 )
    *(_DWORD *)&dest[16] = v17;
  v19 = *a2;
  *((_BYTE *)a7 + 12) = 0;
  *(_DWORD *)&dest[12] = a6;
  *(_DWORD *)&dest[8] = a5;
  *(_DWORD *)&dest[4] = v14;
  *(_DWORD *)dest = s;
  result = (char **)sendmsg(v19, (const struct msghdr *)dest, 0);
  if ( result == (char **)-1 )
  {
    result = (char **)*_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
  }
  else
  {
    *(_BYTE *)a1 = 4;
  }
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
