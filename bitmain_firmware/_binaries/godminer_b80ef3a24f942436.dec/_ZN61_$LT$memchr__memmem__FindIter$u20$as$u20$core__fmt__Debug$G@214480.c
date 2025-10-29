int __fastcall <memchr::memmem::FindIter as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+3Ch] [bp-10h] BYREF
  int v4; // [sp+40h] [bp-Ch] BYREF
  int v5; // [sp+44h] [bp-8h] BYREF
  int v6; // [sp+48h] [bp-4h] BYREF

  v3 = a1 + 56;
  v5 = a1;
  v4 = a1 + 48;
  v6 = a1 + 64;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           (int)aFinditer,
           8,
           (int)aHaystack,
           8u,
           (int)&v3,
           (int)&off_2EC968,
           (int)aPrestatesearch,
           8u,
           (int)&v4,
           (int)&off_2EC9D8,
           (int)&unk_2B5830,
           6u,
           (int)&v5,
           (int)&off_2EC9E8,
           (int)&unk_2B5807,
           3u,
           (int)&v6,
           (int)&off_2EC6F8);
}
