int __fastcall <std::io::error::SimpleMessage as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v4 = a1;
  v3 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aSimplemessage,
           13,
           (int)aKind,
           4u,
           (int)&v3,
           (int)&off_2EA600,
           (int)aMessage,
           7u,
           (int)&v4,
           (int)&off_2E95B8);
}
