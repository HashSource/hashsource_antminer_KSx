int __fastcall <std::io::readbuf::BorrowedBuf as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  _BYTE v7[8]; // [sp+4h] [bp-Ch] BYREF
  int v8; // [sp+Ch] [bp-4h] BYREF

  core::fmt::Formatter::debug_struct(v7, a2, aBorrowedbuf, 11);
  v3 = core::fmt::builders::DebugStruct::field(v7, aInit, 4, a1 + 12, &off_2DF748);
  v4 = core::fmt::builders::DebugStruct::field(v3, aFilled, 6, a1 + 8, &off_2DF748);
  v8 = *(_DWORD *)(a1 + 4);
  v5 = core::fmt::builders::DebugStruct::field(v4, aCapacity_0, 8, &v8, &off_2DF748);
  return core::fmt::builders::DebugStruct::finish(v5);
}
