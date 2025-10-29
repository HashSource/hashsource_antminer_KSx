// positive sp value has been detected, the output may be wrong!
void __fastcall sub_227414(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // [sp-4h] [bp-4h] BYREF

  v6 = a1 + 1;
  core::fmt::Formatter::debug_tuple_field1_finish(a2, &unk_2B0589, 2, &v6, &off_2E2C84);
  __asm { POP             {R11,PC} }
}
