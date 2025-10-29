int __fastcall std::os::fd::owned::OwnedFd::try_clone(int a1, int *a2)
{
  int result; // r0

  if ( *a2 == -1 )
    core::panicking::panic((int)aAssertionFaile_13, 41, (int)&off_2E9E9C);
  result = fcntl(*a2, 1030, 3);
  if ( result == -1 )
  {
    result = *_errno_location();
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
