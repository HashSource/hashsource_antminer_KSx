bool __fastcall <object::read::pe::resource::ResourceDirectoryEntryData as core::fmt::Debug>::fmt(
        _DWORD *a1,
        _DWORD *a2)
{
  _DWORD *v3; // [sp+8h] [bp-8h] BYREF
  _DWORD *v4; // [sp+Ch] [bp-4h] BYREF

  if ( *a1 )
  {
    v3 = a1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aTable, 5, (int)&v3, (int)&off_2CB438);
  }
  else
  {
    v4 = a1 + 1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aData, 4, (int)&v4, (int)&off_2CB428);
  }
}
