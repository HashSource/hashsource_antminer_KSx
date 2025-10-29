int __fastcall <memchr::memmem::FindRevIter as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  v5 = a1 + 48;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_2B5836,
           11,
           (int)aHaystack,
           8u,
           (int)&v3,
           (int)&off_2EC968,
           (int)&unk_2B5830,
           6u,
           (int)&v4,
           (int)&off_2EC9F8,
           (int)&unk_2B5807,
           3u,
           (int)&v5,
           (int)&off_2ECA08);
}
