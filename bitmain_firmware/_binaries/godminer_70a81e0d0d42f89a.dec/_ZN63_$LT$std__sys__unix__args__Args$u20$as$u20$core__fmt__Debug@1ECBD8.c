int __fastcall <std::sys::unix::args::Args as core::fmt::Debug>::fmt(int a1)
{
  int v1; // r7
  int v2; // r4
  unsigned int v3; // r4
  _BYTE v5[8]; // [sp+4h] [bp-Ch] BYREF
  int v6; // [sp+Ch] [bp-4h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(a1 + 8);
  core::fmt::Formatter::debug_list(v5);
  if ( v2 != v1 )
  {
    v3 = 12 * ((v2 - v1) / 0xCu);
    do
    {
      v6 = v1;
      core::fmt::builders::DebugSet::entry(v5, &v6, &off_2E0110);
      v3 -= 12;
      v1 += 12;
    }
    while ( v3 );
  }
  return core::fmt::builders::DebugList::finish(v5);
}
