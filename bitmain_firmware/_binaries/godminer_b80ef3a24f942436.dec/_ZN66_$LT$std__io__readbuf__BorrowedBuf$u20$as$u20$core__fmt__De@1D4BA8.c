int __fastcall <std::io::readbuf::BorrowedBuf as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  _BYTE *v3; // r0
  _BYTE *v4; // r0
  unsigned __int8 *v5; // r0
  _BYTE v7[8]; // [sp+4h] [bp-Ch] BYREF
  int v8; // [sp+Ch] [bp-4h] BYREF

  core::fmt::Formatter::debug_struct((int)v7, a2, (int)aBorrowedbuf, 11);
  v3 = core::fmt::builders::DebugStruct::field(v7, (int)aInit, 4u, a1 + 12, (int)&off_2E9748);
  v4 = core::fmt::builders::DebugStruct::field(v3, (int)aFilled, 6u, a1 + 8, (int)&off_2E9748);
  v8 = *(_DWORD *)(a1 + 4);
  v5 = core::fmt::builders::DebugStruct::field(v4, (int)aCapacity_0, 8u, (int)&v8, (int)&off_2E9748);
  return core::fmt::builders::DebugStruct::finish(v5);
}
