bool __fastcall <std::process::ExitStatus as std::os::unix::process::ExitStatusExt>::stopped_signal(_DWORD *a1)
{
  return (unsigned __int8)*a1 == 127;
}
