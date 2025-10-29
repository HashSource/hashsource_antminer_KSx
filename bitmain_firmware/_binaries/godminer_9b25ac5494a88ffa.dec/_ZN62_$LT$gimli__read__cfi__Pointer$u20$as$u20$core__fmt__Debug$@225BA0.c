int __fastcall <gimli::read::cfi::Pointer as core::fmt::Debug>::fmt(_QWORD *a1, int a2)
{
  _QWORD *v3; // [sp+8h] [bp-8h] BYREF
  _QWORD *v4; // [sp+Ch] [bp-4h] BYREF

  if ( *a1 )
  {
    v4 = a1 + 1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, aIndirect, 8, &v4, &off_2E0EEC);
  }
  else
  {
    v3 = a1 + 1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, aDirect, 6, &v3, &off_2E0EEC);
  }
}
