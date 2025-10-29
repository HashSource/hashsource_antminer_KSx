int __fastcall addr2line::demangle(int result)
{
  *(_DWORD *)(result + 4) = 0;
  return result;
}
