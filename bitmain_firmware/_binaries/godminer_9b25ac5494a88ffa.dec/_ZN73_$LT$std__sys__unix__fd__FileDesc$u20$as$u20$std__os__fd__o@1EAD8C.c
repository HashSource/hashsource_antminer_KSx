int __fastcall <std::sys::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd(int *a1)
{
  int result; // r0

  result = *a1;
  if ( result == -1 )
    core::panicking::panic((int)aAssertionFaile_13, 41, (int)&off_2DDE9C);
  return result;
}
