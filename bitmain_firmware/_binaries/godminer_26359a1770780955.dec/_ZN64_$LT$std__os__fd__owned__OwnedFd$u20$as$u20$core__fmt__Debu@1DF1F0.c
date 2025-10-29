int __fastcall <std::os::fd::owned::OwnedFd as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // r0
  _BYTE v5[8]; // [sp+8h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct(v5, a2, aOwnedfd, 7);
  v3 = core::fmt::builders::DebugStruct::field(v5, aFd, 2, a1, &off_2DEA5C);
  return core::fmt::builders::DebugStruct::finish(v3);
}
