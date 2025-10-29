int __fastcall sub_1C138C(int result, int a2)
{
  *(_QWORD *)(result + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)result = 44;
  *(_DWORD *)(result + 4) = 0;
  return result;
}
