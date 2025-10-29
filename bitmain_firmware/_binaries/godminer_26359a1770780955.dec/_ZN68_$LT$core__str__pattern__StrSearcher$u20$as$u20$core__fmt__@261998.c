int __fastcall <core::str::pattern::StrSearcher as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1 + 48;
  v5 = a1;
  v4 = a1 + 56;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_2B7A42,
           11,
           (int)aHaystack,
           8u,
           (int)&v3,
           (int)&off_2E48F8,
           (int)&unk_2B79F0,
           6u,
           (int)&v4,
           (int)&off_2E48F8,
           (int)&aPrestatesearch[8],
           8u,
           (int)&v5,
           (int)&off_2E4B60);
}
