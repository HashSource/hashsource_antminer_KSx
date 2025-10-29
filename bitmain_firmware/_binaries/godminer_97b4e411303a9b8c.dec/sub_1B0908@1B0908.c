int __fastcall sub_1B0908(int a1)
{
  _BYTE v3[8]; // [sp+4h] [bp-Ch] BYREF
  int v4; // [sp+Ch] [bp-4h] BYREF

  core::fmt::Formatter::debug_list(v3);
  v4 = a1;
  core::fmt::builders::DebugSet::entry(v3, &v4, &off_2DF130);
  v4 = a1 + 1;
  core::fmt::builders::DebugSet::entry(v3, &v4, &off_2DF130);
  v4 = a1 + 2;
  core::fmt::builders::DebugSet::entry(v3, &v4, &off_2DF130);
  v4 = a1 + 3;
  core::fmt::builders::DebugSet::entry(v3, &v4, &off_2DF130);
  v4 = a1 + 4;
  core::fmt::builders::DebugSet::entry(v3, &v4, &off_2DF130);
  v4 = a1 + 5;
  core::fmt::builders::DebugSet::entry(v3, &v4, &off_2DF130);
  v4 = a1 + 6;
  core::fmt::builders::DebugSet::entry(v3, &v4, &off_2DF130);
  v4 = a1 + 7;
  core::fmt::builders::DebugSet::entry(v3, &v4, &off_2DF130);
  return core::fmt::builders::DebugList::finish(v3);
}
