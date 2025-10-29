int __fastcall <core::task::wake::RawWakerVTable as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+40h] [bp-8h] BYREF
  int v4; // [sp+44h] [bp-4h] BYREF
  int v5; // [sp+48h] [bp+0h] BYREF
  int v6; // [sp+4Ch] [bp+4h] BYREF

  v4 = a1 + 4;
  v3 = a1;
  v6 = a1 + 12;
  v5 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           (int)aRawwakervtable,
           14,
           (int)&aRawwakervtable[14],
           5u,
           (int)&v3,
           (int)&off_2E3C60,
           (int)&unk_2B385D,
           4u,
           (int)&v4,
           (int)&off_2E3C60,
           (int)&aRawwakervtable[19],
           0xBu,
           (int)&v5,
           (int)&off_2E3C60,
           (int)&unk_2B3861,
           4u,
           (int)&v6,
           (int)&off_2E3C60);
}
