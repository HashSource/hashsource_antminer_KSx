unsigned int __fastcall unwind::libunwind::_Unwind_GetIPInfo(int a1, _DWORD *a2)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  *a2 = 0;
  v3 = 0;
  Unwind_VRS_Get(a1, 0, 15, 0, &v3);
  return v3 & 0xFFFFFFFE;
}
