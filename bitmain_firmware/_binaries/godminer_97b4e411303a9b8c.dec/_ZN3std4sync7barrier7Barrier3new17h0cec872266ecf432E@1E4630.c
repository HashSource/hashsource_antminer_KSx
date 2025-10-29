int __fastcall std::sync::barrier::Barrier::new(int result, int a2)
{
  *(_DWORD *)(result + 20) = a2;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_BYTE *)(result + 4) = 0;
  *(_DWORD *)result = 0;
  return result;
}
