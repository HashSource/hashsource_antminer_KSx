int __fastcall <gimli::read::line::ColumnType as core::fmt::Debug>::fmt(_QWORD *a1, int a2)
{
  _QWORD *v3; // [sp+4h] [bp-4h] BYREF

  if ( !*a1 )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, aLeftedge, 8);
  v3 = a1;
  return core::fmt::Formatter::debug_tuple_field1_finish(a2, aColumn, 6, &v3, &off_2E0EFC);
}
