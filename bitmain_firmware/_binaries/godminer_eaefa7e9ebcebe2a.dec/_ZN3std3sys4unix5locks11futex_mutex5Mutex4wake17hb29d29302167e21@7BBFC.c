int __fastcall std::sys::unix::locks::futex_mutex::Mutex::wake(int a1)
{
  return syscall(240, a1, 129, 1);
}
