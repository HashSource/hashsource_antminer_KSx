int __fastcall <gimli::common::LineEncoding as core::default::Default>::default(int result)
{
  *(_BYTE *)(result + 4) = 1;
  *(_DWORD *)result = 251330817;
  return result;
}
