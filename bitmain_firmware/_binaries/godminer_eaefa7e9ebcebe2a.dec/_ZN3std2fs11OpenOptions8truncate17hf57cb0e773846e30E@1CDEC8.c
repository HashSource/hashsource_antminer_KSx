int __fastcall std::fs::OpenOptions::truncate(int result, char a2)
{
  *(_BYTE *)(result + 11) = a2;
  return result;
}
