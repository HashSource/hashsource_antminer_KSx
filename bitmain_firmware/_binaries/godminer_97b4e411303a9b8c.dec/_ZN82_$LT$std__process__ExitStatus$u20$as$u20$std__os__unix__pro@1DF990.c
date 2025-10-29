int __fastcall <std::process::ExitStatus as std::os::unix::process::ExitStatusExt>::core_dumped(_DWORD *a1)
{
  return ((char)((*a1 & 0x7F) + 1) > 1) & (*a1 >> 7);
}
