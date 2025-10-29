int __fastcall <object::pe::ImageAuxSymbolFunction as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+4Ch] [bp-14h] BYREF
  int v4; // [sp+50h] [bp-10h] BYREF
  int v5; // [sp+54h] [bp-Ch] BYREF
  int v6; // [sp+58h] [bp-8h] BYREF
  int v7; // [sp+5Ch] [bp-4h] BYREF

  v4 = a1 + 4;
  v5 = a1 + 8;
  v3 = a1;
  v6 = a1 + 12;
  v7 = a1 + 16;
  return core::fmt::Formatter::debug_struct_field5_finish(
           a2,
           (int)&unk_293EF0,
           22,
           (int)&unk_293F06,
           9u,
           (int)&v3,
           (int)&off_2CB638,
           (int)&unk_293F0F,
           0xAu,
           (int)&v4,
           (int)&off_2CB638,
           (int)&unk_293F19,
           0x15u,
           (int)&v5,
           (int)&off_2CB638,
           (int)&unk_293F2E,
           0x18u,
           (int)&v6,
           (int)&off_2CB638,
           (int)&unk_293F46,
           6u,
           (int)&v7,
           (int)&off_2CB5D0);
}
