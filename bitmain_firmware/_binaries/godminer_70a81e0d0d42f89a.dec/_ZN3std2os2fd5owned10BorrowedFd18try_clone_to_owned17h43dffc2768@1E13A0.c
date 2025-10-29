int __fastcall std::os::fd::owned::BorrowedFd::try_clone_to_owned(int a1, int *a2)
{
  int result; // r0

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
