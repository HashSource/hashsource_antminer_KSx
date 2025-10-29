int __fastcall <object::pe::ImageFunctionEntry64 as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp-Ch] BYREF
  int v4; // [sp+30h] [bp-8h] BYREF
  int v5; // [sp+34h] [bp-4h] BYREF

  v3 = a1;
  v5 = a1 + 16;
  v4 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_294C6A,
           20,
           (int)&unk_29313C,
           0x10u,
           (int)&v3,
           (int)&off_2CBC90,
           (int)&unk_294C4D,
           0xEu,
           (int)&v4,
           (int)&off_2CBC90,
           (int)&unk_294C7E,
           0x26u,
           (int)&v5,
           (int)&off_2CBC90);
}
