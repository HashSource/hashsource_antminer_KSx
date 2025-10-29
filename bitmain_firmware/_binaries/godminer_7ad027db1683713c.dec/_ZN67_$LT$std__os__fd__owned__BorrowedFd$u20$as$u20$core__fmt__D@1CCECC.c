int __fastcall <std::os::fd::owned::BorrowedFd as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  unsigned __int8 *v3; // r0
  _BYTE v5[8]; // [sp+8h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct((int)v5, a2, (int)aBorrowedfd, 10);
  v3 = core::fmt::builders::DebugStruct::field(v5, (int)aFd, 2u, a1, (int)&off_2C9A5C);
  return core::fmt::builders::DebugStruct::finish(v3);
}
