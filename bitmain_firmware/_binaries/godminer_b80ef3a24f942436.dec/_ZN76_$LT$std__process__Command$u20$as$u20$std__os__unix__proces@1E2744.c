int __fastcall <std::process::Command as std::os::unix::process::CommandExt>::uid(int result, int a2)
{
  *(_DWORD *)(result + 68) = a2;
  *(_DWORD *)(result + 64) = 1;
  return result;
}
