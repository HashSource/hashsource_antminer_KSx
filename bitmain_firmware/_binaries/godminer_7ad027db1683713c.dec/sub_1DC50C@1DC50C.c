char **__fastcall sub_1DC50C(int a1, int a2, void *a3, size_t a4, int flags)
{
  struct sockaddr *v5; // r8
  int v10; // r10
  char **result; // r0
  int v12; // r12
  int v13; // lr
  _QWORD *v14; // r9
  _DWORD *v15; // r1
  __int16 v16; // r6
  __int16 v17; // r2
  int v18; // r7
  struct sockaddr s[8]; // [sp+8h] [bp-A8h] BYREF
  socklen_t addr_len; // [sp+8Ch] [bp-24h] BYREF
  _QWORD v21[2]; // [sp+90h] [bp-20h] BYREF
  _BYTE v22[10]; // [sp+A0h] [bp-10h]

  v5 = s;
  v10 = 128;
  memset(s, 0, sizeof(s));
  addr_len = 128;
  result = (char **)recvfrom(a2, a3, a4, flags, s, &addr_len);
  if ( result == (char **)-1 )
  {
    result = (char **)*_errno_location();
    *(_BYTE *)(a1 + 11) = 0;
    *(_WORD *)(a1 + 9) = 0;
    *(_BYTE *)(a1 + 8) = 0;
    *(_WORD *)(a1 + 4) = 2;
    *(_DWORD *)(a1 + 12) = result;
    return result;
  }
  v14 = &v21[1];
  v15 = (_DWORD *)(a1 + 8);
  if ( s[0].sa_family == 10 )
  {
    if ( addr_len < 0x1C )
      core::panicking::panic((int)aAssertionFaile_19, 67, (int)&off_2CAE0C);
    v10 = *(_DWORD *)&s[0].sa_data[2];
    v12 = *(_DWORD *)&s[1].sa_family;
    v13 = *(_DWORD *)&s[1].sa_data[2];
    *(_QWORD *)&v22[2] = *(_QWORD *)&s[0].sa_data[6];
    v5 = *(struct sockaddr **)&s[1].sa_data[6];
    LOWORD(v21[1]) = *(_WORD *)&s[0].sa_data[12];
    LOWORD(v14) = __rev16(*(unsigned __int16 *)s[0].sa_data);
    v21[0] = __PAIR64__(*(_QWORD *)&s[0].sa_data[6] >> 16, *(unsigned int *)v22);
    v17 = *(_WORD *)v22;
    v16 = 1;
    goto LABEL_9;
  }
  if ( s[0].sa_family == 2 )
  {
    if ( addr_len < 0x10 )
      core::panicking::panic((int)aAssertionFaile_20, 66, (int)&off_2CAE1C);
    v16 = 0;
    v17 = *(_WORD *)&s[0].sa_data[2];
    WORD2(v21[0]) = __rev16(*(unsigned __int16 *)s[0].sa_data);
    LODWORD(v21[0]) = *(_DWORD *)&s[0].sa_data[2];
LABEL_9:
    v18 = *(_DWORD *)((char *)v21 + 6);
    *v15 = *(_DWORD *)((char *)v21 + 2);
    *(_DWORD *)(a1 + 12) = v18;
    *(_DWORD *)(a1 + 16) = v12;
    *(_DWORD *)(a1 + 20) = v13;
    *(_WORD *)(a1 + 6) = v17;
    *(_WORD *)(a1 + 4) = v16;
    *(_DWORD *)a1 = result;
    *(_WORD *)(a1 + 32) = (_WORD)v14;
    *(_DWORD *)(a1 + 24) = v10;
    *(_DWORD *)(a1 + 28) = v5;
    return result;
  }
  *(_WORD *)(a1 + 4) = 2;
  *v15 = 2;
  *(_DWORD *)(a1 + 12) = &off_2CAE00;
  return &off_2CAE00;
}
