// positive sp value has been detected, the output may be wrong!
void __fastcall sub_209B88(int a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // [sp-Ch] [bp-Ch] BYREF

  v6 = a1 + 8;
  core::fmt::Formatter::debug_struct_field1_finish(a2, (int)aElf, 3, (int)&unk_2B30EA, 8u, (int)&v6, (int)&off_2EB338);
  __asm { POP             {R11,PC} }
}
