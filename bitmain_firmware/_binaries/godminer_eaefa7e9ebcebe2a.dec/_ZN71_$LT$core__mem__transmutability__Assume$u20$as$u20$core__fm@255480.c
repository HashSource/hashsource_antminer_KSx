int __fastcall <core::mem::transmutability::Assume as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+40h] [bp-8h] BYREF
  int v4; // [sp+44h] [bp-4h] BYREF
  int v5; // [sp+48h] [bp+0h] BYREF
  int v6; // [sp+4Ch] [bp+4h] BYREF

  v4 = a1 + 1;
  v3 = a1;
  v6 = a1 + 3;
  v5 = a1 + 2;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           (int)&unk_2B789B,
           6,
           (int)&unk_2B78A1,
           9u,
           (int)&v3,
           (int)&off_2E4658,
           (int)&unk_2B78AA,
           9u,
           (int)&v4,
           (int)&off_2E4658,
           (int)&unk_2B78B3,
           6u,
           (int)&v5,
           (int)&off_2E4658,
           (int)&unk_2B42C8,
           8u,
           (int)&v6,
           (int)&off_2E4658);
}
