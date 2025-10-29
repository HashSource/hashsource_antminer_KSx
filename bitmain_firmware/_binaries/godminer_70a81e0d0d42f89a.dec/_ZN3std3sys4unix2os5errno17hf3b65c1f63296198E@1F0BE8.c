int std::sys::unix::os::errno()
{
  return *_errno_location();
}
