int __fastcall <std::sys::unix::process::process_common::CommandArgs as core::fmt::Debug>::fmt(int *a1)
{
  int v2; // r7
  int i; // r4
  _BYTE v5[8]; // [sp+4h] [bp-Ch] BYREF
  int v6; // [sp+Ch] [bp-4h] BYREF

  core::fmt::Formatter::debug_list(v5);
  v2 = *a1;
  for ( i = a1[1]; i != v2; i += 8 )
  {
    v6 = i;
    core::fmt::builders::DebugSet::entry(v5, &v6, &off_2DF190);
  }
  return core::fmt::builders::DebugList::finish(v5);
}
