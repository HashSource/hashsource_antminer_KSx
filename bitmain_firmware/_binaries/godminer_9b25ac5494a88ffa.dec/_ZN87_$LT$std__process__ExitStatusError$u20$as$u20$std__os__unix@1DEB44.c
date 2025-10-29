bool __fastcall <std::process::ExitStatusError as std::os::unix::process::ExitStatusExt>::signal(_BYTE *a1)
{
  return (char)((*a1 & 0x7F) + 1) > 1;
}
