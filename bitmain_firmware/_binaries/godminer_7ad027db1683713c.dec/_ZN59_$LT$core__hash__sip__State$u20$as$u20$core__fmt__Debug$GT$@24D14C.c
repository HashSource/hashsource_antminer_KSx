int __fastcall <core::hash::sip::State as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+40h] [bp-8h] BYREF
  int v4; // [sp+44h] [bp-4h] BYREF
  int v5; // [sp+48h] [bp+0h] BYREF
  int v6; // [sp+4Ch] [bp+4h] BYREF

  v4 = a1 + 8;
  v3 = a1;
  v6 = a1 + 24;
  v5 = a1 + 16;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           (int)&unk_2A2CDB,
           5,
           (int)&unk_2A2CE0,
           2u,
           (int)&v3,
           (int)&off_2CF10C,
           (int)&unk_2A2CE2,
           2u,
           (int)&v4,
           (int)&off_2CF10C,
           (int)&unk_2A2CE4,
           2u,
           (int)&v5,
           (int)&off_2CF10C,
           (int)&unk_2A2CE6,
           2u,
           (int)&v6,
           (int)&off_2CF10C);
}
