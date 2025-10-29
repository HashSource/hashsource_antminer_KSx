int __fastcall std::fs::DirEntry::path(int a1, int *a2)
{
  return std::path::Path::_join(a1, *(_DWORD *)(a2[6] + 16), *(_DWORD *)(a2[6] + 20), a2[4], a2[5] - 1);
}
