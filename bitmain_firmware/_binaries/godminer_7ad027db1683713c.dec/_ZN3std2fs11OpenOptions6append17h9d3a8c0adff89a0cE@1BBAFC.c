int __fastcall std::fs::OpenOptions::append(int result, char a2)
{
  *(_BYTE *)(result + 10) = a2;
  return result;
}
