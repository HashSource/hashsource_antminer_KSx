bool __fastcall object::read::coff::symbol::<impl object::pe::ImageSymbol>::is_definition(int a1)
{
  int v1; // r2
  _BOOL4 result; // r0
  int v4; // r2

  v1 = *(unsigned __int16 *)(a1 + 12);
  result = 0;
  if ( v1 )
  {
    v4 = *(unsigned __int8 *)(a1 + 16);
    if ( v4 == 2 )
      return 1;
    if ( v4 != 3 )
    {
      if ( v4 != 105 )
        return result;
      return 1;
    }
    return *(_DWORD *)(a1 + 8) != 0 || *(_BYTE *)(a1 + 17) == 0;
  }
  return result;
}
