bool __fastcall <gimli::read::cfi::Pointer as core::fmt::Debug>::fmt(_QWORD *a1, _DWORD *a2)
{
  _QWORD *v3; // [sp+8h] [bp-8h] BYREF
  _QWORD *v4; // [sp+Ch] [bp-4h] BYREF

  if ( *a1 )
  {
    v4 = a1 + 1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aIndirect, 8, (int)&v4, (int)&off_2CCEEC);
  }
  else
  {
    v3 = a1 + 1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aDirect, 6, (int)&v3, (int)&off_2CCEEC);
  }
}
