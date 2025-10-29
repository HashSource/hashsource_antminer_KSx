int __fastcall std::os::unix::net::listener::UnixListener::accept(int a1, int *a2)
{
  int v4; // r7
  int v5; // r6
  int v6; // r6
  int v7; // r0
  int v8; // r7
  int *v9; // r4
  int v10; // r5
  int result; // r0
  unsigned __int16 v12[58]; // [sp+0h] [bp-78h] BYREF
  int v13; // [sp+74h] [bp-4h] BYREF

  memset(v12, 0, 0x6Eu);
  v4 = *a2;
  v13 = 110;
  v5 = accept4(v4, v12, &v13, 0x80000);
  if ( v5 == -1 )
  {
    while ( 1 )
    {
      v6 = *_errno_location();
      if ( (unsigned __int8)std::sys::unix::decode_error_kind(v6) != 35 )
        break;
      v7 = accept4(v4, v12, &v13, 0x80000);
      if ( v7 != -1 )
      {
        v5 = v7;
        goto LABEL_5;
      }
    }
    *(_DWORD *)(a1 + 8) = v6;
    *(_BYTE *)(a1 + 7) = 0;
    *(_WORD *)(a1 + 5) = 0;
    *(_BYTE *)(a1 + 4) = 0;
    *(_DWORD *)a1 = -1;
    return -1;
  }
  else
  {
LABEL_5:
    v8 = v13;
    v9 = (int *)(a1 + 4);
    v10 = *(_DWORD *)v12;
    if ( v13 )
    {
      if ( v12[0] != 1 )
      {
        *v9 = 2;
        *(_DWORD *)(a1 + 8) = &off_2DDE08;
        *(_DWORD *)a1 = -1;
        return close(v5);
      }
    }
    else
    {
      v8 = 2;
    }
    result = (int)memcpy((void *)(a1 + 12), &v12[2], 0x6Au);
    *v9 = v8;
    *(_DWORD *)(a1 + 8) = v10;
    *(_DWORD *)a1 = v5;
  }
  return result;
}
