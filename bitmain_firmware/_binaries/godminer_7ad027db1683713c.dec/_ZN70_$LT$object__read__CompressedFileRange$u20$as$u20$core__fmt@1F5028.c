int __fastcall <object::read::CompressedFileRange as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+40h] [bp-10h] BYREF
  int v4; // [sp+44h] [bp-Ch] BYREF
  int v5; // [sp+48h] [bp-8h] BYREF
  int v6; // [sp+4Ch] [bp-4h] BYREF

  v3 = a1 + 24;
  v4 = a1;
  v6 = a1 + 16;
  v5 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           (int)&unk_2935B7,
           19,
           (int)&unk_2935CA,
           6u,
           (int)&v3,
           (int)&off_2CB548,
           (int)&unk_293308,
           6u,
           (int)&v4,
           (int)&off_2CB338,
           (int)&unk_2935D0,
           0xFu,
           (int)&v5,
           (int)&off_2CB338,
           (int)&unk_2935DF,
           0x11u,
           (int)&v6,
           (int)&off_2CB338);
}
