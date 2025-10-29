int __fastcall <object::read::elf::version::Version as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  v5 = a1 + 12;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_2B3893,
           7,
           (int)aName_1,
           4u,
           (int)&v3,
           (int)&off_2EB130,
           (int)&unk_2B2E00,
           4u,
           (int)&v4,
           (int)&off_2EB308,
           (int)&unk_2B389A,
           5u,
           (int)&v5,
           (int)&off_2EB328);
}
