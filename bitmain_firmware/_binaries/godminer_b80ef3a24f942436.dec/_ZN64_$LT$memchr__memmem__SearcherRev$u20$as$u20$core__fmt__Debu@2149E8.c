int __fastcall <memchr::memmem::SearcherRev as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v4 = a1;
  v3 = a1 + 8;
  v5 = a1 + 16;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_2B58AE,
           11,
           (int)&unk_2B5863,
           6u,
           (int)&v3,
           (int)&off_2ECA48,
           (int)&unk_2B5886,
           5u,
           (int)&v4,
           (int)&off_2ECA98,
           (int)aKind_1,
           4u,
           (int)&v5,
           (int)&off_2ECAC8);
}
