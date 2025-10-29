int __fastcall <core::panic::location::Location as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v5 = a1 + 12;
  v4 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_2B42E8,
           8,
           (int)&unk_2AA58E,
           4u,
           (int)&v3,
           (int)&off_2E48F8,
           (int)&unk_2AA592,
           4u,
           (int)&v4,
           (int)&off_2E4908,
           (int)&unk_2B7A05,
           3u,
           (int)&v5,
           (int)&off_2E4908);
}
