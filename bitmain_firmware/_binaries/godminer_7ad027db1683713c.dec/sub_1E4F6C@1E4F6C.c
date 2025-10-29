char **__fastcall sub_1E4F6C(int a1, int a2)
{
  int v4; // r6
  int v5; // r5
  unsigned int v6; // r7
  char **result; // r0
  int *v8; // r0
  unsigned int v9; // r0
  struct sockaddr v10[8]; // [sp+0h] [bp-A0h] BYREF
  socklen_t len; // [sp+84h] [bp-1Ch] BYREF
  _WORD src[9]; // [sp+88h] [bp-18h] BYREF

  memset(v10, 0, sizeof(v10));
  len = 128;
  if ( getsockname(a2, v10, &len) == -1 )
  {
    v8 = _errno_location();
    *(_BYTE *)(a1 + 7) = 0;
    *(_WORD *)(a1 + 5) = 0;
    *(_BYTE *)(a1 + 4) = 0;
    result = (char **)*v8;
    *(_WORD *)a1 = 2;
    *(_DWORD *)(a1 + 8) = result;
  }
  else if ( v10[0].sa_family == 2 )
  {
    if ( len < 0x10 )
      core::panicking::panic((int)aAssertionFaile_20, 66, (int)&off_2CAE1C);
    v9 = *(unsigned __int16 *)v10[0].sa_data;
    *(_DWORD *)(a1 + 2) = *(_DWORD *)&v10[0].sa_data[2];
    result = (char **)__rev16(v9);
    *(_WORD *)a1 = 0;
    *(_WORD *)(a1 + 6) = (_WORD)result;
  }
  else if ( v10[0].sa_family == 10 )
  {
    if ( len < 0x1C )
      core::panicking::panic((int)aAssertionFaile_19, 67, (int)&off_2CAE0C);
    *(_WORD *)a1 = 1;
    v4 = *(_DWORD *)&v10[1].sa_data[6];
    *(_DWORD *)&src[1] = *(_DWORD *)&v10[0].sa_data[6];
    *(_DWORD *)&src[3] = *(_DWORD *)&v10[0].sa_data[10];
    *(_DWORD *)&src[5] = *(_DWORD *)&v10[1].sa_family;
    v5 = *(_DWORD *)&v10[0].sa_data[2];
    v6 = *(unsigned __int16 *)v10[0].sa_data;
    *(_DWORD *)&src[7] = *(_DWORD *)&v10[1].sa_data[2];
    memcpy((void *)(a1 + 2), src, 0x12u);
    result = (char **)__rev16(v6);
    *(_WORD *)(a1 + 28) = (_WORD)result;
    *(_DWORD *)(a1 + 24) = v4;
    *(_DWORD *)(a1 + 20) = v5;
  }
  else
  {
    *(_WORD *)a1 = 2;
    *(_DWORD *)(a1 + 4) = 2;
    *(_DWORD *)(a1 + 8) = &off_2CAE00;
    return &off_2CAE00;
  }
  return result;
}
