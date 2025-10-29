bool __fastcall object::read::pe::export::ExportTable::is_forward(int a1, int a2)
{
  return (unsigned int)(a2 - *(_DWORD *)(a1 + 32)) < *(_DWORD *)(a1 + 4);
}
