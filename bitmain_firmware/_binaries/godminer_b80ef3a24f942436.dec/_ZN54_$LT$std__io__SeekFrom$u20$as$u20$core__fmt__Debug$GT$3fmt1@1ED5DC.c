bool __fastcall <std::io::SeekFrom as core::fmt::Debug>::fmt(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v4; // [sp+8h] [bp-8h] BYREF
  _DWORD *v5; // [sp+Ch] [bp-4h] BYREF

  if ( *a1 )
  {
    if ( *a1 == 1 )
    {
      v4 = a1 + 2;
      return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aEnd_1, 3, (int)&v4, (int)&off_2EA630);
    }
    else
    {
      v5 = a1 + 2;
      return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aCurrent, 7, (int)&v5, (int)&off_2EA630);
    }
  }
  else
  {
    v3 = a1 + 2;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aStart, 5, (int)&v3, (int)&off_2E9378);
  }
}
