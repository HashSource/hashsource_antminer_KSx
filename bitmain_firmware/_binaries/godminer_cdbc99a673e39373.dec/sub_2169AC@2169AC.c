int __fastcall sub_2169AC(int *a1)
{
  int v1; // r7
  int v2; // r4
  _BYTE v4[8]; // [sp+4h] [bp-Ch] BYREF
  int v5; // [sp+Ch] [bp-4h] BYREF

  v1 = *a1;
  v2 = a1[1];
  core::fmt::Formatter::debug_list(v4);
  for ( ; v2; ++v1 )
  {
    v5 = v1;
    core::fmt::builders::DebugSet::entry(v4, &v5, &off_2CE944);
    --v2;
  }
  return core::fmt::builders::DebugList::finish(v4);
}
