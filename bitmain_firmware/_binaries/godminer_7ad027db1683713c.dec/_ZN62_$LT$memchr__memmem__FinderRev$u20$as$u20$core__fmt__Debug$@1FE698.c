int __fastcall <memchr::memmem::FinderRev as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a1;
  return core::fmt::Formatter::debug_struct_field1_finish(
           a2,
           (int)aFinderrev,
           9,
           (int)&aPrestatesearch[8],
           8u,
           (int)&v3,
           (int)&off_2CCA28);
}
