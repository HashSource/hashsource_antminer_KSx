int __fastcall <std::sys::unix::process::process_common::CommandArgs as core::fmt::Debug>::fmt(int *a1, _DWORD *a2)
{
  int v3; // r7
  int i; // r4
  unsigned __int8 v6[8]; // [sp+4h] [bp-Ch] BYREF
  int v7; // [sp+Ch] [bp-4h] BYREF

  core::fmt::Formatter::debug_list((int)v6, a2);
  v3 = *a1;
  for ( i = a1[1]; i != v3; i += 8 )
  {
    v7 = i;
    core::fmt::builders::DebugSet::entry(v6, (int)&v7, (int)&off_2C9190);
  }
  return core::fmt::builders::DebugList::finish((int)v6);
}
