// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1D3DE8(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // [sp-A8h] [bp-A8h] BYREF
  int v11; // [sp-28h] [bp-28h] BYREF

  v10 = *(_DWORD *)(a1 + 4);
  v11 = v10 + 8;
  core::fmt::Formatter::debug_struct_field2_finish(
    a2,
    (int)aCustom,
    6,
    (int)aKind,
    4u,
    (int)&v11,
    (int)&off_2EA600,
    (int)&unk_2B1A26,
    5u,
    (int)&v10,
    (int)&off_2EA610);
  __asm { POP             {R4-R7,R11,PC} }
}
