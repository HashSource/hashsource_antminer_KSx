bool __fastcall object::read::pe::section::<impl object::pe::ImageSectionHeader>::contains_rva(int a1, unsigned int a2)
{
  return a2 >= *(_DWORD *)(a1 + 12) && a2 - *(_DWORD *)(a1 + 12) < *(_DWORD *)(a1 + 8);
}
