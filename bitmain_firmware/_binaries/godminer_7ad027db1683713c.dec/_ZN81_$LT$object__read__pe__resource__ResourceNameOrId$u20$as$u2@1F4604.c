bool __fastcall <object::read::pe::resource::ResourceNameOrId as core::fmt::Debug>::fmt(_WORD *a1, _DWORD *a2)
{
  _WORD *v3; // [sp+8h] [bp-8h] BYREF
  _WORD *v4; // [sp+Ch] [bp-4h] BYREF

  if ( *a1 )
  {
    v4 = a1 + 1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aId_1, 2, (int)&v4, (int)&off_2CB318);
  }
  else
  {
    v3 = a1 + 2;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aName_2, 4, (int)&v3, (int)&off_2CB448);
  }
}
