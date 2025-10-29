int __fastcall <object::read::pe::resource::ResourceDirectoryEntryData as core::fmt::Debug>::fmt(_DWORD *a1, int a2)
{
  _DWORD *v3; // [sp+8h] [bp-8h] BYREF
  _DWORD *v4; // [sp+Ch] [bp-4h] BYREF

  if ( *a1 )
  {
    v3 = a1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, aTable, 5, &v3, &off_2E1438);
  }
  else
  {
    v4 = a1 + 1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, aData, 4, &v4, &off_2E1428);
  }
}
