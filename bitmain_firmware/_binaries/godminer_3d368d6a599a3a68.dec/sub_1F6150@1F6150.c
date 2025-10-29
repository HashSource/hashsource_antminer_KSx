unsigned int __fastcall sub_1F6150(int a1, int a2, unsigned int *a3, int a4)
{
  unsigned int v4; // r9
  int v5; // r10
  int v9; // r4
  unsigned int v10; // r7
  int v11; // r8
  int v12; // r4
  int v13; // r7
  int v14; // r7
  __uid_t v15; // r6
  __uid_t v16; // r0
  bool v17; // zf
  int v18; // r0
  const char *v19; // r0
  int v20; // r0
  _DWORD *v21; // r6
  char v22; // r0
  int v23; // r0
  unsigned int result; // r0
  int v25; // r1
  int v26; // r0
  int v27; // r0
  unsigned int v28; // [sp+0h] [bp-24h]
  int v29; // [sp+4h] [bp-20h]
  unsigned int v30; // [sp+8h] [bp-1Ch]
  unsigned int v31; // [sp+Ch] [bp-18h]
  int v33; // [sp+17h] [bp-Dh]
  char v34; // [sp+1Ch] [bp-8h] BYREF
  _BYTE v35[7]; // [sp+1Dh] [bp-7h]

  v4 = *a3;
  v5 = a3[1];
  if ( *a3 )
  {
    while ( dup2(v5, 0) == -1 )
    {
      v9 = *_errno_location();
      if ( (unsigned __int8)std::sys::unix::decode_error_kind(v9) != 35 )
      {
LABEL_8:
        *(_DWORD *)(a1 + 4) = v9;
LABEL_13:
        *(_BYTE *)(a1 + 3) = 0;
        *(_WORD *)(a1 + 1) = 0;
        *(_BYTE *)a1 = 0;
        goto LABEL_39;
      }
    }
  }
  v10 = a3[2];
  v11 = a3[3];
  if ( v10 )
  {
    while ( dup2(v11, 1) == -1 )
    {
      v9 = *_errno_location();
      if ( (unsigned __int8)std::sys::unix::decode_error_kind(v9) != 35 )
        goto LABEL_8;
    }
  }
  v12 = a3[5];
  v31 = v10;
  v30 = a3[4];
  if ( v30 )
  {
    while ( dup2(v12, 2) == -1 )
    {
      v13 = *_errno_location();
      if ( (unsigned __int8)std::sys::unix::decode_error_kind(v13) != 35 )
      {
        *(_DWORD *)(a1 + 4) = v13;
        goto LABEL_13;
      }
    }
  }
  v14 = *(_DWORD *)(a2 + 24);
  if ( v14 && setgroups(*(_DWORD *)(a2 + 28), *(const __gid_t **)(a2 + 24)) == -1
    || *(_DWORD *)(a2 + 72) == 1 && setgid(*(_DWORD *)(a2 + 76)) == -1 )
  {
    goto LABEL_37;
  }
  v29 = a1;
  if ( *(_DWORD *)(a2 + 64) == 1 )
  {
    v15 = *(_DWORD *)(a2 + 68);
    v16 = getuid();
    v17 = v16 == 0;
    if ( !v16 )
      v17 = v14 == 0;
    if ( v17 && setgroups(0, 0) == -1 )
    {
      v27 = *_errno_location();
      *(_BYTE *)(v29 + 3) = 0;
      *(_WORD *)(v29 + 1) = 0;
      *(_BYTE *)v29 = 0;
      *(_DWORD *)(v29 + 4) = v27;
      goto LABEL_39;
    }
    v18 = setuid(v15);
    a1 = v29;
    if ( v18 == -1 )
      goto LABEL_37;
  }
  if ( (v19 = *(const char **)(a2 + 16)) != 0 && chdir(v19) == -1
    || *(_DWORD *)(a2 + 80) == 1 && setpgid(0, *(_DWORD *)(a2 + 84)) == -1 )
  {
LABEL_37:
    v23 = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
  }
  else
  {
    if ( byte_307C85 || signal(13, 0) != (__sighandler_t)-1 )
    {
      v20 = *(_DWORD *)(a2 + 120);
      v28 = v4;
      if ( v20 )
      {
        v21 = *(_DWORD **)(a2 + 116);
        v4 = (unsigned int)&v21[2 * v20];
        while ( 1 )
        {
          (*(void (__fastcall **)(char *, _DWORD))(v21[1] + 16))(&v34, *v21);
          v22 = v34;
          if ( v34 != 4 )
            break;
          v21 += 2;
          if ( v21 == (_DWORD *)v4 )
            goto LABEL_35;
        }
        v33 = *(_DWORD *)&v35[3];
        LOBYTE(v33) = v35[3];
        v25 = *(_DWORD *)v35;
        *(_DWORD *)(v29 + 4) = v33;
        *(_DWORD *)(v29 + 1) = v25;
        *(_BYTE *)v29 = v22;
        v4 = v28;
        goto LABEL_39;
      }
LABEL_35:
      if ( a4 )
      {
        v4 = environ;
        environ = *(_DWORD *)(a4 + 16);
      }
      execvp(*(const char **)(a2 + 32), *(char *const **)(a2 + 104));
      v26 = *_errno_location();
      *(_DWORD *)v29 = 0;
      *(_DWORD *)(v29 + 4) = v26;
      if ( a4 )
        environ = v4;
      if ( v28 >= 2 )
      {
        close(v5);
        if ( v31 < 2 )
        {
LABEL_53:
          result = v30;
          if ( v30 >= 2 )
            return close(v12);
          return result;
        }
      }
      else if ( v31 < 2 )
      {
        goto LABEL_53;
      }
      close(v11);
      result = v30;
      if ( v30 >= 2 )
        return close(v12);
      return result;
    }
    v23 = *_errno_location();
    *(_DWORD *)a1 = 0;
  }
  *(_DWORD *)(a1 + 4) = v23;
LABEL_39:
  if ( v4 >= 2 )
  {
    close(v5);
    if ( a3[2] < 2 )
    {
LABEL_41:
      result = a3[4];
      if ( result < 2 )
        return result;
      goto LABEL_45;
    }
  }
  else if ( a3[2] < 2 )
  {
    goto LABEL_41;
  }
  close(a3[3]);
  result = a3[4];
  if ( result >= 2 )
  {
LABEL_45:
    v12 = a3[5];
    return close(v12);
  }
  return result;
}
