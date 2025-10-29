int __fastcall <std::thread::local::AccessError as core::fmt::Debug>::fmt(int a1, int a2)
{
  _BYTE v3[8]; // [sp+0h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct(v3, a2, aAccesserror, 11);
  return core::fmt::builders::DebugStruct::finish(v3);
}
