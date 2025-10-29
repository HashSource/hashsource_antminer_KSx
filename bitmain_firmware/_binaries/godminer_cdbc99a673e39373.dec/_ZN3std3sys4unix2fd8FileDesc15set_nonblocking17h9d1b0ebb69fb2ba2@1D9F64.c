int __fastcall std::sys::unix::fd::FileDesc::set_nonblocking(int a1, int *a2, int a3)
{
  int v4; // r0
  int result; // r0
  int v6; // [sp+4h] [bp-4h] BYREF

  v4 = *a2;
  v6 = a3;
  if ( ioctl(v4, 0x5421u, &v6) == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 4) = result;
  }
  else
  {
    *(_BYTE *)a1 = 4;
    return 4;
  }
  return result;
}
