int __fastcall <core::num::dec2flt::number::Number as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+40h] [bp-10h] BYREF
  int v4; // [sp+44h] [bp-Ch] BYREF
  int v5; // [sp+48h] [bp-8h] BYREF
  int v6; // [sp+4Ch] [bp-4h] BYREF

  v4 = a1 + 8;
  v3 = a1;
  v6 = a1 + 17;
  v5 = a1 + 16;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           (int)aNumber,
           6,
           (int)&unk_2B4E18,
           8u,
           (int)&v3,
           (int)&off_2E5648,
           (int)&unk_2B4E20,
           8u,
           (int)&v4,
           (int)&off_2E510C,
           (int)&unk_2B4E28,
           8u,
           (int)&v5,
           (int)&off_2E5658,
           (int)&unk_2B8306,
           0xBu,
           (int)&v6,
           (int)&off_2E5658);
}
