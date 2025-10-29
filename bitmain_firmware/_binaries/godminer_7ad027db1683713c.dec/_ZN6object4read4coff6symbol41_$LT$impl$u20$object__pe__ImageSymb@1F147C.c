bool __fastcall object::read::coff::symbol::<impl object::pe::ImageSymbol>::has_aux_file_name(int a1)
{
  return *(_BYTE *)(a1 + 17) != 0 && *(_BYTE *)(a1 + 16) == 103;
}
