int __fastcall std::sys::unix::fd::FileDesc::get_cloexec(int a1, int *a2)
{
  int v3; // r0
  int result; // r0

  v3 = fcntl(*a2, 1);
  if ( v3 == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 4) = result;
  }
  else
  {
    result = v3 & 1;
    *(_BYTE *)a1 = 4;
    *(_BYTE *)(a1 + 1) = result;
  }
  return result;
}
