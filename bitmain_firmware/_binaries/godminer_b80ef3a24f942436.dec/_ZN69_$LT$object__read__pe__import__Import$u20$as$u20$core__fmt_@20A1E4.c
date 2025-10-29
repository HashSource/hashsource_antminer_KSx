bool __fastcall <object::read::pe::import::Import as core::fmt::Debug>::fmt(_WORD *a1, _DWORD *a2)
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
             (int)&off_2EB318,
             (int)&v5,
             (int)&off_2EB130);
  }
  else
  {
    v3 = a1 + 1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aOrdinal_0, 7, (int)&v3, (int)&off_2EB318);
  }
}
