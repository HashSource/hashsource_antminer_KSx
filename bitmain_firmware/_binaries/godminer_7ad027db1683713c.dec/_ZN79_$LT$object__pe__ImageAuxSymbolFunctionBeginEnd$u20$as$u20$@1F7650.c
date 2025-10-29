int __fastcall <object::pe::ImageAuxSymbolFunctionBeginEnd as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+50h] [bp-8h] BYREF
  int v4; // [sp+54h] [bp-4h] BYREF
  int v5; // [sp+58h] [bp+0h] BYREF
  int v6; // [sp+5Ch] [bp+4h] BYREF
  int v7; // [sp+60h] [bp+8h] BYREF

  v4 = a1 + 4;
  v5 = a1 + 6;
  v3 = a1;
  v6 = a1 + 12;
  v7 = a1 + 16;
  return core::fmt::Formatter::debug_struct_field5_finish(
           a2,
           (int)&unk_293F4C,
           30,
           (int)&unk_293F6A,
           7u,
           (int)&v3,
           (int)&off_2CB618,
           (int)&unk_293F71,
           0xAu,
           (int)&v4,
           (int)&off_2CB110,
           (int)&unk_293F7B,
           7u,
           (int)&v5,
           (int)&off_2CB5A0,
           (int)&unk_293F2E,
           0x18u,
           (int)&v6,
           (int)&off_2CB638,
           (int)&unk_293F82,
           7u,
           (int)&v7,
           (int)&off_2CB5D0);
}
