int __fastcall <std::backtrace::BacktraceFrame as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // r0
  int v4; // r7
  int v5; // r4
  _BYTE v7[8]; // [sp+4h] [bp-Ch] BYREF
  int v8; // [sp+Ch] [bp-4h] BYREF

  core::fmt::Formatter::debug_list((int)v7, a2);
  v3 = *(_DWORD *)(a1 + 24);
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 20);
    v5 = 44 * v3;
    do
    {
      v8 = v4;
      core::fmt::builders::DebugSet::entry(v7, &v8, &off_2E9180);
      v5 -= 44;
      v4 += 44;
    }
    while ( v5 );
  }
  return core::fmt::builders::DebugList::finish(v7);
}
