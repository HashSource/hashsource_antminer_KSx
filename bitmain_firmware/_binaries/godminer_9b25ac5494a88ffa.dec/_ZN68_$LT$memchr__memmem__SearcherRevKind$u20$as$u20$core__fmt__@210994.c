int __fastcall <memchr::memmem::SearcherRevKind as core::fmt::Debug>::fmt(int a1, int a2)
{
  unsigned int v3; // r1
  bool v4; // cf
  int v5; // r1
  int v7; // [sp+8h] [bp-8h] BYREF
  int v8; // [sp+Ch] [bp-4h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v4 = v3 >= 2;
  v5 = v3 - 2;
  if ( !v4 )
    v5 = 2;
  if ( !v5 )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, aEmpty, 5);
  if ( v5 == 1 )
  {
    v7 = a1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, aOnebyte, 7, &v7, &off_2E06E8);
  }
  else
  {
    v8 = a1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, aTwoway, 6, &v8, &off_2E0AD8);
  }
}
