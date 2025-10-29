int __fastcall std::io::error::SimpleMessage::new(int result, char a2, int a3, int a4)
{
  *(_DWORD *)result = a3;
  *(_DWORD *)(result + 4) = a4;
  *(_BYTE *)(result + 8) = a2;
  return result;
}
