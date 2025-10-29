bool __fastcall std::fs::FileType::is_symlink(_DWORD *a1)
{
  return (*a1 & 0xF000) == 40960;
}
