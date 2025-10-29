// attributes: thunk
__pid_t std::os::unix::process::parent_id(void)
{
  return getppid();
}
