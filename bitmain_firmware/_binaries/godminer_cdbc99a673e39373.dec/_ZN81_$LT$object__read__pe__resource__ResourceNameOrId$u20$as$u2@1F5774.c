int __fastcall <object::read::pe::resource::ResourceNameOrId as core::fmt::Debug>::fmt(_WORD *a1, int a2)
{
  _WORD *v3; // [sp+8h] [bp-8h] BYREF
  _WORD *v4; // [sp+Ch] [bp-4h] BYREF

  if ( *a1 )
  {
    v4 = a1 + 1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, aId_1, 2, &v4, &off_2CC318);
  }
  else
  {
    v3 = a1 + 2;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, aName_2, 4, &v3, &off_2CC448);
  }
}
