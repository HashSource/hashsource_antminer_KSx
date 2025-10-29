int __fastcall <std::sys::unix::args::Args as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v2; // r7
  int v3; // r4
  unsigned int v4; // r4
  _BYTE v6[8]; // [sp+4h] [bp-Ch] BYREF
  int v7; // [sp+Ch] [bp-4h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  core::fmt::Formatter::debug_list((int)v6, a2);
  if ( v3 != v2 )
  {
    v4 = 12 * ((v3 - v2) / 0xCu);
    do
    {
      v7 = v2;
      core::fmt::builders::DebugSet::entry(v6, &v7, &off_2E9110);
      v4 -= 12;
      v2 += 12;
    }
    while ( v4 );
  }
  return core::fmt::builders::DebugList::finish(v6);
}
