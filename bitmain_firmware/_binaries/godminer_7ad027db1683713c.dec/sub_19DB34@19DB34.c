int __fastcall sub_19DB34(int a1, _DWORD *a2)
{
  unsigned __int8 v4[8]; // [sp+4h] [bp-Ch] BYREF
  int v5; // [sp+Ch] [bp-4h] BYREF

  core::fmt::Formatter::debug_list((int)v4, a2);
  v5 = a1;
  core::fmt::builders::DebugSet::entry(v4, (int)&v5, (int)&off_2C9130);
  v5 = a1 + 1;
  core::fmt::builders::DebugSet::entry(v4, (int)&v5, (int)&off_2C9130);
  v5 = a1 + 2;
  core::fmt::builders::DebugSet::entry(v4, (int)&v5, (int)&off_2C9130);
  v5 = a1 + 3;
  core::fmt::builders::DebugSet::entry(v4, (int)&v5, (int)&off_2C9130);
  v5 = a1 + 4;
  core::fmt::builders::DebugSet::entry(v4, (int)&v5, (int)&off_2C9130);
  v5 = a1 + 5;
  core::fmt::builders::DebugSet::entry(v4, (int)&v5, (int)&off_2C9130);
  v5 = a1 + 6;
  core::fmt::builders::DebugSet::entry(v4, (int)&v5, (int)&off_2C9130);
  v5 = a1 + 7;
  core::fmt::builders::DebugSet::entry(v4, (int)&v5, (int)&off_2C9130);
  return core::fmt::builders::DebugList::finish((int)v4);
}
