bool __fastcall std::sys::unix::futex::futex_wake(int a1)
{
  return syscall(240, a1, 129, 1) > 0;
}
