int __fastcall <gimli::common::Encoding as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v4 = a1 + 1;
  v5 = a1 + 2;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_2B6338,
           8,
           (int)&unk_2B7377,
           0xCu,
           (int)&v3,
           (int)&off_2ECC44,
           (int)&unk_2B7383,
           6u,
           (int)&v4,
           (int)&off_2ECC54,
           (int)&unk_2B7389,
           7u,
           (int)&v5,
           (int)&off_2ECC64);
}
