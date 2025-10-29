unsigned int __fastcall unwind::libunwind::_Unwind_GetIP(int a1)
{
  int v2; // [sp+4h] [bp-4h] BYREF

  v2 = 0;
  Unwind_VRS_Get(a1, 0, 15, 0, &v2);
  return v2 & 0xFFFFFFFE;
}
