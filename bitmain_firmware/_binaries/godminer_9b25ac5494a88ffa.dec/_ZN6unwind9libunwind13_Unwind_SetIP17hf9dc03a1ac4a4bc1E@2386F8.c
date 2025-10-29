int __fastcall unwind::libunwind::_Unwind_SetIP(int a1, int a2)
{
  int v5; // [sp+8h] [bp-8h] BYREF
  int v6; // [sp+Ch] [bp-4h] BYREF

  v5 = 0;
  Unwind_VRS_Get(a1, 0, 15, 0, &v5);
  v6 = v5 & 1 | a2;
  return Unwind_VRS_Set(a1, 0, 15, 0, &v6);
}
