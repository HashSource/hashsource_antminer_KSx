int __fastcall core::slice::ascii::<impl [u8]>::escape_ascii(int result, int a2, int a3)
{
  *(_BYTE *)(result + 15) = 0;
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)result = a2 + a3;
  *(_DWORD *)(result + 4) = a2;
  return result;
}
