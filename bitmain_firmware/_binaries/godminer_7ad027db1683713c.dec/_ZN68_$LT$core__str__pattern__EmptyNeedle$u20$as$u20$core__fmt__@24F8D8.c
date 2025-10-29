int __fastcall <core::str::pattern::EmptyNeedle as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+4Ch] [bp+28h] BYREF
  int v4; // [sp+50h] [bp+2Ch] BYREF
  int v5; // [sp+54h] [bp+30h] BYREF
  int v6; // [sp+58h] [bp+34h] BYREF
  int v7; // [sp+5Ch] [bp+38h] BYREF

  v4 = a1 + 4;
  v5 = a1 + 8;
  v3 = a1;
  v7 = a1 + 10;
  v6 = a1 + 9;
  return core::fmt::Formatter::debug_struct_field5_finish(
           a2,
           (int)&unk_2A2E03,
           11,
           (int)&unk_29F520,
           8u,
           (int)&v3,
           (int)&off_2CF908,
           (int)aEnd_2,
           3u,
           (int)&v4,
           (int)&off_2CF908,
           (int)&unk_2A2E0E,
           0xBu,
           (int)&v5,
           (int)&off_2CF658,
           (int)&unk_2A2E19,
           0xBu,
           (int)&v6,
           (int)&off_2CF658,
           (int)&unk_2A2E24,
           0xBu,
           (int)&v7,
           (int)&off_2CF658);
}
