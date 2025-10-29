int __fastcall object::read::pe::export::ExportTable::ordinal_base(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 36) + 16);
}
