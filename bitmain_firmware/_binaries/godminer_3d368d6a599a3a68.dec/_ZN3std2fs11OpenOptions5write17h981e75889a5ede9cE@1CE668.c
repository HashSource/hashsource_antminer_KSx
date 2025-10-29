int __fastcall std::fs::OpenOptions::write(int result, char a2)
{
  *(_BYTE *)(result + 9) = a2;
  return result;
}
