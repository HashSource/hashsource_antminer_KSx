int __fastcall <object::read::RelocationTarget as core::fmt::Debug>::fmt(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // [sp+8h] [bp-8h] BYREF
  _DWORD *v4; // [sp+Ch] [bp-4h] BYREF

  if ( *a1 )
  {
    if ( *a1 == 1 )
    {
      v4 = a1 + 1;
      return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aSection, 7, (int)&v4, (int)&off_2CB478);
    }
    else
    {
      return <core::fmt::Formatter as core::fmt::Write>::write_str(a2);
    }
  }
  else
  {
    v3 = a1 + 1;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aSymbol_0, 6, (int)&v3, (int)&off_2CB4C8);
  }
}
