int __fastcall <std::process::Command as std::os::unix::process::CommandExt>::process_group(int result, int a2)
{
  *(_DWORD *)(result + 84) = a2;
  *(_DWORD *)(result + 80) = 1;
  return result;
}
