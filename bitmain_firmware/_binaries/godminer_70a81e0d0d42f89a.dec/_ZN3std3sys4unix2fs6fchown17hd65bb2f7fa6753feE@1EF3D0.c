int __fastcall std::sys::unix::fs::fchown(int a1, int fd, __uid_t owner, __gid_t group)
{
  int result; // r0

  if ( fchown(fd, owner, group) == -1 )
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
