int __fastcall unwind::libunwind::_Unwind_SetGR(int a1, int a2, int a3)
{
  int v4; // [sp+4h] [bp-4h] BYREF

  v4 = a3;
  return Unwind_VRS_Set(a1, 0, a2, 0, &v4);
}
