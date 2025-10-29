int __fastcall <std::sync::barrier::BarrierWaitResult as core::fmt::Debug>::fmt(char *a1, int a2)
{
  int v3; // r0
  _BYTE v5[11]; // [sp+4h] [bp-Ch] BYREF
  char v6; // [sp+Fh] [bp-1h] BYREF

  core::fmt::Formatter::debug_struct(v5, a2, aBarrierwaitres, 17);
  v6 = *a1;
  v3 = core::fmt::builders::DebugStruct::field(v5, aIsLeader, 9, &v6, &off_2E0758);
  return core::fmt::builders::DebugStruct::finish(v3);
}
