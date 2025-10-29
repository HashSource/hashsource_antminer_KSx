int __fastcall <object::pe::ImageBoundForwarderRef as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v5 = a1 + 6;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_2B4767,
           22,
           (int)&unk_2B3FCF,
           0xFu,
           (int)&v3,
           (int)&off_2EB638,
           (int)&unk_2B4736,
           0x12u,
           (int)&v4,
           (int)&off_2EB110,
           (int)&unk_2B310A,
           8u,
           (int)&v5,
           (int)&off_2EB110);
}
