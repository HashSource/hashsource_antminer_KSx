bool __fastcall std::fs::Metadata::is_symlink(int a1)
{
  return (*(_DWORD *)(a1 + 96) & 0xF000) == 40960;
}
