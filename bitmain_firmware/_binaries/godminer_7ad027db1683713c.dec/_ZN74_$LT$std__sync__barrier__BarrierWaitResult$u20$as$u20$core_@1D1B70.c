int __fastcall <std::sync::barrier::BarrierWaitResult as core::fmt::Debug>::fmt(char *a1, _DWORD *a2)
{
  unsigned __int8 *v3; // r0
  _BYTE v5[11]; // [sp+4h] [bp-Ch] BYREF
  char v6; // [sp+Fh] [bp-1h] BYREF

  core::fmt::Formatter::debug_struct((int)v5, a2, (int)aBarrierwaitres, 17);
  v6 = *a1;
  v3 = core::fmt::builders::DebugStruct::field(v5, (int)aIsLeader, 9u, (int)&v6, (int)&off_2C9758);
  return core::fmt::builders::DebugStruct::finish(v3);
}
