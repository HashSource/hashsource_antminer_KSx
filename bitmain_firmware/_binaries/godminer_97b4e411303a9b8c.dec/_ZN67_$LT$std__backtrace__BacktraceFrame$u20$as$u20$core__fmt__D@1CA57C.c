int __fastcall <std::backtrace::BacktraceFrame as core::fmt::Debug>::fmt(int a1)
{
  int v2; // r0
  int v3; // r7
  int v4; // r4
  _BYTE v6[8]; // [sp+4h] [bp-Ch] BYREF
  int v7; // [sp+Ch] [bp-4h] BYREF

  core::fmt::Formatter::debug_list(v6);
  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 20);
    v4 = 44 * v2;
    do
    {
      v7 = v3;
      core::fmt::builders::DebugSet::entry(v6, &v7, &off_2DF180);
      v4 -= 44;
      v3 += 44;
    }
    while ( v4 );
  }
  return core::fmt::builders::DebugList::finish(v6);
}
