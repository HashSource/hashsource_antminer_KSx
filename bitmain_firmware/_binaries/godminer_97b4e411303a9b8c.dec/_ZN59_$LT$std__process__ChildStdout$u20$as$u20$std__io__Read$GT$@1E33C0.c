int <std::process::ChildStdout as std::io::Read>::read_to_end()
{
  return std::sys::unix::fd::FileDesc::read_to_end();
}
