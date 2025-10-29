int __fastcall unwind::libunwind::_Unwind_GetGR(int a1, int a2)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = 0;
  Unwind_VRS_Get(a1, 0, a2, 0, &v3);
  return v3;
}
