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
           &unk_2A86FC,
           30,
           &unk_2A871A,
           7,
           &v3,
           &off_2DF618,
           &unk_2A8721,
           10,
           &v4,
           &off_2DF110,
           &unk_2A872B,
           7,
           &v5,
           &off_2DF5A0,
           &unk_2A86DE,
           24,
           &v6,
           &off_2DF638,
           &unk_2A8732,
           7,
           &v7,
           &off_2DF5D0);
}
