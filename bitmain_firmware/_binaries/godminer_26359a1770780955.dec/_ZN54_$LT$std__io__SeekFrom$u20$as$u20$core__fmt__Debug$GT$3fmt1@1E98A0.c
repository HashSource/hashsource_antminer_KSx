int __fastcall <std::io::SeekFrom as core::fmt::Debug>::fmt(_DWORD *a1, int a2)
{
  _DWORD *v3; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v4; // [sp+8h] [bp-8h] BYREF
  _DWORD *v5; // [sp+Ch] [bp-4h] BYREF

  if ( *a1 )
  {
    if ( *a1 == 1 )
    {
      v4 = a1 + 2;
      return core::fmt::Formatter::debug_tuple_field1_finish(a2, aEnd_1, 3, &v4, &off_2DF630);
    }
    else
    {
      v5 = a1 + 2;
      return core::fmt::Formatter::debug_tuple_field1_finish(a2, aCurrent, 7, &v5, &off_2DF630);
    }
  }
  else
  {
    v3 = a1 + 2;
    return core::fmt::Formatter::debug_tuple_field1_finish(a2, aStart, 5, &v3, &off_2DE378);
  }
}
