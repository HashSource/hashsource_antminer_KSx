int __fastcall <object::read::CodeView as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v4 = a1 + 16;
  v5 = a1 + 24;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_292BAA,
           8,
           (int)&unk_2928C8,
           4u,
           (int)&v3,
           (int)&off_2CB4B8,
           (int)&unk_2928CC,
           4u,
           (int)&v4,
           (int)&off_2CB158,
           (int)&unk_293599,
           3u,
           (int)&v5,
           (int)&off_2CB308);
}
