bool __fastcall std::fs::FileType::is_file(_DWORD *a1)
{
  return (*a1 & 0xF000) == 0x8000;
}
