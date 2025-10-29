bool __fastcall <std::fs::FileType as std::os::unix::fs::FileTypeExt>::is_fifo(_DWORD *a1)
{
  return (*a1 & 0xF000) == 4096;
}
