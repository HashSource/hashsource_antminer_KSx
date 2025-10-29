int __fastcall std::path::Path::components(int result, _BYTE *a2, int a3)
{
  bool v3; // r3

  if ( a3 )
    v3 = *a2 == 47;
  else
    v3 = 0;
  *(_BYTE *)(result + 30) = v3;
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_BYTE *)(result + 8) = 6;
  *(_WORD *)(result + 28) = 512;
  return result;
}
