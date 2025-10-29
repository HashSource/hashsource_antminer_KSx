int __fastcall <std::sync::mpmc::context::Inner as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+3Ch] [bp-10h] BYREF
  int v4; // [sp+40h] [bp-Ch] BYREF
  int v5; // [sp+44h] [bp-8h] BYREF
  int v6; // [sp+48h] [bp-4h] BYREF

  v4 = a1 + 4;
  v3 = a1;
  v5 = a1 + 12;
  v6 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           (int)aInner_0,
           5,
           (int)&unk_291869,
           6u,
           (int)&v3,
           (int)&off_2CA750,
           (int)&unk_29186F,
           6u,
           (int)&v4,
           (int)&off_2CA760,
           (int)&unk_291875,
           6u,
           (int)&v5,
           (int)&off_2CA770,
           (int)&unk_29187B,
           9u,
           (int)&v6,
           (int)&off_2C93A8);
}
