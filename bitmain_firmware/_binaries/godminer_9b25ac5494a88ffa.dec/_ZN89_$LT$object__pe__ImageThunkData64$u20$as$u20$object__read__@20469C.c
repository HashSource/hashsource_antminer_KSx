int __fastcall <object::pe::ImageThunkData64 as object::read::pe::import::ImageThunkData>::is_ordinal(int a1)
{
  return *(_DWORD *)(a1 + 4) >> 31;
}
