int *__fastcall <std::sys::unix::stack_overflow::Handler as core::ops::drop::Drop>::drop(int *result)
{
  int v1; // r4
  void *v2; // r4
  int v3; // r0
  struct sigaltstack ss; // [sp+4h] [bp-Ch] BYREF

  v1 = *result;
  if ( *result )
  {
    ss.ss_size = 0x2000;
    ss.ss_flags = 2;
    ss.ss_sp = 0;
    sigaltstack(&ss, 0);
    v2 = (void *)(v1 - sysconf(30));
    v3 = sysconf(30);
    return (int *)munmap(v2, v3 + 0x2000);
  }
  return result;
}
