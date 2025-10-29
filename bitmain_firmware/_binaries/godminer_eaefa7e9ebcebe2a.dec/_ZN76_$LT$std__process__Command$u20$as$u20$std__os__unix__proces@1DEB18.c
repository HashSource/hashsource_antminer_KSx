int __fastcall <std::process::Command as std::os::unix::process::CommandExt>::gid(int result, int a2)
{
  *(_DWORD *)(result + 76) = a2;
  *(_DWORD *)(result + 72) = 1;
  return result;
}
