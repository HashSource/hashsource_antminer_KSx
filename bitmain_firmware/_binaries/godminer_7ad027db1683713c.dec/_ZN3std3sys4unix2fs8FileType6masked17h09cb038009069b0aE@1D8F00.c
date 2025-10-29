int __fastcall std::sys::unix::fs::FileType::masked(_DWORD *a1)
{
  return *a1 & 0xF000;
}
