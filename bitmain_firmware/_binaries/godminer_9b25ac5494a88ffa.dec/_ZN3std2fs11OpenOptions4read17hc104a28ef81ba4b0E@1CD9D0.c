int __fastcall std::fs::OpenOptions::read(int result, char a2)
{
  *(_BYTE *)(result + 8) = a2;
  return result;
}
