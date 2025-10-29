int __fastcall object::read::pe::data_directory::DataDirectories::iter(_DWORD *a1)
{
  return *a1 + 8 * a1[1];
}
