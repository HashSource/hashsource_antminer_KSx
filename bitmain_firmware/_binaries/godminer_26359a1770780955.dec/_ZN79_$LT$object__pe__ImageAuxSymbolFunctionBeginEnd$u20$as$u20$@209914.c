int __fastcall <object::pe::ImageAuxSymbolFunctionBeginEnd as core::fmt::Debug>::fmt(int a1, int a2)
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
           &unk_2A8B9C,
           30,
           &unk_2A8BBA,
           7,
           &v3,
           &off_2E0618,
           &unk_2A8BC1,
           10,
           &v4,
           &off_2E0110,
           &unk_2A8BCB,
           7,
           &v5,
           &off_2E05A0,
           &unk_2A8B7E,
           24,
           &v6,
           &off_2E0638,
           &unk_2A8BD2,
           7,
           &v7,
           &off_2E05D0);
}
