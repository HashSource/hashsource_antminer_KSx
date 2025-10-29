// positive sp value has been detected, the output may be wrong!
void __fastcall sub_209640(int a1, int a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // [sp-8h] [bp-8h] BYREF
  int v11; // [sp-4h] [bp-4h] BYREF

  v11 = a1 + 2;
  v10 = a1 + 1;
  core::fmt::Formatter::debug_struct_field2_finish(
    a3,
    (int)aMacho,
    5,
    (int)&unk_2B373B,
    5u,
    (int)&v10,
    (int)&off_2EB0D0,
    (int)&unk_2B30C2,
    8u,
    (int)&v11,
    (int)&off_2EB328);
  __asm { POP             {R4-R7,R11,PC} }
}
