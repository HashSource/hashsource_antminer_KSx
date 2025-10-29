// Alternative name is '_ZN56_$LT$std..io..IoSliceMut$u20$as$u20$core..fmt..Debug$GT$3fmt17h29822813be94df7aE'
int __fastcall <std::io::IoSlice as core::fmt::Debug>::fmt(int *a1, _DWORD *a2)
{
  int v2; // r7
  int v3; // r4
  _BYTE v5[8]; // [sp+4h] [bp-Ch] BYREF
  int v6; // [sp+Ch] [bp-4h] BYREF

  v2 = *a1;
  v3 = a1[1];
  core::fmt::Formatter::debug_list((int)v5, a2);
  for ( ; v3; ++v2 )
  {
    v6 = v2;
    core::fmt::builders::DebugSet::entry(v5, &v6, &off_2E9130);
    --v3;
  }
  return core::fmt::builders::DebugList::finish(v5);
}
