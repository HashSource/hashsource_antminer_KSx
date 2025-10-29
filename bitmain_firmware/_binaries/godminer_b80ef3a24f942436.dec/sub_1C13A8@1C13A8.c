int __fastcall sub_1C13A8(int result, int a2)
{
  *(_QWORD *)(result + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)result = 45;
  *(_DWORD *)(result + 4) = 0;
  return result;
}
