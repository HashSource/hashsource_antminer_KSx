int __fastcall <std::process::Command as std::os::linux::process::CommandExt>::create_pidfd(int result, char a2)
{
  *(_BYTE *)(result + 126) = a2;
  return result;
}
