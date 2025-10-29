int __fastcall <memchr::memmem::twoway::TwoWay as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v4 = a1 + 16;
  v5 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)aTwoway,
           6,
           (int)&unk_2B57D9,
           7u,
           (int)&v3,
           (int)&off_2EC9A8,
           (int)&unk_2B57E0,
           0xCu,
           (int)&v4,
           (int)&off_2EC6F8,
           (int)&unk_2B57EC,
           5u,
           (int)&v5,
           (int)&off_2EC9B8);
}
