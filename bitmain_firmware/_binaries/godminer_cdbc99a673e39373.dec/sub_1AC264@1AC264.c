int __fastcall sub_1AC264(int result, int a2)
{
  *(_BYTE *)(result + 8) = *(_BYTE *)(a2 + 8);
  *(_DWORD *)result = 2;
  *(_DWORD *)(result + 4) = 0;
  return result;
}
