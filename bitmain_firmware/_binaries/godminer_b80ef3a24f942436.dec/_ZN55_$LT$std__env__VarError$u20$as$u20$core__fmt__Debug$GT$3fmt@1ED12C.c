int __fastcall <std::env::VarError as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  if ( !*(_DWORD *)(a1 + 4) )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, aNotpresent, 10);
  v3 = a1;
  return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aNotunicode, 10, (int)&v3, (int)&off_2E9110);
}
