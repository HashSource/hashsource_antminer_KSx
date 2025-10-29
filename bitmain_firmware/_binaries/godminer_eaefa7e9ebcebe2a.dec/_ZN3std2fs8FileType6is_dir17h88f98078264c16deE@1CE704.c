bool __fastcall std::fs::FileType::is_dir(_DWORD *a1)
{
  return (*a1 & 0xF000) == 0x4000;
}
