// positive sp value has been detected, the output may be wrong!
void __fastcall sub_214688(int a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // [sp-4h] [bp-4h] BYREF

  v6 = a1 + 2;
  core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)&unk_29AC34, 3, (int)&v6, (int)&off_2CCF5C);
  __asm { POP             {R11,PC} }
}
