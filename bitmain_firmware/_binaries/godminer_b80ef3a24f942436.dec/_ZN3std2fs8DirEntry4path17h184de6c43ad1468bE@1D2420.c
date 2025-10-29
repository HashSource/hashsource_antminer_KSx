unsigned int __fastcall std::fs::DirEntry::path(unsigned int *a1, int a2)
{
  return std::path::Path::_join(
           a1,
           *(const void **)(*(_DWORD *)(a2 + 24) + 16),
           *(_DWORD *)(*(_DWORD *)(a2 + 24) + 20),
           *(_BYTE **)(a2 + 16),
           *(_DWORD *)(a2 + 20) - 1);
}
