// positive sp value has been detected, the output may be wrong!
void __fastcall sub_2157AC(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // [sp-4h] [bp-4h] BYREF

  v6 = a1 + 1;
  core::fmt::Formatter::debug_tuple_field1_finish(a2, &unk_29C189, 2, &v6, &off_2CDC84);
  __asm { POP             {R11,PC} }
}
