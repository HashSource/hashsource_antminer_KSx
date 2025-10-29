int __fastcall std::sys::unix::fd::FileDesc::set_cloexec(int a1, int *a2)
{
  int v2; // r5
  int v4; // r0
  int result; // r0

  v2 = *a2;
  v4 = fcntl(*a2, 1);
  if ( v4 == -1 || (v4 | 1) != v4 && fcntl(v2, 2) == -1 )
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
