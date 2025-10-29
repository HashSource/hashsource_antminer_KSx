// positive sp value has been detected, the output may be wrong!
void __fastcall sub_256370(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _DWORD *v8; // r4
  int v9; // [sp-10h] [bp-10h] BYREF
  int v10; // [sp-Ch] [bp-Ch] BYREF

  v9 = a1;
  v10 = a1 + 4;
  core::fmt::Formatter::debug_tuple_field2_finish(
    v8,
    (int)aTwo,
    3,
    (int)&v9,
    (int)&off_2E4184,
    (int)&v10,
    (int)&off_2E4184);
  __asm { POP             {R4,R5,R11,PC} }
}
