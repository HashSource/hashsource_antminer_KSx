bool __fastcall std::fs::Metadata::is_file(int a1)
{
  return (*(_DWORD *)(a1 + 96) & 0xF000) == 0x8000;
}
