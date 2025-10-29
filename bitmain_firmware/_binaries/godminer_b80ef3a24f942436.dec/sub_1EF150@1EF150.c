void *__fastcall sub_1EF150(int a1, int a2)
{
  int v4; // r0
  int v5; // r7
  int v6; // r6
  void *result; // r0
  int *v8; // r0
  _QWORD v9[23]; // [sp+0h] [bp-120h] BYREF
  _BYTE s[104]; // [sp+B8h] [bp-68h] BYREF

  v4 = dirfd(*(DIR **)(*(_DWORD *)(a2 + 24) + 8));
  if ( v4 == -1 )
  {
    v8 = _errno_location();
    *(_DWORD *)a1 = 2;
    *(_BYTE *)(a1 + 11) = 0;
    *(_WORD *)(a1 + 9) = 0;
    result = (void *)*v8;
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = result;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 16);
    v6 = v4;
    sub_1F7EF0(v9, v4, v5, 256);
    if ( v9[0] == 3 )
    {
      memset(s, 0, sizeof(s));
      if ( sub_272CEC(v6, v5, s, 256) == -1 )
      {
        result = (void *)*_errno_location();
        *(_BYTE *)(a1 + 11) = 0;
        *(_WORD *)(a1 + 9) = 0;
        *(_QWORD *)a1 = 2;
        *(_BYTE *)(a1 + 8) = 0;
        *(_DWORD *)(a1 + 12) = result;
      }
      else
      {
        memcpy(&v9[9], s, 0x68u);
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + 4) = 0;
        return memcpy((void *)(a1 + 8), v9, 0xB0u);
      }
    }
    else
    {
      return memcpy((void *)a1, v9, 0xB8u);
    }
  }
  return result;
}
