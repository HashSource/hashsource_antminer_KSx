int __fastcall object::read::pe::resource::<impl object::pe::ImageResourceDirectoryEntry>::is_table(int a1)
{
  return *(_DWORD *)(a1 + 4) >> 31;
}
