int __fastcall <object::read::pe::import::Import as core::fmt::Debug>::fmt(_WORD *a1, int a2)
{
  _WORD *v3; // [sp+Ch] [bp-Ch] BYREF
  _WORD *v4; // [sp+10h] [bp-8h] BYREF
  _WORD *v5; // [sp+14h] [bp-4h] BYREF

  if ( *a1 )
  {
    v4 = a1 + 1;
    v5 = a1 + 2;
    return core::fmt::Formatter::debug_tuple_field2_finish(
             a2,
             (int)aName_2,
             4,
             (int)&v4,
             (int)&off_2CC318,
             (int)&v5,
             (int)&off_2CC130);
  }
  else
  {
    v3 = a1 + 1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, aOrdinal_0, 7, &v3, &off_2CC318);
  }
}
