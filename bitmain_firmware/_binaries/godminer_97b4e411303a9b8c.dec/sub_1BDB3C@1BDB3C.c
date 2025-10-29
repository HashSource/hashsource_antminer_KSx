int __fastcall sub_1BDB3C(_DWORD *a1, int a2)
{
  _DWORD *v3; // [sp+8h] [bp-8h] BYREF
  _DWORD *v4; // [sp+Ch] [bp-4h] BYREF

  if ( *a1 )
  {
    v4 = a1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, aErr, 3, &v4, &off_2DF608);
  }
  else
  {
    v3 = a1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, aOk, 2, &v3, &off_2DF618);
  }
}
