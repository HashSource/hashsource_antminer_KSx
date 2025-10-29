int __fastcall core::fmt::Formatter::new(int result, int a2, int a3)
{
  *(_BYTE *)(result + 32) = 3;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 32;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = 0;
  return result;
}
