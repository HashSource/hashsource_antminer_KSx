int __fastcall object::read::pe::resource::<impl object::pe::ImageResourceDirectoryEntry>::data_offset(int a1)
{
  return *(_DWORD *)(a1 + 4) & 0x7FFFFFFF;
}
