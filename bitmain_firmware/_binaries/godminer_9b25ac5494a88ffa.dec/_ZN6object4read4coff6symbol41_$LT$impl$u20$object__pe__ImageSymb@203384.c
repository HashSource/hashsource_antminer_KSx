bool __fastcall object::read::coff::symbol::<impl object::pe::ImageSymbol>::has_aux_function(int a1)
{
  return *(_BYTE *)(a1 + 17) != 0 && (*(_WORD *)(a1 + 14) & 0x30) == 32;
}
