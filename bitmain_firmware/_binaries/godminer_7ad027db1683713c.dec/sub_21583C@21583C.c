int __fastcall sub_21583C(int *a1, _DWORD *a2)
{
  int v2; // r7
  int v3; // r4
  unsigned __int8 v5[8]; // [sp+4h] [bp-Ch] BYREF
  int v6; // [sp+Ch] [bp-4h] BYREF

  v2 = *a1;
  v3 = a1[1];
  core::fmt::Formatter::debug_list((int)v5, a2);
  for ( ; v3; ++v2 )
  {
    v6 = v2;
    core::fmt::builders::DebugSet::entry(v5, (int)&v6, (int)&off_2CD944);
    --v3;
  }
  return core::fmt::builders::DebugList::finish((int)v5);
}
