bool __fastcall <std::process::ExitStatusError as std::os::unix::process::ExitStatusExt>::stopped_signal(_DWORD *a1)
{
  return (unsigned __int8)*a1 == 127;
}
