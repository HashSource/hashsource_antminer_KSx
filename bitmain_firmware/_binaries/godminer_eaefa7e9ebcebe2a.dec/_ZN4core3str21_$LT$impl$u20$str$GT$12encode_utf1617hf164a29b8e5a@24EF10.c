int __fastcall core::str::<impl str>::encode_utf16(int result, int a2, int a3)
{
  *(_WORD *)(result + 8) = 0;
  *(_DWORD *)result = a2 + a3;
  *(_DWORD *)(result + 4) = a2;
  return result;
}
