void __noreturn std::process::abort()
{
  std::sys::unix::abort_internal();
}
