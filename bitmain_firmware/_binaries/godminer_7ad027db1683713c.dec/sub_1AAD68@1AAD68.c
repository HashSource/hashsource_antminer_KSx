bool __fastcall sub_1AAD68(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // [sp+8h] [bp-8h] BYREF
  _DWORD *v4; // [sp+Ch] [bp-4h] BYREF

  if ( *a1 )
  {
    v4 = a1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aErr, 3, (int)&v4, (int)&off_2C9608);
  }
  else
  {
    v3 = a1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aOk, 2, (int)&v3, (int)&off_2C9618);
  }
}
