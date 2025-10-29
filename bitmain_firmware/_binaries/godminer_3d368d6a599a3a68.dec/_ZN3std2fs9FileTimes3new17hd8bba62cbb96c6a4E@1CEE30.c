int __fastcall std::fs::FileTimes::new(int result)
{
  *(_DWORD *)(result + 24) = 1000000000;
  *(_DWORD *)(result + 8) = 1000000000;
  return result;
}
