int __fastcall <core::char::EscapeUnicode as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1 + 4;
  v4 = a1 + 8;
  v5 = a1;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)aEscapeunicode,
           13,
           (int)&unk_2B9D63,
           1u,
           (int)&v3,
           (int)&off_2E6184,
           (int)&unk_2B9D64,
           5u,
           (int)&v4,
           (int)&off_2E6718,
           (int)&unk_2B9D69,
           0xDu,
           (int)&v5,
           (int)&off_2E6908);
}
