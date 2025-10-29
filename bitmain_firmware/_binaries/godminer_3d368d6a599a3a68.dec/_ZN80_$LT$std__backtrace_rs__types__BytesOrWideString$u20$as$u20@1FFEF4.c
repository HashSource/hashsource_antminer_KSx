int __fastcall <std::backtrace_rs::types::BytesOrWideString as core::fmt::Debug>::fmt(_DWORD *a1, int a2)
{
  _DWORD *v3; // [sp+8h] [bp-8h] BYREF
  _DWORD *v4; // [sp+Ch] [bp-4h] BYREF

  if ( *a1 )
  {
    v4 = a1 + 1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, aWide, 4, &v4, &off_2DFEE4);
  }
  else
  {
    v3 = a1 + 1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, "Bytes__pthread_get_minstack", 5, &v3, &off_2DF670);
  }
}
