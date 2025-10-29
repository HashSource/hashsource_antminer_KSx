unsigned int __fastcall <std::process::ChildStdout as std::io::Read>::read_to_end(
        _DWORD *a1,
        int *a2,
        unsigned int *a3)
{
  return std::sys::unix::fd::FileDesc::read_to_end(a1, a2, a3);
}
