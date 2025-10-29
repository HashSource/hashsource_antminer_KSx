bool __fastcall object::read::coff::symbol::<impl object::pe::ImageSymbol>::has_aux_section(int a1)
{
  int v1; // r2
  _BOOL4 result; // r0

  v1 = *(unsigned __int8 *)(a1 + 17);
  result = 0;
  if ( v1 )
  {
    if ( *(_BYTE *)(a1 + 16) == 3 )
      return *(_DWORD *)(a1 + 8) == 0;
  }
  return result;
}
