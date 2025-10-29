int __fastcall <std::fs::OpenOptions as std::os::unix::fs::OpenOptionsExt>::mode(int result, int a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}
