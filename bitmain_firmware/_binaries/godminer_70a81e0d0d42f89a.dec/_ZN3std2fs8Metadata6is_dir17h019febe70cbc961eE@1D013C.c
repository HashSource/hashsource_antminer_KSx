bool __fastcall std::fs::Metadata::is_dir(int a1)
{
  return (*(_DWORD *)(a1 + 96) & 0xF000) == 0x4000;
}
