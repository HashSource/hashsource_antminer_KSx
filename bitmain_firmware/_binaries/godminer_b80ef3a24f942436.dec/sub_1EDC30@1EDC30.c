// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1EDC30(int a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v6; // [sp-4h] [bp-4h] BYREF

  v6 = a1 + 1;
  core::fmt::Formatter::debug_tuple_field1_finish(a3, (int)aDisk, 4, (int)&v6, (int)&off_2E9130);
  __asm { POP             {R11,PC} }
}
