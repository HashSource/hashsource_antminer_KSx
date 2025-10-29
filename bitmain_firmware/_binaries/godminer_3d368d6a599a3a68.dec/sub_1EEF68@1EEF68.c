int __fastcall sub_1EEF68(int a1, int a2)
{
  int v3; // r5
  int result; // r0
  int *v5; // r0
  int fds[2]; // [sp+4h] [bp-24h] BYREF
  int v7; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD v8[2]; // [sp+10h] [bp-18h] BYREF
  int v9; // [sp+18h] [bp-10h]

  fds[1] = 0;
  fds[0] = 0;
  if ( socketpair(1, a2 | 0x80000, 0, fds) == -1 )
  {
    v5 = _errno_location();
    *(_BYTE *)(a1 + 7) = 0;
    *(_WORD *)(a1 + 5) = 0;
    *(_BYTE *)(a1 + 4) = 0;
    result = *v5;
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 8) = result;
  }
  else
  {
    v3 = fds[0];
    v7 = fds[0];
    if ( fds[0] == -1 )
    {
      v9 = 0;
      sub_79864(1, (int)&v7, (int)&unk_2A53FC, v8, (int)&off_2DEEAC);
    }
    result = fds[1];
    v7 = fds[1];
    if ( fds[1] == -1 )
    {
      v9 = 0;
      sub_79864(1, (int)&v7, (int)&unk_2A53FC, v8, (int)&off_2DEEAC);
    }
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = v3;
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}
